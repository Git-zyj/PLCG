/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((var_4 <= (~var_3)))), (min(var_4, 2948577860577441015))));
    var_11 = (min(var_2, (max((-563809132 % var_0), var_4))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = 255;
                                arr_15 [i_2] [i_0] [i_0] [i_0] = ((var_0 || (((-((3824857139 ? var_6 : 36893486)))))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_1] [i_2] = ((((max(563809131, 7245))) / ((max(((min(var_3, (arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0])))), 32761)))));
                    arr_17 [i_2] [7] = (min(var_5, ((3525 ? -0 : var_5))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_12 = (((16418 <= 470110157) - 205));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_13 = arr_31 [i_0 + 1];
                            arr_33 [i_0 - 1] [i_5] [i_5] [i_5] [i_7] [i_7] [i_8] = (((arr_7 [i_0] [i_5] [0] [i_8]) ^ (((((62569 ? 244 : (arr_6 [i_6]))) >= var_6)))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, (arr_22 [i_0 + 1])));
                            arr_36 [i_9] [i_7] [i_6] [i_5] [i_0] &= (arr_23 [i_0 + 3] [i_0 + 3] [1]);
                            var_15 = (((min(-0, ((((arr_3 [i_7]) && (arr_13 [i_9] [i_7] [4] [10])))))) / -1441215881321328172));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_16 = ((~((724624691 / (((arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 218 : 1069))))));
                            var_17 = min((((!((max(1, 50)))))), (min((arr_3 [i_0 - 1]), 218)));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_18 += (max(-var_6, 16418));
                            var_19 = 72;
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_12] [i_6] [i_6] [2] [i_0 - 1] [i_12] = -7246;
                        arr_44 [i_12] [i_5] [i_5] = (var_7 <= -16434);
                    }
                    for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        var_20 *= (arr_32 [i_13] [i_13] [i_13] [6] [i_13]);
                        var_21 ^= -var_9;

                        for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_22 = 34617;
                            var_23 = (min(var_23, (((((min(var_8, 4294967295))) ? (((1 ? (!var_3) : ((((arr_42 [5] [i_13 + 1] [i_6] [0] [i_14] [0]) <= var_1)))))) : (min(((7246 ? 4294967295 : -13)), (arr_19 [i_0] [i_0]))))))));
                        }
                        for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
                        {
                            var_24 = var_3;
                            var_25 = ((((((1 && var_5) ? (((!(arr_3 [i_6])))) : (arr_23 [i_0] [i_5] [i_6])))) >= (max((((1727522292607944282 - (arr_47 [i_0] [i_5] [3] [i_13] [i_15])))), 13706693156825193633))));
                        }
                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 13;i_16 += 1)
                        {
                            var_26 = (((arr_13 [i_0 + 3] [i_13 + 1] [i_13 - 1] [i_13 - 1]) || 62914560));
                            var_27 = ((var_7 - ((var_0 ? var_3 : 3293049858767591447))));
                            var_28 |= ((-(arr_19 [i_0] [i_0])));
                        }
                        var_29 = ((((max(3464833255726966130, (arr_7 [i_0] [i_0 + 1] [9] [11])))) ? (((arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 1]) ? -77 : (arr_32 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) : ((max(var_2, (arr_32 [i_0] [i_0 + 1] [i_0 - 1] [10] [i_0]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
