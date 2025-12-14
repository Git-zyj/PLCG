/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 0));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(var_3, ((-((min(var_7, 54456)))))));
        arr_3 [i_0] = (((min((max(var_13, var_9)), ((var_2 ? 18446744073709551615 : var_1)))) % (var_14 & var_3)));
        arr_4 [i_0] = 1292384866;
        var_19 = ((~(((min(15, var_16))))));
        arr_5 [i_0] = (((((var_8 >> (48 - 28))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, ((((((!var_0) ? (((var_9 ? var_12 : var_0))) : (var_13 | 4194303))) >> (33889 - 33874))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_3] [i_1] = (max((((min(5315582508004228749, var_9)) - 0)), var_1));
                        arr_18 [i_1] [i_1] [i_2] [i_3] [i_4] = (((var_17 ^ var_0) & (~7842)));
                        arr_19 [i_1] [i_1] [i_3] [i_1] = var_14;
                        var_21 = var_6;
                        var_22 = 1194627438;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_3] [i_5] = var_0;
                        var_23 = (min(var_23, (((var_6 >= ((((var_15 - -6151848835963675642) ? (124 % -1380506742) : (min(1057249026, 31))))))))));
                        var_24 ^= var_10;
                        arr_24 [i_1] [i_1] [i_1] = var_7;
                        arr_25 [i_1] [i_1] [i_1] = (51653 >> ((1023 ? var_2 : (min(1, var_6)))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = (max(var_25, (4294967280 | 1303965097550928602)));
                        var_26 = (min(var_26, var_10));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_27 = 624284541;
                                arr_34 [i_2] [i_1] = var_15;
                                var_28 = var_11;
                                arr_35 [i_1] [i_2] [i_1] [i_2] [9] [i_1] = (min((((-22737 != -1000384809) & (0 - -8192))), var_3));
                            }
                        }
                    }
                }
            }
        }
        var_29 ^= 480515419;
        var_30 |= ((!(1 + -1292384866)));
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
    {
        arr_40 [i_9] = (var_0 | var_16);
        var_31 = (min(var_31, -22737));
        var_32 = 8014685338093397570;
        var_33 = 3895822852;
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_34 = ((((((18446744073709551615 & var_13) || 4739404347949359588))) - ((min(22736, (!var_6))))));
        arr_45 [i_10] = (min((((var_8 ? 65280 : 201))), (max(((min(var_15, var_5))), (var_3 * var_13)))));
        var_35 = (((var_3 | 15) | (max(((min(823187901, -30910))), 0))));
        arr_46 [i_10] = (((min(((min(var_16, var_12))), (max(var_11, 1526552504)))) | (var_17 && -333493309)));
    }
    #pragma endscop
}
