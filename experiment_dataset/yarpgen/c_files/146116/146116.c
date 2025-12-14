/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((!((((arr_2 [i_0]) ? (((~(arr_1 [i_0])))) : (max((arr_2 [i_0]), (arr_1 [i_0]))))))));
        var_18 = (min(var_18, ((max(((((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))))), ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ^ (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [0]))))))))));
        var_19 ^= (arr_0 [i_0]);
        arr_3 [i_0] = ((((((((191 ? 9007199254740988 : -9007199254740988))) ? (!0) : ((983493561095091745 ? (arr_2 [i_0]) : 1))))) ? ((1 ? 3784636103684772396 : 11194802844125093793)) : ((-1967295671 ? 3139487971971936713 : 35149))));
    }
    var_20 = (max(((max((((var_16 ? var_9 : var_10))), ((var_0 ? var_2 : var_11))))), var_0));
    var_21 = (max((max(((1 ? 8230637071483239520 : 1)), var_16)), var_10));
    #pragma endscop
}
