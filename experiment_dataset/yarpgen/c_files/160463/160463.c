/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_14 = var_13;
        var_15 = (max((arr_0 [i_0 + 2]), (((max(7, 7))))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_4 [18] = -27;
        var_16 = ((~(arr_3 [i_1 + 2])));
        arr_5 [1] = ((-((+(max((arr_3 [i_1 - 1]), (arr_2 [i_1] [i_1 - 4])))))));
    }
    var_17 ^= ((((min(var_6, -27))) ? 1452237370 : var_12));
    #pragma endscop
}
