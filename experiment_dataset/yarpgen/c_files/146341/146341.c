/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((((var_2 ? 0 : var_13))) ? 65535 : (9 != var_13)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((9 ? (arr_0 [i_0] [i_0]) : 322318133));
        var_15 = 322318136;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (max(var_16, (arr_0 [i_1] [i_1])));
        var_17 = (min(var_17, ((min((((arr_0 [i_1] [i_1]) ? 1 : (arr_0 [i_1] [i_1]))), (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))))))));
        var_18 = ((!(((((((arr_4 [i_1]) ? var_0 : 19973))) ? ((min(var_7, 1881))) : (arr_3 [i_1] [i_1]))))));
        arr_5 [i_1] = ((min((max((arr_4 [i_1]), 1872)), var_13)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = ((-((((-(arr_6 [i_2] [i_2]))) / 1))));
        var_19 -= (((((~(!691923112)))) ? (((~(arr_6 [i_2] [i_2])))) : ((1846434861681902398 ? (((35325 ? 1 : 0))) : (min(-731995150, 18446744073709551615))))));
        var_20 = ((((720 ? (arr_1 [i_2]) : 564331637))) ? 1 : (arr_3 [i_2] [i_2]));
    }
    #pragma endscop
}
