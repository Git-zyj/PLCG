/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (min((!var_5), ((((min(var_8, var_7))) ? (!var_4) : ((var_8 ? var_1 : var_0))))));
                    arr_8 [8] [i_0] [1] = (!-var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_0] [i_2 - 1] [i_3] [8] = var_1;
                                arr_15 [i_4] [i_4] = (min((((((var_6 ? var_4 : var_8))) ? var_1 : (var_10 ^ var_9))), (~var_5)));
                            }
                        }
                    }
                    arr_16 [i_2] [i_2] [i_2] = ((var_10 ? ((max(var_10, var_7))) : var_7));
                }
            }
        }
    }
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_22 [i_5 - 1] [i_6] = (min(((max((!var_6), var_6))), ((((min(var_0, var_2))) ? var_10 : var_1))));
                arr_23 [i_5 - 1] [i_6] [i_6] = ((~((var_3 ? var_0 : var_5))));
                arr_24 [i_6] = ((((var_0 ? var_10 : var_10))) ? (max(var_3, ((var_7 ? var_4 : var_6)))) : (((~((var_7 ? var_1 : var_2))))));
            }
        }
    }
    #pragma endscop
}
