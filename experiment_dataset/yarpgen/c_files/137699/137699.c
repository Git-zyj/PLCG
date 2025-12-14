/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (max(var_4, ((((((-840316756 ? 1189028811 : 3105938507))) >= var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((arr_8 [i_0] [i_1] [i_3 + 1] [i_4]) ? var_7 : var_4)))));
                                var_14 -= (((var_10 | 0) < (!var_4)));
                                var_15 -= (var_10 >= var_7);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_16 = (arr_2 [5] [i_0]);
                        arr_15 [i_0] [i_0] [0] = var_9;
                        var_17 = (((((var_6 ? var_6 : var_6))) ? (((var_9 ? 0 : (arr_14 [13] [6])))) : (((arr_6 [i_0] [i_0] [i_2]) ? var_8 : var_5))));
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        arr_18 [i_0] [4] [4] [i_2] [i_6] [i_6] = -3105938524;
                        var_18 |= var_7;
                        var_19 = (((((var_7 ? 1 : var_6))) ? (((arr_2 [i_2] [i_1]) ? 3835928119906986102 : (arr_8 [7] [i_1] [i_2] [9]))) : var_2));
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_20 = (min(var_20, (((!var_6) % var_10))));
                    arr_23 [i_7] = ((!(((var_10 + (min(3122814155478550138, 5869323267900021605)))))));
                }
                for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_8] = (min(23012, 774135261));
                    var_21 = 13264;
                }
                for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_22 = 3105938525;
                                var_23 = -3122814155478550139;
                                arr_36 [11] [11] [11] [i_10] [i_10] = ((var_6 ? var_3 : ((var_8 ? (204 < var_9) : 13500220639311192621))));
                                var_24 = -93;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_43 [i_13] [i_1] [i_13] [i_12] [i_13] [i_12] [i_9 + 1] = ((((((arr_6 [i_13] [i_1] [i_9]) * (5869323267900021605 / var_6)))) ? ((~((1189028770 ? 193 : var_6)))) : var_1));
                                arr_44 [i_13] [i_12] [i_9] [3] [i_0] [i_13] = ((var_10 ? ((((min(774135261, var_7))) | 18281247360804855300)) : ((~(min(var_7, var_6))))));
                                arr_45 [i_0] [i_1] [i_0] [i_1] [i_12] [i_13] = (((~var_1) ? (max(var_2, var_0)) : var_11));
                            }
                        }
                    }
                    var_25 = (min(var_25, var_9));
                    var_26 = (max(var_26, ((max((((var_6 && ((((((-32767 - 1) + 2147483647)) >> (-6304584601551370055 + 6304584601551370057))))))), 5869323267900021605)))));
                }
                var_27 = (max(var_3, ((-(var_11 - -495881852)))));
            }
        }
    }
    var_28 = (min((((54775 && (var_3 <= var_11)))), (max(((-3122814155478550141 ? var_3 : var_10)), var_5))));

    /* vectorizable */
    for (int i_14 = 3; i_14 < 10;i_14 += 1)
    {
        var_29 = ((((var_2 ? var_10 : var_6))) ? ((((var_10 >= (arr_27 [9] [i_14] [i_14] [i_14]))))) : 15);
        arr_48 [i_14] = (arr_21 [7]);
        arr_49 [i_14 - 1] [i_14] = (~495881852);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {

        for (int i_16 = 4; i_16 < 20;i_16 += 1)
        {
            var_30 = -var_5;
            arr_54 [i_15] [i_15] = ((var_7 / (arr_53 [i_15] [i_15])));
        }
        var_31 = ((var_9 ? var_1 : var_2));
    }
    #pragma endscop
}
