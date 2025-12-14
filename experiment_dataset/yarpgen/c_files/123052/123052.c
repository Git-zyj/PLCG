/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((min(var_6, var_1))) == var_3)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (min(var_12, 0));
        var_13 = (((((((arr_3 [i_0 - 1] [i_0 - 1]) && (arr_3 [i_0 + 1] [i_0]))))) + (((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : var_5))));
        var_14 += (((((!(206630097 - var_5)))) >> (-206630098 + 206630104)));
        arr_4 [i_0] = (((((arr_3 [i_0 + 1] [i_0 - 1]) | (arr_3 [i_0 + 1] [i_0 + 1]))) != (((arr_3 [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0]) : (arr_3 [i_0 - 1] [i_0 - 1])))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1 + 1] = arr_2 [i_1];
        var_15 = (max(((255 ? (((arr_5 [i_1]) ? var_3 : var_4)) : ((max(8916920, (arr_2 [i_1])))))), -206630080));
        arr_8 [i_1 + 1] = (((((-27319 ? 134217727 : 65535))) ? (((arr_2 [i_1 + 2]) & (arr_5 [i_1 + 3]))) : ((-(arr_2 [i_1 - 2])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = 68;
                    arr_16 [i_3] [i_3] [i_4] = ((((((arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1]) + (arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) - (var_0 ^ var_7)));
                }
            }
        }
    }
    #pragma endscop
}
