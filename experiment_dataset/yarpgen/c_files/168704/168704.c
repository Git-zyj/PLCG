/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (min(((((min((arr_0 [0]), (arr_0 [i_1])))) ? ((1399422727 ? 0 : 268427264)) : var_2)), ((((arr_3 [i_0]) >= (min(var_3, var_0)))))));
                arr_6 [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((min((((var_3 ? (arr_3 [i_2 + 1]) : var_12))), ((var_2 / (arr_3 [i_2 + 1]))))))));
                                arr_15 [i_3] [i_3] [1] [i_3] [7] [i_2] [i_1] = ((((min(((min((arr_5 [9] [i_1] [i_1]), (arr_1 [i_0])))), (min(var_5, var_1))))) & (((var_8 ? var_12 : (arr_9 [11] [11] [i_2] [12] [12] [4]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_15 = ((((min((arr_8 [i_6 + 1]), (arr_17 [i_6 + 1] [i_6 + 1])))) ? (arr_17 [i_6 - 1] [i_6 + 1]) : ((-613928945 ? 18446744073709551611 : 92))));
                        var_16 += (min(-9487, (-32767 - 1)));
                        var_17 = (max(var_17, (arr_16 [2] [i_1] [8] [8])));
                        var_18 += ((((((arr_10 [i_6] [i_6 - 1] [i_0] [i_6] [i_6]) <= (arr_16 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])))) / ((min((arr_8 [i_1]), (((var_8 != (arr_12 [i_1] [i_5] [i_0] [i_1])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((52316 ? (((var_8 << (((min(var_3, var_4)) - 1155978818))))) : ((-600981454 ? var_9 : 62)))))));
                                arr_28 [7] [i_1] [13] [13] [i_8] = ((((((arr_27 [1] [1] [i_5] [i_7] [i_5]) + ((var_8 ? var_9 : (arr_7 [i_5])))))) || ((min((min((arr_14 [8] [i_1] [6] [i_8] [i_8]), var_11)), ((min(1, 1))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_20 = (min(var_20, (~2810609972)));
                                var_21 = (max(var_21, var_4));
                            }
                        }
                    }
                }
                var_22 = (~1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                {
                    var_23 = (((((~(arr_35 [i_12 + 1])))) && ((((120 | 24743) ^ (((!(arr_42 [i_13] [i_13] [i_11])))))))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_24 = (min(var_24, (arr_41 [i_12 + 1])));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            arr_52 [i_11] [i_12] [i_11] [9] [i_11] = (((arr_50 [i_11] [i_11]) != (arr_45 [i_14])));
                            var_25 = (max(var_25, var_9));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_57 [i_11] [i_12] [i_13] [i_14] [i_14] [i_14] [i_11] = (((~var_11) >= ((var_9 ? (arr_36 [i_11]) : var_11))));
                            var_26 = (min(var_26, ((((((var_10 ? var_11 : var_11))) ? var_8 : (12280140283037047268 + var_3))))));
                            var_27 &= (((arr_39 [i_14] [i_13 - 1] [i_12 + 2]) % (arr_46 [9] [i_13 - 1])));
                            arr_58 [i_11] [13] [0] = (var_8 ^ var_9);
                        }
                        var_28 += (arr_47 [i_11 - 3] [i_11 - 2] [i_14] [i_13 + 1]);
                        arr_59 [i_11] [i_11] [i_14] [1] = (arr_35 [i_11 - 3]);
                        arr_60 [i_11] [i_11] [i_11] [14] [i_13] [4] = (((((arr_42 [i_11] [16] [i_11]) | var_9)) * (arr_45 [i_12 - 1])));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        var_29 = ((((((arr_61 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) + -10235))) ? (arr_41 [i_13 - 1]) : var_12));
                        var_30 = (((arr_44 [i_11] [i_17]) ^ (arr_44 [i_11] [i_17])));
                        var_31 = (~var_5);
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_32 = (min(var_8, (min((arr_55 [i_12] [i_12] [9] [i_12] [i_12] [i_12 - 1]), (min((arr_54 [0] [14] [11] [0] [5] [i_18]), var_1))))));
                        arr_65 [i_11] [20] [i_11] [1] [1] [i_18] = (arr_45 [i_12 + 2]);
                        arr_66 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((((var_7 ? (var_3 / var_3) : (arr_39 [i_12 + 1] [i_13 + 3] [18]))) | (min(32145, 2129568640))));
                    }
                    var_33 = (max(var_33, ((((15876 ? 1 : -3901))))));
                }
            }
        }
    }
    #pragma endscop
}
