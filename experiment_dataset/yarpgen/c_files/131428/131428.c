/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((max(((((((arr_2 [i_0] [i_1 + 1]) ? var_7 : var_0))) ? var_10 : ((var_14 ? var_10 : var_11)))), var_1)))));
                arr_5 [i_0] [i_0] [i_1] = (((var_5 ? (arr_1 [i_0] [i_1 + 1]) : var_12)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = ((((var_4 ? var_14 : ((var_12 ? var_3 : var_9)))) << (var_12 + 14899)));
                            var_18 |= (((~var_14) ? (arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) : (!var_4)));
                            var_19 = var_5;
                            arr_10 [i_3] [i_3] = var_4;
                            var_20 = ((var_4 ? ((~(arr_7 [i_1 + 1] [i_2 + 2] [i_3 + 1] [i_3]))) : var_7));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    var_22 = ((!(!var_13)));
    var_23 = (max(((((min(var_6, var_7))) ? var_1 : ((max(var_8, var_7))))), (min(var_6, var_6))));
    #pragma endscop
}
