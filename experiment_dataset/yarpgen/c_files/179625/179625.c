/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (max((((arr_2 [i_0]) ? (-5794592065360674174 + var_5) : (((-(arr_1 [i_0] [i_0])))))), var_8));
        arr_3 [i_0] [9] = 4294967291;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_6 [5] = (arr_4 [i_1 + 1]);
        var_13 = (min(var_13, ((max(var_0, ((19838 ? ((var_7 ? (arr_4 [i_1 + 1]) : 0)) : ((max(2147418112, 110))))))))));
    }
    var_14 = (((((876374319 > 9223372036854775807) * (var_9 || var_10)))) ? (((var_11 ^ var_3) - 10617)) : ((-(-876374319 >= var_0))));
    #pragma endscop
}
