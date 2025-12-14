/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10161
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_2 [i_0]) >> (((arr_2 [i_0]) - (282308934)))))), (max((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_3))))));
                var_16 = ((/* implicit */unsigned int) arr_1 [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */long long int) var_14))));
    var_18 = ((/* implicit */int) var_1);
}
