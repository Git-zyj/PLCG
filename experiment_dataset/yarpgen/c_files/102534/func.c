/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102534
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */signed char) arr_5 [i_0] [i_2 + 1] [i_2]);
                    arr_8 [i_2] [(short)2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 1]))) >= (max((arr_6 [i_0] [i_2 + 1]), (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2] [(unsigned short)5]))))));
                    arr_9 [6] [i_1] [i_2] [i_2] |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((min((max((((/* implicit */unsigned int) var_2)), (var_5))), (((/* implicit */unsigned int) min((var_13), (var_13)))))), (((/* implicit */unsigned int) var_12)))))));
    var_16 -= ((/* implicit */int) var_3);
}
