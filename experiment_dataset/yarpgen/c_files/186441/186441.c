/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((~(var_0 & var_15)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = min(18449, 47087);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [15] [i_2] [i_2] [i_1] [i_0] [i_0] = max((max((arr_7 [i_2 + 2] [i_3 + 2] [i_3] [i_2 + 2]), var_1)), var_4);
                        arr_13 [i_3 - 1] [i_1] = (max((arr_3 [i_2 + 1] [i_3 - 1]), (arr_11 [3] [i_3 - 1] [i_2 + 2])));
                        var_18 = (min(var_18, (max(47086, var_10))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_5] [i_5] [i_5] [i_5] [i_7] = (max((min((arr_1 [i_4 - 1]), (((arr_3 [i_4] [i_5]) ? 2047 : var_2)))), ((min((arr_23 [i_4 + 3] [i_4] [i_4 + 2] [i_4]), 37821)))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_28 [i_4] [i_4] = ((var_9 ? (arr_3 [i_4 - 2] [i_4 + 1]) : (arr_0 [i_4 + 2] [i_4 - 2])));
                            arr_29 [i_8] [14] [i_5] [i_4 + 1] = (max((((arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 3]) ? (arr_6 [i_4 - 1] [i_4] [i_4 - 1]) : (arr_6 [i_4 - 1] [i_4] [i_4]))), var_4));
                            var_19 += ((52231 ? ((max((!19891), 65535))) : ((6544 * ((min(2716, var_4)))))));
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_33 [i_7] [i_9] = arr_22 [i_4 - 2];
                            arr_34 [i_4 - 1] [1] [i_6] [i_4 + 1] [i_9] = (((arr_17 [i_4 - 2] [i_4 + 2]) ? (var_2 | var_4) : (arr_22 [0])));
                            arr_35 [i_5] [13] [i_9] [i_7] [i_9] [i_7] [i_4] = (var_9 && var_9);
                            arr_36 [i_9] [i_7] [i_4 + 1] [i_4 + 1] [i_4 + 1] = ((~(arr_22 [i_4 + 3])));
                            arr_37 [i_4 + 3] [i_4 + 3] [i_4] [4] [i_4] = 2716;
                        }
                        arr_38 [i_4] = ((var_4 * ((max(var_13, (arr_14 [i_4]))))));
                    }
                }
            }
        }
        var_20 = 45645;
        arr_39 [i_4 + 3] |= ((!(((min(var_12, (arr_23 [i_4 + 2] [i_4 + 2] [i_4] [i_4])))))));

        /* vectorizable */
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            var_21 = var_10;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_46 [i_12] [i_12] = ((65535 ? 31004 : (arr_21 [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 1])));
                        var_22 = 62819;

                        for (int i_13 = 2; i_13 < 15;i_13 += 1)
                        {
                            arr_49 [3] [i_10] [8] [i_11] [i_12] [i_13] [3] = var_3;
                            var_23 = ((55520 << ((((10016 ? var_6 : (arr_22 [i_4]))) - 6532))));
                            arr_50 [2] [i_10] [i_11] [i_11] [i_11] &= 45645;
                            arr_51 [i_12] [i_12] [i_11] [i_11] [i_12] = var_1;
                        }
                    }
                }
            }

            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                arr_56 [i_4] [i_4] [i_10] [i_14] = ((-var_8 ? -var_7 : (arr_16 [i_4])));
                var_24 = arr_44 [i_10] [i_10];

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_25 = (max(var_25, var_6));
                        arr_63 [i_4 - 2] [i_10] [i_14 + 2] [i_15] [i_16] = 38900;
                        var_26 = 55535;
                    }
                    var_27 = arr_48 [i_4 + 1] [i_10 - 2] [i_14] [11] [3];
                }
            }
        }
        var_28 = (min((((52306 && (((0 ? 16490 : (arr_54 [i_4] [i_4] [i_4]))))))), ((((max(var_8, (arr_44 [4] [4])))) ? (arr_30 [i_4] [i_4] [i_4] [i_4] [i_4 + 2]) : ((min((arr_59 [i_4] [i_4 + 1] [i_4]), 45644)))))));
    }
    var_29 = var_10;
    var_30 += min(((max(var_0, 46273))), (max((var_7 <= var_14), var_6)));
    #pragma endscop
}
