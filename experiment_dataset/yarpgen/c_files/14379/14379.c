/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-7752969370422571692 ? (65535 + var_3) : -0)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 *= (((!1) ? ((-0 ? 45639 : var_4)) : (((-(1 / -316735626))))));
        var_16 = (min(var_16, ((min(var_11, ((((19897 || var_6) ? 1 : (45639 || 1)))))))));
        var_17 = (((((((min(45639, 0)))) & ((4175454601 & (-2147483647 - 1))))) ^ ((~((119512695 ? var_11 : var_0))))));
        var_18 *= 45639;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 *= -4294967295;
        var_20 *= (max(var_3, var_6));
        var_21 *= (((~-16784) >= (~73)));
        arr_4 [14] [i_1] = (0 + (-9223372036854775807 - 1));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_22 *= (~19897);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 *= var_1;
                    var_24 *= ((var_7 || (var_8 || 65535)));
                    var_25 *= var_4;

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_26 *= var_13;
                        var_27 = (max(var_27, 0));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_3 + 2] [i_6] = (((16784 ? 156 : 119512694)));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_7] [i_6] [i_4 - 2] [i_3] [i_2] = (45934 >= var_5);
                            arr_25 [3] [i_7] [4] [i_4] [i_3] [i_3 - 2] [1] = 56;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, var_1));
                            var_29 *= ((~(~0)));
                        }

                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            arr_30 [5] [1] [i_3] = (((~15150) >= 0));
                            var_30 = (19896 >= 0);
                            arr_31 [i_2] [i_3 + 2] [i_4] [12] [12] [i_9] = ((0 ? 18446744073709551615 : 65535));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_31 = -2008497622;
                            var_32 *= 0;
                            var_33 = var_7;
                        }
                        var_34 = (!45639);
                    }
                }
            }
        }
    }
    var_35 = (var_12 >= var_6);
    #pragma endscop
}
