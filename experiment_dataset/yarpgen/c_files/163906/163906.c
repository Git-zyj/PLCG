/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -114;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = var_12;
                var_22 *= (((((-(arr_0 [9] [12])))) ? ((((((var_12 ? 28509 : var_11))) ? (((max(-28509, var_9)))) : ((32767 ? var_12 : var_13))))) : (arr_1 [i_1])));
                var_23 = (var_18 & var_7);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [6] [17] = (((((6245999623409665406 ? (arr_6 [i_4 + 1] [i_3 + 2] [i_1 + 3] [i_0 - 1]) : (arr_1 [i_0 + 2])))) ? -var_10 : (((-(arr_3 [i_2 - 1] [i_4 + 2]))))));
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [7] = ((((max((arr_12 [i_4] [i_4 + 2] [i_2] [i_1 + 1] [i_4] [i_2]), (arr_2 [i_1 + 3])))) ? (((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : var_15)) : ((max(1013053529, var_14)))));
                            }
                        }
                    }
                }
                var_24 = min((((((var_17 ? var_10 : var_19))) ? var_17 : ((-(arr_7 [i_0] [10] [i_1] [10]))))), ((max(-1520234013, -27181))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            {
                var_25 = var_10;
                var_26 = (arr_20 [i_5] [i_6 - 2]);
            }
        }
    }
    var_27 = (max((min(((min(3012752537, var_12))), (~var_6))), var_9));
    #pragma endscop
}
