/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 || (~54947)));
    var_17 = (min(99, var_1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 -= ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        var_19 = (min(((max(10588, 9223372036854775807))), -95));
        var_20 += (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_0 [i_1] [i_1]);
        var_21 |= var_11;
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_22 = (((((~(arr_3 [i_2])))) ? ((var_2 * (arr_7 [i_2 + 1]))) : ((min(((~(arr_3 [i_2]))), (arr_2 [i_2 - 1] [i_2 - 1]))))));
        var_23 = (~20277);
        var_24 += var_14;
        var_25 -= (arr_7 [i_2]);
    }
    #pragma endscop
}
