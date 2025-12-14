/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [16] = ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [16])))) ? ((-(arr_1 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = ((max((min(126, var_12), (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            arr_7 [i_0] = ((((((var_11 + var_7) ? ((var_3 ? var_6 : var_3)) : ((var_1 ? var_11 : var_4))))) ? ((((((arr_5 [i_0]) ? var_14 : var_7)) << (var_2 - 2758110797)))) : (max((arr_1 [i_0] [i_1 - 1]), (arr_0 [i_0] [3])))));
        }

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = var_1;
            arr_13 [i_0] [i_2] [i_2] = (max((max((((arr_11 [i_0]) ? (arr_4 [i_0] [i_2] [0]) : (arr_0 [i_0] [12]))), (-127 - 1))), (((var_8 ? (arr_10 [i_0] [i_2 + 1] [i_2 - 2]) : (-127 - 1))))));
            arr_14 [i_0] [i_0] [i_0] = (var_10 <= var_0);
            arr_15 [2] = 2111969016;
            arr_16 [i_0] [i_2] [i_2 + 1] = (arr_8 [i_2 + 2]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_21 [i_0] [17] = (~((((((arr_9 [i_0] [i_0]) ? 83 : (arr_4 [i_0] [i_0] [i_0])))) ? (arr_9 [16] [i_3]) : var_14)));
            arr_22 [i_3] = min(((~(max(var_0, (arr_2 [i_0]))))), 15);
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_25 [i_4] [i_4] = ((max((arr_23 [i_4 + 2]), (arr_23 [i_4]))));
        arr_26 [1] = 24;
        arr_27 [0] [i_4] |= (((((arr_24 [i_4]) ? var_12 : var_9))));
    }
    var_15 = var_10;
    var_16 |= var_2;
    #pragma endscop
}
