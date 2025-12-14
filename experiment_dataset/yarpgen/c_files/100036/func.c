/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100036
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (max((var_16), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)25932)) : (((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_1])))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [9ULL])), (var_13)))) ? (((/* implicit */unsigned long long int) -482322667)) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_0 [i_1]))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8969247312087054803LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_1])))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) max((arr_0 [i_0]), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((unsigned short) ((unsigned short) ((var_17) ? (var_4) : (491520ULL)))));
}
