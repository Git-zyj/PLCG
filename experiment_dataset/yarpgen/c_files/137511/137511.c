/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_16 = ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3]))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_6 [0] &= (((!var_9) > (max((max((arr_1 [i_0]), var_3)), (arr_5 [2])))));
                    var_17 = (((!(arr_3 [i_2] [i_1 + 3]))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_18 += (max(-var_13, (((-((var_9 ? var_9 : var_10)))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_12 [i_0] = (1 == 1478299788);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_3] [i_0] [i_5] = var_3;
                            arr_16 [i_0] [i_1] [i_1] [i_1] = (((arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 2]) ? var_3 : (arr_4 [i_1 + 1] [i_0] [i_1 - 1] [i_1 + 1])));
                        }
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] = 0;
                            var_19 = (min(var_19, (5411 || var_10)));
                            arr_21 [i_6] [8] [i_6] [i_4] [i_4] &= var_11;
                            var_20 = (max(var_20, ((((arr_0 [i_0 - 1] [i_1 - 1]) ? (arr_0 [i_0 - 3] [i_1 + 2]) : (arr_1 [i_0 - 2]))))));
                        }
                    }

                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        arr_24 [6] [i_0] [i_0] [i_7] [i_0] [i_0] = ((!(!var_14)));
                        var_21 = (max(var_21, 5031783982478761739));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        var_22 &= (8191 - 18446744073709551610);
                        var_23 -= var_1;

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_3] [i_8] [i_0] = ((-(arr_28 [i_0] [i_1] [i_3] [i_0 - 1] [i_8 + 1])));
                            arr_30 [i_0] [i_1] [i_3] [i_8] [i_0] = var_5;
                            arr_31 [i_0] [i_1] [i_3] [i_8] [0] |= (((arr_9 [i_1 + 1] [i_1 + 1]) ? var_5 : var_6));
                        }
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_24 *= ((~((0 ? ((0 ? 16 : 1)) : -106))));
                        var_25 ^= (max(11, (max((-2147483647 - 1), 0))));

                        for (int i_11 = 2; i_11 < 6;i_11 += 1)
                        {
                            arr_36 [i_10] [i_10] [i_3] [6] [i_11] &= (min(-112, 16543429093764580193));
                            arr_37 [i_0] [i_0] [i_3] [i_10] = (max((max((2780621144 * var_1), ((var_15 ? var_2 : 0)))), ((-var_1 ? 134217727 : (var_9 / 2147483647)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 6;i_12 += 1)
                        {
                            var_26 = (min(var_26, var_15));
                            var_27 = (((((161 ? var_6 : var_13))) ? (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (var_14 - 0)));
                            var_28 += ((arr_22 [i_0 - 3] [7] [7] [i_1 - 1] [i_12]) - var_12);
                            var_29 = (((arr_35 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 3]) ? var_7 : (arr_35 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1])));
                        }
                        var_30 = ((((-(arr_2 [i_1 + 3] [i_10] [i_10]))) & ((var_7 ? (arr_2 [i_1 + 1] [i_1 + 1] [i_1]) : var_4))));
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_45 [i_0] [i_13] [i_3] [i_1] [i_0] [i_0] = max(((((((arr_26 [i_0] [i_0] [i_3] [i_13] [i_14]) >= var_1))) % 240)), (~var_5));
                            arr_46 [i_0] [7] [i_3] [i_3] = (((((7568906782487185898 ^ 1) ? 12 : (188 & 26575)))) ? 68 : (arr_8 [i_0]));
                            var_31 = (min(var_31, (!-var_8)));
                            arr_47 [i_0] [i_14] [i_1] [i_0] = (var_5 & var_2);
                            arr_48 [i_0] [i_1] [i_3] [i_0] [i_0] = ((56 ? (((arr_10 [i_0 + 1]) ? (arr_27 [i_0 - 2] [i_1] [i_1] [i_1] [i_1 + 1] [i_3] [i_13]) : (arr_27 [i_0 + 1] [i_0] [i_1] [i_1] [i_1 + 2] [i_3] [i_14]))) : (((~var_8) ? ((9 << (319280603 - 319280592))) : (arr_33 [i_1 + 2])))));
                        }

                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            arr_53 [i_0] [i_3] [i_0] = ((-var_14 + (arr_43 [i_0] [i_1] [i_1] [i_1 - 1] [i_0 - 3])));
                            arr_54 [i_1] [i_3] [i_0] [3] = (min((((var_14 / var_7) + var_11)), (((1 ? 59399 : -28570)))));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            arr_58 [i_0] [i_16] [i_3] [i_3] [i_3] &= -var_2;
                            var_32 = var_1;
                            var_33 = -2147483647;
                            var_34 = (arr_19 [i_0 + 1]);
                        }
                        arr_59 [i_0] = var_14;
                        var_35 = (+(((arr_44 [i_13] [i_1] [i_3] [i_13]) ? (arr_44 [i_3] [i_3] [i_3] [i_3]) : var_12)));
                        arr_60 [i_0] = (~var_4);
                    }
                }
            }
        }
    }
    var_36 = ((((((((var_10 ? var_9 : var_14))) ? ((var_5 ? var_9 : 4)) : 0))) ? var_8 : var_2));
    #pragma endscop
}
