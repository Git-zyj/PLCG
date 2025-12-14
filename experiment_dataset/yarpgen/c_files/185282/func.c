/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185282
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
    var_15 = ((/* implicit */_Bool) (~((~(max((((/* implicit */int) (short)23762)), (-84999584)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) var_10))))) >= (((/* implicit */int) arr_5 [i_1] [i_0]))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned long long int) var_6)))))));
            }
        } 
    } 
}
