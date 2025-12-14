/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134004
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
    var_15 = ((/* implicit */_Bool) 0U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) min((max((arr_3 [i_0 + 1] [i_1 - 4]), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) 4294967295U))));
                var_16 = ((/* implicit */long long int) arr_4 [i_0 + 1]);
                arr_7 [i_0 + 1] [i_0] = ((/* implicit */short) (((((((-(var_1))) + (9223372036854775807LL))) << ((((~(4U))) - (4294967291U))))) != (((/* implicit */long long int) var_14))));
            }
        } 
    } 
}
