/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= -116;
        arr_3 [i_0] &= (((var_12 % (arr_1 [i_0] [i_0]))));
        arr_4 [7] [1] = ((((arr_1 [i_0] [i_0]) >> ((((~(arr_1 [i_0] [i_0]))) + 210)))));
    }
    var_20 = var_1;
    var_21 = var_7;
    #pragma endscop
}
