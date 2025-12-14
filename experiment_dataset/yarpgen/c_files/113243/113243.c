/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max((arr_3 [i_0] [1]), (!1599206759)));
        var_20 ^= (((33546240 ? ((16140901064495857664 ? 7249195777998881411 : 2951352591285805283)) : (!-1991152516))));
        var_21 = (min(var_21, ((~((~(max(1991152515, 17551128253786632318))))))));
        arr_4 [i_0] = ((((((((arr_3 [i_0] [i_0]) ? 137438953471 : 1768173557054818039)) * (min(6112196209443509557, 9036884596602162440))))) ? ((var_16 * (((arr_0 [i_0]) ? 1980559183 : 10302139175401318978)))) : (((var_14 ? -7927 : (min((arr_3 [1] [1]), (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_22 = ((arr_6 [i_1]) >= 12686692478253401470);
        arr_7 [0] |= (arr_5 [i_1 + 2] [i_1 + 1]);
        arr_8 [i_1] [i_1] = ((14866989854071331386 ? (arr_6 [i_1]) : -125829120));
    }
    var_23 = max(((var_11 ? ((var_6 ? var_10 : var_18)) : 2080374784)), (1317037307 + var_3));
    #pragma endscop
}
