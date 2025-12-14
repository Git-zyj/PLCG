/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_9));
    var_21 = (((((-(min(4294967295, 14887942882178098199))))) ? 7616113845956886165 : (255 == var_14)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = var_8;
        var_23 = ((((((((65 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : ((127 ? -861558286145246976 : 16384))))) ? var_4 : ((((arr_1 [i_0] [i_0]) ? var_9 : ((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = (min((arr_2 [i_0]), (((arr_2 [i_0]) + ((137405399040 ? 2577126602 : -32))))));
    }
    var_24 = (((~var_5) < (((((min(3095477466, var_12)) >= (var_6 ^ 1)))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
        arr_7 [i_1] = (((arr_2 [i_1]) ? ((((arr_4 [i_1]) << (arr_2 [i_1])))) : var_1));
    }
    #pragma endscop
}
