/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = min((arr_1 [i_0 + 1]), (arr_0 [i_0] [i_0]));
        var_17 = ((var_5 ? -11556 : (min(((var_15 ? (arr_1 [i_0]) : 18014398509481983)), (arr_0 [i_0] [i_0 + 1])))));
        var_18 = min((((((arr_0 [i_0] [i_0]) ? var_13 : (arr_0 [i_0] [i_0]))))), (((arr_1 [5]) ? ((-11556 ? 4095 : -11556)) : ((min((arr_0 [i_0] [20]), (arr_0 [i_0] [i_0 + 1])))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_2 [8] [i_1]) | ((((var_14 ? 17870283321406128128 : var_15)) | var_12))));
        var_20 = (((((var_6 ? ((~(arr_0 [1] [i_1]))) : -11555))) && (((max((arr_1 [1]), 423516086))))));
        arr_4 [i_1] = (arr_2 [2] [i_1]);
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = (max((min((arr_2 [1] [1]), 0)), 1));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_21 = 4677811850079424677;
            arr_12 [i_2] [i_2] = (((arr_3 [i_2]) ? (min((min(6831066069791884406, (arr_6 [i_2]))), (((!(arr_11 [i_3] [i_2])))))) : ((((((((arr_10 [i_2] [i_2] [i_3]) ? var_6 : 1))) && 1))))));
            arr_13 [i_2] [i_2] = (((((!(((arr_1 [i_3]) && 11555))))) | -11559));
            var_22 = ((((max((min(var_1, 436681105)), (arr_9 [i_2] [i_2])))) ? ((min((~-4), ((min((arr_5 [1] [i_3]), var_5)))))) : (min(((min(var_1, (arr_6 [i_2])))), (min(6831066069791884406, -15))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = ((~((((arr_2 [14] [14]) >= var_13)))));
            var_24 = var_9;
            var_25 = 20052;
        }
        var_26 = 4;
    }
    var_27 = var_8;
    #pragma endscop
}
