/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_6, var_12))) ? (((((8477730923347617725 >> (8477730923347617710 - 8477730923347617676))) > (var_16 < var_0)))) : var_14);
    var_18 = (max(((min(-772535270, 491520))), 0));
    var_19 ^= var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= ((((217 ? (arr_1 [i_1] [i_0]) : -1)) <= 48208));

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] = ((((((!(arr_6 [i_2] [i_2 - 3] [i_2] [i_2 + 1]))))) > var_8));
                    arr_8 [i_0] [1] [1] = (min((var_11 == var_8), ((min(var_8, (arr_0 [i_0 - 1]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_18 [i_3] = 0;
                                arr_19 [i_0] [i_4] [i_3] [i_4] [i_3] [i_5 + 1] = -199;
                                arr_20 [i_0] [i_1] [i_3] [i_4 - 2] [0] = ((var_5 * (arr_4 [i_4 - 3] [i_4] [i_5 + 1])));
                                var_21 = ((~(arr_1 [i_4 + 1] [i_5])));
                            }
                        }
                    }
                    arr_21 [i_0] = var_6;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] = (arr_23 [i_6]);
                                arr_28 [6] [i_1] [i_6] [6] [6] [i_7] = ((199 > (arr_25 [i_0] [i_0] [i_3] [i_6] [i_7])));
                                var_22 = (arr_6 [i_7 + 1] [i_6 + 1] [i_0 + 1] [i_6 + 1]);
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    var_23 = 43034;

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_24 = var_1;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_8] [i_8] [i_10] = ((var_11 - (1769421091 & 1)));
                            var_25 = (min(var_25, ((var_2 ? (arr_17 [i_0] [i_1] [i_1] [i_8] [i_9] [i_9] [i_10]) : (max(-var_1, (arr_33 [i_0] [i_0] [i_8 + 1] [i_9] [i_10] [i_8 + 1])))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_26 = (max(var_26, (((arr_34 [i_0] [i_0] [i_1] [i_8] [i_1]) != ((((((((var_16 || (arr_13 [i_0] [i_0] [i_0] [i_0]))))) == var_0))))))));
                        var_27 = (min((((var_15 - (arr_22 [i_0] [i_1] [i_8] [i_11])))), ((17018442092533175849 ? 56 : 3289123969108890584))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_41 [i_0] [i_8] [i_8] [i_12] = ((-8477730923347617726 ? var_0 : -1));
                        var_28 = ((!(arr_37 [i_0 - 1])));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_44 [i_8] [i_1] [i_1] = ((((((((0 ? -8477730923347617711 : 1116892707587883008))) ? 48208 : var_2))) ? (((var_16 != var_13) ? 17328 : var_6)) : (((-8477730923347617718 != 38) ? ((min(3994905460, var_12))) : (arr_23 [i_8])))));
                        arr_45 [i_0] [i_1] [i_0] [i_8] = ((((max(-8477730923347617718, (((var_13 ? 1 : -51432402)))))) ? ((((arr_39 [i_0] [1] [i_8] [i_13]) == ((var_16 & (arr_0 [i_0])))))) : (((((min(1, var_8))) == (~var_11))))));
                    }
                    arr_46 [i_8] = var_9;
                }
                for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
                {
                    var_29 = ((max(var_6, var_13)));
                    var_30 ^= (min(-743785700, 1));
                    var_31 = var_11;
                }
                var_32 = (max(var_32, (((var_12 - (min(((((arr_3 [i_1]) <= (arr_40 [i_0] [1] [i_1] [2] [i_0])))), (((arr_15 [8]) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : var_9)))))))));
                var_33 = var_4;
            }
        }
    }
    #pragma endscop
}
