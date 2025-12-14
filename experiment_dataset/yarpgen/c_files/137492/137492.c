/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_13));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((!var_4) ? (arr_1 [i_0]) : -1177377773);
        var_20 = ((!((((arr_0 [i_0] [i_0]) ? (var_15 + 1) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 60)))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = ((55137 ? ((var_0 & (!var_7))) : (((((arr_2 [i_1]) != 32443))))));
        arr_6 [6] = var_9;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_21 = (min(var_21, (arr_8 [i_2])));
        arr_10 [i_2] = ((!((((arr_9 [i_2]) / var_9)))));
        var_22 = (((arr_0 [i_2] [i_2]) ? 67 : ((max(79, (28672 == var_8))))));
    }
    var_23 -= (-69 * -5432801412072562050);
    #pragma endscop
}
