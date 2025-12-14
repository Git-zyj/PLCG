/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_3 / var_1) >> 0))) ? var_1 : ((7382089186894439757 ? var_0 : (-5 >= var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((((arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_5 [i_1] [i_1 - 1] [i_1 - 2]))) - (arr_5 [i_1] [i_1 + 1] [i_1 - 1])));
                arr_6 [i_0] [i_1] [i_1 - 2] = arr_3 [i_0] [i_1];
                var_13 = ((((max((arr_2 [i_1 - 2]), (arr_4 [i_0 - 2] [i_0] [i_1])))) ? (-127 - 1) : ((+((max((arr_3 [i_0] [i_0 - 2]), 221)))))));
                arr_7 [i_0] = (((arr_2 [i_0]) ? (max(0, 20)) : (max((((arr_4 [i_0 - 2] [i_0] [i_1]) ? var_6 : -21)), -4412691873174911939))));
            }
        }
    }
    var_14 = ((var_7 ? var_3 : (((-1 ? (-4412691873174911939 > var_5) : (82 * var_10))))));
    #pragma endscop
}
