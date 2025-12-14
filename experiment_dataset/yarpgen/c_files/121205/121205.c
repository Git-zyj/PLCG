/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -6271990478947367741;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 17881322538163534230;
        arr_3 [i_0] = -20717;
        arr_4 [i_0] = ((var_5 < (var_3 < 565421535546017397)));
        arr_5 [i_0] [i_0] = (!var_8);
    }
    var_11 = ((var_0 ? (((~((max(57995, var_1)))))) : 7541));
    var_12 = ((var_6 ? (((var_1 ? var_4 : ((var_1 >> (141 - 115)))))) : var_3));
    #pragma endscop
}
