/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_3;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0 - 1]) && (arr_1 [i_0 - 3]))) || (0 + var_12)));
        arr_4 [2] &= ((((((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 3])))) ? (arr_0 [i_0 - 3]) : ((-(arr_0 [i_0 + 1])))));
        var_16 ^= (((arr_2 [i_0 - 1] [i_0 - 2]) ? (arr_1 [i_0]) : ((0 << (((max((arr_2 [i_0] [9]), (arr_1 [i_0]))) - 5804294908413890066))))));
    }
    #pragma endscop
}
