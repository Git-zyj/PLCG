/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-32767 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((0 ? (arr_0 [i_0] [i_0]) : var_6));
                        var_20 = ((var_7 ? var_0 : (((127 % (arr_5 [11] [i_1] [i_1] [i_1]))))));
                        var_21 = (max(var_21, (((-var_10 ? var_10 : 0)))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 = (max(var_0, (arr_4 [1] [i_1] [i_4])));
                        var_23 += ((((max(var_0, 8649))) ? 0 : (((0 || -67962090) ? (arr_5 [i_0] [i_1] [i_2] [i_4]) : (var_10 ^ 434679113)))));
                        var_24 = (min(((((min(var_5, 13829))) ? (min(var_8, 18446744073709551615)) : -6213)), var_6));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_25 = (((((var_5 ? var_16 : var_8))) ? var_1 : (((!(arr_14 [i_0] [i_1] [i_0] [i_1]))))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_26 = (((((arr_8 [i_0] [i_0]) & var_14)) & (((arr_8 [i_0] [i_0]) - (arr_8 [i_5] [i_1])))));
                            arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_6] = (!((max(var_4, var_5))));
                            var_27 += ((((var_2 ? 2249989081 : -6214)) % var_14));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] [i_5] [i_6] = (~var_3);
                        }
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_28 = 0;
                            var_29 = (min((((0 ? var_8 : 29))), ((max(var_10, var_3)))));
                        }
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            var_30 = (max(var_30, (((~(max(0, 2859337571)))))));
                            var_31 += ((((331296529 ? 1 : var_17))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_32 = var_9;
                            var_33 = (max((8653 % var_10), 8649));
                            var_34 = var_17;
                        }
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_35 = (((((var_8 || 2581238824) || (((var_16 ? var_9 : 35305))))) ? (max(var_3, ((1 ? 9 : var_14)))) : (arr_5 [i_0] [i_0] [3] [i_0])));

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_36 = (var_9 ? (18446744073709551612 & var_16) : (32767 % var_9));
                            var_37 = var_15;
                            var_38 ^= (~var_8);
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_39 = ((!(arr_14 [i_0] [i_0] [i_0] [i_1])));
                            var_40 = (((((-(arr_24 [i_0] [i_1] [i_1] [i_2] [i_10] [11] [i_1])))) || ((min(1, (var_2 & var_18))))));
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_12] [13] [i_2] = 4;
                            var_41 = ((((max((((var_14 % (arr_5 [i_0] [5] [i_10] [19])))), ((1 ? 3 : 904229272))))) || ((((~var_10) ? (arr_17 [i_0] [i_1] [i_1] [i_10] [i_12]) : (!18446744073709551615))))));
                            arr_36 [9] [i_1] [i_2] [i_1] [i_0] = var_18;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_42 = (min(var_42, (!-904229280)));
                            var_43 = -1675111347;
                        }
                        var_44 = var_2;
                        var_45 = (((((((min(var_16, (arr_31 [0] [i_10] [17] [i_0] [i_0] [i_0])))) ? ((max(892936248, 0))) : (max(var_0, var_4))))) - (min((4789 & 1), ((var_7 ? var_6 : var_12))))));
                    }
                    var_46 = (min(var_46, 4610560118520545280));
                }
            }
        }
    }
    #pragma endscop
}
