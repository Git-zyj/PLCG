/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [20] [18] &= (~(arr_3 [8]));
                var_11 &= (arr_3 [0]);
            }
        }
    }
    var_12 = ((!((((var_2 - var_2) - ((96 ? var_9 : var_1)))))));
    #pragma endscop
}
