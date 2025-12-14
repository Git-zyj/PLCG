/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 -= -53;
                arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2] &= (max((arr_1 [i_0 + 1] [i_1]), ((max(var_8, (!49))))));
                var_14 = (arr_1 [i_0 + 2] [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 = (min(var_15, ((((arr_3 [i_2]) ? ((((!(arr_6 [i_2] [i_2]))))) : (max(0, (arr_5 [i_2]))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_16 *= (((((~(arr_7 [i_2] [i_2] [i_2])))) ? ((var_8 ? -3290677803062062566 : (arr_5 [i_2]))) : (arr_5 [i_2])));
            var_17 *= ((~(arr_8 [i_3] [i_3] [i_2])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_18 = 230;
                        arr_17 [i_5] [i_2] [i_2] = ((-4092691596390486402 ? (!var_9) : var_6));
                    }
                }
            }
            arr_18 [i_2] [i_3] = (((arr_5 [i_2]) | (arr_9 [13] [i_2])));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_19 = (min(var_19, ((((((arr_15 [i_2] [i_2] [i_2] [i_2]) ? (((arr_1 [i_2] [i_2]) & var_12)) : var_8))) ? (~287667426198290432) : (arr_16 [i_6] [1] [1] [i_6])))));
            var_20 ^= ((!(((arr_5 [i_2]) || 78))));

            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                var_21 = 62;
                var_22 = (max(var_22, var_10));
                var_23 = ((var_12 ? (((!(arr_25 [8] [20] [i_2])))) : ((((max(var_5, 26))) << 0))));
            }
        }
        var_24 = ((((((!-49) ? -3290677803062062559 : var_6))) || var_7));
        var_25 &= (((((((var_6 ? (arr_5 [i_2]) : (arr_1 [19] [i_2])))) ? (max((arr_2 [i_2] [i_2] [i_2]), -3290677803062062566)) : (arr_23 [i_2] [i_2] [i_2] [i_2]))) + (((-3290677803062062559 ^ (arr_11 [i_2] [i_2] [i_2] [i_2]))))));

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_26 = (min((!var_12), (((((arr_24 [i_2] [i_2] [i_8]) || 3290677803062062566)) ? ((max((arr_22 [4] [4] [i_2]), (arr_15 [i_2] [i_8] [10] [i_8])))) : 4294967295))));
            arr_28 [i_8] = (max((((arr_8 [i_2] [i_2] [i_2]) ? (arr_8 [i_2] [i_2] [i_8]) : (arr_8 [i_2] [19] [i_2]))), (~var_9)));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_27 = (min(var_27, var_3));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_28 = (max(var_28, (~var_9)));
                        var_29 += 4294967295;
                        var_30 = (min(var_30, (((arr_3 [i_11]) ? (arr_36 [i_2] [i_2] [i_2] [i_2]) : var_0))));
                        var_31 = (min(var_31, var_8));

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_32 = (max(var_32, ((((arr_21 [i_2]) / ((1097742053706685383 ? var_0 : 18446744073709551615)))))));
                            var_33 = (-32767 - 1);
                            var_34 = (((arr_7 [i_2] [i_2] [i_2]) ? (arr_8 [i_2] [i_2] [i_2]) : (((arr_25 [i_2] [i_9] [i_9]) ? -3290677803062062559 : (arr_24 [i_12] [i_10] [i_9])))));
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_35 += (arr_11 [i_2] [i_9] [16] [16]);
                            arr_42 [i_2] [i_9] [i_2] [10] [i_9] [i_2] = (arr_38 [i_2] [8] [i_10] [1] [8]);
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        arr_47 [i_14] = var_10;
        var_36 = (arr_33 [i_14] [i_14] [i_14]);
    }
    #pragma endscop
}
