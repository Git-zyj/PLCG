/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135641
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) -1LL);
                    arr_7 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((short) -1LL));
    var_18 = ((/* implicit */_Bool) var_16);
    var_19 = ((/* implicit */unsigned long long int) max((9LL), (-10LL)));
}
