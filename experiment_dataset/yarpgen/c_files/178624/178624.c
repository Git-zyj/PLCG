/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_11));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), ((var_10 ? -185929423 : (min((arr_1 [i_0] [i_0]), var_4))))));
        arr_4 [11] [i_0] = ((((((((var_8 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((((arr_2 [i_0]) - (arr_2 [i_0])))) : (((arr_2 [2]) % (arr_0 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_21 = (max(var_21, (((((max(((var_2 / (arr_1 [i_0] [i_0]))), ((var_12 ? var_14 : (arr_2 [i_0])))))) * (1 & -478355847947682848))))));
        var_22 -= (arr_0 [i_0] [i_0]);
        arr_5 [18] = ((((1 ? (2887273785 || 11597) : ((-185929426 ? 125 : 20)))) < (max((~65520), (-2147483647 - 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_7 [i_1]);
        arr_9 [i_1] = (((-(arr_2 [i_1]))));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_23 = ((!((((~var_8) ? (((arr_11 [i_2]) ^ (arr_6 [i_2] [i_2]))) : (arr_11 [i_2 + 1]))))));
        var_24 = (min(var_24, ((((((arr_12 [i_2] [5]) + 9223372036854775807)) << ((1877886073 ? 1 : 117940850)))))));
        var_25 = (max(var_25, (-185929423 - 185929435)));
        arr_13 [i_2] [i_2] = ((1 >> (((arr_0 [i_2] [i_2]) - 7590235166154420915))));
    }
    var_26 = ((((((var_18 ? var_6 : var_4))) ? (var_3 == var_14) : var_14)));
    var_27 = ((((min((var_11 & 2165738797), (var_1 == var_1)))) ? ((((max(185929405, var_15))) ? (var_5 - var_15) : ((var_17 ? var_15 : var_14)))) : (min(var_14, (var_10 ^ var_15)))));
    var_28 = (((~(max(var_9, var_0)))));
    #pragma endscop
}
