/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_5;
    var_18 = var_3;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((-751 > (!var_13)));
        var_19 = (max(var_19, (((((var_4 ? var_6 : 20847)) < (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = (arr_2 [7]);
        arr_5 [i_0] = (-3242503957229992978 || -929883186509602389);
        var_20 += (((arr_2 [i_0]) && (arr_2 [i_0 + 3])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (min((min((arr_2 [i_1]), (min(var_10, (arr_6 [i_1] [2]))))), (((~31) ? -929883186509602389 : ((var_1 ? (arr_7 [i_1]) : (arr_6 [7] [i_1])))))));
        arr_9 [0] [4] = (min((((((((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : 13672913383097624470))) ? (!504403158265495552) : (arr_1 [i_1] [i_1])))), (min((((5408455476941531451 || (arr_1 [i_1] [2])))), (min(var_15, -18))))));
    }
    #pragma endscop
}
