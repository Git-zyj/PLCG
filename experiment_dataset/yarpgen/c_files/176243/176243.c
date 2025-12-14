/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((~var_4) & (((min(var_10, var_14))))))) ? ((((5001 & 1) ^ var_17))) : (9223372036854775807 >> var_15));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [0] = (var_6 ? var_13 : (arr_1 [i_0 + 1]));
        var_19 ^= (22305 ? (~-5002) : var_15);
        var_20 = arr_2 [i_0 - 1] [i_0];
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] |= var_14;
        arr_8 [i_1] [i_1] = (1 ? -9223372036854775796 : (arr_3 [i_1]));
        var_21 = 188715839450717844;
        var_22 = ((((((arr_3 [i_1 + 2]) ? (arr_3 [i_1 + 4]) : (arr_3 [i_1 + 2])))) ? (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 3]) : 2496583665105963731)) : ((((arr_3 [i_1 + 3]) ? (arr_3 [i_1 + 4]) : (arr_3 [i_1 + 4]))))));
        arr_9 [i_1] [12] = (((((min(62, var_6))) ? (arr_1 [i_1]) : ((var_14 ? (arr_2 [i_1] [i_1 - 1]) : 2181593340)))));
    }
    #pragma endscop
}
