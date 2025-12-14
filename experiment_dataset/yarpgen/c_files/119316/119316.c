/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = 15;
        var_12 = (max(var_12, ((((2989738688 && 541477642) >> (41636 - 41627))))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (min(var_13, (-417205912 | 2745643985)));
        arr_4 [i_1] = -814680357;
    }
    var_14 = (min(((((814680357 != 2535976081) != -1290732877))), (max((126 | 6204), -417205912))));
    #pragma endscop
}
