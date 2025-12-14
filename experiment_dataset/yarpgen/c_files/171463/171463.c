/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min((((var_4 != (((var_12 ? 6 : var_2)))))), ((var_12 ? -4663 : (var_4 && var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((-var_6 - var_2) || var_15));
                var_17 = arr_0 [14];
                var_18 = arr_2 [i_0] [i_0] [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = var_1;
                            arr_10 [i_0] [i_2] = var_15;
                            var_20 = ((249 >= (((min(var_1, var_9)) & ((min((arr_1 [i_1] [i_2]), -31)))))));
                            var_21 = (max((!249), (249 != 27050)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
