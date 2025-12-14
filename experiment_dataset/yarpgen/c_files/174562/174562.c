/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((var_3 == (4294967295 ^ 804215205)));
        arr_3 [i_0] = 19;
        arr_4 [i_0 - 4] = var_3;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (~18);
        arr_10 [i_1] [16] = var_2;
        arr_11 [i_1] = (min(1, var_2));
    }
    var_10 = ((!(~1)));
    #pragma endscop
}
