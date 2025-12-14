/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((65534 ? var_7 : var_2)) + var_10)), var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [0] &= (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : 6833));
        arr_4 [2] &= ((var_9 << (((57785 + 91) - 5))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_12 = ((!(arr_7 [i_2])));
            var_13 &= var_1;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_1] [i_3] = var_7;
            arr_15 [i_1] [i_3] = ((((max(((var_4 ? var_8 : (arr_11 [i_1]))), (((arr_8 [i_1] [1]) ? 57788 : 1))))) ? var_3 : ((((max(var_4, -36))) ? 65535 : ((var_7 >> (var_1 - 60602)))))));
            var_14 += 1142779081;
            arr_16 [i_3] [i_3] [i_1] = 13;
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            arr_21 [i_1] [i_1] = (max((((arr_20 [i_1] [i_4 - 2] [i_4 - 2]) ? var_3 : (var_4 / var_6))), (arr_20 [3] [i_1] [i_4])));
            var_15 -= (((4294967295 ? ((79 ? (arr_19 [i_1] [i_1] [i_1]) : var_3)) : (max(1276833751, 107)))));
            arr_22 [i_1] [i_1] [i_4] = (~var_8);
            var_16 = (((((1 ? ((max(var_0, var_10))) : var_5))) ? (max(((var_0 ? 0 : 32896)), (~var_10))) : (~var_3)));
        }
        arr_23 [i_1] [i_1] = (max((max((!var_9), ((57790 ? var_0 : 127925999)))), (((((arr_17 [i_1] [i_1] [i_1]) > var_7)) ? var_0 : var_8))));
        var_17 |= var_7;
        var_18 = (min(var_18, (arr_19 [i_1] [i_1] [16])));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_28 [i_5] = (max((arr_25 [i_5] [i_5]), (arr_24 [i_5])));
        var_19 += (arr_26 [i_5] [i_5]);
        var_20 += (~-123);
        var_21 |= (arr_24 [i_5]);
    }
    var_22 = (min(var_22, ((max((max(7752, -10)), var_7)))));
    var_23 -= 24733;
    #pragma endscop
}
