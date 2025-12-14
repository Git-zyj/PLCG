/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] = var_2;

            for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_3 - 4] [i_4] = (max(var_7, var_6));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((((1 ? var_12 : 2386629636))) ? ((((arr_2 [i_0 - 1]) - var_4))) : (min(-var_5, (~var_12))));
                        }
                    }
                }
                var_15 ^= (((((!(arr_3 [i_0] [15] [i_0])))) & var_4));
            }
            for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
            {
                arr_18 [i_0 - 2] [i_0 - 1] [i_0] [i_1] = ((-(arr_7 [i_5 - 1] [i_0 - 2])));
                var_16 &= (!var_4);
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_17 = ((-(((arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? 1 : 1))));
                var_18 = ((~(min((((arr_7 [i_6] [i_6]) - var_5)), (((var_6 ? 1 : var_11)))))));
                var_19 += ((!(((~(arr_1 [i_6] [i_7]))))));
            }
            var_20 &= (((-1489992558 - 1) ? var_8 : var_13));
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_31 [i_10] = var_9;
                        var_21 = ((-(arr_17 [i_0 - 1] [12] [i_10])));
                        arr_32 [i_10] [i_10] = var_9;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        var_22 = ((arr_25 [i_0 - 1]) ? (arr_25 [i_0 - 2]) : var_13);

                        for (int i_13 = 2; i_13 < 18;i_13 += 1)
                        {
                            var_23 = (arr_23 [i_0] [i_8]);
                            arr_40 [i_0 - 1] [i_11] [i_11] = ((var_13 ? (((((arr_16 [i_13] [i_12] [i_0]) > var_11)))) : (arr_23 [i_0 + 1] [i_0 - 2])));
                            arr_41 [i_11] [i_8] [i_11] [0] = (((1 <= var_11) * var_7));
                        }
                    }
                }
            }
            arr_42 [i_0] [i_8] [i_8] = (-1489992558 % -1133824470421488951);
        }
        arr_43 [i_0] = var_10;
        var_24 ^= (max(var_3, -var_12));
        var_25 = ((((((min(var_8, (arr_33 [16])))) + 2147483647)) << (((((((~1644575564) + 2147483647)) << (((min(var_2, (arr_16 [i_0] [i_0] [i_0]))) - 1695256349)))) - 502908082))));
    }
    var_26 += ((-(min((max(var_6, var_9)), var_0))));
    #pragma endscop
}
