/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [6] [i_1] [3] = ((0 ? (!-115) : (~32767)));
                            var_12 = ((((min((32767 || var_8), 32766))) ? (arr_2 [5]) : ((min(var_4, 1)))));
                            var_13 &= (arr_5 [i_0] [i_0]);
                        }
                    }
                }
                var_14 = (max(var_14, var_6));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 6;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_15 = ((-37 ? 98 : -2185521667045520070));
                            var_16 = (max(var_16, -33));

                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 8;i_6 += 1)
                            {
                                arr_20 [i_5] [i_1] [i_5] [i_1] [7] [i_5] = (arr_16 [i_4 - 4] [i_0]);
                                var_17 -= ((0 ? (arr_4 [i_0]) : (((arr_17 [i_0] [i_1] [0] [i_4] [i_1] [0]) ? (arr_14 [i_4] [i_1] [i_4]) : var_4))));
                                var_18 -= (arr_1 [i_0]);
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_19 = 248;
                                arr_23 [i_0] [i_0] [i_4] [i_4] [i_5] [i_7] &= 0;
                                var_20 = max(var_11, (min((arr_2 [i_4]), (arr_16 [i_0] [i_1]))));
                                var_21 += (max(var_2, ((max(55, 32767)))));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_22 -= -24;
                                arr_26 [0] [i_1] [0] [i_5] [i_5] [i_1] [0] = ((65535 ? (min(-2038312612, (arr_13 [8] [8] [8]))) : ((0 ? var_9 : (arr_3 [i_1] [i_1])))));
                                var_23 = (max(var_23, var_1));
                            }

                            /* vectorizable */
                            for (int i_9 = 4; i_9 < 9;i_9 += 1)
                            {
                                var_24 = (((arr_14 [i_1] [i_4 + 3] [0]) + (arr_8 [i_1 + 2] [i_4 + 1] [i_1] [i_9 - 4])));
                                var_25 = (3 ^ var_9);
                                arr_29 [i_4] [i_1] [6] [i_4] [7] [i_4 - 4] = (!var_0);
                                arr_30 [i_5] [i_5] [i_1] [i_5] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, (((((max(((65530 ? var_5 : 2185521667045520058)), 0))) ? ((((var_6 ? var_9 : var_1)))) : var_1)))));
    #pragma endscop
}
