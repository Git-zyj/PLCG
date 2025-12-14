/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] = (((arr_0 [i_0] [i_0 + 2]) ? (((arr_4 [i_0]) ? var_8 : var_0)) : ((max((arr_1 [i_0]), 240)))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = var_3;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_15 = (((!65024) ? (((((16320 ? (arr_10 [10]) : (arr_12 [i_3])))) ? (arr_12 [i_3]) : (arr_12 [i_3]))) : (arr_12 [i_3])));
        var_16 = (min(var_16, ((max((((arr_11 [18]) | (arr_11 [0]))), ((((arr_10 [i_3]) - (0 >= -2147483647)))))))));
    }
    var_17 |= (max((min(31, var_9)), var_8));
    #pragma endscop
}
