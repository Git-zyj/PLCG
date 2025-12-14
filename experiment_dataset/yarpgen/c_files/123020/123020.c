/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((-1667851413 ? (-51 ^ 1107638852011367292) : (~-2064293558)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 ^= (arr_0 [i_0]);
        arr_3 [i_0 - 2] [10] = ((((((arr_1 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 ^= (((arr_4 [15]) > (((-(2576858458 / 122))))));
        arr_8 [i_1] [14] = (-(arr_5 [i_1]));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_22 *= (((arr_0 [i_2 + 1]) ? (((arr_11 [12]) ? (arr_7 [i_2] [i_2 - 1]) : (arr_0 [i_2]))) : ((((arr_5 [1]) || (arr_6 [i_2]))))));
        var_23 ^= ((((((arr_2 [i_2] [i_2]) ? (arr_5 [i_2]) : (arr_4 [i_2])))) ? ((((arr_11 [6]) == (arr_4 [i_2])))) : ((-(arr_10 [0])))));
    }
    #pragma endscop
}
