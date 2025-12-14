/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_16 &= ((var_14 < (arr_0 [i_1])));
            var_17 = (var_13 ^ -1079948766);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 &= (1469891642 ? 25071 : (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                        var_19 = 18446744073709551590;
                        var_20 = (1469891646 / -1587124530);
                    }
                }
            }
            var_21 -= (~0);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_22 = 30;
                            var_23 = (-(arr_5 [i_0] [i_0] [i_0]));
                            var_24 ^= (((arr_20 [i_1] [i_5] [i_1] [i_1]) <= 1469891650));
                            var_25 = ((((234881024 ? 29 : var_8)) ^ 48752));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_26 = (max(var_26, ((((((3 ? -828121197 : -1036794147))) || 21)))));
                            var_27 ^= 234881025;
                            var_28 = (min(var_28, (~23432)));
                            arr_31 [0] [0] [i_7] [i_9 + 3] [0] [0] &= (~18446744073709551585);
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((!((((arr_18 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0]) ? 17658 : var_7))))))));
                            arr_40 [i_0] [i_7] [i_7] [i_12] [i_0] = ((-((var_13 ? -1469891653 : 37919562))));
                            var_30 = (((-(arr_26 [i_0] [i_0] [i_11]))));
                            var_31 |= ((var_0 - (arr_33 [i_11])));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_32 ^= 25;
                    var_33 = ((!(arr_36 [i_0] [i_7] [i_14])));
                    var_34 = (~14);
                }
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    var_35 = ((32525 ? -1142697103 : 18446744073709551573));
                    var_36 = (-234881001 == 14);
                    var_37 += (~var_8);
                    arr_48 [i_0] [i_0] [i_0] [i_0] = (!14);
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        var_38 = (var_7 == -1);
                        var_39 = (!23);
                        var_40 += (((~-1969750845) | (var_6 ^ 1142697105)));
                    }
                    arr_55 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = (arr_17 [i_0] [i_7] [i_7] [i_16] [i_16]);
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_41 |= (((arr_41 [i_18]) / (2147483392 - 3508720165007416449)));
                            var_42 ^= 1;
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_41 [i_0])));
                        }
                    }
                }
            }
        }
        var_43 = (max(var_43, ((((arr_58 [i_0] [16] [i_0] [16] [i_0] [i_0]) ? (arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 845931474)))));
        var_44 += (41 == 34307);
    }
    var_45 -= ((~(min((-9177737238819887649 <= 234881022), 11625047881217831133))));
    #pragma endscop
}
