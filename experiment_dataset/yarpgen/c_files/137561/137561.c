/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = ((-(arr_2 [i_0])));
        arr_3 [i_0] = ((-((~(arr_2 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_12 = ((max((arr_4 [i_1 - 1]), (((arr_0 [i_1]) ? 1472140303 : var_8)))));
        arr_6 [i_1] [i_1] = ((((max((((8981119394142357565 >= (arr_0 [i_1])))), (min((arr_2 [i_1]), (arr_5 [i_1] [i_1 + 1])))))) ? (arr_4 [14]) : var_6));
        var_13 = (max(var_13, (!530831761)));
        arr_7 [i_1] [i_1] = ((((((arr_1 [i_1]) - 960079092))) ? ((((!2822826989) / (~var_4)))) : (max((arr_5 [i_1 + 1] [6]), (((arr_0 [i_1]) ? 8981119394142357577 : 10))))));
    }
    var_14 = (((((((min(var_2, 1329648880))) ? (255 ^ -24502) : 1472140306))) ? ((min((min(var_0, 0)), var_1))) : var_1));
    var_15 = ((21 ? 60 : 1125899890065408));
    #pragma endscop
}
