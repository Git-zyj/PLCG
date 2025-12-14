/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 |= (min((arr_5 [i_2] [i_1] [i_2] [12]), (((arr_2 [i_1 + 1] [i_0]) << (1955300939 - 1955300925)))));
                    var_20 = (((((-(arr_4 [i_0] [i_0])))) ? (arr_5 [i_0] [i_1 - 1] [i_2] [i_0]) : (-1955300940 | var_3)));
                }
            }
        }
    }
    var_21 = var_14;
    var_22 |= var_7;
    var_23 = (max(var_23, (-1955300940 + 3944)));
    #pragma endscop
}
