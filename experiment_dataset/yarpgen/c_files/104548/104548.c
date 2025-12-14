/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 *= 14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 -= (~var_3);
        arr_2 [20] [i_0] = 56373;
        arr_3 [i_0] [5] = ((~9158) ? 4 : ((2 ? (arr_0 [i_0]) : (arr_0 [i_0]))));
    }
    var_15 = ((-((((max(var_5, -21))) + 3))));
    #pragma endscop
}
