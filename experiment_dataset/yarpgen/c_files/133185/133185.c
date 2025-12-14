/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_9 ? ((min(((var_2 ? var_6 : var_6)), ((min(var_8, var_10)))))) : var_4));
    var_12 |= ((var_1 ? var_5 : (max(0, var_3))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((~((232 ? 0 : var_6))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [1] [11] [i_0] [i_2] = var_6;
                            arr_13 [i_0] [i_1] [15] = (min(6598924321974212729, 1));
                        }
                    }
                }
                arr_14 [i_0] [12] = (max((min(11847819751735338872, var_9)), var_6));
                arr_15 [i_0] = (arr_10 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
