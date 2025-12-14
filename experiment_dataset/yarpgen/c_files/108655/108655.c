/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 = (((arr_2 [i_0] [i_0]) % (arr_3 [12] [i_0 + 2])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = (min((((-(arr_4 [i_1])))), ((max(var_2, var_9)))));
        arr_6 [i_1] = 18491;
        var_14 = (((139 - (((-39 || (arr_4 [i_1])))))));
    }
    #pragma endscop
}
