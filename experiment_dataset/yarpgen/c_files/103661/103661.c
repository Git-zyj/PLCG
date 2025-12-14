/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = var_16;
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] &= var_3;
                var_20 = (max(var_20, ((max(var_14, var_5)))));
                arr_7 [i_0] [i_0] = (max((max(var_6, var_12)), ((max(15, 3)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((max(var_4, ((max(var_2, var_13))))))));
                            var_22 = (max((max((max(var_9, var_2)), var_16)), (max(-121, 422190339))));
                        }
                    }
                }
                var_23 = var_1;
            }
        }
    }
    #pragma endscop
}
