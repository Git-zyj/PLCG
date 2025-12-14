/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((min((var_7 * 1), (((var_19 ? var_1 : var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((max(var_11, ((max((arr_3 [i_1] [i_1]), var_2))))) >> ((((((var_18 ? 129 : var_16)) | (arr_3 [i_1] [i_1]))) - 112)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_21 -= ((((((arr_0 [i_0]) ? var_4 : var_19))) ? (((arr_4 [i_0] [i_1] [i_1]) & var_6)) : (arr_4 [i_2] [i_1] [i_2])));
                    arr_8 [i_1] = ((var_17 ? var_4 : var_11));
                }
            }
        }
    }
    var_22 = -4782519053887468487;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] = ((((arr_15 [i_5]) * (arr_18 [i_3] [i_3] [i_5] [i_7]))) <= (((!(arr_18 [i_6] [i_3] [i_4] [i_3])))));
                                var_23 = (((~var_16) ? ((33 ? (arr_11 [i_4] [i_4]) : -29)) : (((arr_11 [i_5] [i_4]) ? (arr_4 [i_7] [i_6] [i_5]) : var_3))));
                                var_24 = (arr_2 [i_3] [i_6] [i_3]);
                                var_25 = var_7;
                            }
                        }
                    }
                }
                arr_26 [i_3] [i_4] [6] = (arr_18 [i_3] [i_4] [i_3] [15]);
                var_26 = (max(var_26, ((((0 ? 217 : var_5))))));
            }
        }
    }
    var_27 = var_1;
    #pragma endscop
}
