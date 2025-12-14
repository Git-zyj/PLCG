/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 += (((min(-31, var_6))));
        var_15 = (max(var_15, (((((((arr_1 [i_0] [i_0]) == (((arr_2 [12]) ^ (arr_1 [i_0] [0])))))) << 24)))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_16 = (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((arr_8 [i_3]) ? ((1 ? 1 : 60408)) : ((47041 ? 81453625 : 65535)))) & (((arr_8 [i_2 - 2]) / (max(var_1, (-2147483647 - 1))))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((max((arr_10 [i_3] [i_3 + 2] [i_4]), (arr_10 [i_2] [i_3 + 2] [i_4])))) - var_4)))));
                                var_19 = ((((arr_4 [i_2 + 1] [i_3 + 2]) ? (arr_4 [i_2 - 2] [i_3 - 2]) : (arr_4 [i_2 - 2] [i_3 + 2]))));
                            }
                        }
                    }
                }
            }
        }
        var_20 = min(1, (((~1) ? 5896940327435037585 : (((21239 ? 21240 : -488553588))))));
        var_21 = ((((910171655 ? 1 : 27611)) - (((!(arr_3 [i_1 - 2] [i_1 - 2]))))));
        var_22 ^= ((((arr_7 [i_1 - 1] [i_1]) < ((((arr_3 [16] [16]) == var_2))))) ? ((~(arr_9 [i_1] [i_1 + 1] [i_1]))) : ((22412 << (((((arr_11 [i_1] [i_1] [i_1 - 1] [i_1 - 1]) + 31)) - 26)))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_23 = var_8;
        arr_23 [14] = (((((+((max((arr_21 [9] [i_6]), var_1)))))) - ((max(var_3, var_8)))));
        var_24 = (!252);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_25 -= (((arr_19 [1] [i_7]) + var_9));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [8] [i_8] [8] [i_7] [i_8] = (-((21239 ? (arr_24 [i_8]) : (arr_17 [i_8] [i_10]))));
                        var_26 = ((94 != (arr_22 [i_8] [i_10])));
                        arr_37 [i_8] = var_6;
                        var_27 = var_11;
                        var_28 = (((arr_4 [i_8] [i_8]) | (arr_4 [i_10] [i_9])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_29 = (~-1146060355);

                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            var_30 *= (((arr_9 [16] [16] [16]) * (arr_17 [i_7] [i_7])));
                            var_31 = (max(var_31, var_13));
                            var_32 *= ((((((arr_13 [i_7] [i_8] [i_8] [i_8] [i_7] [i_7]) | (arr_39 [i_7] [i_12] [12] [i_9] [i_11] [12])))) ? (arr_24 [i_9]) : var_0));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            arr_47 [i_11] = 81453622;
                            var_33 = ((~(arr_42 [i_11] [i_9])));
                            var_34 += (((((arr_44 [i_7] [i_8] [i_9] [i_9] [i_11] [i_13]) + 2147483647)) << (61275 - 61275)));
                        }
                        for (int i_14 = 3; i_14 < 18;i_14 += 1)
                        {
                            var_35 = (min(var_35, (((1 ? 68719476735 : 2)))));
                            var_36 = (-26900 - 1);
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_37 -= ((arr_14 [i_8] [i_7] [22] [i_15]) % (arr_49 [i_7] [i_15] [i_7] [i_7]));
                            arr_54 [i_7] [i_11] = ((!(arr_38 [i_11] [i_8] [i_9] [i_8] [14] [i_11])));
                            var_38 = 17611155647367591121;
                            var_39 ^= ((!(arr_14 [i_9] [i_7] [i_7] [6])));
                            arr_55 [i_15] [i_11] [i_9] [i_9] [i_11] [i_7] = 1490623425;
                        }
                        var_40 = (var_12 / var_6);
                        var_41 = (min(var_41, (((((0 ? 1930243832 : 19047)) >> (-2126344625 < 8162784174046996455))))));
                    }
                    arr_56 [i_9] [i_8] [i_7] [i_7] = var_9;
                    var_42 = (((arr_34 [i_7]) / var_8));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 19;i_17 += 1)
            {
                {
                    var_43 = (((arr_32 [i_17 - 1] [i_17 - 1] [i_17] [2]) != (arr_11 [i_7] [i_16] [i_17 + 1] [i_17 + 1])));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_44 *= (~9787660729690342305);
                                var_45 = 88;
                                var_46 -= 1517162290;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 4; i_20 < 17;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 17;i_22 += 1)
                {
                    {
                        var_47 |= (((arr_59 [i_20 - 2]) ? var_11 : (arr_59 [i_20 - 1])));

                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            var_48 = (max(var_48, -4926355820046139649));
                            var_49 = (((arr_28 [i_20 + 1]) ? (arr_28 [i_7]) : (arr_28 [i_7])));
                        }
                        arr_76 [0] [i_20] [0] [0] |= ((-(arr_46 [i_20 - 3] [i_21] [i_20] [i_20 - 3])));
                    }
                }
            }
        }
    }
    var_50 = var_5;
    #pragma endscop
}
