/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = ((var_8 || (((~(arr_1 [i_3 + 1]))))));
                            arr_12 [i_0] = (((arr_10 [i_0] [22] [i_0] [i_3 - 1]) ? (max(var_9, (arr_10 [i_0] [i_1] [i_2] [i_0]))) : (arr_10 [i_0] [i_0] [i_0] [i_0])));
                            arr_13 [i_0] [i_1] [i_3] [i_0] = (((((arr_0 [16]) < (arr_5 [i_0] [i_1] [i_0] [i_3 - 1]))) ? 32736 : (((!(((arr_5 [i_0] [i_0] [8] [i_0]) && var_14)))))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_3] = ((var_16 ? ((0 + (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : var_17));
                        }
                    }
                }
                var_22 = (arr_10 [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
