/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_6))) ? ((578955708 ? var_7 : var_1)) : 3205377500));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1 - 1] [i_2] = (arr_4 [i_1] [i_2]);
            var_12 = 7368565647394791185;
        }
        arr_11 [i_1] |= ((((((arr_9 [i_1 - 2]) ? (arr_6 [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 - 1] [i_1 - 2])))) ^ 3205377502));
        var_13 = ((((((var_9 ? var_1 : 1089589793)) | (!27550))) - 12438));
        arr_12 [i_1] = ((((((arr_0 [i_1]) ? ((1 ? 38769 : 124)) : 0))) ? 16842 : (((!((max(var_10, (arr_0 [i_1 + 1])))))))));
        arr_13 [i_1] = (((arr_4 [i_1] [i_1 + 1]) ? (((((~(arr_5 [i_1]))) / (arr_7 [i_1] [i_1])))) : ((((((!(arr_6 [i_1] [i_1]))))) + (var_0 * 1089589793)))));
    }
    var_14 = (max(((var_8 ? var_8 : (8 % 3205377494))), (max((((var_0 ? var_8 : var_4))), ((var_0 ? var_1 : var_3))))));
    #pragma endscop
}
