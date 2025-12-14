/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 14129;
    var_11 = (80 & 1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [5] = 4294967294;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0 - 1] = (~1339097476897173640);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_17 [6] [i_1] [i_1] = (((arr_4 [i_4 + 2] [i_4 + 2]) - 5564));
                            var_12 = ((var_8 * (arr_5 [i_1] [i_2 - 1])));
                            var_13 = (((((var_8 << (var_6 - 5781210465955729614)))) ? ((9223372036854775805 >> (var_7 - 3977769845448353645))) : var_9));
                            arr_18 [i_4] [i_2] [i_3] [i_2] [i_1] [i_0] = var_9;
                            var_14 |= var_6;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_15 *= ((3044676523 + (arr_8 [10] [i_0 - 1] [i_0 - 1] [i_0])));
                        arr_23 [i_0] [i_1] [i_5] [i_5] = var_2;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_16 = (min(var_16, (((!(1048575 / -9223372036854775806))))));
                        var_17 = (max(var_17, (((~((var_4 ? var_5 : var_6)))))));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_18 &= (((var_5 ^ (arr_14 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9]))));
                            var_19 = ((858592999 >> (17107646596812377976 - 17107646596812377948)));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_20 = -3125376011;
                            var_21 = var_6;
                            arr_34 [i_0] [6] [i_7] [i_0] [i_0] = ((!(arr_4 [i_7 + 1] [i_0 + 2])));
                            var_22 = ((((((8 == (arr_12 [i_10] [i_1] [i_0 + 1]))))) * ((var_0 / (arr_15 [i_7])))));
                            arr_35 [i_0 + 2] [i_1] [i_1] [i_7] [i_8] [i_10] [i_10] = (arr_14 [0] [i_1] [i_1] [12] [i_10] [14]);
                        }
                        var_23 ^= (arr_24 [i_0] [i_0 + 2]);
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_24 = (((arr_33 [i_11] [i_11]) || ((min((arr_20 [i_11] [i_11] [i_11]), 3862885051)))));
        var_25 |= (((59992 | (arr_6 [i_11]))));
        var_26 = (max(var_26, (max((((min(9223372036854775804, 26601)) * var_4)), var_4))));
        var_27 = max((min((32758 / 980005219), (max(var_0, (arr_3 [i_11]))))), ((-15 ? 168 : 0)));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_28 = var_6;
        var_29 = (((34351349760 != -32758) ? (arr_38 [i_12]) : var_2));
    }
    #pragma endscop
}
