/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (arr_3 [i_0] [i_0] [i_1])));
                var_21 = (max(var_21, (arr_4 [6])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_22 = ((-(min(((var_4 ? var_4 : (arr_8 [i_0] [i_1] [i_2] [i_3 - 2]))), ((max(var_16, (arr_2 [i_0] [i_0]))))))));
                            arr_10 [i_2] [i_1] [i_2] = ((!(arr_7 [i_0] [i_2] [i_3 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_23 = (~((var_9 ? var_6 : (!var_0))));
    #pragma endscop
}
