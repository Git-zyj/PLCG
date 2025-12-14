/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_19 = (min(var_19, (arr_3 [i_0 + 4] [12] [i_0 + 2])));
                var_20 -= -126;
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_21 = ((+((var_16 ? (arr_2 [7] [7] [i_0]) : (arr_3 [i_0] [i_1] [4])))));
                var_22 = (max(var_22, (((~((118 ? var_2 : var_13)))))));
                var_23 |= ((((5811050504877261992 < (arr_6 [i_0] [i_0] [i_0] [i_0]))) ? ((((arr_3 [2] [5] [i_0]) != var_17))) : ((-8305170902540383433 ? 251 : 69))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_24 = (((arr_6 [11] [i_4 - 1] [i_4 + 2] [i_4 - 1]) >= (arr_6 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1])));
                            arr_15 [i_5] [i_5] [9] [i_5] [9] [i_4 - 2] [9] = -73;
                            arr_16 [i_0] [i_5] [i_3] [i_4 - 3] = (arr_12 [i_0 + 3] [i_5 + 2] [i_5] [i_5] [19]);
                        }
                    }
                }
                var_25 ^= (arr_7 [i_3] [i_1] [5]);
            }
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_26 = (((var_12 / var_7) ? var_11 : (arr_1 [1])));
                            var_27 = (min(var_27, ((((arr_2 [i_8 + 1] [5] [i_6]) ? var_10 : ((var_0 % (arr_17 [i_0] [i_0] [i_0] [i_8]))))))));
                        }
                    }
                }
                var_28 |= (arr_2 [i_6] [i_6 + 2] [i_0 + 2]);
            }
            var_29 *= (arr_4 [i_0 + 4]);

            for (int i_9 = 3; i_9 < 19;i_9 += 1)
            {
                var_30 = ((~(arr_14 [i_1] [i_1] [i_1] [i_1] [i_9] [i_9] [22])));
                var_31 *= ((((94 ? 34812 : -660554878)) >> (68 - 46)));
            }
        }
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_32 = (max(var_32, ((((var_10 > var_9) && ((16815 != (arr_9 [i_0 + 2] [i_0 - 1]))))))));
            arr_28 [i_0 + 2] [i_0 + 2] [i_0] |= arr_9 [i_10 + 1] [i_0 - 1];
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        var_33 = (max(var_33, (((~((max((arr_3 [i_0 + 1] [i_11] [i_12]), (arr_3 [i_13] [i_11] [i_0 - 1])))))))));
                        var_34 *= arr_25 [i_12 - 1] [22];
                    }
                }
            }
            var_35 = (max(var_35, 15285));
            var_36 = (arr_32 [i_0 + 1] [20] [i_11] [i_11]);
            /* LoopNest 3 */
            for (int i_14 = 4; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 22;i_16 += 1)
                    {
                        {
                            arr_43 [i_11] [6] [i_11] [i_11] [i_11] [6] [11] = (((min((var_4 | var_4), ((min(0, var_18)))))) ? (arr_42 [2] [i_11] [i_14] [i_11] [i_11] [1] [i_15]) : (((((max(var_6, -7669754590329916630))) ? 1032082053 : 228))));
                            arr_44 [i_0 + 4] [i_11] [6] [i_14] [20] [i_14] [i_16 - 1] = -2416914837045238969;
                        }
                    }
                }
            }
        }
        arr_45 [i_0 + 1] = (arr_31 [11] [8]);
        var_37 *= (~23587);
        var_38 = (min(var_38, ((max((arr_6 [i_0] [i_0 + 1] [17] [i_0 - 1]), var_14)))));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
    {
        var_39 += (((arr_25 [14] [i_17 + 3]) & var_3));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 9;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        arr_54 [i_17] [6] [i_20] &= var_1;
                        var_40 = (max(var_40, -8305170902540383420));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            {
                                var_41 = (max(var_41, (arr_30 [i_21 + 1])));
                                arr_61 [i_17] [5] [i_17] [i_17 - 1] [i_22] = (arr_41 [14]);
                                var_42 = ((arr_60 [4] [6] [6] [i_17 + 2] [i_21 + 1] [4]) ? (arr_58 [i_17] [0] [i_19 - 1] [6] [i_21 - 2]) : (arr_20 [i_17] [i_17]));
                                var_43 = arr_58 [i_17] [i_17] [i_19] [i_17] [4];
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_23 = 1; i_23 < 8;i_23 += 1) /* same iter space */
    {
        var_44 = (min(var_44, (arr_5 [i_23 - 1] [i_23])));
        var_45 = (min(var_45, (arr_62 [9])));
        arr_64 [i_23] = ((max((arr_41 [12]), -var_6)));
    }
    var_46 = var_4;
    #pragma endscop
}
