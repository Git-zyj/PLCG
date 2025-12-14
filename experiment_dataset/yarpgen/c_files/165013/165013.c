/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [11] = (arr_0 [i_0]);
        arr_3 [5] [5] = ((-(-393589821 - var_2)));
        arr_4 [i_0] = ((var_2 ? -var_13 : var_13));
    }
    var_14 = 111;
    #pragma endscop
}
