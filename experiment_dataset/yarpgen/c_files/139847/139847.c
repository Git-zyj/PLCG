/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = (-572674890956305687 ^ 572674890956305686);
                            var_17 = ((-((max(1, 28)))));

                            for (int i_4 = 4; i_4 < 21;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = var_1;
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = ((((max((arr_12 [i_4 + 1] [i_4] [i_4 - 1] [i_0 + 3]), (arr_12 [i_4 + 1] [i_0 + 1] [i_4 - 1] [i_0 + 1])))) ? (((arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_0 + 1]) ? 2301104313 : var_9)) : ((min((arr_12 [i_4 + 1] [i_4] [i_4 - 3] [i_0 - 1]), (arr_12 [i_4 + 2] [i_4] [i_4 - 2] [i_0 + 2]))))));
                                var_18 = 1;
                            }
                        }
                    }
                }
                var_19 = -var_6;

                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    var_20 = -25171;
                    var_21 = (min(var_7, (arr_19 [i_1] [i_1] [i_5] [i_1])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_22 = -17;

                    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_23 *= ((arr_19 [14] [14] [14] [14]) == (arr_19 [16] [i_1] [i_6] [i_1]));
                        var_24 = (arr_6 [i_1] [i_1]);
                        var_25 |= (((var_6 >> (var_4 - 10502909661504908038))));
                        var_26 = (((((-(arr_10 [i_0] [i_1] [i_0] [i_7 + 2])))) ? (arr_12 [i_0] [i_1] [i_0] [i_7]) : var_11));
                        var_27 -= (!var_12);
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] = (((arr_19 [i_1] [i_1] [i_6] [i_8 + 2]) ? (((-(arr_6 [i_1] [i_1])))) : var_14));
                        var_28 = arr_23 [i_1] [i_1];
                    }
                    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_29 = ((-(arr_31 [i_9] [i_9 + 2] [i_9] [i_0 - 2])));
                        var_30 = (((arr_12 [i_0] [i_1] [i_6] [i_9]) ^ (arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 1])));
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_10] = 572674890956305711;

                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            var_31 = (((arr_15 [i_1] [i_10 - 1] [i_11 + 1]) - var_6));
                            var_32 = 1;
                            var_33 -= (((arr_31 [i_0 - 1] [i_1] [i_11 + 1] [i_0 - 1]) == var_6));
                            var_34 = var_3;
                        }
                    }
                }
                /* vectorizable */
                for (int i_12 = 3; i_12 < 23;i_12 += 1)
                {
                    arr_39 [i_1] = var_0;
                    var_35 = var_10;
                }
            }
        }
    }
    var_36 = ((1993862983 ? (min(((var_1 ? var_9 : var_5)), var_11)) : ((-572674890956305711 ? 153 : -1404969382))));
    var_37 = (min(9550290053456027198, 2301104306));
    #pragma endscop
}
