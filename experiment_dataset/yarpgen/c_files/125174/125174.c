/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((!28744) ? ((max((arr_0 [2]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_18 = -28745;
        var_19 = ((-(max(((min(var_5, (arr_0 [i_0])))), ((var_12 >> (((arr_0 [i_0]) - 183))))))));
        arr_5 [6] &= ((((arr_2 [i_0] [i_0]) == (arr_2 [i_0] [i_0]))));
        arr_6 [i_0] [i_0] = (((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_14)) | (((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_20 = (max((max((arr_8 [i_1 + 2]), (min(var_16, (arr_7 [i_1 - 1]))))), ((max(((max(var_8, 29752))), (((arr_8 [13]) ? var_3 : var_0)))))));
        arr_10 [i_1] [i_1] = (max((((126 >> (((arr_7 [i_1]) + 7001584500185046233))))), (((max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 2])))))));
    }
    var_21 = (max(28744, var_15));
    var_22 = ((((var_8 * ((var_6 ? var_11 : var_15)))) <= (min((((28746 ? var_2 : var_13))), var_16))));
    #pragma endscop
}
