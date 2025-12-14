/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? 25 : 0));
    var_16 = (min(var_16, (((var_7 ? ((max((-1 >= 10), (!var_0)))) : var_13)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 ^= ((((((74 && -72) ? var_14 : (((arr_2 [i_0]) ? 11302287465391683733 : (arr_1 [i_0] [i_0])))))) ? var_14 : (((var_4 / var_1) ? 9232739634117671577 : var_10))));
        var_18 = ((((min((((arr_0 [6]) ? 3333838534 : var_14)), (arr_1 [2] [2])))) % var_3));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 *= ((((((arr_6 [i_1]) / var_12))) ? var_5 : (((var_7 + (arr_1 [i_1] [i_1]))))));
        var_20 = (min(89, var_7));
        arr_7 [i_1] [i_1] = (((((((((arr_5 [i_1]) + 2))) ? 1 : (60356 + 1)))) ? (((var_2 + 82) - ((1 ? 2712713427 : 65521)))) : -90));
        arr_8 [13] = ((!((((((var_13 ? 9214004439591880031 : (arr_5 [i_1])))) ? (arr_5 [i_1]) : 25)))));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_21 *= (((((1 && (arr_9 [12] [i_2])))) >= (max(((var_10 ? 1 : 1)), (arr_10 [i_1] [i_1])))));
            var_22 *= 4870033216298174398;
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_23 = ((-(arr_10 [3] [i_3])));
            var_24 = (((arr_9 [i_1] [i_3 + 1]) ? ((var_2 ? (arr_9 [i_1] [i_3]) : -657086966)) : 29497));
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_25 = (((arr_14 [i_4]) ? (((((13 ? 389018948 : (arr_1 [i_4] [i_4])))) ? (arr_15 [i_4]) : var_3)) : 0));
        arr_16 [0] &= (((arr_12 [i_4] [8] [i_4]) ? (-74 + 1) : 190));
        arr_17 [i_4] [i_4] = ((-1358551048 ? (!var_9) : ((((max((arr_15 [i_4]), 730233688472495489))) ? var_8 : 14801154283614803729))));
        arr_18 [6] = (-((max(3525472122, var_2))));
    }
    #pragma endscop
}
