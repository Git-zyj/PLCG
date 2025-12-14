/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2 + 1] [i_3 - 2] = (min(14461321438968458163, ((((((var_9 << (92 - 68)))) ? -460 : -108)))));
                        var_10 = (max(var_10, ((15 ? (-9223372036854775807 - 1) : 16210218152426121636))));
                        var_11 = (max(var_11, ((((!5) ? (((arr_5 [21] [i_2]) ? -2236525921283429979 : ((var_5 ? var_6 : 1)))) : (arr_3 [i_3] [i_0]))))));
                    }
                }
            }
        }
        var_12 ^= (min(16210218152426121636, -22));
    }
    var_13 = var_5;
    var_14 = var_0;
    #pragma endscop
}
