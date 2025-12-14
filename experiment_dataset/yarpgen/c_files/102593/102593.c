/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_7);

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [19] = arr_0 [i_0 + 2];
        arr_3 [i_0 - 2] |= arr_1 [i_0];
        arr_4 [i_0 - 2] [i_0] = (arr_1 [10]);
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = 145985698;
        arr_9 [i_1] = ((145985698 ? 145985698 : 35537));
        var_16 = ((var_7 ? (arr_7 [i_1 - 1] [i_1]) : (((min(var_6, (arr_8 [i_1])))))));
    }
    #pragma endscop
}
