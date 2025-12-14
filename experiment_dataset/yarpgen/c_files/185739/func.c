/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185739
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
                var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_4 [i_0] [i_0] [i_1 - 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : ((-(7310486466950675488ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) arr_0 [6LL])) : (arr_2 [2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) (~(arr_5 [i_1])))) : (arr_0 [i_1])))) : (arr_3 [2ULL])));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) (+(814890008)))) : ((+(var_11)))))));
    var_23 = var_17;
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))))));
}
