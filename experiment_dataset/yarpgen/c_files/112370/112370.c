/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 *= (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 += (min((min((((var_6 ? 10 : (arr_9 [i_0 - 3] [i_1] [20] [i_3] [i_1])))), (max(var_9, (arr_2 [i_2] [i_0]))))), (arr_9 [i_0] [i_1] [i_1] [i_3] [i_0])));
                            var_23 = (max(var_23, (((min((arr_5 [i_0] [i_0 - 3] [i_0 - 1]), 22))))));
                        }
                    }
                }
                var_24 = (max(var_24, (arr_9 [i_0] [i_1] [i_0] [i_0] [i_0 - 2])));
                var_25 = (max((max((arr_9 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3]), (arr_6 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0]))), (((-1 && (arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1]))))));
            }
        }
    }
    var_26 = var_11;
    #pragma endscop
}
