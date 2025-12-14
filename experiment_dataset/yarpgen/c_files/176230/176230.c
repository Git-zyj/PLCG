/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 137438953456;
    var_12 |= var_8;
    var_13 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 16440469845215670425;
        arr_4 [i_0] = ((((var_10 ? var_2 : (arr_2 [i_0] [7]))) > (arr_1 [i_0])));
        arr_5 [i_0] [i_0] = (arr_2 [i_0] [1]);
    }
    var_14 = var_10;
    #pragma endscop
}
