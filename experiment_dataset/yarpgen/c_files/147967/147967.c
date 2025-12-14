/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_13 ^= (((arr_1 [i_0]) | (((!(~-124))))));
        arr_3 [i_0 - 1] |= (((((arr_0 [i_0] [i_0 + 1]) ? 1 : (!-124)))) && ((!(!-105))));
        arr_4 [i_0] = ((~((124 ? 1 : 238))));
        arr_5 [i_0 - 1] = (min(-50, (min(-125, 0))));
    }
    var_14 = var_4;
    #pragma endscop
}
