/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((~697560256), var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (((arr_2 [i_0] [i_0]) ? (arr_3 [i_1]) : 1));
                arr_8 [i_1] = ((-(min((min(var_4, 62)), (((-(arr_6 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 -= (((((-(arr_1 [i_2])))) ? -245 : (var_12 + var_3)));
                    var_22 -= -218;
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_13 [i_1] [i_3] = ((((((min(var_8, -18))) ? ((var_8 ? var_19 : var_11)) : ((((arr_6 [i_3]) ? var_11 : 205))))) - (-var_2 - var_1)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_17 [i_4] [i_3] [12] [i_4] = ((var_3 ? (arr_15 [i_3] [i_4] [i_4] [i_3] [i_0]) : (arr_14 [i_0] [i_1] [i_3] [i_4])));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_23 = -61;
                            var_24 = -37861;
                            var_25 = ((-((var_14 ? 56 : var_14))));
                            var_26 -= ((187 ? (arr_9 [i_0] [i_1] [i_3] [i_4]) : var_19));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_27 = ((((((arr_14 [i_0] [i_1] [i_3] [i_4]) ? var_0 : 43))) ? 3840 : -130911996));
                            arr_24 [i_3] [i_1] [i_1] [i_1] [i_6] &= (((arr_23 [i_1] [i_1] [i_1]) + var_16));
                            arr_25 [i_0] [i_0] [i_3] [i_4] [i_0] |= ((!((((arr_4 [i_3]) ? var_7 : var_14)))));
                            arr_26 [i_0] [9] [i_4] [i_6] [8] [i_4] [i_4] = (((arr_10 [i_1] [i_6] [i_3] [i_3]) ? (arr_9 [i_3] [i_3] [i_1] [i_4]) : 18446744073709551615));
                        }
                    }
                    arr_27 [i_1] = (((((-8783237974359429392 / (arr_11 [i_0])))) ? (((arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]) ? (arr_11 [i_3]) : (arr_11 [i_0]))) : (((arr_11 [i_0]) * 1))));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_28 = ((229 + var_3) * (((arr_15 [i_0] [i_7] [i_7] [i_7] [i_7]) ? -71 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_7]))));
                    var_29 = (min(var_29, ((min((var_18 | var_9), (((((min(7485444276275217753, var_13))) && (arr_11 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_30 = ((((var_15 ? var_14 : var_5))));
                                var_31 = 247;
                                var_32 = 6;
                            }
                        }
                    }
                    arr_37 [i_0] [i_0] [i_0] [i_7] = (!var_2);
                    arr_38 [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1])))) ? (((var_3 | (arr_3 [i_7])))) : (~var_10)));
                }

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_33 &= 135;
                        arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] = ((~(((arr_14 [i_1] [i_1] [i_10] [i_0]) ? var_3 : (arr_16 [i_11] [i_0])))));
                        arr_46 [i_11] [i_0] [i_0] [i_0] = ((var_17 ? (var_15 | -0) : ((((arr_3 [i_0]) * (((arr_30 [i_0] [i_11] [i_0]) ? (-127 - 1) : var_15)))))));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_34 = ((!(var_19 >= var_3)));
                            var_35 = 405698518;
                        }
                        arr_51 [i_12] |= ((-((min(var_3, var_18)))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_36 += (-((((65535 ? var_10 : var_14)) - ((min((arr_0 [i_14]), var_2))))));
                                var_37 = (((((var_7 || ((((arr_44 [i_0] [i_1] [i_0] [i_1] [i_15] [i_0]) ? var_10 : (arr_47 [i_1] [i_14] [i_0] [i_14]))))))) - 48));
                                var_38 += ((((min(((min(var_7, 120))), (min(var_4, 688800789))))) ? (((65535 ? ((1189974128 ? -7 : var_2)) : var_3))) : ((var_12 ? (arr_35 [i_0] [i_1] [i_10] [i_14] [i_0] [i_14] [i_15]) : var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = (max(var_39, (14110849898621110853 != var_15)));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            {
                var_40 = ((-((min(var_19, 40)))));
                var_41 = (-((~(arr_30 [i_17] [i_16] [i_17]))));
                arr_62 [i_16] [6] [i_17] = ((((((var_9 ? (arr_40 [18] [18] [i_16]) : var_12)))) ? ((-((var_15 ? var_7 : 255)))) : var_3));
            }
        }
    }
    #pragma endscop
}
