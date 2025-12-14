/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101394
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((var_13) + (2147483647))) >> ((((+(((/* implicit */int) var_16)))) - (183)))))) + (min(((+(var_7))), (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))));
    var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_13)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned char)247))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_1] [i_1 + 2])))) * (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 1])) ? (arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 - 1])))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_6 [i_0] [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_1 [4LL] [i_1 - 2])))))))) ? (((/* implicit */int) (!(arr_5 [i_1 + 2] [i_0])))) : (((/* implicit */int) ((short) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_2] [i_2])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2] [10ULL])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)36)))))))));
                    var_21 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_1] [i_1 + 2])) ? (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 1]) : (arr_3 [i_1] [i_1 - 1] [i_1 + 2]))));
                }
            } 
        } 
    } 
}
