/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? -var_7 : (max(2824616695, 26932))))) ? ((max((max(var_3, var_5)), var_2))) : (((max(1, var_6)) ? ((max(56596, var_4))) : (~64317)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_16 = ((!(((253952 | (((arr_1 [i_0]) ? 4088 : 206158430208)))))));
                    var_17 *= (4088 != 1);
                    arr_7 [14] [i_1] [i_2] [i_1] &= arr_4 [16];
                    var_18 = (max(var_18, ((((((-var_3 < ((((arr_2 [i_1]) != 0)))))) - ((((max((arr_5 [i_1] [1]), 45140))) ^ 879914429)))))));
                }
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_19 = var_3;
                                var_20 = (min(var_20, (((-1065665572 != (max(-3788022427, (~var_2))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_17 [i_0 + 2] [i_0] [6] [6] = (-5874575308210223138 ^ 43350);
                        arr_18 [i_0] [i_1] [12] [12] |= (arr_1 [1]);
                        var_21 = (-4458588437353088875 && 64317);
                        arr_19 [i_1] [i_1] [i_1] [i_6] [12] [i_0] = ((1 != (arr_1 [i_0])));
                        arr_20 [i_0 - 1] [i_1] [i_3] [i_0] [i_6] = ((((((arr_16 [i_0] [7] [i_0] [i_1] [i_3] [i_0]) ? 0 : -5959707976839764340))) ? (~-2083800152) : 165380558));
                    }
                    arr_21 [i_0] [i_0] [i_0] = arr_15 [i_0] [i_1] [i_0] [i_0 + 3];
                    arr_22 [i_0] = 31663;
                    arr_23 [6] [i_1] [i_0] = (~1204112693);
                }
                arr_24 [i_0] = ((((max((arr_10 [i_0 + 3] [i_0 + 3] [i_1] [i_0 + 2] [i_0 - 4] [i_0]), (arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0] [i_1] [i_1])))) - ((-1289109109 ? 1 : (arr_3 [i_0])))));
                var_22 = (max(var_22, (!56088)));
            }
        }
    }
    var_23 = ((((((max(745558087, 686340970))) ? var_11 : ((159845545 ? 985147842828894938 : 3515408676444013987))))) || 1);
    #pragma endscop
}
