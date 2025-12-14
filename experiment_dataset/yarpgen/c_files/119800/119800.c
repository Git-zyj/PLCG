/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max(((min((arr_1 [i_0]), (arr_1 [i_0])))), (max(((max((arr_0 [i_0] [i_0]), var_6))), 11904179829503272598))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 13;i_2 += 1) /* same iter space */
            {
                var_19 = (max(var_19, (2592 == var_10)));
                arr_7 [i_0] [0] [i_0] [i_0] |= ((var_7 + (arr_3 [i_2 - 3])));
            }
            for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [i_1] = (max(6542564244206279007, (min(1, 6542564244206279024))));
                    var_20 |= var_0;

                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        var_21 *= (min(-var_1, ((((arr_4 [i_5 - 4] [i_4]) ? (arr_4 [i_5 + 1] [i_4]) : (arr_4 [i_5 - 1] [i_4]))))));
                        arr_16 [i_0] [i_1] [4] [i_1] [i_0] [i_3 - 2] = (9 != 11904179829503272597);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_22 = 65520;
                        var_23 *= ((-8 ? 18446744073709551597 : -5));
                        var_24 = ((arr_14 [i_1] [i_3 - 2] [i_1] [i_3 - 1] [i_3 - 3]) ? var_12 : (!var_9));
                    }
                }
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_0] [i_0] [i_0] [1] [14] |= var_17;
                    var_25 = ((+(min((11904179829503272617 * var_16), var_13))));
                }
                var_26 = (arr_18 [i_0] [i_3 - 2] [13] [i_0] [i_3 - 2] [i_0]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_27 = (min(1, (((-90 - var_1) ? (arr_11 [i_0] [i_0]) : var_4))));
                            var_28 += (min((~var_15), (~var_6)));
                        }
                    }
                }
                arr_27 [i_0] = ((min((arr_24 [i_3 - 1] [i_3 - 2]), var_4)));
            }
            for (int i_10 = 4; i_10 < 13;i_10 += 1) /* same iter space */
            {
                arr_30 [i_1] [i_0] = 83;
                arr_31 [i_0] [i_0] [i_0] = max(2, -108);
                var_29 = ((var_9 || ((46786 || (!var_4)))));
                arr_32 [i_0] [i_1] = ((1279170001 ? (min(var_6, 252)) : 12));
            }
            var_30 = (max(var_30, -1));
        }
        var_31 -= -26116;
        var_32 = (((((min(var_1, -109)))) == (max(var_14, var_10))));
        var_33 = (((var_0 ? var_11 : (var_12 | var_15))));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {

                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        var_34 = (!((((arr_14 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]) ^ (((min(1, var_11))))))));
                        var_35 = ((1 ? ((13572389869893901769 ? var_11 : -23)) : var_11));
                        var_36 = -var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_37 = (max(var_37, (!-1006268481)));
                                var_38 = ((var_6 ? (arr_45 [i_16 + 2] [i_16 + 1] [i_16] [0] [i_16 + 1]) : var_10));
                                arr_46 [1] [i_12] [i_11] = 18480;
                            }
                        }
                    }
                    arr_47 [i_13] [i_13] [4] |= ((-(min((min(2219400561, 6542564244206279007)), var_0))));

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_39 -= (((((var_15 ? var_12 : var_12))) ^ (arr_40 [i_17] [i_12])));

                        for (int i_18 = 3; i_18 < 14;i_18 += 1)
                        {
                            arr_54 [i_11] [i_12] [i_13] [i_11] [i_17] [i_11] = 1;
                            arr_55 [2] [i_11] = var_10;
                            arr_56 [i_11] = var_17;
                        }
                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            arr_61 [i_11] = min((99 || var_5), (max(var_0, (arr_59 [i_11] [i_11] [i_11] [i_11] [i_11]))));
                            var_40 = (min(var_40, (~14728)));
                        }
                        var_41 = max((min(((min(1, -14))), (max(var_12, var_10)))), (~7));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_42 = var_0;
                        var_43 = (min(var_43, (((var_1 ? 95 : ((939602858696054638 ? 13811 : 11904179829503272595)))))));
                    }
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        arr_67 [i_11] [i_11] [i_13] [i_12] [i_13] = var_6;
                        var_44 = var_9;
                        var_45 = (min(var_45, ((((((var_13 ? var_3 : (arr_8 [i_13] [i_13] [i_13])))) ? (min(var_10, (arr_1 [i_21]))) : var_10)))));
                        arr_68 [i_11] [i_11] [11] [i_11] [2] = (max((min(-26113, 7)), (var_1 - 4874354203815649855)));
                    }
                }
            }
        }
        var_46 = (min(4, 1));
    }
    #pragma endscop
}
