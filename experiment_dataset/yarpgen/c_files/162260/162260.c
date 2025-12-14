/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(var_17, var_15));
    var_19 = var_10;
    var_20 = ((-((188 ? 1 : 1048574))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(((~(arr_5 [i_0] [i_1] [17]))), (max((arr_2 [i_0] [i_0]), ((~(arr_9 [i_1] [i_1] [i_2])))))));
                    var_22 *= (arr_9 [i_0 - 1] [i_0] [i_0]);
                }
            }
        }
        var_23 ^= (~562647168);
        var_24 = -13;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] = (((arr_9 [i_5 + 4] [i_4] [i_5 + 4]) ? (arr_9 [i_5 + 4] [21] [21]) : (arr_9 [i_5 + 4] [i_3] [i_5])));
                        var_25 |= (((-(arr_14 [i_4]))));
                    }
                }
            }
        }
        arr_24 [i_3] = ((-(arr_11 [i_3] [i_3])));

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_26 *= (((arr_21 [i_8]) >= (arr_21 [i_8])));
                arr_29 [i_3] [i_3] [i_3] [i_8] = (arr_0 [i_8] [i_7]);

                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {
                    arr_33 [i_3] [10] [i_3] [10] = (~27703);
                    arr_34 [i_3] = ((!((((arr_26 [i_3]) ? var_0 : (arr_21 [i_3]))))));
                    var_27 = (0 % 127);
                }
                arr_35 [i_3] [i_3] [i_8] = ((-(-32767 - 1)));
                var_28 = ((-1 ? 13 : (arr_12 [i_3] [i_3])));
            }
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                var_29 |= ((((((arr_15 [i_10] [i_10]) ^ (arr_1 [16] [i_10])))) ^ (arr_7 [i_3] [i_10 + 1])));
                var_30 = ((6089312168384582194 << (((-1 + 2) - 1))));
            }
            var_31 = (((arr_21 [i_3]) ? (arr_17 [i_3] [i_7]) : (((arr_20 [i_3] [i_3] [i_3]) - 244))));
            var_32 += -81;
            var_33 = (13 ? 0 : ((29 ? 0 : 1)));
            var_34 += (((~var_12) << 0));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_35 = (max(var_35, (arr_7 [i_3] [i_11])));
            arr_43 [i_3] [i_11] [i_3] &= ((!(arr_17 [i_3] [i_11])));
            var_36 = (max(var_36, (arr_28 [i_3] [i_3] [i_3] [i_3])));
            arr_44 [i_3] [i_3] [i_11] = 1;
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_48 [i_3] = (!var_8);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 14;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_37 *= ((((~(arr_6 [i_3] [i_14 + 2]))) ^ (arr_2 [i_3] [i_12])));
                            var_38 *= (!95);
                            var_39 -= ((!(~var_5)));
                            var_40 ^= ((-(((arr_42 [4] [i_12]) ? 35 : (arr_8 [0] [i_13] [i_3])))));
                        }

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_41 = (((~252) != (arr_12 [i_3] [i_3])));
                            var_42 &= ((-(-127 - 1)));
                            arr_58 [i_3] [12] [12] [i_13] [i_3] = (arr_52 [i_3] [i_12]);
                            arr_59 [i_3] [i_3] [8] [12] [i_14] [8] = ((arr_51 [i_14 + 2] [i_3] [i_14] [i_14 + 1]) ? (arr_51 [i_14 - 3] [i_3] [9] [i_14 - 3]) : (arr_51 [i_14 + 1] [i_3] [i_14 + 1] [i_14 - 1]));
                        }
                        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                        {
                            arr_63 [i_3] [5] [i_13] [i_3] [i_13] = (((arr_49 [3] [i_14 - 2]) ? (arr_32 [i_14 + 2] [0] [i_14 - 2] [i_14 - 2]) : (arr_20 [i_3] [i_14 + 1] [i_14 + 1])));
                            var_43 = (arr_12 [i_3] [i_3]);
                        }
                        for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                        {
                            var_44 = (((27652 ? -2305843009213693952 : 20)));
                            arr_66 [i_3] [i_3] [i_3] [i_14] [i_18] = (((127 & 0) ^ (arr_32 [i_3] [i_3] [i_12] [i_14 - 1])));
                            arr_67 [i_3] [i_3] [i_3] = ((~(arr_32 [i_13] [6] [i_14 + 2] [i_18])));
                        }
                        var_45 = (min(var_45, (~0)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
