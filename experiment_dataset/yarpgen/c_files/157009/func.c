/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157009
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
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [12U] [12U] = var_12;
                var_17 = ((/* implicit */short) ((2432745301U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (short)10179);
    var_19 += ((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_6)) + (7682))))))));
}
