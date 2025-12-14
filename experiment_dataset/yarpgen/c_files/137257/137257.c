/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((((-1619223877 ? 67 : (arr_1 [i_1] [i_0]))) + ((-1948362492 + ((-66 ? var_6 : (arr_2 [i_1] [i_0])))))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_17 *= var_9;
                    var_18 = (((arr_8 [i_0]) || -1731464911));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_19 = (((((-8385621975440237239 & (arr_12 [i_0] [i_1] [i_3])))) ? -66 : var_11));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_20 = (((arr_15 [i_0] [i_0] [i_0] [i_0] [13]) && (arr_15 [i_0] [i_1] [13] [13] [i_1])));
                                arr_17 [i_0] [i_0] [i_3] [i_4] [i_4] = (((arr_7 [i_5] [8] [i_3]) ? (arr_7 [i_0] [i_3] [i_3]) : ((((arr_7 [i_3] [13] [i_0]) ? var_4 : -1948362508)))));
                            }
                        }
                    }
                    var_21 = arr_15 [i_0] [i_0] [0] [i_0] [10];
                }
                var_22 = min(var_9, var_8);

                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_23 ^= ((~((0 ? (arr_13 [i_0] [8] [i_1] [i_6 - 1] [i_1] [i_0]) : (17333017226420997107 % 67)))));
                    var_24 = (min((var_0 || var_9), (--28390)));
                    arr_21 [i_0] = (max((min(288230371856744448, var_14)), ((max(32625, (!-288230371856744448))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_25 = var_4;
                            arr_26 [i_1] = (((var_3 ? (arr_12 [i_0] [i_1] [i_8]) : (arr_16 [i_1] [i_7] [i_1] [i_1]))));
                            var_26 = (min(var_26, ((((((1019010165 ? -19708 : 558558319))) == ((2147483647 ? 0 : 2524978533)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            arr_40 [i_9] = (min((arr_30 [6] [6]), (arr_38 [i_9] [i_9] [i_9] [i_9] [i_9])));
                            var_27 = 181180237;

                            for (int i_13 = 0; i_13 < 25;i_13 += 1)
                            {
                                var_28 *= ((~((~(arr_32 [i_9])))));
                                arr_43 [i_9] [i_10] [i_10] [i_11] [i_13] [i_11] = var_4;
                                var_29 = (((((((arr_42 [20] [20] [i_11] [i_12] [i_11] [20] [i_13]) ? 28361 : var_3)))) % -5654615602655098140));
                            }
                            arr_44 [i_11] [i_12] = (((var_6 ? (((max((arr_35 [i_10] [i_11]), -66)))) : (min(var_13, 10915619477738319827)))));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                arr_52 [12] [i_14] [i_14] [i_14] [i_15] [i_15] [12] = (max((var_9 && 228), 3136807007));
                                var_30 = ((((((arr_35 [i_15] [i_9]) ? (!74) : 70368743129088))) ? var_3 : (((arr_31 [i_16] [i_14] [i_10]) ? (max((arr_47 [i_9] [i_10]), (arr_29 [i_9] [4]))) : ((((arr_34 [i_9] [0] [i_9] [i_9]) + var_5)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                var_31 = var_2;
                                arr_60 [i_9] [i_10] [i_14] [10] [i_18] = (((var_7 ? var_10 : (max(460744736777582547, (arr_42 [i_9] [i_9] [i_14] [i_14] [i_18] [i_14] [i_18]))))));
                                var_32 |= 6421182752850551264;
                                var_33 = (min(var_33, (((!(arr_34 [i_9] [i_10] [i_10] [i_17]))))));
                            }
                        }
                    }
                    arr_61 [i_9] [i_10] [i_14] = (~-699177952438802612);
                }
            }
        }
    }
    #pragma endscop
}
