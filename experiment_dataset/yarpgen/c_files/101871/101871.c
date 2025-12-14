/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((var_12 <= ((var_4 ? var_2 : var_12))))) << (((((var_7 ? var_1 : var_8))) - 1339125134))));
                var_14 = ((((var_5 > ((var_12 ? var_10 : var_5)))) ? var_8 : ((~(var_8 || var_2)))));
                var_15 = ((var_12 ? (((!(var_12 / var_10)))) : (((!var_5) + (var_9 < var_13)))));
            }
        }
    }
    var_16 &= ((((3644705699 ? (22660 - 650261597) : (3644705699 - 67)))) ? ((var_13 ? var_13 : ((var_10 ? var_11 : var_8)))) : var_4);
    var_17 = ((((((var_9 ? var_3 : var_9))) ? ((var_4 ? var_4 : var_4)) : ((var_12 ? var_1 : var_8)))) / var_10);

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = (((((var_9 ? var_6 : var_9))) ? var_2 : (((var_6 ? var_10 : var_1)))));
        var_19 = ((!(~var_7)));
        var_20 = (var_11 >= var_4);
    }
    var_21 = ((((((439855211 ? 3644705706 : 1152903912420802560)) >= (((var_11 ? var_12 : var_4))))) ? ((((!var_10) > ((var_12 ? var_1 : var_7))))) : var_7));
    #pragma endscop
}
