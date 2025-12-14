/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min((((var_14 ? 65535 : 128)), var_4))));
    var_16 = min(var_6, ((-(min(255, var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_17 = 65527;
                arr_5 [i_0] |= (arr_4 [i_0] [i_1]);
                var_18 *= (min(((1 ? ((2053410965 ? -1744849707 : 1744849707)) : -4194304)), 1));
                var_19 = (max(var_19, ((min(-1023, var_13)))));
                arr_6 [i_0] = ((var_11 ? ((((((arr_4 [4] [4]) ? var_5 : var_6))) ? -1744849709 : (~1682063394))) : (min(1, 1744849730))));
            }
        }
    }
    #pragma endscop
}
