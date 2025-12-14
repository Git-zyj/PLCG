/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 6050));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (((-(arr_5 [i_0] [i_1]))));
                    var_22 = (~6621);
                    var_23 = var_18;
                    var_24 = (arr_1 [i_0]);
                }
            }
        }
    }
    var_25 = (var_11 != var_16);
    #pragma endscop
}
