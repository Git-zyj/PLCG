/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~32753);
    var_15 ^= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [0] [0] |= var_5;
        arr_4 [i_0] = ((32784 ? (arr_1 [i_0]) : ((2147483647 ^ (arr_1 [i_0])))));
        arr_5 [i_0] [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
