/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-(max(var_5, -2147483647)))), (((var_0 | (max(var_6, var_18)))))));
    var_21 = (((var_2 & var_7) / ((((46838 && 46810) ? var_12 : (var_5 || var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_1] = (((((var_6 ? (arr_6 [i_0 + 3] [i_1]) : (arr_6 [i_0] [i_0])))) ? (((arr_6 [i_0 + 2] [i_1]) * var_8)) : (arr_6 [i_0] [i_0 - 1])));
                var_22 = (((!var_14) + (((arr_2 [i_0 + 3] [i_1]) ? var_15 : (arr_6 [i_0 - 1] [i_0 + 3])))));
                arr_9 [i_0] = (min((((var_12 ? ((((arr_1 [i_0]) > (arr_1 [i_1])))) : (var_18 > var_0)))), (max(((((arr_1 [7]) - (arr_6 [i_0] [i_0])))), (max(var_0, var_17))))));
                var_23 = (min(var_23, ((min((((arr_7 [i_1]) ? (max(var_17, (arr_4 [16] [i_1]))) : (((max(var_8, var_16)))))), ((((arr_1 [i_1]) != (arr_1 [i_1])))))))));
                var_24 = ((var_5 ? ((((arr_0 [i_1] [i_0 + 3]) + (arr_6 [i_0 + 3] [i_0 + 3])))) : var_9));
            }
        }
    }
    #pragma endscop
}
