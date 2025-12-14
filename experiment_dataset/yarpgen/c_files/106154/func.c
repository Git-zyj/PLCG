/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106154
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26441))) % ((+(var_5))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_17))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_1 [i_1]))));
                arr_6 [i_0] = ((/* implicit */signed char) 1312810083U);
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_5))));
}
