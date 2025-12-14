/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (min((arr_1 [i_0] [10]), 3180669686));
        var_22 |= (((min((arr_1 [i_0] [i_0]), 18446744073709551615))) ? (((((0 ? (arr_0 [i_0]) : 3487580436))) ? 0 : (~var_10))) : 2047);
        arr_2 [i_0] [i_0] = ((-(((arr_1 [2] [i_0]) ? (arr_1 [i_0] [i_0]) : var_7))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [0] &= var_14;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_2] = ((arr_6 [i_2]) ? (((((min(3487580449, 3487580436)) >= (arr_6 [i_1]))))) : ((-(arr_0 [i_1]))));
            var_23 = ((arr_0 [i_1]) ? (arr_0 [i_1]) : ((((((~(arr_0 [i_1])))) ? (((-1 ^ (arr_3 [i_1])))) : (((arr_7 [i_2] [i_1]) ? (arr_1 [i_1] [i_2]) : 33521664))))));
            var_24 = (max((((min(12, 0)) / var_15)), 1310979862));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_25 = (((arr_6 [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_1 [i_3] [i_3])));
            var_26 = ((1 ? ((-3805792187641743493 ? 1 : 525744469)) : (arr_4 [0] [i_3])));
        }
    }
    #pragma endscop
}
