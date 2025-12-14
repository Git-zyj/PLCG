/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((((var_13 ? var_3 : var_13)) ? (~var_11) : 101)))))));
    var_17 = (~var_2);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((((min(((min((-32767 - 1), (arr_1 [i_0] [i_0])))), (((-127 - 1) ? (arr_0 [14]) : var_14))))) ? var_6 : (((arr_0 [i_0]) ? ((-48 ? var_5 : var_0)) : 5883562757785298033))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 = ((((arr_10 [12] [21] [i_2] [i_2] [i_2]) ? var_6 : (((var_1 + 2147483647) << (((arr_7 [i_0] [6] [8] [14]) - 3272527356148406209)))))));
                        arr_11 [i_3] [i_2] [i_1] [6] [i_1] [i_3] = (max((min(((47 ? var_11 : 127)), ((48 ? -23075 : (arr_1 [21] [i_2]))))), (arr_1 [i_0] [i_1])));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, ((min(((-5616 ? 0 : 5616)), ((min(var_12, (arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_2] [i_2 + 1])))))))));
                            var_20 *= ((var_2 ? (((arr_9 [i_0] [i_0] [i_1]) ? 29 : -3560708623394258422)) : (((min(127, 145))))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_3] [i_1] [i_2] [10] [i_5] = (!-5616);
                            arr_19 [i_0] [5] [19] [i_3] [20] = ((((-var_14 ? (arr_6 [i_0] [i_0]) : (arr_14 [i_5] [i_5] [i_3] [i_3] [i_2] [1] [i_0])))) ? 33 : ((((!(arr_5 [i_0] [i_1] [22]))) ? (((2075 ? 127 : 82))) : (((arr_5 [i_0] [i_0] [i_0]) ? var_6 : 1)))));
                            var_21 *= ((-(((((arr_1 [12] [i_5]) ? -8 : -25890))))));
                        }

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_22 += (((arr_20 [2] [i_3] [i_1] [i_3] [i_3]) ? (min((((var_0 ? (arr_3 [22] [19]) : (arr_3 [i_0] [8])))), (((arr_10 [i_0] [i_1] [i_2] [i_3] [19]) ? -48 : (arr_6 [i_2] [9]))))) : var_12));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = ((max((((var_13 ? var_14 : 23075))), 8962999771257754872)));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [0] [i_2] [i_3] [i_7] = (max((min(((-(arr_3 [i_0] [i_0]))), (arr_8 [i_0] [23] [i_3] [i_7]))), ((3801 ^ ((var_6 ? 65535 : -47))))));
                            var_23 = ((((((~3095412269744746261) ? -47 : 30253))) ? (min((arr_3 [i_0] [17]), (-9223372036854775807 - 1))) : var_5));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_24 = (min(var_24, (((min(((min(var_11, (arr_14 [18] [i_8] [i_8] [12] [i_8] [i_8] [i_8])))), (arr_15 [0] [18])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_37 [21] [i_10] = ((-109 ? (arr_27 [i_0]) : ((max(var_12, var_10)))));
                                var_25 = (min(var_25, ((min(82, (((var_11 ? 127 : (arr_29 [3] [i_8] [i_11])))))))));
                            }
                        }
                    }
                    arr_38 [6] = ((!((max(var_2, 127)))));
                }
            }
        }
    }
    var_26 = (max((max((~var_8), var_0)), ((max(var_14, ((max(10044, var_9))))))));

    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_27 = ((((((((127 ? 61952 : 60))) ? (arr_39 [i_12]) : (max(-6992610124521214341, (arr_39 [i_12])))))) ? ((((var_2 ? (arr_40 [4]) : 82)))) : ((min(var_9, (min(-21655, var_12)))))));
        arr_41 [i_12] = -82;
    }
    #pragma endscop
}
