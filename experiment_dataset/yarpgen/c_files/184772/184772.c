/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (((((min(var_7, 49)))) ? (min((arr_1 [i_0] [i_0]), ((max(var_14, 10933))))) : ((min((min(2079145336, 65169)), 22733)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = (min((min(65198, -488146557)), (((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_3 : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
            arr_7 [i_0 - 1] [i_0 - 1] = ((((min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1])))) ? (((arr_4 [i_0 - 1] [i_0 - 1]) << (var_9 - 239))) : (arr_4 [i_0 - 1] [i_1])));
        }
        var_16 ^= (((((((((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) | 346))) ? (var_14 != var_11) : 10945))) ? (arr_6 [i_0]) : var_9));
        var_17 = (min(var_17, (((arr_0 [i_0 - 1]) + ((-(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
        var_18 |= (max(((min(var_12, (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (arr_6 [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_10 [i_2]);

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_15 [i_2] [i_2] [i_2] = (((arr_13 [i_2] [i_2 - 1]) == var_0));
            arr_16 [i_3] = (arr_8 [i_2 + 1]);
            arr_17 [i_2] = (((arr_11 [i_2 + 1]) - (arr_10 [i_3])));
            arr_18 [i_2] [i_2] [i_2] = (arr_11 [i_2 - 1]);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_22 [i_2] [i_2] [i_2] = ((arr_11 [i_2 + 1]) | (arr_8 [i_2 - 1]));
            arr_23 [i_4] [i_2] [i_2] = (((((var_12 | (arr_20 [i_2] [i_4] [i_2 - 1])))) / ((92 ? (arr_11 [i_2 + 1]) : (arr_9 [i_2])))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_28 [i_2] [i_2 - 1] [i_2 - 1] = (((arr_20 [i_2] [i_2] [i_2 - 1]) ? (arr_20 [i_2] [i_5] [i_2 - 1]) : (arr_10 [i_2 - 1])));
            var_19 = ((arr_10 [i_5]) ? (arr_20 [i_2] [i_2] [i_2]) : (arr_10 [i_2 - 1]));
            var_20 = (arr_13 [i_2 - 1] [i_2 + 1]);
        }
        var_21 |= var_7;
    }
    var_22 |= var_7;
    #pragma endscop
}
