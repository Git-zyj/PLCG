/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] |= ((((2147483647 < (arr_0 [i_0 - 1]))) ? var_4 : (((min(var_14, (arr_0 [i_0]))) >> (((max((arr_0 [i_0]), (arr_0 [2]))) - 364444126))))));
        var_15 = ((((((arr_0 [i_0 + 2]) ? var_5 : (-32767 - 1)))) ? (50904 + 205) : (arr_1 [i_0 + 3])));
        arr_4 [i_0] [i_0 + 2] = arr_2 [i_0];

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = 1207267507843431474;
            arr_8 [i_0] [i_1] = ((((min(51, 3081302076))) ? (~-9119741437604027945) : (205 + 9161875035973246128)));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_16 = var_2;
            arr_12 [i_2] = (arr_0 [i_0 + 3]);
            arr_13 [i_0] [i_2] [i_2] = 102;
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_17 = (min(var_17, (arr_5 [i_3])));
            arr_16 [i_0] [i_0] = (arr_2 [i_0 + 1]);
            var_18 = (((((-((max((-127 - 1), (arr_5 [i_0 + 2]))))))) ? ((((max(1770804548, var_13))) ? var_11 : (max(var_9, var_14)))) : (min(((254 ? 205 : 102)), (arr_0 [i_0 + 1])))));

            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                var_19 ^= 102;
                arr_21 [i_4] [i_4] [i_4] [i_4] = (max((arr_0 [i_4 + 1]), ((((arr_15 [i_3]) >= 186)))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                arr_24 [i_5] [i_5] = (((arr_20 [i_3 + 2] [1] [i_5]) ? (arr_20 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_20 [i_3 + 2] [i_0] [i_3])));
                var_20 = (((!255) ? (((arr_9 [i_3] [i_3]) ? -2469908698013042494 : (arr_18 [i_3 - 1] [i_5] [i_3] [i_0 + 3]))) : (!var_7)));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_21 = (-127 - 1);

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    var_22 ^= (((arr_27 [i_0] [i_3] [6] [i_7]) ? (((arr_10 [i_6] [i_6] [i_6]) ^ (arr_20 [i_0] [i_3] [i_0]))) : (arr_5 [i_0 + 1])));
                    var_23 = ((((((arr_22 [i_0 - 1] [i_0]) ? 19027 : (arr_5 [i_0 + 3])))) ? 1 : ((0 & (arr_17 [i_3] [i_3] [i_6])))));
                    arr_30 [i_7] [i_6] [i_6] [2] = (((arr_29 [i_3] [i_3]) - (arr_1 [i_0 + 3])));
                }
                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    var_24 = var_0;
                    arr_34 [i_6] = var_13;
                    arr_35 [1] [1] [i_6] [i_6] [i_8] = (((arr_29 [i_0] [i_0 + 1]) ? (arr_29 [i_8 + 1] [i_3 - 1]) : (!var_6)));
                    var_25 = arr_28 [i_8 - 2] [i_8 - 2] [i_6] [i_8 - 2];
                }
            }
            var_26 = (max(var_26, (((((~(arr_10 [i_0 + 3] [i_0 + 1] [i_0 + 1])))) ? ((((var_14 >= var_8) <= (((var_1 < (arr_23 [4]))))))) : ((((((arr_2 [i_3 + 1]) && 0))) - (arr_11 [i_0] [i_3 - 1] [i_0 - 1])))))));
        }

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_27 = (arr_26 [i_0]);

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_28 = (min(var_28, ((max(-96, 254)))));
                var_29 = (max((((arr_26 [i_0 + 1]) ? (arr_26 [i_0 - 1]) : (arr_26 [i_0 + 3]))), ((max((arr_26 [i_0 + 3]), -17492)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_30 = (max((51 & var_14), -1));
                            arr_46 [i_12] [11] [11] [11] [11] [11] [i_0] |= ((0 ? (arr_11 [i_9] [i_10] [i_11]) : (((((max(255, (arr_33 [i_9] [i_10] [2] [i_10])))) >= -2104285781)))));
                            arr_47 [i_12] = (max(-1440256611407175735, 186));
                            arr_48 [i_0] [i_0] = (((0 ? 0 : 892903845)));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                arr_52 [i_0] = (min((((var_13 == (~var_6)))), (min(0, (arr_27 [i_0 + 3] [i_9] [i_13] [i_13])))));
                arr_53 [i_0] &= (arr_14 [i_0 + 3]);
                var_31 = ((((max((arr_40 [i_13] [i_9] [i_9] [i_0]), (arr_18 [i_0 + 2] [i_13] [2] [i_0])))) || var_10));
            }
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            arr_58 [i_0] [i_14] = max((min((arr_49 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 - 1]), 21399)), ((((arr_19 [i_0 + 1] [i_0 + 3] [i_14]) <= (arr_20 [i_0] [i_14] [i_0])))));

            /* vectorizable */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                arr_61 [1] [9] = ((~(arr_9 [i_0 + 2] [2])));
                var_32 = (arr_1 [i_0]);
                var_33 = (((((arr_43 [i_0] [3] [i_14] [i_15]) || 0)) && var_0));
                arr_62 [i_0] [i_0] [i_15] [i_14] = -var_2;
            }
        }
        for (int i_16 = 4; i_16 < 12;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    {
                        arr_72 [i_0] [i_17] [i_17] [i_18] [i_16 - 3] [i_17] = (arr_22 [i_0] [i_16]);
                        var_34 = var_6;
                        var_35 -= ((0 ? 2366 : ((-(arr_56 [i_17] [i_17])))));
                    }
                }
            }

            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                arr_76 [i_0] [i_0] [i_19] &= (min((var_4 & -280), (((max((arr_42 [i_16]), 127)) / (((var_8 ? (arr_69 [i_0]) : (arr_64 [9] [i_16 + 1] [i_19]))))))));
                var_36 *= (((~(arr_74 [12] [i_16] [12]))));
            }
        }
    }
    for (int i_20 = 0; i_20 < 10;i_20 += 1)
    {
        arr_80 [i_20] [i_20] = (arr_69 [i_20]);
        arr_81 [i_20] = var_10;
    }
    var_37 &= var_3;
    #pragma endscop
}
