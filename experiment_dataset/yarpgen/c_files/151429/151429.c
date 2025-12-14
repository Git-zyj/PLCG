/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_15 = ((((!(arr_3 [i_0 + 3] [i_0 - 4]))) ? ((((arr_1 [i_0 + 3]) && 240))) : -953013929));
        var_16 = var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_1 [i_1]) ? -953013946 : var_3));
        arr_7 [i_1] = 953013928;
        arr_8 [i_1] [i_1] = (arr_4 [i_1]);
    }
    var_17 &= var_5;
    #pragma endscop
}
