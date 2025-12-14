/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((+((max((arr_1 [i_2] [i_3]), 1099)))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] |= 22;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_2] [i_0] [2] [i_2] |= (max(23, 22));
                                arr_22 [2] [i_5] [i_2] [i_5] [i_0] = ((min((arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] [i_0]), var_4)));
                                var_15 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_1]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_16 *= (((((var_3 >> (-19804 + 19826)))) ? 127 : var_8));
                    var_17 = var_1;
                    var_18 = ((1099 >> (127 - 115)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_19 = (((-19804 ? 100 : (arr_5 [i_1] [i_7] [i_8]))));
                                arr_30 [i_7] = ((-((164 ? -23 : 91))));
                            }
                        }
                    }
                    var_20 = var_10;
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_34 [i_0] [14] [i_1] [i_10] = var_12;
                    var_21 = (max(var_6, var_2));
                    arr_35 [i_0] [i_1] [i_10] = var_12;
                    arr_36 [i_0] [i_0] |= (((arr_31 [i_0] [i_1] [i_1] [i_10]) ? (!var_8) : (arr_31 [i_0] [i_0] [i_1] [i_10])));
                    arr_37 [i_1] [i_1] [i_1] = ((~(((arr_33 [i_0] [2] [i_10]) | (arr_33 [i_0] [i_1] [i_0])))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_22 = (max(var_22, (((((~90) + 2147483647)) << (((((arr_2 [i_0] [i_1] [i_12]) + 89)) - 26))))));
                        var_23 = var_10;
                        arr_44 [i_1] [i_1] [6] |= (~(var_7 ^ 23));
                        var_24 = (max(var_24, (1793930823 <= 5276633426914326763)));

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_11] = ((!(arr_31 [i_0] [i_1] [i_12] [i_0])));
                            var_25 -= (((arr_11 [i_0] [i_1] [i_11] [i_1]) ? var_10 : (arr_33 [i_13] [i_12] [i_11])));
                            var_26 = (max(var_26, ((((arr_41 [i_13] [0] [i_11] [0] [i_0]) | (152 || 1099))))));
                        }
                    }
                    var_27 ^= (87 % 91);
                }
                arr_48 [i_0] [i_1] |= (((((((((arr_16 [i_0] [4] [i_0] [14] [i_1]) ? 19814 : var_2))) ? (arr_3 [i_0] [i_1]) : (max(var_5, 87))))) ? 8070450532247928832 : (arr_45 [18] [i_1])));
            }
        }
    }
    var_28 = (6 - var_1);
    var_29 |= (var_1 != var_7);
    var_30 |= var_5;
    #pragma endscop
}
