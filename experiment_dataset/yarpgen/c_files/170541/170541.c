/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max(var_13, var_2));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(var_15, (((min(((min(1, (arr_1 [i_0 + 2])))), -3955871254420725134))))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
