/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_8 [i_0] = (!var_7);
                        arr_9 [i_2] [i_0] [10] [i_2] = ((~(~62)));
                    }

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [1] [i_1] [i_0] [i_0] = ((var_8 ? 209 : var_15));
                        var_16 = 209;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_17 *= var_2;
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] = (~10);
                    }
                    arr_18 [i_0] [i_0] [i_2] [i_2] = 163;

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_18 = arr_16 [i_0] [i_0];
                        arr_21 [i_2] [5] [i_6] [i_0] [i_2] [i_0] = ((((0 ? 0 : 0)) - (arr_12 [1] [8] [13] [14])));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_19 = arr_4 [i_0] [i_7] [i_0];
                                arr_30 [i_0] [i_9] = var_0;
                            }
                        }
                    }
                    var_20 = (((arr_0 [i_0]) <= (arr_0 [i_0])));
                    var_21 -= (~255);

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_22 = (((arr_24 [i_0] [i_1] [i_0 + 1] [i_0 + 1]) ? (arr_19 [i_0] [i_0] [i_1] [i_0] [6] [4]) : var_8));

                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_23 = 203;
                            arr_37 [i_0] [i_1] [i_7] [i_10] [i_0] = var_11;
                            var_24 = (arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1]);
                        }
                        var_25 = ((255 - (arr_13 [i_0] [i_7] [10] [i_7] [i_1] [i_0])));
                        arr_38 [8] [i_1] [i_7] [i_0] = ((var_0 + (arr_1 [i_0 - 3])));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_26 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0]);
                        var_27 = var_10;
                        var_28 = (max(var_28, (arr_20 [i_0 - 2] [i_1] [i_1] [i_12])));
                        arr_42 [i_0] [i_1] [i_1] [i_1] = (!155);
                    }
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        var_29 = (max(var_29, 195));
                        var_30 *= ((!(0 | var_10)));
                        var_31 = var_15;
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_47 [i_0] [i_1] [i_0] [i_14] = var_2;
                        var_32 = 219;
                    }
                }
                arr_48 [i_0] [i_0] = (i_0 % 2 == zero) ? ((max(((255 ? 163 : 183)), ((((var_3 ? var_12 : 255)) >> ((((119 ? (arr_39 [i_0]) : var_2)) - 137))))))) : ((max(((255 ? 163 : 183)), ((((var_3 ? var_12 : 255)) >> ((((((119 ? (arr_39 [i_0]) : var_2)) - 137)) + 146)))))));
            }
        }
    }
    var_33 = 210;
    #pragma endscop
}
