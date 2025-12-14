/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-((((((-(arr_0 [i_0])))) && (!6))))));
        var_20 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = (((arr_6 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_10 [i_1] [i_1] = (((arr_7 [i_1]) && var_17));
        var_21 ^= ((((1360892542 - (arr_7 [i_1]))) + (((arr_7 [i_1]) ? 1 : (arr_6 [6])))));
    }
    var_22 = ((+((((25386 && var_0) == ((0 ? var_0 : var_14)))))));
    var_23 = var_18;
    #pragma endscop
}
