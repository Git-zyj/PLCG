/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((!(arr_2 [i_0])));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_19 = (((arr_3 [i_0] [i_3]) >= (arr_3 [i_0] [i_1 - 2])));
                            var_20 = 122;
                            var_21 ^= (arr_3 [i_3] [i_1 + 1]);
                        }
                    }
                }
            }
            var_22 -= -5094710356248369313;
            var_23 = 122;
            var_24 = arr_4 [i_0] [i_0] [i_0];
            var_25 = -65509;
        }
        var_26 = var_8;
        var_27 = (max(var_27, ((((arr_8 [i_0] [1] [i_0] [10] [i_0]) < (((arr_0 [10]) >> 0)))))));
        var_28 ^= var_15;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_24 [2] [2] [i_6 - 1] [i_5] = -113;
                        arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = -31379;

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_29 = (((((!(!5094710356248369299)))) == (max(((~(arr_19 [i_9] [i_5] [i_7] [14]))), (arr_27 [i_5] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])))));
                            var_30 |= ((max(123, 1)));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_31 |= ((-((5094710356248369313 ? 15303 : 50213))));
                            var_32 &= (max((max(-8021895934297613735, -38824069)), ((max(1, (arr_26 [i_5] [i_6 - 1] [i_7] [i_7] [i_10] [i_8] [i_5]))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] &= (((~(arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) ^ 1);
                            arr_32 [i_5] &= (arr_28 [i_7] [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_35 [i_5] [i_6] = (max(((max((arr_26 [i_8] [i_6 - 1] [i_7] [i_8] [i_6 - 1] [i_5] [i_11]), var_3))), (max(-8982173628316763193, var_12))));
                            var_33 = (((((var_2 >> (14283 - 14247)))) ? (((arr_19 [i_6 - 1] [i_6] [i_7] [i_8]) | var_1)) : ((max(20738, 1407804951)))));
                        }
                    }
                }
            }
        }
        arr_36 [i_5] = ((((((18446744073709551615 ? -1313862871 : (arr_13 [i_5] [i_5]))))) & (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
        var_34 = (((((((((arr_19 [i_5] [i_5] [i_5] [i_5]) + 8124))) ? ((var_9 ? -30172 : var_13)) : (arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) - -var_11));
        var_35 = (max(var_35, 15292));
        var_36 ^= (-(((arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [2]) ? -var_9 : var_1)));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_37 = (((!13352033717461182316) + ((var_3 ? var_5 : 5094710356248369304))));
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_47 [i_12] [i_15] = (0 / 5094710356248369299);
                        var_38 *= 44797;
                        var_39 = (((!0) ? (arr_23 [i_12] [i_13 - 1] [i_14] [i_12]) : var_8));
                        var_40 = (((arr_13 [i_13 - 1] [i_12]) ? (arr_13 [i_12] [i_12]) : (arr_42 [i_13 - 1] [i_12] [i_12] [i_12])));
                        var_41 = (!var_11);
                    }
                }
            }
        }
    }
    var_42 = -var_1;
    #pragma endscop
}
