/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((124 ? var_4 : (((~(arr_2 [i_0] [i_0])))))) <= (((min(124, 56))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1 + 1] [i_1] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, (200 + 131)));
                                var_11 = (max(var_11, ((((max(7898510268875071871, 267911168)) + ((((!((min(var_1, (arr_8 [i_0])))))))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_12 |= 2147483647;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_13 *= (((arr_0 [i_0]) / (arr_16 [i_6] [i_5] [i_1 + 3] [i_0] [i_5] [i_0])));
                            var_14 = (i_1 % 2 == zero) ? (((!(((var_2 >> (((arr_8 [i_1]) - 10465474950662965276)))))))) : (((!(((var_2 >> (((((arr_8 [i_1]) - 10465474950662965276)) - 3150457695825898053))))))));
                            var_15 = (246 != 11919313107023320701);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_16 ^= (((((21266 ? 132 : 2147483647))) ? 37405 : (arr_20 [i_1 + 2] [i_0] [i_0] [i_1 - 1])));
                            var_17 = var_6;
                            var_18 = (max(var_18, ((var_1 >> (((arr_19 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 - 1]) - 103))))));
                            var_19 = (-1004749544 != var_9);
                            arr_25 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] = ((((var_6 / (arr_13 [i_0] [0] [i_0] [i_0] [i_0]))) * ((((arr_7 [i_0] [i_0] [i_2] [i_1]) ? (arr_2 [i_0] [i_0]) : var_2)))));
                        }

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            arr_29 [i_1] = (var_9 != 124);
                            var_20 += (((arr_28 [i_0] [i_1 + 2] [i_2] [i_2] [8] [15] [i_8 + 1]) + (arr_28 [i_0] [i_1] [i_2] [i_2] [i_8 - 1] [i_1 - 1] [i_1])));
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            var_21 = ((-89 + (arr_9 [i_0] [i_0] [i_0] [i_0])));
                            var_22 = (!58891);
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_23 = (max(var_23, (((-(arr_30 [i_0] [i_0]))))));
                        arr_34 [i_0] [i_1] [i_1] [8] = (arr_16 [i_10] [i_1] [i_2] [i_1 - 1] [i_1] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_24 -= -368950810025346164;
                            arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] [12] [i_0] = (arr_32 [i_1] [i_1 + 1] [6] [i_11]);
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_25 = (min(var_25, 1479493911113435177));
                            arr_44 [i_0] [i_1] [i_1] [i_11] [i_13 - 1] = (((!65535) ? ((((!(arr_43 [i_1] [i_11] [i_2] [i_0] [i_1]))) ? (arr_27 [i_13 - 1] [i_2] [i_1 + 3] [10]) : (arr_26 [i_0] [i_1] [i_1] [i_11] [i_13] [i_1]))) : (17 && 20274)));
                        }
                        arr_45 [i_1] = ((50506 >> (var_7 - 182)));
                        arr_46 [i_0] [i_0] [3] [i_1] [i_0] [i_0] = (min(var_0, ((max(var_8, (arr_6 [i_0]))))));
                    }
                }
            }
        }
    }
    var_26 = (((max(-7898510268875071872, 16944941522407420099))) ? var_7 : (max((var_6 <= 2), var_4)));
    var_27 = max(132, (var_7 != var_2));
    #pragma endscop
}
