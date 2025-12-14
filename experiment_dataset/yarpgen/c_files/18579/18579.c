/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 + 1] = (max(-6146173197521433597, (arr_1 [i_0])));
        arr_4 [i_0] = (((((arr_2 [i_0 + 1]) + 2147483647)) >> (((arr_0 [i_0]) - 3033165923080612712))));
    }
    var_10 = (((var_6 + 2147483647) >> 1));
    #pragma endscop
}
