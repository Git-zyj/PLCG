/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((((arr_0 [i_0]) ? (arr_1 [7]) : (arr_1 [i_0]))) - (arr_0 [i_0])))));
        arr_3 [2] [2] = (min(((((arr_1 [i_0]) != ((-(arr_1 [9])))))), (((((~(arr_0 [0])))) ? (var_2 >= var_13) : (arr_0 [4])))));
        arr_4 [i_0] = ((~(((~(arr_1 [i_0]))))));
    }
    var_16 = var_7;
    var_17 = (~var_7);
    var_18 = ((var_4 % (((((var_7 ? var_4 : 0))) ? var_9 : var_5))));
    #pragma endscop
}
