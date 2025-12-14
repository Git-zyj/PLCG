/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((-3617712571570866949 ? 1803309213 : 4314748680434340159)))));
                            var_18 = (min(((((((var_6 ? (arr_5 [i_1] [i_1] [i_1]) : var_14))) ? 22496 : -4286162724798413966))), -4286162724798413966));
                            var_19 = (min(var_19, (arr_9 [8] [i_3] [i_3] [i_3])));
                        }
                    }
                }
                arr_11 [7] [i_0] = (arr_1 [i_0] [i_1]);
                var_20 = ((((arr_2 [i_0] [i_0] [i_0]) == (arr_3 [i_0] [2]))));
                var_21 = (max(var_21, var_12));
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
