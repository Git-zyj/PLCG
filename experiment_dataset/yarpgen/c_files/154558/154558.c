/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_16 = (((arr_2 [i_4 + 1]) + (arr_9 [i_4 + 1] [i_3] [i_1] [i_0])));
                            arr_11 [i_0] [i_3] [i_2 - 2] [i_2 + 1] [i_1] [i_0] = (((arr_0 [i_0 - 1]) ? (-905049880998597854 <= var_1) : var_7));
                            arr_12 [i_0] [i_1] [8] = 1;
                        }
                        arr_13 [i_0] [i_2] [i_1] [i_0] = (arr_3 [i_0]);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_17 = -905049880998597854;
                            arr_17 [i_0] [3] [7] [5] [i_0] [6] = (arr_1 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0 - 3] [i_0] [i_0] [3] = (arr_19 [i_2 - 2] [i_2 - 1] [i_0] [7]);
                        arr_21 [i_0] [i_0 - 1] [i_1] [i_2 - 2] [4] [i_0] = ((var_12 ? (arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : (arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 3])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_18 -= (max(((((((var_5 ? var_3 : 0))) ? (arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]) : (arr_23 [i_2])))), (min((~var_5), (min((arr_4 [i_0] [i_1] [i_2]), 1))))));
                        var_19 = (arr_22 [4] [i_2]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [2] = 905049880998597853;
                        var_20 = 905049880998597856;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_2] [i_8] [i_0] = ((!(arr_5 [i_2 - 1] [i_0 - 2])));
                            arr_34 [i_9] [i_0] [i_2] [i_0] [i_0] = (((arr_15 [i_0 - 2] [i_0] [i_2] [8] [i_9]) / -905049880998597854));
                            var_21 = ((!(arr_24 [i_0] [i_0] [i_0] [i_0])));
                            arr_35 [i_0] [i_0] = (((52 ? var_4 : -3135)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                arr_42 [i_0] [i_1] [i_2] = ((((((!(arr_16 [i_0] [i_0 - 1] [i_1] [0] [i_10 + 1] [9] [i_11]))))) & 9223371899415822336));
                                arr_43 [i_11] [i_0] [i_1] = (((arr_10 [i_0] [i_0] [i_2] [1] [0] [6] [i_11]) * ((max(var_0, (arr_26 [i_0] [i_2 - 1]))))));
                                var_22 = (min(var_22, (((((max((arr_36 [i_0 - 2] [i_0 - 1]), (arr_36 [i_0 - 1] [i_0 - 1])))) ? (((!(arr_36 [i_0 - 2] [i_0 - 3])))) : ((max((arr_36 [i_0 - 2] [i_0 - 2]), (arr_36 [i_0 - 1] [i_0 + 1])))))))));
                                arr_44 [i_0] [i_0] [i_2] [i_10 - 1] [i_11] = (-2147483647 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            {
                arr_49 [i_12] [i_12] = (~4261566943045286307);
                arr_50 [i_12] [i_12] = (!var_2);
            }
        }
    }
    var_23 = (max(var_7, var_10));
    var_24 = var_13;
    var_25 = var_15;
    #pragma endscop
}
