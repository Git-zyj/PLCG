/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((-(arr_1 [i_0 + 1])))) ? var_1 : ((-(arr_1 [i_0 + 1])))));
                arr_8 [2] &= ((((var_8 ? var_10 : var_7))) ? (var_15 ^ var_7) : ((var_9 ? var_15 : (arr_5 [i_1 - 1] [5]))));
            }
        }
    }
    var_17 = (max(var_6, var_12));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] = 2704;
        var_18 ^= ((~((((var_14 ? var_11 : (arr_1 [i_2]))) / var_2))));
        var_19 = (max(58, 53628));
    }
    var_20 = ((((((53628 << (11907 - 11897))))) ? (min(((1 ? 127 : 632)), -633)) : 10157));
    var_21 += ((var_1 * (~-var_1)));
    #pragma endscop
}
