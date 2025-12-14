/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 ^= (((max(((((arr_0 [6] [i_0]) || (arr_1 [8])))), -9007327102394525990)) <= (((min((arr_1 [2]), (min((arr_1 [4]), (arr_1 [8])))))))));
        arr_2 [i_0] = ((((((((arr_1 [i_0]) ? var_13 : var_7)) <= (arr_1 [i_0])))) | (max((var_12 || var_9), 31))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_16 = ((((((var_7 % -6412327754005921125) ? (arr_1 [4]) : ((((arr_4 [8]) >= (arr_1 [4]))))))) ? (((!var_10) ? ((((arr_1 [10]) ^ (arr_1 [6])))) : (9007327102394525989 / var_8))) : ((((arr_0 [10] [i_1 - 1]) ? (arr_0 [0] [i_1]) : ((-(arr_1 [4]))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, (((((((max((arr_3 [i_1]), var_14))) == (arr_6 [6] [i_3 - 1] [i_2 + 3]))) ? ((((!(arr_4 [i_1 + 3]))))) : (~18446744073709551598))))));
                    arr_9 [i_2] [i_2] [i_3] = max((arr_1 [i_2]), (arr_0 [i_2] [14]));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        var_18 = ((min(var_3, (~var_6))));
                        var_19 |= ((var_9 ? 18 : ((max((var_8 <= 24147), ((97 << (-110 + 126))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                {
                    arr_25 [i_1] [i_7] [i_8] [i_8 - 4] = -var_5;
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_20 = max(((((arr_4 [i_1 + 2]) ? (((((arr_14 [i_1 + 1] [i_1] [i_1 + 3]) <= 1)))) : (arr_23 [8] [i_7] [i_8] [0])))), (arr_30 [i_10] [0] [i_8] [7] [i_1]));
                                var_21 = ((+(min((~31), (((arr_20 [7] [i_7]) + (arr_16 [i_10 + 2] [7] [9])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
    {
        arr_35 [0] |= (arr_20 [1] [9]);
        arr_36 [i_11] [i_11] = 3583693504;
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 8;i_12 += 1) /* same iter space */
    {
        var_22 = ((arr_20 [i_12] [i_12 - 1]) % ((((arr_21 [i_12] [i_12] [i_12 - 1]) - 97))));

        for (int i_13 = 4; i_13 < 8;i_13 += 1)
        {
            arr_42 [i_12] [i_13] = (((arr_31 [i_12] [i_13 - 2]) << (1099511562240 - 1099511562227)));
            var_23 = (max(var_23, ((((((arr_33 [i_13 - 2]) ? (arr_6 [i_13] [2] [i_13]) : var_13)) * ((18494 / (arr_39 [i_13]))))))));
            arr_43 [i_12] [i_13 - 3] = (((arr_38 [i_12] [i_12]) && (arr_0 [i_12] [i_12])));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 9;i_15 += 1)
                {
                    {
                        arr_51 [i_12 - 1] [i_12] [0] [i_15] [1] = (((((arr_28 [i_12] [i_12] [6] [i_12]) * var_6)) << (2831675457859783995 - 58)));
                        arr_52 [i_12] = (~var_6);
                        var_24 = (((((~(arr_41 [i_12] [i_12])))) != 18));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 8;i_18 += 1)
                    {
                        {
                            var_25 += (arr_1 [i_16]);
                            var_26 = var_9;
                            arr_61 [i_12] [i_17] [6] [i_16] [i_16] [i_13] [i_12] = (((var_3 ? 9331 : 2831675457859783982)));
                            var_27 = ((-29054 ? (((arr_38 [i_12] [i_13 + 1]) ? 18652 : var_10)) : ((~(arr_60 [i_17] [i_16] [6] [i_12])))));
                            arr_62 [8] [10] [3] [i_17] [5] [i_17] [i_12] = (arr_59 [i_12] [i_13] [i_16]);
                        }
                    }
                }
            }
        }
        arr_63 [i_12] = (((-71 ? (arr_30 [i_12 - 1] [i_12] [4] [3] [1]) : var_0)));
        arr_64 [i_12] = var_5;
    }
    var_28 = (var_12 <= var_6);

    for (int i_19 = 3; i_19 < 16;i_19 += 1)
    {
        arr_67 [i_19 - 3] = 7140408448170950842;
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 15;i_20 += 1)
        {
            for (int i_21 = 3; i_21 < 15;i_21 += 1)
            {
                {
                    arr_73 [i_19 + 1] [i_20] [i_19 - 3] [i_19 - 2] = ((arr_69 [10] [i_20]) == ((((!((max(var_5, (arr_65 [i_19])))))))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 17;i_23 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((((((!(arr_72 [i_23] [i_19] [i_23] [i_22]))) ? (var_0 >> var_6) : (arr_80 [i_19 + 1] [i_20 + 1] [i_23] [i_22] [i_23] [i_21]))) + ((((255 >= (arr_69 [i_20 - 3] [i_19 - 2]))))))))));
                                var_30 ^= arr_66 [6];
                                arr_81 [i_19 + 1] [10] [i_21 + 2] [i_22] [i_23] [i_20] = 1;
                            }
                        }
                    }
                    var_31 *= var_0;
                }
            }
        }
    }
    #pragma endscop
}
