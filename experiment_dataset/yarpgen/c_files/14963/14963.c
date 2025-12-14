/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max(var_13, var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] [i_1] [i_1] = var_1;
                            arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] = min((max((max(var_17, var_16)), ((max(var_11, var_14))))), var_14);
                            arr_15 [i_1] = var_9;
                        }
                    }
                }
                arr_16 [i_1] [i_1] = (min(((var_3 ? var_4 : ((var_8 ? var_14 : var_4)))), ((min(var_14, (max(var_5, var_5)))))));
                var_18 = var_3;
                arr_17 [i_0] [i_1] = (((((var_11 ? (((min(0, var_7)))) : var_4))) ? var_10 : var_16));
            }
        }
    }
    var_19 = var_13;
    var_20 = ((var_5 ? ((var_14 ? (min(var_12, var_9)) : var_2)) : var_6));
    #pragma endscop
}
