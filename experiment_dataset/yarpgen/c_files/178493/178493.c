/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 = ((42312 <= (arr_0 [i_0 - 2] [i_0 - 1])));
        arr_3 [i_0] = -var_3;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (arr_4 [14]);
        arr_6 [i_1] = ((16299317430458951693 ? 248 : 248));
    }
    var_21 = (((min((91 <= 91), ((var_14 ? var_1 : 97)))) - var_18));
    var_22 = var_3;
    var_23 = var_18;
    #pragma endscop
}
