/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [2] = (arr_1 [11]);
        arr_5 [4] [i_0] = (((arr_3 [i_0 - 1]) + (arr_1 [i_0 - 1])));
        arr_6 [i_0] = (((arr_1 [i_0 + 2]) % (arr_0 [i_0 - 1] [i_0 + 4])));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = (min((((arr_10 [i_1 - 4]) < 1)), (((arr_10 [i_1 + 1]) <= (arr_10 [i_1 + 1])))));
        arr_12 [i_1] [i_1] = ((var_18 + (((max(var_11, (arr_7 [i_1] [i_1 - 3])))))));
        var_20 = (arr_7 [i_1] [6]);
        var_21 = (arr_7 [i_1] [i_1]);
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_22 = (0 % -1642392412);
        var_23 = (max(var_23, ((((-9223372036854775807 - 1) ? ((max(1, (arr_13 [i_2 - 1] [i_2])))) : ((var_19 ? ((max(var_16, var_16))) : (((arr_13 [i_2] [0]) | var_2)))))))));
    }
    var_24 = (max(var_24, ((((((var_13 ? var_2 : (min(var_8, var_9))))) ? (((((-1642392402 ? var_12 : 78041018))) ? var_0 : ((var_13 ? var_8 : var_12)))) : var_16)))));
    var_25 = (max(var_25, var_9));
    var_26 = (((((var_13 & var_13) - var_7)) & var_3));
    #pragma endscop
}
