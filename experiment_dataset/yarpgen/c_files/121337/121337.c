/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((33811 + 6907) ? -21525 : 1976251026));
        arr_4 [i_0] [i_0 - 2] = 1902356951;
        arr_5 [i_0] = ((((((2392610344 ? -14 : 84)) + 2147483647)) >> 24));
    }
    var_13 = 172;
    #pragma endscop
}
