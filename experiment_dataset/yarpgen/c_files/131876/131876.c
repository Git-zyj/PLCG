/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = min(26943, ((((min((arr_2 [i_0] [i_0]), var_5))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))));
        var_13 = (((~(((arr_1 [i_0] [i_0]) & (arr_0 [4]))))));
        var_14 = (max(var_14, ((max((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), ((var_7 ^ ((max(175, (arr_3 [i_0])))))))))));
        arr_4 [i_0] = 0;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = max((((((1 ? (arr_6 [i_1] [i_1]) : var_9))) ? (arr_5 [i_1 - 1] [10]) : (arr_5 [i_1 - 1] [i_1]))), (arr_6 [i_1 - 1] [i_1]));
        arr_8 [i_1] = (arr_6 [i_1] [9]);
    }
    var_15 = ((max(var_3, ((var_2 ? var_5 : var_9)))) ^ (-var_11 << var_7));
    #pragma endscop
}
