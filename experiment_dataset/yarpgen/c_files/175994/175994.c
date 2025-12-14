/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 *= (min((((!(((~(arr_0 [i_0]))))))), (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                            {
                                arr_12 [i_4 + 1] [i_4] [1] [i_4] [i_0] = -32756;
                                var_15 = (max(var_15, (((((min(1, -75))) ? (0 - -2923958372860627876) : ((max(((min(-6, 0))), 2923958372860627876))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                            {
                                var_16 = (max(var_16, 0));
                                arr_15 [i_5] [i_2] = (((arr_5 [i_0] [6] [i_2]) ? ((39644 ? 16422 : -16447)) : ((37 ? var_9 : -37))));
                                arr_16 [i_0] [i_2] [i_2] [i_2] [i_5] = (((arr_0 [i_5 + 1]) > (arr_11 [i_5 + 1] [i_1 - 1] [i_0] [i_3] [i_3])));
                                var_17 = var_8;
                                var_18 = (arr_13 [i_1] [i_3] [i_1] [1] [i_1] [3] [i_0]);
                            }
                            for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                            {
                                var_19 = (arr_13 [i_0] [i_0] [i_2] [16] [i_2] [i_2] [i_0]);
                                var_20 = (((arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 2]) ? (((arr_1 [i_2 - 1] [i_1 + 1]) ? (arr_17 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]) : (arr_1 [i_2 - 2] [i_1 + 1]))) : (((arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_1 [i_2 + 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 2])))));
                            }

                            for (int i_7 = 1; i_7 < 22;i_7 += 1)
                            {
                                var_21 = (max((~-16422), (min(((max(var_2, var_3))), -var_5))));
                                var_22 -= 1;
                            }
                            for (int i_8 = 1; i_8 < 23;i_8 += 1)
                            {
                                var_23 = var_4;
                                var_24 = (min(var_24, (((((min((arr_19 [i_1 + 1] [i_1 + 2] [i_2 - 1] [i_8 - 1]), (arr_19 [i_1 - 1] [i_1 - 2] [i_2 + 1] [i_8 - 1])))) ? (((var_4 && (((-(arr_10 [i_0] [18] [i_2] [18] [i_8 - 1]))))))) : ((max((arr_23 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 1] [i_2 + 3] [i_2 + 1]), (arr_23 [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1])))))))));
                            }
                            var_25 = (max(var_25, var_13));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_3;
    var_27 = (!var_6);
    var_28 = (min((var_0 + -2111709645), ((var_3 % (~-5905)))));
    #pragma endscop
}
