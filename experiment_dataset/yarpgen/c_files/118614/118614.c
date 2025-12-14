/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(((var_7 ? var_8 : var_11)), (var_16 || var_11)))) && ((max((((var_16 ? var_11 : 0))), var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, (((~(((arr_3 [i_0] [i_0]) | (arr_1 [i_0] [i_0]))))))));
        arr_4 [i_0] = (arr_2 [i_0]);
        var_20 = (max(var_20, (((~(((!(arr_3 [i_0] [i_0])))))))));
        arr_5 [i_0] = (((((7 ? 1023 : var_11))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 2] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = (arr_6 [i_1]);
        var_21 *= ((((((arr_6 [i_1]) ? 2 : (arr_7 [i_1])))) && ((max(((32767 ? (arr_7 [i_1]) : (arr_6 [i_1]))), (-491148775 - -32750))))));
        arr_10 [i_1] = (arr_7 [i_1]);
        var_22 = (((((-32745 ? (arr_6 [i_1]) : ((-(arr_8 [16] [i_1])))))) ? (max((((arr_7 [i_1]) ? (arr_8 [3] [i_1]) : var_0)), (arr_6 [i_1]))) : ((max(var_14, (((!(arr_6 [10])))))))));
        arr_11 [i_1] [i_1] = (((((((((arr_7 [i_1]) ? 32764 : var_12))) ? ((var_6 - (arr_8 [i_1] [13]))) : (((var_4 ? var_11 : var_15)))))) ? (arr_6 [i_1]) : (((~(arr_7 [i_1]))))));
    }
    var_23 = ((((((max(254, var_15))) ? (max(var_13, var_11)) : var_7)) == ((((!(var_1 / var_16)))))));
    var_24 = (((max(var_3, var_5)) > var_2));
    #pragma endscop
}
