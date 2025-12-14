/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(-52, -121103906));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((max((((arr_1 [10]) ? (arr_1 [10]) : 52)), (arr_1 [i_0]))) < (max(1348615078, 15529343556546964493))));
        var_16 = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((!((var_14 != (arr_0 [i_0]))))))));
        var_17 = min((arr_0 [i_0]), (64 || 2562828615));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 |= (min((arr_3 [i_1] [i_1]), (arr_1 [i_1])));
        arr_5 [i_1] = var_1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = ((-1754081346 + 2147483647) >> (-25 + 45));
        var_20 = 3;
        arr_10 [i_2] = ((!(arr_8 [i_2])));
        var_21 = ((arr_1 [i_2]) > (arr_8 [i_2]));
        arr_11 [i_2] [3] &= (((arr_1 [i_2]) + (arr_0 [i_2])));
    }
    var_22 = ((-919243249 ? var_11 : var_4));
    #pragma endscop
}
