/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 &= (min(var_5, ((((arr_1 [i_0]) ? var_2 : (~-22055))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (min(1, ((((var_6 ? var_6 : (arr_8 [i_0] [i_0]))) - var_3))));
                    var_12 = (min((~883612412), ((min(37896, 16222)))));
                }
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
