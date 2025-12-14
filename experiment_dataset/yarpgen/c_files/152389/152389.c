/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = (-1579570976037150062 / 255);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = var_10;
                                var_13 = ((!(arr_1 [i_0 + 2])));
                                arr_14 [i_0] [5] [i_0 + 2] [1] [i_0] = (arr_12 [i_0 + 2] [i_3] [i_4 + 3] [i_4] [i_4 - 1]);
                                var_14 = ((536838144 ? 708618312 : -1));
                                var_15 += (!var_3);
                            }
                        }
                    }
                    var_16 = (1579570976037150048 + 51374);
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {

                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        var_17 = (min(var_17, ((((arr_16 [i_0 + 2] [i_5 + 1] [i_6 + 3]) ? var_9 : (arr_16 [i_0 - 2] [i_5 + 1] [i_6 - 2]))))));
                        var_18 = ((~(((min(var_6, var_2))))));
                        var_19 = ((var_9 ? (min((arr_16 [i_0] [i_1] [i_5 + 3]), var_7)) : ((((var_8 ? var_11 : var_10))))));
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_20 = (min(var_20, ((max(51374, 233)))));
                            var_21 = ((var_0 & ((((((arr_18 [i_5]) | var_10))) ? var_5 : (49839 <= var_10)))));
                            var_22 *= (((var_7 == (arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 3]))));
                        }

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_23 = ((max(10507, 3740189963912557627)) >= (arr_5 [i_0 - 2] [i_1] [i_5]));
                            arr_26 [i_0 + 1] [i_5] [i_0] [i_0 + 3] [i_0 - 3] = ((-((1 ? 1 : 17898869215907752757))));
                            var_24 *= min(((((-1510870756 ? (arr_12 [i_0] [i_0] [i_0 + 3] [3] [i_0]) : -113)))), var_6);
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_5] = var_3;
                        var_25 = (((-32767 - 1) || var_3));
                        var_26 = var_4;
                        var_27 = (~var_7);
                        var_28 |= arr_7 [i_0] [i_0 + 2] [i_0] [8];
                    }
                    for (int i_11 = 4; i_11 < 17;i_11 += 1)
                    {
                        var_29 = (min(var_6, (arr_22 [i_5] [i_1] [i_5 + 2] [i_1] [i_11])));
                        var_30 = (((((-7883 + (arr_10 [i_0] [i_0])))) ? (255 % var_11) : ((max(-1, (arr_12 [i_0] [i_5] [i_0] [i_1] [i_0]))))));
                    }
                    arr_34 [i_0 - 2] [i_1] [i_5] = (((274341036032 | 1) ? var_5 : (((var_2 ? ((var_1 ? var_10 : var_3)) : (!var_5))))));
                }
                for (int i_12 = 2; i_12 < 16;i_12 += 1)
                {
                    arr_37 [i_0] [i_1] [i_12] = ((-((1 ? 16412 : 45218))));
                    var_31 = (arr_13 [i_0] [i_1] [3] [i_12] [i_12]);
                }
                arr_38 [8] [8] = var_2;
                var_32 = ((-((var_4 ? var_10 : -18541))));

                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    arr_41 [i_1] [i_1] [i_1] = (!1);
                    var_33 = (min(var_33, (arr_5 [i_0] [12] [i_0])));
                    var_34 = (((arr_22 [i_1] [i_0 - 3] [i_0] [i_0 - 3] [i_1]) ? -var_9 : (14909852922016664334 < 20241)));
                }
            }
        }
    }
    var_35 = var_2;
    #pragma endscop
}
