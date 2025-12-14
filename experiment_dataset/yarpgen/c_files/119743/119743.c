/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max(var_10, (max((max(752261521, 106)), var_11))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = 65408;
                        var_14 = -28107;
                    }
                }
            }
        }
        var_15 *= var_3;
        var_16 = ((189 + ((((var_9 ? 4294967295 : (arr_3 [i_0] [i_0] [i_0]))) >> (((arr_5 [i_0] [i_0]) - 6664))))));
        arr_10 [i_0] &= arr_7 [i_0] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_17 = (arr_4 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_24 [i_4] = ((((((arr_15 [i_4] [i_5] [i_4]) >> (5857487499944303086 - 5857487499944303076)))) ? (arr_14 [i_4] [i_4]) : (arr_1 [i_4] [i_8])));
                                var_18 = (((arr_14 [i_5] [i_4]) + var_5));
                                arr_25 [i_5] [i_6] [i_4] [i_5] [i_4] = ((!(arr_9 [i_4] [i_7] [i_6 - 1] [i_4])));
                                var_19 = (min(var_19, (var_9 || 96)));
                            }
                        }
                    }
                    arr_26 [i_4] [i_4] [i_4] = var_9;
                    var_20 += (var_7 > 572727804);
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_21 = (!65520);
                                var_22 *= (((var_4 + 2147483647) >> (33554431 - 33554422)));
                                var_23 = ((arr_20 [i_9 + 1]) ? (arr_12 [i_6 - 1]) : 3105458506);
                            }
                        }
                    }
                    var_24 ^= 83;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 7;i_12 += 1)
            {
                {
                    arr_37 [0] [i_11] &= ((32764 ? (arr_29 [i_12 + 1] [i_11] [10] [i_4] [i_4]) : (arr_29 [i_12 + 2] [i_12] [8] [i_4] [i_4])));
                    var_25 = var_3;

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_26 = (arr_41 [7] [i_13] [i_13] [i_4]);
                        arr_42 [5] [i_4] [i_12] [i_13] [i_13] [i_4] = (~var_9);
                        arr_43 [i_12] [i_4] = ((~(arr_29 [i_12 + 2] [i_12 + 3] [i_4] [i_12] [i_12 + 2])));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_46 [i_14] [i_4] [i_4] [i_4] = (((81 + var_0) ? ((148 ? var_6 : -1)) : -32767));
                        var_27 *= (((arr_29 [i_12] [i_12 + 3] [10] [i_12] [i_12 + 4]) + var_10));
                        var_28 = -14934148578901170555;
                        var_29 = (((((var_1 ? (arr_18 [i_4] [i_11]) : 1152920405095219200))) ? var_5 : (((752261521 > (arr_18 [i_4] [i_4]))))));
                    }
                    for (int i_15 = 3; i_15 < 10;i_15 += 1)
                    {
                        var_30 = ((!(arr_35 [i_12 + 3] [i_11])));
                        var_31 *= ((+(((arr_29 [i_4] [i_4] [0] [i_12 - 1] [i_15]) ? var_3 : 9925672021761916965))));
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {

                        for (int i_17 = 2; i_17 < 9;i_17 += 1)
                        {
                            var_32 = (max(var_32, (33554431 && 60)));
                            arr_56 [i_17 - 2] [i_4] [i_12 + 2] = 66;
                            var_33 ^= (((arr_51 [i_17 + 1] [i_17] [i_12 - 1] [i_11]) && (arr_51 [i_17 - 1] [i_16] [i_12 + 3] [i_4])));
                        }
                        arr_57 [i_4] [i_11] [i_11] [i_4] = (((arr_36 [i_12 + 4] [i_12 + 1] [i_12 - 1] [i_12 + 2]) > -23138));
                        var_34 = (((arr_28 [1] [i_11]) > ((((arr_18 [i_4] [i_4]) ? 82 : 28106)))));
                    }
                }
            }
        }
        var_35 = (arr_4 [i_4] [i_4]);
    }
    for (int i_18 = 2; i_18 < 19;i_18 += 1)
    {
        var_36 = (((arr_59 [i_18 + 2] [i_18 - 2]) ? var_10 : (((arr_59 [i_18 + 1] [i_18]) ? (arr_59 [i_18 + 2] [15]) : 52579))));
        arr_61 [i_18] = (((var_4 ^ 8) > var_1));
        var_37 = (max(var_37, 14934148578901170555));
        arr_62 [i_18 + 2] [i_18] = (arr_58 [i_18] [18]);
        var_38 = (min(var_38, (((~((-(arr_58 [i_18 + 2] [i_18 - 1]))))))));
    }
    #pragma endscop
}
