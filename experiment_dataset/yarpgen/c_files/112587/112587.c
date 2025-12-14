/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 7044));
                arr_6 [i_0 + 3] = max(-125, 1735733244858368633);
            }
        }
    }
    var_15 = (min(var_15, ((((((2915274691458811688 ? 2915274691458811688 : ((var_7 ? var_10 : 1))))) ? var_4 : var_5)))));
    var_16 ^= ((var_5 ? 15531469382250739926 : 19740));
    var_17 = (15531469382250739933 ? ((var_8 ? var_3 : 3115887659297690414)) : var_7);
    #pragma endscop
}
