/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = max(var_4, (max(0, (arr_3 [i_0] [i_0]))));
                    var_21 = (max((((-(min((arr_3 [i_0] [i_1 + 4]), (arr_2 [i_0] [i_0] [i_0])))))), -var_2));
                    var_22 = (((((arr_2 [i_2 - 1] [i_1 + 1] [i_0]) + (arr_6 [8] [i_0 - 4] [3] [i_2 + 2]))) - var_12));
                }
            }
        }
    }
    var_23 = (min((((((max(var_12, var_7))) ? var_5 : (max(var_16, var_5))))), -68));
    #pragma endscop
}
