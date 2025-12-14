/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_16 |= ((10318708362402011610 ? 10318708362402011610 : 250));
        var_17 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0 - 2] [i_0 - 2]) : 3220282815465018992));
    }
    var_18 = ((var_14 ? var_3 : ((((((var_10 ? var_0 : var_11))) ? ((var_14 ? 1071644672 : 7)) : 32767)))));
    var_19 ^= var_3;
    var_20 = (~var_15);

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_21 = ((3550083610 - ((min((((arr_6 [i_2]) ? (arr_2 [i_2] [i_2]) : var_9)), (arr_9 [i_1]))))));
                        var_22 ^= (min((min(((min((arr_9 [i_4]), 255))), ((var_3 ? 8128035711307540006 : (arr_2 [i_2] [9]))))), ((max(105, (arr_11 [i_1] [i_1] [4] [12] [i_3]))))));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_23 = (max(var_23, 14589834228228702015));
                            var_24 = (min(var_24, ((((((~(arr_3 [i_3])))) <= (max(((18446744073709551594 ? (arr_13 [i_1] [i_2] [i_3] [i_4] [i_5]) : (arr_4 [i_2] [i_4] [20]))), -1035993660)))))));
                            var_25 = (min(var_25, (((-125 ? (((arr_13 [i_1] [7] [i_3] [i_4] [7]) ? (arr_13 [i_1] [i_2] [19] [i_4] [19]) : (arr_13 [i_5] [i_4] [i_3] [i_2] [i_1]))) : var_12)))));
                            var_26 = (min(var_26, ((((((arr_4 [i_1] [i_1] [i_1]) ? (arr_4 [i_1] [i_2] [i_4]) : (arr_4 [i_1] [i_2] [i_3]))) ^ (((arr_4 [i_1] [i_2] [i_3]) >> (var_12 - 129))))))));
                        }
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = (arr_8 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_27 &= 10318708362402011609;
        arr_21 [i_6 + 2] = (arr_6 [i_6 + 2]);
        var_28 = (-32767 - 1);
        var_29 = (max(var_29, (1 < -8835)));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = ((arr_4 [i_7] [i_7] [11]) ? (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : 11853996755581801107);
        var_30 ^= (((((-32764 ? 0 : -32764))) ? (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_11 [i_7] [10] [i_7] [18] [i_7])))));
    }
    #pragma endscop
}
