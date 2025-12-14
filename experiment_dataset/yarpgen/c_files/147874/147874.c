/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 += max(122, (((12 != (arr_1 [i_0])))));
        var_22 = (((arr_0 [i_0]) + ((var_4 * (arr_0 [i_0])))));
        arr_2 [i_0] = (((-(arr_0 [i_0]))));
        var_23 += (5 / 5);
    }
    #pragma endscop
}
