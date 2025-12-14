/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 ^= (~(arr_1 [15]));
        var_13 ^= ((((31565 / ((-1 ? -1043086078962604236 : var_10)))) == (((-(~-87))))));
    }
    #pragma endscop
}
