/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 &= (var_5 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]));
        var_11 *= (arr_1 [i_0]);
        arr_3 [i_0] = ((4294967290 ? 2186994567354540839 : 845433076));
    }
    var_12 = var_9;
    var_13 = var_0;
    #pragma endscop
}
