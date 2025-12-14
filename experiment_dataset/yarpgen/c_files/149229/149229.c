/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 *= (min(var_6, (var_2 + 0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((((65535 ? var_16 : 1))))));
                    var_22 -= (min((arr_7 [5] [i_1]), var_9));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [3] = var_2;
        arr_14 [i_3] |= ((((~(arr_11 [i_3] [i_3]))) >> var_18));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = (min(var_23, var_11));

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_24 = (min(var_24, ((((arr_20 [i_5] [i_4]) && (arr_20 [i_4] [i_5]))))));
            var_25 = (min(var_25, -9882));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_26 ^= (arr_22 [i_4] [i_6]);
            var_27 = (arr_22 [i_6] [i_4]);
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_28 += (1481253610 & var_10);

                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    arr_32 [i_8] [i_8] [i_8] [8] [8] [i_8] |= ((~(arr_6 [i_4])));
                    var_29 += ((+((var_2 ? (arr_8 [i_9]) : var_10))));
                    var_30 = (min(var_30, var_11));
                    arr_33 [11] [i_8] [i_8] [i_8] [i_8] |= (1 & var_16);
                    arr_34 [i_7] [i_7] [i_7] [i_9] [i_9 - 1] [i_7] = (((!(arr_26 [i_7] [i_7] [i_7]))));
                }
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                var_31 += (((arr_24 [i_7] [i_7] [i_10 - 1]) ? (((arr_21 [i_10] [i_7]) | -743477287759412951)) : (arr_35 [i_7])));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_32 = (max(var_32, (((var_14 ^ (arr_3 [i_4] [i_10 + 1]))))));
                            var_33 = (((arr_11 [i_11 - 3] [i_10 + 1]) * (arr_15 [i_11 - 3])));
                        }
                    }
                }
                arr_43 [i_10 - 1] [i_7] [i_7] [i_4] = ((~(~var_10)));
            }
            var_34 -= (((9882 ? var_7 : var_6)));
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 11;i_14 += 1)
            {
                {
                    var_35 -= (((((arr_20 [i_4] [i_4]) ? (arr_45 [i_4] [i_14 - 2] [i_4]) : var_13)) ^ (~17388)));
                    var_36 = (max(var_36, ((((arr_45 [i_14 - 1] [i_14 - 3] [i_14 - 1]) ? var_8 : var_14)))));
                    var_37 &= var_9;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_38 += ((var_15 ? (arr_21 [i_14 - 1] [i_14 - 2]) : (arr_21 [i_14 + 1] [i_14 - 2])));
                                var_39 -= ((var_2 != (arr_24 [i_4] [i_14 - 2] [i_14 - 2])));
                            }
                        }
                    }
                }
            }
        }
        var_40 &= (((arr_36 [i_4] [i_4] [i_4]) ? (arr_9 [i_4] [i_4] [i_4]) : (arr_9 [i_4] [i_4] [i_4])));
    }
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 19;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 20;i_18 += 1)
        {
            {
                var_41 |= (arr_12 [i_17 + 3]);
                var_42 ^= -var_14;
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {

                            for (int i_21 = 3; i_21 < 19;i_21 += 1)
                            {
                                var_43 = (max(var_43, (arr_64 [i_17 - 1] [i_17 - 2] [i_18 - 1] [i_21 - 3] [i_21 - 3] [i_21 + 2] [i_21])));
                                var_44 = (min(var_44, (((!((!(arr_57 [i_17 - 1] [i_17 + 1]))))))));
                                arr_66 [i_17] [i_17 - 1] [0] [i_17 - 1] [i_17] = var_9;
                            }
                            for (int i_22 = 0; i_22 < 22;i_22 += 1)
                            {
                                var_45 &= (((((min(((min((arr_68 [i_17] [i_18] [i_18] [i_19] [i_19] [i_20] [i_22]), var_19))), (min(-17388, 11)))) + 9223372036854775807)) >> (((((arr_62 [i_18] [i_18] [i_18] [i_18 - 1] [i_20]) ? var_16 : var_15)) - 85))));
                                arr_69 [i_17 - 3] [0] [15] [i_17] [i_17] = (!(((min(var_7, (arr_67 [i_17 - 3] [i_17] [i_17] [i_17] [i_17]))))));
                                arr_70 [i_22] [i_18] [i_19] [i_18] [i_17 - 1] &= ((87 > (min(((var_3 ? 4931321945089710024 : var_19)), ((((arr_60 [i_17] [i_18] [i_19] [i_20]) <= var_6)))))));
                                var_46 |= var_15;
                                var_47 -= (arr_56 [i_19] [i_20]);
                            }
                            for (int i_23 = 0; i_23 < 22;i_23 += 1)
                            {
                                var_48 |= (min((((var_15 ^ var_16) ? var_16 : (min(var_19, 1)))), var_13));
                                arr_75 [i_17] [i_20] [i_17] [i_20] [i_18 + 2] [i_17] [i_18 - 1] |= (min((-23619 / 163), (~var_4)));
                                var_49 += (~-8289694759625717942);
                            }
                            var_50 -= (min(var_3, (((var_2 ? (~152) : (min(var_10, var_15)))))));
                            var_51 &= ((((((arr_71 [i_17] [i_18 + 1] [i_17] [i_17 + 2] [i_20]) / (arr_58 [i_17 - 3] [i_20])))) ? (((((arr_58 [i_17 - 2] [i_18]) < var_16)))) : var_19));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 22;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            {
                var_52 = var_11;
                var_53 = (max(var_53, var_11));
                var_54 = (min(var_54, var_11));
            }
        }
    }
    #pragma endscop
}
