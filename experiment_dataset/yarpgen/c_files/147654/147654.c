/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_14 = (max(var_14, -var_8));
                        var_15 = ((~((-1534416903 ? (arr_5 [i_2 + 1] [i_1] [i_0]) : var_2))));
                        var_16 = (min(var_16, (((11 & (!19))))));
                        var_17 -= 397404843;
                        var_18 = (min(var_18, ((((~var_0) * (arr_2 [i_2 - 1] [i_2 + 1]))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((((((((~17) + 2147483647)) << (((arr_14 [i_4] [i_1] [i_1] [1]) - 64))))) ? (((255 ? 67108832 : (arr_2 [i_0] [i_0])))) : ((var_13 ? var_13 : 661002309))));

                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (max(((min((arr_8 [i_5] [i_5 - 1] [i_2 - 1]), var_11))), (max(((var_3 / (arr_4 [i_5] [i_2] [i_1]))), (arr_5 [i_1] [i_1] [i_4])))));
                            var_21 = (min(var_21, (arr_1 [i_0])));
                            var_22 = 23454;
                            arr_18 [i_2] [i_1] = var_2;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (arr_10 [i_2] [0] [i_1] [i_2]);
                            var_24 = (max(var_24, (((var_2 == ((~(arr_3 [i_0]))))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 = -9016362434422983486;
                            arr_25 [i_0] [i_4] [i_4] [i_2] [i_0] [i_0] [i_0] = (-(max(1077928103, 67108832)));
                            var_26 = (arr_21 [i_0] [i_1] [i_2] [i_4] [i_7]);
                            var_27 = (arr_16 [i_0] [i_0] [i_0] [i_2] [1] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_30 [i_0] [7] [i_2] [i_2] [i_2] [i_4] [i_2] = var_11;
                            var_28 = min(((((~(arr_15 [i_2]))))), 1356744780);
                            var_29 = var_7;
                            arr_31 [i_2] [i_2] [i_8] = (((arr_19 [i_2 - 1] [i_2 - 1] [i_2]) | ((var_10 * (arr_19 [i_2 - 1] [i_2 + 1] [i_2])))));
                        }

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_34 [i_2] [i_1] [i_1] [i_1] [9] [i_1] = var_2;
                            var_30 = (((!(arr_14 [i_2 - 1] [i_9] [i_9] [i_9]))) ? (((var_13 ? (arr_29 [1] [i_2] [i_2 + 1] [i_2] [i_2]) : (arr_6 [i_2] [i_2] [i_2] [i_2 - 1])))) : ((+(((arr_16 [i_1] [i_1] [i_1] [i_2] [i_1] [3]) * 3897562469)))));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_31 = (arr_35 [i_2] [9] [i_4] [i_2] [i_1] [i_1] [i_2]);
                            var_32 = (max((arr_0 [0] [i_2]), var_11));
                            var_33 = (max(var_33, ((((arr_11 [i_4] [i_2 + 1] [i_1] [i_0]) ? 112 : var_6)))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_34 = (((((var_9 ? 15 : var_10))) ? ((~(arr_37 [i_2] [i_2] [i_1] [i_2]))) : (arr_32 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_1])));
                            var_35 = var_6;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_45 [i_2] [i_2] = (min((241 > -10660), (((arr_7 [i_2] [i_2 + 1] [i_2]) >= var_3))));
                            var_36 = (max(var_36, (((((((arr_42 [i_2 - 1] [0] [i_2 + 1] [0] [i_2 + 1]) / var_12))) || ((max((arr_41 [1] [i_11] [i_1] [i_1] [i_0]), var_9))))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_37 = (arr_26 [i_14] [i_2 + 1]);
                            var_38 = ((var_8 >= -3566) ? var_6 : ((var_13 ? (arr_2 [1] [i_0]) : 8)));
                        }
                        arr_48 [i_0] [i_2] [i_1] [i_2] [i_0] = ((var_4 ? (((var_9 ? -9 : 15))) : (((arr_21 [i_2] [i_2] [i_2] [i_0] [i_0]) ^ (var_0 == 6226962932109954996)))));
                    }
                    var_39 = (max((arr_46 [i_2] [i_2 - 1] [i_2 + 1] [6] [i_2 + 1] [i_2 + 1]), (~var_12)));
                    arr_49 [i_2] [i_2] [i_2] [i_0] = ((-4902419639542783817 ? 121 : ((1 + ((100 ? 246 : -1))))));
                }
            }
        }
    }
    var_40 = var_5;
    var_41 = (min(var_41, var_4));
    var_42 = (min(var_42, (!var_2)));
    var_43 = (-2147483647 - 1);
    #pragma endscop
}
