/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((+((((arr_2 [i_0]) >= var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 *= (((((((arr_2 [i_2]) < 15)))) * (((arr_2 [i_2]) ? (arr_2 [i_1]) : -5))));
                    arr_7 [i_0] [i_1] [i_0] [2] = ((16 / (((arr_6 [i_0] [i_1]) | var_1))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (min(-16, (min(-15, -16))));
    }
    var_12 = ((var_2 ? -var_0 : var_1));
    var_13 = (((min((-26 - var_9), var_9)) ^ var_1));
    var_14 ^= 7267643197768287655;

    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_15 = (arr_10 [i_3 + 1]);
        arr_11 [i_3] = ((-((((min(-16782, 7))) | 27))));
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_16 = (min(var_16, ((((14680064 ^ 1) ? (min(2553857887263971823, ((-2553857887263971814 ? 9 : 27)))) : 27)))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_25 [18] [18] [12] [2] [i_4] = (!(arr_9 [i_4] [i_5 + 2]));
                            arr_26 [i_4] [i_4] [i_6] [i_7] [6] = 2553857887263971823;
                            var_17 = (min(var_17, (arr_18 [i_4 - 1] [i_4])));
                            arr_27 [i_4] [i_4] [i_6] [8] [i_7] [i_8 - 2] = (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (1 - 1)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_35 [i_4] [i_4] [i_4] [i_4] = (((var_6 % 32740) ? (arr_19 [i_4 - 1]) : var_5));
                            arr_36 [i_11] [1] [i_4] [i_5 + 1] [0] = (((arr_18 [i_9] [i_11 + 2]) > (arr_18 [i_9] [i_11 - 1])));
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                arr_40 [i_4] [i_4] [i_12] [i_4] &= (18446744073709551604 ? 3034065400031387354 : 1);
                var_18 = (min(var_18, (((var_4 << (arr_14 [i_12]))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_46 [i_4] [i_4] [i_4] [i_13] [i_14] = ((27 <= (arr_20 [i_4] [i_12])));
                            var_19 = (min(var_19, (((1 ? 4651739455245839397 : 32738)))));
                            var_20 = (-2147483647 - 1);
                        }
                    }
                }
            }
        }
        for (int i_15 = 4; i_15 < 22;i_15 += 1)
        {
            var_21 ^= ((1 + (((arr_39 [i_15 - 4] [i_4 - 1]) ? (arr_39 [i_15 + 1] [i_4 + 1]) : 18446744073709551615))));

            for (int i_16 = 2; i_16 < 24;i_16 += 1)
            {
                var_22 = (max(var_22, (!var_4)));
                arr_52 [i_4] = (min((-8192 + 830093528), (((arr_38 [i_16 + 1] [i_15 - 4] [i_4 + 1]) ? var_9 : 23724))));
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                arr_55 [i_17] [i_4] [i_4] [i_15] = var_7;
                var_23 ^= (min(4294967295, 1));
                var_24 &= var_2;
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 23;i_19 += 1)
                {
                    {
                        var_25 = 2553857887263971823;
                        var_26 ^= (!9);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            arr_63 [i_4] [i_4] [i_20] = var_5;
            var_27 = (((var_4 >> (arr_33 [i_20] [i_20] [14] [i_4] [i_4]))) / var_7);
        }
    }
    #pragma endscop
}
