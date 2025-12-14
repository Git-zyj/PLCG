/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((334756392 ? 1271947756 : 1));
    var_19 = ((((((((19 ? 616 : var_0))) ? ((237 ? var_16 : var_12)) : ((var_5 ? 0 : 1))))) ? ((((((var_1 ? 254 : var_0))) ? ((-599 ? 7635491436777187323 : 26830)) : (((var_4 ? 92 : var_16)))))) : (((((31 ? 39678 : 51341495))) ? (((var_10 ? var_16 : var_9))) : ((var_7 ? var_7 : var_17))))));
    var_20 = (max(var_20, ((((((25 ? 19 : 90076673))) ? ((((((var_16 ? 243 : 616))) ? ((-64 ? -1772871914103680254 : 12865)) : (((var_8 ? var_2 : var_4)))))) : (((((var_9 ? var_11 : -547907667))) ? ((var_9 ? var_17 : var_7)) : (((var_14 ? -101 : 211))))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 |= (((((var_9 ? (arr_0 [22]) : 183113924))) ? (((arr_0 [i_0]) ? 3732 : (arr_0 [i_0]))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_3))));
        var_22 = (((((-617 ? var_7 : (arr_0 [i_0])))) ? (((var_9 ? var_13 : var_8))) : ((var_1 ? 2996074352 : (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
