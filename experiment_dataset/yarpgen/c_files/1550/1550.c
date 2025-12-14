/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 &= (max((max((((-970727168 ? -40 : var_5))), (max(-4581130943983459760, var_11)))), ((((var_12 ? 47420 : 32077))))));
                arr_4 [i_0] = ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : var_3))));
                arr_5 [i_1] [i_0] [9] = (max((arr_2 [i_1 + 3] [i_0 - 1]), 20060));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = ((~(max((((arr_7 [i_2]) % -1)), ((max(var_4, var_8)))))));

                for (int i_4 = 4; i_4 < 24;i_4 += 1)
                {
                    arr_14 [i_2] [i_3] [i_2] = var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_3] [i_5 - 3] [i_4] [i_4] [10] [21] [i_3] = (((((max((arr_7 [i_2]), var_2)) >= var_6)) ? ((((6 * 33471) ? 7 : (max(17, 5))))) : (-39 / var_2)));
                                arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] = (max((((!(!-1)))), (max(0, (!4990194221682997378)))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [1] [i_3] = (min((max((((var_9 ? var_9 : (arr_7 [18])))), ((1 ? 4990194221682997400 : 34)))), (((var_4 ? (arr_8 [i_2]) : (arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_6 - 1]))))));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((~1240900327) * (((!((((arr_12 [i_2] [i_3] [i_4] [i_4]) ? (arr_11 [1] [i_4] [i_4]) : -727733786)))))))))));
                }
                arr_24 [i_2 + 3] [24] [i_3] = ((-260065835 ? var_12 : var_1));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_30 [i_2] [i_3] [i_7] [i_3] = (-64 || 5149309826063199759);
                            arr_31 [i_2] [i_3] [i_7] [18] [18] = (min(((~(arr_13 [i_2] [i_8 - 1] [19]))), ((~(min((arr_8 [i_8]), -1))))));
                            var_17 -= ((1 << ((((~(arr_9 [i_2] [12] [i_7]))) - 3865993138587965480))));
                        }
                    }
                }
                var_18 = (max(243, ((((1 ? var_5 : 924190858465618391)) * var_1))));
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
