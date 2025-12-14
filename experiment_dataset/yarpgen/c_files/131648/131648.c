/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(var_3, (~var_5))), var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((!(arr_1 [i_0] [i_0]))) ? (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) >> 1)) : ((((max(1, 1))) | (var_12 < var_1)))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = ((-(max(((var_17 ? var_7 : var_12)), (arr_2 [i_1])))));
            arr_5 [i_1] [i_1] = ((~((-((var_4 * (arr_2 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (((~((min(1, 0))))))));
            arr_9 [i_0] [i_2] = ((((((arr_1 [i_2 + 1] [i_2 + 1]) ? (arr_1 [i_2 + 1] [i_2 + 1]) : (arr_1 [i_2 + 1] [i_2 + 1])))) ? (((arr_1 [i_2 + 1] [i_2 + 1]) ? (arr_1 [i_2 + 1] [i_2 + 1]) : (arr_1 [i_2 + 1] [i_2 + 1]))) : ((max(0, var_6)))));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [1] [i_3] = ((1 | ((1 ? (arr_7 [i_3] [i_3] [i_3]) : 1))));
        var_21 = (max(var_21, 1));
        var_22 = ((~((~(arr_3 [i_3] [i_3])))));
    }
    var_23 = ((var_7 ? (max(((min(0, var_14))), 1)) : (var_4 != 1)));
    #pragma endscop
}
