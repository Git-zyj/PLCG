/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 ^= var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 ^= ((((((arr_0 [14] [i_0]) ? 5776829689780164810 : var_6))) ? (((((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0]))))) : ((var_10 ? var_8 : var_0))));
        var_15 |= ((13220620262038182629 ? -105 : ((104 * (arr_0 [i_0] [i_0])))));
        var_16 ^= ((((max((arr_0 [i_0] [i_0]), var_0))) ? (max((arr_0 [1] [i_0]), (arr_1 [10]))) : (((arr_1 [14]) ? (arr_0 [i_0] [i_0]) : (arr_1 [12])))));
    }
    var_17 = ((!((max(((var_9 ? var_0 : var_4)), var_5)))));
    #pragma endscop
}
