/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = ((((((arr_5 [i_3] [5] [i_1] [i_0]) ? (min((arr_2 [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_2] [i_3]))) : (((arr_6 [i_2] [1] [7]) ? var_3 : (arr_4 [i_0] [i_2 + 2] [i_3])))))) != var_13));
                        var_21 = (arr_0 [i_0] [i_0]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_22 = (arr_5 [i_2 - 3] [i_2 - 2] [9] [8]);
                            var_23 = (arr_3 [i_2 - 4]);
                            var_24 = (((((0 ? -1 : 1))) ? (arr_5 [i_2 + 1] [i_2] [i_2] [i_2]) : (((arr_2 [i_0] [i_1]) | var_19))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_25 *= (min((~18699), var_19));
                            var_26 = ((((((max(var_7, (arr_7 [i_3] [i_3] [i_3] [i_3])))) ? (max((arr_12 [i_0] [i_1] [i_2] [i_3] [i_5]), 11407082393740791570)) : ((-10485 ? -18704 : 14)))) >= (((((arr_8 [6] [i_1] [i_1] [i_1] [10]) < (arr_5 [0] [9] [i_2] [i_2])))))));
                            var_27 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_28 ^= (~9203135910260068083);
                            arr_14 [i_2] [i_2] = arr_12 [i_5] [i_5] [7] [i_5] [7];
                        }
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_29 = var_15;
                        arr_17 [3] [i_1] [i_2] [i_6] [i_1] [i_0] = ((min(3873304864097194570, 242)) / (((arr_9 [i_0] [i_1] [i_1] [i_2 + 2] [i_6]) ? var_16 : var_15)));
                        var_30 = (-(max(3873304864097194565, (arr_8 [8] [i_1] [i_2] [i_2] [i_0]))));
                        var_31 = (arr_0 [i_0] [i_1]);

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_32 = (arr_5 [i_0] [10] [7] [i_6]);
                            arr_20 [i_2] = min(((max((arr_8 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 - 4]), (arr_8 [6] [i_2] [i_2] [0] [i_2 + 3])))), (((arr_5 [9] [9] [i_2 + 1] [5]) ? (min((arr_6 [i_2] [i_2] [i_6]), (arr_5 [i_0] [i_0] [i_6] [i_7]))) : (arr_5 [i_2 + 3] [i_6] [i_6] [3]))));
                            var_33 = ((((min(((((arr_10 [i_2] [9]) != var_1))), (arr_15 [i_2 + 3] [i_2] [i_2 - 4] [i_2 - 1])))) ? (((~(arr_5 [i_2 - 3] [i_2] [4] [i_0])))) : (max((min(var_19, var_11)), (arr_15 [9] [i_2] [i_2] [0])))));
                        }
                    }
                    var_34 += ((min(((-1415500048428746687 ? 9203135910260068091 : -18699)), (((-(arr_6 [i_0] [i_1] [i_0])))))));
                }

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        var_35 ^= (arr_7 [i_0] [i_9 - 2] [i_0] [i_1]);
                        var_36 = (arr_12 [i_0] [i_0] [1] [i_8] [9]);
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_37 = (((((arr_13 [i_0] [i_1] [i_8] [i_10] [i_8]) + 2147483647)) >> (((arr_13 [i_0] [2] [i_1] [i_8] [i_8]) + 15461))));

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_38 = (arr_26 [i_11] [i_10] [i_10] [i_8] [i_0] [i_0]);
                            var_39 = var_1;
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_40 *= (arr_13 [i_0] [i_1] [i_0] [i_10] [i_0]);
                            var_41 = ((var_11 | (arr_33 [i_0] [i_1] [i_8] [i_0] [i_12] [i_8] [i_0])));
                        }

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_42 *= (1724005035 < 2147483647);
                            var_43 = (max(var_43, var_8));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        var_44 = var_18;
                        var_45 = (arr_23 [i_8] [i_1]);
                        var_46 = (arr_23 [i_0] [i_14]);

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_47 = ((~(((arr_30 [i_0] [i_0] [i_0] [i_0]) ? (arr_22 [i_0] [i_0] [i_8] [i_14]) : var_17))));
                            var_48 = var_2;
                            var_49 ^= (arr_33 [i_15] [i_15] [i_15] [i_14] [i_14] [i_14 - 1] [i_14 - 1]);
                        }
                        for (int i_16 = 2; i_16 < 9;i_16 += 1)
                        {
                            var_50 = (max(var_50, 1));
                            var_51 = (arr_46 [3] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                    for (int i_17 = 1; i_17 < 7;i_17 += 1)
                    {
                        arr_50 [i_8] [i_1] [i_0] = arr_40 [i_17 + 2] [6] [1] [i_1] [i_0];
                        var_52 = ((~((((arr_47 [i_17 + 3] [i_17] [i_17] [i_17] [i_17]) < var_8)))));

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                        {
                            var_53 = (max(var_53, ((((arr_0 [i_17 + 2] [i_18]) ? (arr_32 [i_0] [i_1] [2] [i_17] [i_8]) : 18699)))));
                            var_54 ^= arr_52 [i_18] [i_18] [i_18] [i_17 + 2] [i_8] [i_1];
                        }
                        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                        {
                            var_55 = (arr_54 [i_17] [5] [8] [i_17 + 3] [i_17] [i_17 + 2]);
                            var_56 = (max(var_56, (arr_9 [i_17] [i_17] [i_17] [i_17 + 1] [5])));
                            var_57 = (arr_24 [i_0] [i_1] [i_8] [10]);
                        }
                        var_58 = ((8822 ? 10901390239329276435 : 1724005012));
                    }
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_59 ^= (max(1802535773940693698, -1719333256674301327));
                        arr_58 [i_8] = (min(((-(max(var_9, (arr_18 [i_1] [10] [3] [i_1] [i_0] [i_8] [i_20]))))), (((arr_48 [i_20] [i_0] [i_1] [i_0]) ? (min(var_19, var_17)) : (max(var_4, (arr_27 [i_20] [i_8] [i_8] [i_1] [i_0])))))));
                        var_60 = (arr_5 [i_0] [i_1] [i_8] [i_20]);
                        var_61 = (max(var_61, ((max((((~(arr_12 [i_0] [i_0] [i_1] [i_8] [i_0])))), var_19)))));
                    }
                }
            }
        }
    }
    var_62 = (((((~(min(var_6, 0))))) ? (((~var_19) ? ((var_17 ? var_16 : var_16)) : 1)) : ((((min(var_18, var_5))) ? (max(-2294132468492250826, var_7)) : (max(var_14, var_7))))));
    #pragma endscop
}
