/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0]) && (((1 ? var_14 : (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = (max(((max((arr_1 [i_0]), (arr_1 [i_0])))), (((arr_1 [i_0]) ^ 1))));
    }
    var_15 = var_1;
    #pragma endscop
}
