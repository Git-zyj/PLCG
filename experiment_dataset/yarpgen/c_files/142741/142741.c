/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) | (arr_1 [i_0])));
        arr_2 [i_0] [9] = (arr_1 [6]);
        var_21 = (min(var_21, ((((arr_1 [i_0]) ? var_3 : (arr_0 [i_0] [2]))))));
    }
    var_22 = (max(((((1297729934 || var_9) >> (-16394007171939028139 - 2052736901770523470)))), ((-((var_16 ? var_0 : var_13))))));
    #pragma endscop
}
