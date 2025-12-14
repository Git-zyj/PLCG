/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((var_2 % 26), 26)) % ((((~-4327769726484327178) >> (min(7, 9598628401713100554)))))));
    var_14 = (max(((var_0 ? (var_8 / 922034987) : (~19))), ((((26296 * 120) <= -51)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(arr_1 [i_0])))) ? ((-((-470525868 - (arr_0 [i_0]))))) : (((((arr_1 [i_0]) || (arr_1 [5])))))));
        var_15 = (arr_0 [i_0]);
        arr_3 [i_0] = 0;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_16 = (arr_0 [i_1]);
        var_17 = (min((~65531), ((-(((!(arr_5 [i_1]))))))));
        var_18 = (32765 * 1944494084);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = (((arr_6 [16]) >= (12 - 65517)));
        var_20 = ((-(-66 % 26)));
        var_21 = ((!(arr_7 [8] [i_2])));
        var_22 = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_23 = 2147483627;
        arr_10 [i_3] [10] = (max(((125 ? (arr_8 [i_3]) : (arr_8 [i_3]))), -72));
    }
    var_24 = var_11;
    #pragma endscop
}
