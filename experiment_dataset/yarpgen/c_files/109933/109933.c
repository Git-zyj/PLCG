/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_8, var_12);
    var_21 = (((((max(var_2, var_11)))) ? -2034202475 : var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_22 = (((arr_0 [i_0] [i_0]) - 10));
        var_23 = (arr_0 [i_0] [i_0]);
        var_24 = (max(var_24, -2034202473));
        var_25 = ((1 ? var_4 : 1170396598));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (arr_0 [i_1] [i_1]);
        var_26 = (min(var_26, (arr_3 [i_1])));
        arr_5 [i_1] = var_18;
        var_27 = (arr_0 [i_1] [i_1]);
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((!0) | (((!(arr_8 [i_2]))))));
        arr_11 [i_2] = (arr_9 [i_2 - 2] [i_2 - 1]);
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = -2034202471;
        var_28 = 14960922443074203397;
    }
    var_29 = (min((-2147483647 - 1), var_7));
    #pragma endscop
}
