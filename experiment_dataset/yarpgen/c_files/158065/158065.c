/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((var_17 ? ((((((arr_0 [i_0]) ? 2 : 34577))))) : ((((min((arr_1 [i_0]), 112))) ? (((((arr_2 [i_0] [i_0]) != var_11)))) : var_11))));
        var_21 = ((((min(-677354953, 677354932))) == (((arr_1 [i_0]) ? (arr_0 [i_0]) : 503419364))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (min(1, (arr_6 [i_1 - 2])));
        arr_8 [i_1 - 1] = 13834;
        arr_9 [i_1] = ((3791547931 <= (((min(119, -1))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = (arr_11 [i_2]);
        var_22 *= (((((((40130 ? -75 : 0)) ^ 0))) | (((((arr_10 [10]) ? (arr_12 [2]) : var_4)) | (((1 ? (arr_11 [i_2]) : (arr_10 [18]))))))));
        var_23 = ((((min((~-50), ((((arr_10 [i_2]) && var_6)))))) ? 1 : (((((max((arr_12 [i_2]), 32)))) * 503419364))));
    }
    #pragma endscop
}
