/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((19453 ? -16 : -16));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_13 ? (min(((var_7 ? var_9 : var_9)), (!63))) : ((-1 ? ((var_17 ? 64 : 3846)) : 193))));
        var_20 ^= ((25949 ? 65535 : -3843));
        var_21 *= ((~((7 ? var_3 : 32767))));
        arr_4 [i_0] = 207;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            {
                var_22 = (((~var_12) ? (~var_8) : (~var_14)));
                var_23 = (max(var_23, (((~(((((var_11 ? var_11 : var_1))) ? (~-15322) : ((113 ? var_2 : -3843)))))))));
                var_24 = ((((((((-15350 ? 177 : -1024))) ? 52 : ((var_1 ? -3843 : var_2))))) ? (((var_2 ? 29013 : var_0))) : 1));
                arr_11 [i_2] [i_2] [i_2] = (((((((max(-3847, var_17))) ? ((var_5 ? var_14 : var_11)) : 540))) ? var_6 : 22));
            }
        }
    }
    #pragma endscop
}
