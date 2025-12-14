/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [9] = (((((((arr_1 [i_0]) || var_4)) ? (arr_2 [i_0]) : (((!(arr_1 [i_0])))))) % ((-(arr_1 [i_0])))));
        var_14 = ((41999 ? 1233518167 : 65535));
        var_15 = -var_0;
        var_16 = ((max(((var_1 ? (arr_0 [i_0]) : (arr_1 [i_0]))), (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((var_7 >= var_0) ? (arr_4 [i_1] [i_1]) : (((arr_2 [i_1]) ? (arr_1 [2]) : (arr_2 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_17 = (((((((((arr_12 [17] [i_2 + 3] [7]) ? (arr_10 [i_1] [8] [i_1]) : (arr_12 [i_3] [1] [i_1])))) ? var_5 : (((arr_8 [i_2] [i_2] [15]) / var_3))))) ? (min(((((arr_4 [i_1] [16]) < (arr_6 [i_1] [1])))), (arr_4 [12] [i_3]))) : (arr_8 [i_3 + 1] [i_2 + 2] [i_2 + 1])));
                    arr_16 [i_3] = ((~(var_7 | var_12)));
                }
            }
        }
        arr_17 [i_1] = (((arr_4 [i_1] [i_1]) ? (((arr_13 [i_1] [i_1]) - (((arr_5 [i_1] [11]) ? var_11 : (arr_9 [i_1] [i_1]))))) : ((min(var_11, (((arr_0 [i_1]) ? (arr_6 [i_1] [7]) : (arr_0 [i_1]))))))));
    }
    var_18 = (max((max(((var_3 ? var_10 : var_11)), (!var_8))), var_10));
    var_19 = ((-(((((5 ? -21900 : 67))) ? var_12 : (var_5 < var_1)))));
    #pragma endscop
}
