/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(!var_10)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(((3179702137622963867 ? (((arr_3 [i_1] [i_1] [i_1]) ? -8 : -613743045)) : (arr_1 [i_0 + 2] [i_1 + 3]))), (arr_4 [i_0] [i_1] [i_0])));
                arr_6 [i_0] [i_0] = ((!(((min(var_12, var_11))))));
                var_15 |= ((((max((((arr_4 [8] [8] [i_1]) ? (arr_2 [i_0] [i_0] [2]) : var_9)), var_9))) ? (arr_2 [i_0] [i_0] [0]) : (((((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))) ? (((-8 && (arr_2 [i_0] [0] [4])))) : (((!(arr_2 [i_0] [i_1] [10])))))))));
            }
        }
    }
    var_16 = 1302360327;
    #pragma endscop
}
