/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (((min(1, ((1 == (arr_2 [i_0]))))) ? ((max((var_5 + var_2), (arr_2 [i_0 + 4])))) : (max(((((arr_0 [i_0]) <= var_9))), (max(255, (arr_1 [i_0] [0])))))));
        arr_3 [0] |= ((((-(((arr_2 [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 1]) : 18446744073709551603)))) != var_12));
        var_17 += (((((-(arr_2 [i_0 + 2])))) ? (min((max(var_8, var_0)), (arr_2 [i_0]))) : ((-(arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_18 = ((((arr_0 [i_1 + 3]) || (arr_4 [i_1 + 2] [i_1]))) ? ((((arr_0 [i_1 + 2]) || var_7))) : ((((arr_4 [i_1 + 2] [i_1 + 2]) || var_4))));
        arr_7 [i_1] [i_1] = (-(max((((arr_1 [i_1 + 3] [i_1 + 3]) << (((arr_2 [i_1 + 1]) - 29565)))), ((min((arr_2 [i_1 + 3]), (arr_6 [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_19 = (arr_9 [i_2 + 1] [i_2 + 1]);

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_3] [i_2] [i_2] = ((!(((arr_12 [i_2 - 1] [i_3] [i_2 + 3]) && (arr_9 [i_2 - 1] [i_3])))));
            arr_14 [i_3] |= (((((((max(var_3, 31))) ? (var_4 + var_1) : var_14))) <= var_11));
            var_20 = ((((arr_12 [i_2 + 1] [i_2 + 2] [i_2 + 1]) && (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 2]))) ? ((1 * (((arr_11 [i_3]) ? (arr_9 [i_3] [i_3]) : (arr_11 [i_2]))))) : (max(-255, var_8)));
            var_21 += (arr_10 [4]);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_22 |= ((-(((var_5 < (arr_10 [i_2]))))));
            var_23 = var_5;
            var_24 = (max(var_24, ((((arr_12 [i_2 - 1] [i_2] [i_4 + 3]) != (((((arr_15 [i_2 + 3]) && (arr_16 [i_2 + 1]))))))))));
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_25 = (min(var_25, (((((max((arr_17 [18]), (((arr_16 [i_5]) ? (arr_17 [i_2 + 1]) : (arr_8 [i_2])))))) & (arr_12 [i_5 + 1] [i_5 + 1] [i_5]))))));
            arr_20 [13] [i_5 + 3] = (arr_16 [i_2 + 1]);
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            var_26 += var_0;
            var_27 |= (((arr_21 [i_6 - 1] [2]) & (arr_21 [i_6 - 1] [14])));
            var_28 = ((!(arr_21 [i_6 - 2] [i_6])));
            var_29 = ((-(arr_15 [i_6])));
        }
        var_30 = (arr_8 [i_2]);
    }
    #pragma endscop
}
