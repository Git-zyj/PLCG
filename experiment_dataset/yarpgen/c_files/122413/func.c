/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122413
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
    var_20 = ((/* implicit */int) max(((-(max((var_5), (((/* implicit */long long int) -2147483647)))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (max((((/* implicit */unsigned int) var_6)), (var_18))))))));
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_7))) / (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)46838)) && (((/* implicit */_Bool) (unsigned short)46810)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0 + 3] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_6 [i_0 + 2] [i_1])) * (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1]))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) + (((arr_2 [i_0 + 3] [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3]))))));
                arr_9 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */int) ((var_18) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(unsigned short)7])) - (((/* implicit */int) arr_6 [i_0] [i_0]))))), (max((((/* implicit */unsigned int) var_0)), (var_17)))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (max((var_17), (arr_4 [16] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_16))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) != (((/* implicit */int) arr_1 [i_1]))))))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_0 + 3])) + (((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 3]))))) : (((unsigned int) var_9))));
            }
        } 
    } 
}
