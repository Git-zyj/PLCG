/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 15;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0 + 1] &= var_15;
        var_21 = 1;
        var_22 += ((-(max(0, 15))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1] = (((!var_8) ? var_12 : (((var_13 ? var_0 : (arr_1 [i_1]))))));
        var_23 &= var_5;
        var_24 = (arr_1 [i_1 - 2]);
        var_25 = (min(var_25, (((!(arr_6 [i_1 + 1] [i_1]))))));
        arr_8 [i_1] = var_15;
    }
    var_26 = ((-30226 ? var_1 : (min(((4347761565091972748 ? 7041335567171713350 : 8803108428845050822)), (min(5103573694987191551, var_16))))));
    #pragma endscop
}
