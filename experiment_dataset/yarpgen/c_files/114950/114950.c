/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((var_3 ? var_9 : var_3));
        var_14 = (((((var_8 ? 36 : 3769475037101552390))) ? ((((122 > (arr_0 [i_0] [i_0]))))) : 4865568736239283332));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 -= ((var_10 ? 675569284 : (arr_2 [i_1])));
        var_16 = (((-(arr_3 [i_1] [i_1]))));
    }
    var_17 = 4865568736239283330;
    #pragma endscop
}
