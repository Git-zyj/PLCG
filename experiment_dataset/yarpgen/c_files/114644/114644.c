/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_2, (max((max(var_10, var_7)), (max(var_7, var_9))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (!var_7);
        var_13 = ((min((arr_1 [i_0]), (arr_0 [11] [i_0]))));
        var_14 = (arr_1 [i_0]);
        arr_2 [i_0] = (max((arr_1 [i_0]), ((-(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 1] = ((0 ? (arr_4 [i_1]) : 562949953388544));
        var_15 = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, -20673));
        var_17 = (var_7 ? (arr_5 [i_2]) : ((562949953388544 << (((-68 + 125) - 45)))));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_3] = -66;
            var_18 = ((68 | (arr_9 [i_3] [i_3 - 1])));
            arr_14 [i_2] [i_3] = 1;
        }
        arr_15 [9] = (arr_0 [i_2] [i_2]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_19 = (min(var_19, 3974));
        arr_18 [i_4] = (max((((arr_9 [i_4] [1]) ? var_9 : (arr_9 [i_4] [i_4]))), (1 / 32704)));
        arr_19 [1] = 1457121004590153687;
    }
    var_20 = 16777215;
    #pragma endscop
}
