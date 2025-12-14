/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_12;
    var_14 = var_8;
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((((max((arr_2 [1]), (arr_1 [1]))) / (~var_9))) == (((((((arr_1 [9]) - var_9))) ? (((arr_0 [1] [i_0]) ? (arr_2 [i_0]) : (arr_2 [16]))) : (((~(arr_3 [i_0])))))))));
        arr_4 [15] [21] = ((-((((1 * var_7) > (var_7 - var_8))))));
    }
    #pragma endscop
}
