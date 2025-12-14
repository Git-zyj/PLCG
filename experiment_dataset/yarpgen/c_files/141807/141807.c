/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(11606576441170702811 == 139)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [10]) + 240))) < (arr_0 [i_0 - 3])));
        var_11 *= ((!(!-361244604)));
        var_12 = (arr_0 [6]);
        arr_3 [i_0] = (~var_9);
        var_13 += ((var_3 >= (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_14 = max((min(var_5, 49)), -var_6);
        var_15 = (max(var_15, 32256));
    }
    #pragma endscop
}
