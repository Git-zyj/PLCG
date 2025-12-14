/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_0 [i_0] [i_0 - 1]);
        var_17 = (min(var_17, (((((((arr_0 [i_0] [i_0]) ? var_11 : (arr_0 [i_0] [i_0])))) & (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 -= (arr_2 [i_1]);
        var_19 = ((var_3 ? ((max((arr_3 [i_1]), ((var_8 ? (arr_3 [i_1]) : 4294967295))))) : (min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))));
    }
    var_20 = var_6;
    #pragma endscop
}
