/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (~1282261724222710310);
                var_15 = ((max(1, 7658)));
                var_16 *= (~var_9);
            }
        }
    }
    var_17 = (min(var_17, var_2));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_16 [i_4] = 0;
                        var_18 = 0;
                        arr_17 [i_2] [i_3] = var_3;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_19 = (((((-(arr_12 [i_2] [i_3] [i_4] [i_5])))) ? (arr_11 [i_2] [i_3]) : -121));
                            var_20 &= (((0 >> 1) ? (arr_12 [i_2] [i_3] [i_5] [i_6]) : (((arr_10 [i_2] [i_3] [i_4]) >> (2544 - 2517)))));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_23 [i_2] [i_3] [i_4] [i_4] [i_5] [i_7] [i_7 - 1] &= 39414220;
                            arr_24 [i_2] [i_4] [i_5] [i_7] = (((3093164395 * 2147483647) != 2291795922));
                            arr_25 [i_2] [i_4] = var_3;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_21 += var_12;
                            arr_29 [i_2] [i_3] [i_4] [i_5] [i_8] = (arr_15 [i_8] [i_3]);
                            var_22 = (((arr_9 [i_8]) >= var_4));
                            var_23 = (min(var_23, (arr_0 [i_4])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_2] [i_3] [i_4] [i_5] [i_3] [i_9] [i_3] = var_12;
                            arr_34 [i_2] [i_3] [i_4] [i_5] = (((arr_32 [i_9]) ? (arr_26 [i_2] [i_3] [i_4] [i_5] [i_9]) : var_4));
                            arr_35 [i_5] [i_9] = var_8;
                        }
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_24 = (arr_12 [i_2] [i_2] [i_10] [i_10]);
            arr_39 [i_2] &= ((48031 ? 7658 : 0));
            var_25 = 4255553075;
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
        {
            var_26 ^= 32;
            var_27 &= (~var_8);
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_28 *= (var_0 - 0);
                            var_29 = (min(var_29, var_14));
                            var_30 = ((var_9 ? var_8 : -4120));
                            arr_54 [i_15 - 2] [i_14] [i_13] [i_12] [i_2] = (arr_26 [i_15] [i_12] [i_15 - 1] [i_14] [i_15 + 1]);
                        }
                    }
                }
            }
            var_31 ^= (arr_45 [i_12] [i_12] [i_12]);
        }
    }
    var_32 -= var_11;
    #pragma endscop
}
