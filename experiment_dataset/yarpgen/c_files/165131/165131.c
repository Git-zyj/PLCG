/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max(((var_2 ? var_9 : var_17)), var_11)), (min(-4898381977368658230, ((var_11 ? var_17 : var_6))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = max((min((arr_1 [i_0]), (max((arr_0 [6] [i_0]), var_5)))), ((((arr_1 [i_0 + 1]) | var_3))));
        arr_3 [3] = (min(((var_7 ? (arr_1 [19]) : var_10)), ((((arr_0 [i_0] [i_0 - 2]) && (arr_0 [i_0] [i_0 + 1]))))));
        var_20 ^= (min((min(114, (arr_0 [i_0] [i_0]))), (min((var_14 && -4898381977368658232), (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = (min(var_21, var_1));
        var_22 = min(((min((629 == 119), (min(7200420985186937892, var_12))))), (min(var_17, (arr_0 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_23 = (min(var_23, (~var_14)));
        var_24 = 0;
    }
    var_25 &= var_18;
    var_26 = var_14;
    #pragma endscop
}
