/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 | (!1211689137)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, ((((arr_0 [i_0]) ? var_15 : ((64 ? ((192 ? var_16 : 0)) : ((var_4 ? 3083278132 : (arr_1 [i_0]))))))))));
        var_20 = (min(var_20, (max(((max(1, -475305214))), (max((min((arr_0 [i_0]), var_12)), (arr_0 [i_0])))))));
        var_21 += (((arr_0 [i_0]) | (((min(0, var_2)) ^ (((-(arr_0 [i_0]))))))));
    }
    var_22 = ((max((var_4 - var_16), var_17)));
    #pragma endscop
}
