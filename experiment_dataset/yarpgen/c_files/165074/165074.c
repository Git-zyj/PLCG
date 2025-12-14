/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (((max(2572911799316473615, 36028797002186752)) << (((arr_0 [11] [i_1]) + 3883412365756219164))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (arr_11 [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_3 + 1]);
                                var_15 = (~(arr_3 [i_0] [0] [2]));
                                var_16 = (3625912242059518084 ? 18043 : -18044);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (~3734238579);
    var_18 = max((((~((var_5 ? var_4 : var_12))))), ((~(max(var_10, -18014)))));
    var_19 = var_5;
    #pragma endscop
}
