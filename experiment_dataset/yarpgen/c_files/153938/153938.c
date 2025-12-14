/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_9));
        var_18 = (var_4 | var_10);
        var_19 = ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_2 [6] [i_1]) <= ((((var_4 > (arr_2 [i_1] [i_1])))))));

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            arr_6 [3] [12] = (((21445 << (((arr_3 [i_1]) - 230)))));
            arr_7 [i_2] [i_1] [12] = 6768;
        }
    }
    var_21 = (var_13 <= var_10);
    var_22 = ((!(((var_15 ? (((var_4 << (var_1 - 4372374973318691185)))) : var_5)))));
    #pragma endscop
}
