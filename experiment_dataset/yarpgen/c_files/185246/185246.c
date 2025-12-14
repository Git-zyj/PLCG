/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_1));
    var_19 = (~var_16);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((((((19428 <= (arr_2 [i_0])))) - (~-113))) + ((~(-127 - 1))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_21 *= ((~((124 | (((((arr_2 [i_0]) + 2147483647)) >> (((arr_2 [i_4]) + 34))))))));
                            var_22 = (max(var_22, (((-(~118))))));
                            var_23 -= ((((-(((((-127 - 1) + 2147483647)) >> 15)))) > ((var_5 >> (var_3 - 32611)))));
                            var_24 = ((((93 | (arr_12 [i_2 + 3] [i_2 - 3] [i_3 - 2] [i_4] [i_4]))) > (-3 <= -1736325554)));
                            arr_14 [i_3] [i_3] [18] [15] [15] [2] [i_4] = -var_14;
                        }
                    }
                }
                arr_15 [i_0] [i_2] = -var_6;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_25 = ((~(!-127)));
                arr_18 [19] [19] |= ((-13 >= (arr_6 [6] [i_1] [i_5])));
            }
            var_26 *= ((!(((~(arr_6 [i_0] [i_1] [7]))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [i_6] [11] [i_0] = ((~(~var_13)));
                            var_27 = ((!(((-(((-1 + 2147483647) >> (-113 + 127))))))));
                            var_28 = (((~53) | (!-126)));
                            arr_27 [i_0] [8] [i_6] [i_7] [i_8] = ((~((-var_2 >> (((!(arr_13 [15] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                            arr_28 [i_0] [i_1] [i_6] [i_7] [i_7] [i_7] [i_7] = (~15676);
                        }
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            arr_31 [i_0] |= (arr_20 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]);

            /* vectorizable */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                arr_34 [i_0] [i_0] [i_0] = ((-(arr_9 [i_9 + 1] [i_9 + 2])));
                arr_35 [i_0] = (var_6 ^ -2147483645);
            }
            arr_36 [i_9] [12] [i_0] = ((~(((arr_3 [i_0] [i_9 + 1]) ^ var_4))));
            arr_37 [i_0] [i_9] = ((72 || (112 ^ 82)));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_29 -= ((116 % (~-var_3)));

            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                arr_44 [i_0] [i_11] [i_12] [i_12] = (arr_6 [i_0] [i_0] [i_0]);
                arr_45 [i_0] [i_11] [12] [i_12] = (!82);
                var_30 = (arr_3 [i_12] [i_12]);
                var_31 -= (((arr_19 [i_11] [i_11] [i_11]) > (var_9 ^ var_6)));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    arr_51 [7] [i_13] [i_13] [i_13] = -127;

                    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                    {
                        arr_54 [i_0] [3] [i_11] [i_13] [i_13] [i_14] [i_13] = ((((!(arr_46 [i_14])))));
                        var_32 -= (!var_3);
                        var_33 = (~var_15);
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_57 [18] = (((var_5 > var_9) > ((-(arr_10 [14] [i_11] [14] [i_16])))));
                        arr_58 [12] [10] [i_11] [20] [i_14] [9] = (~126);
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_34 = (!6310);
                        arr_62 [i_0] = (var_0 - var_6);
                        arr_63 [i_0] = (((arr_9 [i_13] [i_14]) ^ (arr_9 [i_0] [i_17])));
                    }
                    arr_64 [i_0] [i_0] [i_0] [i_0] = ((var_10 + var_7) - (arr_17 [i_0] [i_11] [i_11] [i_11]));
                }
                for (int i_18 = 3; i_18 < 22;i_18 += 1)
                {
                    var_35 = (!var_9);
                    var_36 -= -var_12;
                    arr_67 [i_0] = -var_8;
                    arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!((((arr_30 [i_0] [i_0] [i_0]) - var_5)))));
                }
                var_37 = (~1964981602);
                arr_69 [i_11] [i_11] = -67;
                var_38 = (var_15 + -113);
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        {
                            arr_78 [i_0] [i_11] [i_19] [i_20] [i_21] [i_11] = (((((!(arr_42 [18]))))));
                            var_39 = -var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
