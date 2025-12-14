/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_11 |= (arr_0 [17] [i_0 + 2]);
        var_12 = (((arr_3 [i_0]) ? ((min((max(38386180, 1)), (arr_1 [i_0 - 1])))) : (min(var_0, var_5))));
        var_13 = (max(var_10, (arr_3 [i_0])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_0] = ((((!(((16283764629899204294 ? (arr_6 [i_0]) : (arr_0 [i_1] [i_0])))))) ? var_2 : ((~(74 >= var_8)))));
            arr_8 [i_1] [i_1] [i_0] = (max((((!((!(arr_6 [6])))))), ((((((arr_4 [i_0]) ? (arr_4 [i_0]) : var_4))) ? var_6 : ((var_8 ? (arr_2 [i_0] [18]) : (arr_5 [i_0] [i_0 + 2] [i_0])))))));
            var_14 = arr_5 [i_1] [i_0 - 3] [i_0 + 2];
            arr_9 [i_0] [i_0] = (min((((arr_4 [i_0 - 3]) ? (arr_5 [i_0] [i_0] [i_1]) : (arr_4 [i_0]))), ((max((arr_4 [19]), (min(-1, (arr_6 [i_1]))))))));
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_14 [i_2] = (arr_4 [i_2]);
        arr_15 [i_2] = (max(((-(arr_2 [i_2] [i_2]))), ((max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2]))))));
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        arr_18 [i_3] = (~(max(4256581115, 113)));
        var_15 = ((((max(-12, (arr_3 [20])))) ? ((((min((arr_1 [i_3]), 7873148465754215497))) ? var_2 : (((arr_3 [4]) + (arr_17 [i_3] [i_3]))))) : (!1)));
        var_16 -= ((!(~0)));

        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_17 = ((~((max((arr_5 [i_3 - 1] [21] [i_4 - 2]), (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 3]))))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_24 [8] [i_4] [i_5] |= (~74);
                var_18 = (~var_5);
            }
        }
    }
    var_19 = ((var_0 ? var_0 : (74 == var_1)));
    #pragma endscop
}
