/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = var_0;
                    arr_10 [0] [i_0] [i_1] [2] = ((((((arr_6 [i_0] [i_0] [19] [i_0]) ? (arr_2 [i_0] [i_2] [i_0]) : var_4))) | ((1572864 | (arr_6 [i_0] [i_0] [i_1] [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_0] = ((((((arr_5 [i_0] [i_0]) ? var_14 : var_11))) ? ((18 ? -124 : var_15)) : (arr_11 [i_0] [i_0] [i_2] [i_3])));
                        var_17 = (arr_4 [i_1] [i_3]);
                        var_18 = (((arr_11 [i_3] [i_2] [i_0] [i_0]) >= var_15));
                        var_19 = (((arr_7 [i_3] [15] [i_0]) ? (arr_5 [i_1] [i_2]) : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_20 = (min(var_20, ((((arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 2]) ? (arr_8 [i_4 + 1] [i_4 + 2]) : (arr_8 [i_4 - 1] [i_1]))))));
                        var_21 = ((var_6 << (arr_13 [i_4 + 3] [i_4] [i_4 + 1] [i_4 + 3])));
                        var_22 = var_9;
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_5] = var_6;
                    arr_21 [i_0] [i_1] [i_1] = (((arr_19 [i_0] [i_1] [i_5]) && var_8));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_23 *= var_6;
                        var_24 = (min(var_24, ((((arr_12 [i_0] [i_6 + 1] [4] [i_7] [13] [i_1]) >= var_4)))));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((24 ? 24 : -97));
                        var_26 = 29907;
                        var_27 -= ((-114 ? (arr_12 [8] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 2]) : 33546240));
                        arr_28 [12] [i_1] [i_6] [i_8] [i_6] [i_6] = ((var_15 ? (arr_6 [i_0] [i_0] [i_6 - 1] [i_6 - 1]) : (arr_6 [14] [i_6] [i_6 - 1] [i_6 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_28 -= (arr_16 [i_0] [i_1] [i_6] [i_1] [i_6]);
                        var_29 = (arr_11 [i_6 + 1] [i_6 + 2] [i_9] [i_9]);
                    }

                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_30 = (min(var_30, (arr_18 [i_10 - 2] [i_10 + 1] [i_10 + 1])));
                            arr_37 [i_1] [i_1] [i_1] [i_10] [i_1] = var_8;
                            arr_38 [i_1] = ((57 >> (var_14 + 6812)));
                        }
                        var_31 = var_4;
                    }
                    var_32 -= (((arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_6 + 2]) ? var_12 : var_14));
                }
                var_33 = var_10;
                arr_39 [i_1] [i_1] = ((25704 ? (((-125 + 2147483647) << (30 - 30))) : (~-259267684)));
                var_34 = (arr_33 [i_0] [i_0]);
            }
        }
    }
    var_35 = -1241186496;
    var_36 = var_2;
    var_37 = var_0;
    #pragma endscop
}
