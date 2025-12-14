/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, var_1));
    var_11 = (((((((25641 ? 1 : var_0)) + (((max(8230, 1))))))) ? 1 : (1 * -27108)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_1;

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_2] = 8230;
                    arr_8 [i_2] [i_1] [i_2] |= (~var_9);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_12 = (((((var_2 - var_0) ? (arr_5 [i_0] [i_0] [i_0] [i_1 + 1]) : ((min(39895, 1)))))) ? (min(var_3, ((65534 ? 39895 : 2074482630)))) : (max(-4, -1581453050)));
                    arr_12 [0] [i_0] = (var_5 + 127);
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [i_4] [i_0] = (max(((((var_1 ? 2784378083 : (arr_11 [i_0] [i_1] [i_0]))))), ((~(min(var_1, 18428729675200069632))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_13 -= (((((1 ? (((arr_0 [i_6]) * 3339454155)) : 52212))) ? ((max(2074482630, (arr_14 [i_0] [i_1 - 1] [i_5] [i_5])))) : (min(((max(var_4, 562))), ((var_8 / (arr_18 [i_5] [i_4] [i_4] [i_5] [i_5] [i_6] [10])))))));
                                arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] = (var_9 || 8589934591);
                                arr_21 [i_0] [i_1 + 1] [i_4] [10] [i_5] [i_6] [i_0] = ((((!(arr_3 [i_1 - 1] [i_5 + 1]))) ? ((((var_9 * 541) ? -29884 : (arr_16 [i_0] [i_5] [i_5] [i_5 - 1])))) : (max((10260350169895415641 + var_8), (887367363423310864 * var_8)))));
                                arr_22 [i_0] [i_6] [2] [i_5] [i_6] = (((~(arr_6 [i_5 + 1]))));
                            }
                        }
                    }
                    arr_23 [i_4] [i_0] [i_0] = min(39884, ((1 ? -var_1 : 13321)));
                    arr_24 [i_0] = (24390 ? ((var_1 * (arr_17 [i_1 - 1] [i_1 - 1] [i_0] [i_0]))) : (((~(arr_13 [i_1 + 1])))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_14 = var_0;
                        var_15 = (max(var_15, (((1 == (arr_2 [i_7] [i_1 + 1]))))));
                    }
                }
                var_16 = ((~(((~var_7) ? var_5 : (!-4109618440711274095)))));
                var_17 = var_2;
                arr_27 [i_0] [i_0] [i_0] = var_6;
            }
        }
    }
    #pragma endscop
}
