/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(174, 63)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 -= (arr_1 [i_0] [i_0]);
        var_18 *= ((arr_0 [i_0]) / (arr_0 [i_0]));
        var_19 = ((!((min((121 >= 7680261536637672000), (arr_0 [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_2] [i_3] [i_1] |= 2851065045;
                        var_20 ^= (4023907689 > 2898436282);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = (arr_5 [i_5] [i_1]);
                        var_22 = (arr_5 [i_1] [i_2]);
                        arr_22 [i_2] [i_2] [i_2] [i_2] = (((arr_8 [i_2] [0]) >= (((arr_15 [i_2] [i_3] [i_2] [i_2] [i_1]) & (arr_8 [i_2] [i_2])))));
                    }
                    var_23 *= (((((arr_8 [i_1] [i_2 - 1]) - (min((arr_15 [i_3] [i_2] [i_2] [i_2 - 1] [i_1]), (arr_16 [i_1])))))) || ((((arr_10 [i_3] [i_2] [i_1]) * (arr_2 [i_1])))));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_24 = arr_21 [i_2] [i_2] [i_2] [i_7];
                            arr_28 [i_2] = ((+((~(min((arr_26 [i_2]), (arr_0 [i_7])))))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_6] [i_6] [i_3] [i_6] [i_2] = arr_0 [i_2 - 1];
                            arr_32 [i_1] [i_2] [i_3] [i_2] [i_8] [i_1] [i_1] = (min((((arr_9 [i_2] [i_8]) | (((!(arr_24 [i_8] [i_2] [i_6] [i_3] [i_2] [i_1])))))), ((((((!(arr_0 [i_6])))) >= ((min((arr_6 [i_1] [i_2]), (arr_12 [i_2])))))))));
                            arr_33 [i_3] [i_1] [i_1] &= (arr_13 [13] [13] [12] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, ((((arr_29 [i_1] [i_2] [i_3] [i_3] [i_1]) << (((0 & (arr_6 [i_1] [i_1])))))))));
                            var_26 = (arr_35 [i_1] [i_2] [i_3] [i_2] [i_9]);
                            var_27 = (max(var_27, (arr_5 [i_1] [i_1])));
                        }
                        arr_37 [i_1] [i_1] [i_3] [i_2] = min((((arr_27 [i_1] [i_1] [i_2] [i_2] [i_2] [i_6]) % (min((arr_7 [i_2]), (arr_14 [i_1] [i_2] [1] [i_2]))))), ((min((min((arr_30 [i_6]), (arr_5 [5] [i_3]))), (arr_6 [i_2] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_28 = (min(var_28, (arr_2 [i_3])));

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_29 *= arr_39 [i_1] [i_2] [i_3] [i_10] [i_11];
                            arr_45 [i_1] [i_2] [10] [i_10] [i_11] = (arr_3 [i_1]);
                            arr_46 [i_2] [i_10] [i_2 - 1] [i_2] = -1181389866;
                        }
                        for (int i_12 = 1; i_12 < 12;i_12 += 1)
                        {
                            arr_51 [i_12] [i_2] [10] [i_2] [i_1] = (1 - 1);
                            arr_52 [i_1] [i_2] [i_2] [i_10] [i_12] = -192289009;
                            arr_53 [3] [i_2] [3] [3] [i_2] = ((-4515547597708134128 > (arr_43 [i_1] [i_2] [i_3] [i_10] [i_2])));
                            var_30 = ((!((!(arr_18 [i_12] [i_2] [i_3] [i_2])))));
                        }
                    }
                }
            }
        }
        arr_54 [i_1] = ((~(arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_31 += arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                arr_69 [i_17] [i_14] [i_15] [i_14] [i_13] = ((~((-(((arr_63 [i_15]) - (arr_57 [i_13])))))));
                                var_32 = (arr_58 [i_15]);
                                var_33 = (min((arr_67 [i_13] [i_16 + 1] [i_14] [i_16 + 2] [i_17] [i_14] [i_17]), (arr_66 [i_13] [i_14 + 1])));
                                var_34 = (min(var_34, ((((((-(arr_65 [i_14] [i_13] [i_13] [i_13] [i_17])))) >> (((arr_68 [i_17] [i_14] [i_15] [i_17] [i_15]) + 499)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_75 [i_14] = ((-(min((arr_55 [i_18]), (arr_0 [i_19])))));
                                arr_76 [i_14] = (min((arr_57 [i_15]), (arr_58 [i_13])));
                                var_35 = arr_58 [10];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
