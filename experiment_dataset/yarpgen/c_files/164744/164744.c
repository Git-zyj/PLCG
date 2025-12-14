/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max((((var_10 ? var_16 : var_5))), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((var_8 == var_3) ? (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 3]) : var_5)) : var_17)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] = ((min(var_17, var_13)));
                                var_22 = (min(var_22, (min((((~1) ? 1 : var_4)), (arr_6 [i_0])))));
                                var_23 = ((min(8133218793547924319, -32716)) == ((((-32767 - 1) ? -12233 : 112))));
                                var_24 = (arr_12 [i_0 - 2] [i_1] [i_4] [i_2] [9]);
                            }
                        }
                    }
                }
                arr_15 [i_1] = (min((arr_11 [i_1] [i_0 + 1] [i_0] [i_0 - 3] [i_0 + 2]), (min((arr_0 [i_0 + 2]), 109))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_25 = (min((((max(var_8, (arr_0 [i_0]))))), (min(-1, (arr_4 [i_0] [i_0 + 1] [i_0])))));
                                var_26 |= (((((((arr_10 [i_5] [i_5] [i_5] [6] [i_5] [i_5]) ? (arr_1 [i_0]) : -1)))) + ((max(((max((arr_19 [i_0]), var_11))), -4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_16;
    #pragma endscop
}
