/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_5));
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 -= ((((min(var_4, (min(65207, (arr_5 [i_4])))))) ? var_10 : (arr_8 [i_0] [i_0] [i_0])));
                                var_17 = var_11;
                                var_18 = (max(var_18, (((((((((max(88, var_2)))) | ((var_2 ? var_9 : var_2))))) ? (min((max(35, var_5)), (211 & var_2))) : (arr_6 [i_0] [i_1]))))));
                                arr_14 [8] [8] [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = ((((((arr_13 [i_0] [i_2 + 1] [i_4] [5] [i_4] [i_2 - 1] [i_1]) ? 127 : (arr_8 [i_2 + 1] [i_1] [i_2 + 1])))) ? (arr_13 [i_0] [i_2 - 1] [i_2 + 1] [i_0] [i_4] [i_2] [i_0]) : ((var_11 ? var_4 : var_6))));
                            }
                        }
                    }
                }
                var_19 = (((((var_12 * (arr_9 [i_0])))) / (arr_10 [i_1] [i_1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
