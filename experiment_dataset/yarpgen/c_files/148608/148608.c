/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(-37, ((0 ? -1227296638 : 127))));
    var_19 = var_10;
    var_20 = (max(var_20, (((var_7 ^ (~var_5))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 2] [i_0 + 2] = var_15;
        var_21 = (max(((((arr_1 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1])))), (min((min(19, (arr_0 [i_0]))), var_4))));
        arr_3 [4] = (max(((((arr_1 [i_0 + 1]) < (max(var_0, var_11))))), (var_9 % var_11)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = ((170 ? (arr_5 [i_1]) : (var_0 || var_12)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    var_23 = ((0 % ((~(arr_9 [i_1])))));
                    var_24 |= (((-9223372036854775807 - 1) ? (arr_1 [i_1]) : (65523 | var_15)));
                    var_25 = (((arr_5 [i_1]) >> (var_17 - 87)));
                }
            }
        }
        arr_14 [i_1] = ((!(var_17 % var_17)));
    }
    #pragma endscop
}
