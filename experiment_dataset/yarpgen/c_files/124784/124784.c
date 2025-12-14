/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [16] [i_1] [i_3 - 1] [16] = ((~((-4109 - (((arr_10 [i_0] [11] [11] [i_1] [11]) ? var_6 : -4109))))));
                                var_12 = (min(var_12, (((-(arr_2 [i_3 - 1] [i_2 + 1] [i_2 + 1]))))));
                                arr_16 [i_0] [6] [i_1] [i_1] [i_4] = (((arr_14 [i_0] [23] [i_2 - 1] [i_3 - 2] [i_3 - 2] [23]) >= ((((max(-4137, 3062608462)) >> (var_10 - 10786826235516344592))))));
                                arr_17 [i_0] [i_1] [i_2 + 1] = (max(-4137, ((max((arr_13 [i_4] [i_4] [10] [i_1]), (arr_14 [i_0] [6] [6] [6] [i_3 - 2] [i_2 - 1]))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2 + 1] = ((((((arr_8 [i_0] [i_2 - 1] [i_2 + 1] [i_2 - 1]) & ((min(4162, 4294967274)))))) ? (((((max(var_0, (arr_8 [i_0] [9] [17] [18])))) ? ((var_4 ? 0 : var_7)) : 4136))) : ((-(arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = -1182160105;
                                var_14 = (min(var_14, (-8 >= 12)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
