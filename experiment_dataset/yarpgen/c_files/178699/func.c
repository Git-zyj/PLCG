/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178699
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned int) -1956027236)))) <= ((-(var_3))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_8);
}
