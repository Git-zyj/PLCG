/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 1;
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = -6454122005461047642;
        arr_3 [i_0] = ((-6454122005461047637 ? (max((arr_0 [i_0]), ((6454122005461047632 ? var_0 : (arr_1 [i_0] [0]))))) : 0));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_6 [i_1]) ? (40798 | 18446744073709551606) : -12));
        var_12 += (max((~-8), ((-6454122005461047632 ? (arr_4 [i_1]) : 0))));
        var_13 = (min(var_13, 9590049166086774681));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_14 = (max(var_14, (!0)));
        arr_12 [i_2] [i_2] = ((var_6 ? 7593041526764144693 : ((((arr_11 [i_2]) ? 0 : (arr_9 [i_2] [i_2]))))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_15 = ((0 | (arr_14 [i_3 + 1] [i_3])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_21 [i_4] [i_3] [i_3] = 1588400779;
            var_16 += ((~((1 ? (arr_13 [i_3]) : -6454122005461047633))));
        }
        var_17 += (max(var_4, (arr_17 [i_3] [i_3] [i_3 + 1])));
    }
    #pragma endscop
}
