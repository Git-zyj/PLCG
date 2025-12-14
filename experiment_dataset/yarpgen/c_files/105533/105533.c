/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [0] [i_1] [i_1] [i_1 + 1] = var_1;
                            var_11 = (((min(var_8, (arr_5 [i_0] [i_0]))) | var_9));
                            var_12 = (((arr_5 [i_2] [i_3]) | var_0));
                            var_13 = (((arr_5 [i_1 - 1] [i_0]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_14 = (max(var_14, var_1));
                            var_15 = (min(var_15, var_1));
                            arr_20 [i_4] [i_5] [i_4] [12] [i_4] = (((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 1]))) ^ ((var_9 ^ (arr_5 [i_1 + 1] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((~((var_7 ? var_0 : var_6)))) + var_6));
    var_17 &= ((var_4 || (((((min(2996441647151426828, var_1))) ? var_7 : (var_6 * var_5))))));
    var_18 = var_1;
    #pragma endscop
}
