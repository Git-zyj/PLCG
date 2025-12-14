/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((!(!9826292279315414266)));
        arr_2 [i_0] = (((!var_7) | (arr_1 [i_0] [10])));
        var_15 = (max(var_15, var_0));
        arr_3 [i_0] &= (arr_0 [i_0] [i_0]);
    }
    var_16 = 64;
    var_17 = (max(var_17, (((-((min((!var_13), var_3))))))));
    var_18 = (max(var_18, var_7));
    var_19 += (((((((0 ? var_2 : 9826292279315414266)) & 5680021913129917309))) ? var_1 : var_9));
    #pragma endscop
}
