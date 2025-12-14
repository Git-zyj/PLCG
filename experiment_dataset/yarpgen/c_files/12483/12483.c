/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min((max((min(var_4, (arr_0 [i_0]))), ((min(83, (arr_0 [i_0])))))), ((min(((max(var_8, var_3))), (min((arr_1 [i_0]), (arr_0 [i_0]))))))));
        arr_2 [i_0] = (min((min(((min(0, var_8))), (max(4536264464118356448, 891895261941540834)))), ((min(((max(var_9, var_1))), (max(var_1, (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 0;
        arr_7 [2] = -1697824898;
        var_14 = (max(var_14, 2068721780));
    }
    var_15 = (max(var_15, ((min((min(((min(var_6, var_8))), (min(4536264464118356448, var_2)))), ((min((min(var_10, var_11)), ((min(var_8, var_8)))))))))));
    #pragma endscop
}
