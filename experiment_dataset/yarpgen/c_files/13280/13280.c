/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((min((min(var_1, 1371255269160175994)), var_2)) & 1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_13 += (min(((((arr_4 [i_1 + 1]) > ((max((arr_1 [i_1]), (arr_6 [i_2] [i_1 - 1]))))))), (min(((var_5 ? (arr_2 [i_1 - 1]) : (arr_2 [i_2]))), 19192))));
                    var_14 = (min(var_14, 3403900667));
                    var_15 = -1;
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_16 = (arr_3 [i_0 - 3]);
                    var_17 &= 1928835634;
                    arr_12 [i_0] [i_1 - 1] [i_3] = ((26666 ? 28265 : 1371255269160175994));
                    var_18 = (max(((min((arr_7 [i_1 + 1] [i_1] [i_0 - 2]), (arr_7 [i_1 + 1] [i_1 + 1] [i_0 - 2])))), ((1804349986028038120 ? 54705 : (arr_7 [i_1 - 1] [i_1] [i_0 - 1])))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_19 = (((-(arr_1 [i_0 - 3]))));
                    var_20 = (((((-(arr_0 [i_0 + 1])))) ? (!1) : (arr_13 [i_0 + 2] [i_0 - 3] [i_1 - 1])));
                    var_21 *= (max((min(-1804349986028038113, ((max(192, -5))))), ((min(((65517 ? var_7 : var_3)), (min(36091, var_10)))))));
                    var_22 = -63;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_23 = (arr_5 [i_1 - 1] [3]);
                        arr_18 [i_0] [4] [5] [i_5] [i_4] [i_0 + 2] = -30911;
                        arr_19 [i_0] [i_0] [i_4] [i_0] [i_1] [i_5] = -36;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_24 = (arr_7 [i_0] [i_0 - 3] [i_6]);
                        var_25 = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
                        arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6] = ((6676615348730515058 && (arr_0 [i_0 - 3])));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_26 = (min(var_26, ((((max(857346672712556886, (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) | (arr_13 [i_4] [i_1] [i_4]))))));
                        arr_26 [i_1] [i_1] [10] [i_7] [i_0 + 2] = ((((((-(arr_6 [i_0 + 2] [i_1]))))) ? 221 : var_10));
                        var_27 = (max(var_27, (((((((arr_23 [i_0 + 1] [i_1] [i_4] [i_0 + 1] [i_1]) && (arr_10 [i_0] [i_0] [i_1 + 1])))) < (!247))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_28 *= (var_2 && 29458);
                            var_29 = 1;
                            var_30 += (((arr_14 [i_0] [i_1 + 1] [i_4]) ? (arr_14 [i_0] [i_1 + 1] [i_4]) : (arr_14 [i_0 + 2] [i_1 + 1] [i_0])));
                        }
                        for (int i_9 = 4; i_9 < 14;i_9 += 1)
                        {
                            var_31 = (min(-60, var_6));
                            arr_33 [i_0 + 1] [i_1 - 1] [i_4] [i_7] [i_7] = ((((((((-5 ? 1 : (arr_20 [i_0] [i_1 - 1] [i_0] [i_7])))) ? (arr_2 [i_0 + 2]) : ((max(var_11, (arr_21 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))))) ? (!-84) : (~var_4)));
                            arr_34 [i_0] [i_1] [i_4] [i_7] [i_9 + 1] = ((var_10 ? 2773163556 : (((1 >> (((arr_24 [i_0] [i_9 - 4] [i_4] [i_0 + 1]) - 13263)))))));
                            arr_35 [i_9] [i_7] [i_7] [i_0] [i_0] [i_0] = (max(var_2, (max(1, (min(10865953280333221074, -245717009369790349))))));
                            var_32 = (((arr_17 [i_9 - 4] [i_7]) ? (((!(((arr_16 [i_0] [i_9] [i_4] [i_1] [i_9] [i_9 + 1]) < (arr_20 [i_0] [i_0] [12] [i_0])))))) : ((min(var_6, (arr_13 [i_0 - 3] [i_1] [0]))))));
                        }
                        var_33 = 1;
                    }
                }
                arr_36 [i_0] [i_0] [i_0 - 2] = ((((((arr_2 [i_0 - 3]) == (arr_2 [i_0 + 1])))) * ((-462 / (arr_2 [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
