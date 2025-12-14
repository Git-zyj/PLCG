/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min((((min(var_4, var_6)))), var_4));
    var_17 &= (var_13 ? var_6 : ((65535 ? (~var_12) : 2493471602)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(((-(min((arr_4 [i_0] [i_1]), var_6)))), (var_0 && var_8)));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [13] [13] [i_1] = 4294967274;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [1] [i_1] [i_2 + 1] [i_3] = ((((1801495691 ? 177 : 240)) >> (((arr_4 [i_2 + 1] [i_0 + 1]) - 879951500))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_2] [i_4] = 226884403;
                            arr_17 [1] [i_1] [i_2] [i_3] [i_4] [i_3] = (~1);
                            var_18 = ((var_14 ? (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_4] [i_4]) : (arr_15 [i_0] [i_2 + 2] [i_2] [4] [i_0 - 1] [i_3 + 1])));
                            arr_18 [i_0] [5] [5] [i_2] [i_2] [i_4] = (((arr_4 [i_0] [i_3 - 1]) ? -1043109803842407973 : (((var_14 ? (arr_15 [2] [i_1] [i_2] [i_2] [i_4] [i_1]) : (arr_10 [i_0 - 1] [i_1] [i_1] [i_4]))))));
                        }

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = ((1 ? var_3 : (43812 - 4079681239616378579)));
                            arr_23 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_5] |= (((arr_14 [i_0] [i_3 + 1] [i_2 + 2]) ? (arr_14 [i_0] [i_3 - 1] [i_2]) : (arr_14 [i_0] [i_3 + 1] [i_0])));
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_19 = var_11;
                    var_20 = (((arr_6 [i_0] [i_1] [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2]) : (var_5 | var_0)));
                    var_21 += (arr_24 [i_0]);
                    var_22 = ((!(arr_14 [i_0 + 1] [i_0 - 2] [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_23 = (((arr_25 [i_0] [i_1] [i_1] [i_7]) & var_0));

                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] = ((((((arr_4 [i_0] [i_1]) > (arr_21 [i_0] [i_0] [i_7] [i_7] [i_8])))) >> ((((var_14 ? (arr_4 [i_0] [i_1]) : var_6)) - 879951498))));
                        arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] = (arr_1 [i_0]);
                    }
                    arr_33 [0] [i_1] [1] = var_5;
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_43 [6] [3] [i_1] [8] [i_1] [i_10] [i_11] = ((((((arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) ? var_8 : (arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2])))) ? (((((arr_12 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 1]) == var_12)))) : (((arr_12 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 1]) ? (arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) : (arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2])))));
                                var_24 += (max((min(6265384084115977212, 60)), (((4294967292 ? 3968 : 242)))));
                                arr_44 [i_0] [i_0] [i_11] = (((21723 ? ((227 ? 1801495702 : 233442276)) : (((max((-127 - 1), 41669)))))));
                                arr_45 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_10] [13] [i_10] = (((-((((arr_28 [i_0] [i_1] [i_1] [i_0]) || (arr_0 [5])))))));
                            }
                        }
                    }
                    var_25 = (~-1043109803842407997);
                }
                var_26 = (max(var_26, 243));
            }
        }
    }
    #pragma endscop
}
