/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((238 ? var_5 : (((-517254078 ? (var_7 & 185) : (arr_1 [i_0]))))));
        arr_4 [i_0] = 3777713232;
        var_12 = (min((((max(15293, var_3)))), (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [11] = (((arr_5 [i_1]) || ((max((max(50243, 9662948893104688380)), 553064187)))));
        var_13 = (min(var_13, ((max(((max(-1, (!517254063)))), var_4)))));
        arr_9 [i_1] = (max(var_0, var_9));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_14 = 15926;
        var_15 = -16493;
        arr_14 [1] = (7 && var_7);
        var_16 = (~8013442541697029326);
    }
    #pragma endscop
}
