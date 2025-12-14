/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(var_1, ((max(var_2, 106)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 = (min((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 2]) : 7)), var_4));
        arr_4 [i_0] = ((-((max(1, 54)))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_13 = (max(var_13, var_8));
            arr_9 [i_0] [i_0] = var_1;
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_13 [16] [16] &= -171;
        var_14 = (min((max(var_3, (arr_10 [i_2]))), (((var_3 ? (arr_10 [i_2]) : (arr_10 [i_2]))))));
        var_15 = (max(var_15, (var_0 & -1)));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_18 [i_3] = (arr_7 [i_4]);
            var_16 *= (arr_6 [i_3 + 1]);
            arr_19 [i_3] [i_3] = (((((var_5 ? -32745 : 127))) ? (arr_5 [i_3 + 1]) : (((arr_2 [7]) ? var_1 : var_1))));
            var_17 = (((((arr_2 [i_3 + 1]) | (arr_14 [i_3]))) == var_10));
        }
        var_18 = -976320967;
        var_19 = (min((arr_11 [i_3 + 1]), 88));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 = (arr_11 [i_5]);
        arr_22 [i_5] |= ((max((arr_10 [i_5]), var_3)));
        var_21 = ((((((arr_6 [i_5]) ? (arr_6 [i_5]) : (arr_6 [i_5])))) ? -18067 : (max(var_4, (arr_6 [i_5])))));
    }
    #pragma endscop
}
