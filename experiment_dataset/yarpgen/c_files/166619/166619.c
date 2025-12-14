/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0] = 2877938939;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_18 = (~var_2);
        var_19 = (min(var_19, ((((!-9875) ? 60362 : ((237 ? -7749693472454966755 : (((2742997493 ? var_1 : 1))))))))));
        var_20 = ((~(arr_2 [i_1] [i_1])));
    }
    var_21 &= -var_15;
    var_22 ^= var_13;
    #pragma endscop
}
