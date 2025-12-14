/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((arr_1 [i_0]) ? (arr_0 [12]) : ((var_4 ? (var_6 + var_2) : var_3)))))));
                arr_7 [i_0] [i_1] = (max(var_0, (((((var_9 ? var_3 : (arr_2 [6])))) ? var_4 : ((min(var_3, var_2)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                {
                    var_18 = (((max(-1233519627, -23)) * (((arr_8 [1]) ? (((arr_12 [i_2] [i_2] [i_4 - 3]) * var_0)) : var_15))));
                    var_19 = (max(var_19, var_0));
                    var_20 = (max(((max(-31, (~var_6)))), (((var_3 ? var_12 : (arr_14 [i_4] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_3] [i_4] = (var_7 ? (((((var_14 ? (arr_14 [i_6] [i_4]) : var_3))) ? ((((arr_12 [i_2] [i_3] [i_2]) && -80))) : (((var_1 || (arr_11 [i_3 - 3] [i_3])))))) : var_6);
                                var_21 = ((+(((!var_10) ? ((((arr_16 [i_2] [i_2] [i_2]) && var_4))) : ((var_3 ? var_9 : (arr_17 [i_2])))))));
                                var_22 = (max(-46, -12));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
