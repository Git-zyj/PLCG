/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_8) ? var_11 : var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, ((((arr_1 [i_0 + 1]) >= -127)))));
        var_14 = (max(var_14, (arr_1 [i_0 + 1])));
        var_15 = (((((1 ? -6293285863255420407 : (arr_1 [i_0 + 1])))) ? var_5 : (arr_1 [i_0 - 1])));
        var_16 = ((-(arr_1 [i_0 + 2])));
        var_17 = (max(var_17, ((((arr_0 [i_0 + 2]) / (arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = (max(var_18, ((((6293285863255420414 + 2147483647) << (var_1 - 106339879541997237))))));
        var_19 = arr_3 [i_1];
        var_20 = (min(var_20, (((-((~(arr_3 [i_1]))))))));
        var_21 = (((64 | var_8) && (((-3099313532 >> ((((17 ? 232 : 28672)) - 204)))))));
    }
    #pragma endscop
}
