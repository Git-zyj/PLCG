/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((((((4 ? 99 : 3802242139)) <= -var_7)) ? (min((var_6 & 114), var_1)) : -var_0));
    var_13 = (max(28692, ((-var_1 / (((min(155, 28695))))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = (min((min((arr_0 [i_0]), (min(1153627858, (arr_1 [i_0 + 1]))))), (((arr_1 [i_0 - 2]) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (min(var_15, (((((max((arr_0 [i_1]), (arr_0 [i_1])))) ? (~28683) : (arr_0 [i_0]))))));
            arr_4 [i_0 - 1] [i_0] = ((arr_2 [i_0 - 1]) ? (((1 ? 0 : 1))) : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_16 = ((((122033705 ? (arr_2 [i_2]) : 41))) ? (((arr_2 [i_2]) ? (arr_2 [i_2]) : 4097012551)) : (arr_7 [i_0] [i_0] [i_0]));
            arr_8 [i_0] [11] [i_2] = 4097012539;
        }
        var_17 = (21 << (117 - 96));
        var_18 = 91;
        var_19 = (min(var_19, (min((arr_1 [i_0]), 28708))));
    }
    #pragma endscop
}
