/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((arr_1 [i_0]) ? var_14 : (arr_1 [i_0])))) && (((arr_1 [i_0]) || (arr_1 [i_0]))))))));
        var_17 = ((-((min((var_4 != var_3), ((!(arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (((arr_6 [i_1] [i_1]) ? var_3 : var_2));
        var_19 = ((var_15 ? (arr_3 [i_1] [i_1]) : (arr_5 [i_1])));
        var_20 = ((!(arr_6 [6] [6])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_21 -= ((var_4 ? ((((arr_3 [i_1] [13]) != var_11))) : ((var_1 >> (var_8 - 12804976232796356234)))));
            arr_10 [i_1] [i_2] [1] = (!var_2);
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_22 = (max(var_22, ((((arr_11 [i_3]) / (arr_12 [13]))))));
        var_23 = ((((((arr_12 [i_3]) ? (arr_12 [i_3]) : var_10))) ? (((var_6 ? var_4 : (arr_11 [i_3])))) : var_9));
    }
    var_24 = -var_9;
    #pragma endscop
}
