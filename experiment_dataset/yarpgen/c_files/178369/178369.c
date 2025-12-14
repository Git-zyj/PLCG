/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 = (max(var_16, ((((~2288) ? 1666 : (arr_2 [i_0] [i_0]))))));
            var_17 = (max(var_17, ((((arr_3 [i_1] [i_1] [i_0]) ? ((((arr_0 [i_0] [i_1]) ? (arr_4 [i_0]) : (arr_1 [i_0])))) : (((arr_2 [i_0] [i_0]) ? 12 : (arr_0 [i_0] [i_1]))))))));
            var_18 = (arr_4 [i_1]);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_12 [i_0] [i_3] [i_3] [i_4 - 1] = (arr_10 [i_0] [i_2] [i_3] [i_3]);
                        var_19 = (arr_4 [i_4 + 1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_20 -= ((!(arr_16 [i_5])));
                                arr_23 [i_0] [i_5] [i_5] [i_6] [i_7 + 4] [i_8 - 1] = (~65535);
                                var_21 = (min(var_21, -364966925021384008));
                                arr_24 [i_6] [i_6 - 1] = -3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_22 = (!70368735789056);
                                arr_32 [i_0] [i_0] [i_0] [i_6] = ((~(~18081777148688167608)));
                            }
                        }
                    }
                }
            }
        }

        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            var_23 = (((~5704190385689884273) ? ((5704190385689884273 ? (arr_25 [i_11 - 2] [i_11] [i_0] [i_11] [i_0]) : (arr_2 [i_11 + 2] [i_11 + 1]))) : (((~(arr_20 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_0] [i_0]))))));
            var_24 -= (~12051554667190762825);
            arr_35 [i_11] = (arr_2 [i_11 - 2] [i_0]);
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_25 ^= (~4294967277);
            var_26 = -4048313220;
            arr_40 [i_12] [i_12] = (arr_22 [i_0] [i_0] [i_12]);
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 12;i_15 += 1)
                    {
                        {
                            arr_48 [i_13 + 3] [i_14] [i_15 + 3] [i_13 + 3] [i_12] = (+-0);
                            var_27 = (min(var_27, (!392416864963196848)));
                            var_28 = (min(var_28, ((((-(arr_33 [i_0])))))));
                        }
                    }
                }
            }
            var_29 = 6117060470972138841;
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_52 [i_0] [i_16] [i_16] = (arr_43 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    {
                        var_30 = (min(var_30, (((-(arr_1 [i_0]))))));
                        var_31 = (~6117060470972138841);
                        var_32 *= (arr_30 [i_0] [i_0] [i_16] [i_17 + 1] [i_18]);
                    }
                }
            }
            var_33 = (arr_6 [i_16]);
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            var_34 = (min(var_34, 89));
            arr_61 [i_19] [i_19] = (((arr_57 [i_0] [i_0] [i_19] [i_0] [i_19]) ? 12051554667190762825 : (arr_33 [i_19])));
            var_35 = 65535;
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 3; i_20 < 21;i_20 += 1)
    {
        for (int i_21 = 4; i_21 < 21;i_21 += 1)
        {
            {
                arr_68 [i_21 - 1] [i_20] [i_20 - 1] = (arr_67 [i_20 - 1] [i_20 - 2] [i_20]);

                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    var_36 = (min(var_36, (((-(((!((!(arr_69 [i_21])))))))))));
                    var_37 = (min(var_37, ((max(((((arr_64 [i_20 - 2]) ? (arr_64 [i_20 + 4]) : 65535))), 18081777148688167607)))));
                    arr_72 [i_20 + 2] [i_20] = arr_65 [i_21 + 2] [i_20 - 1] [i_20 + 3];
                }
            }
        }
    }
    #pragma endscop
}
