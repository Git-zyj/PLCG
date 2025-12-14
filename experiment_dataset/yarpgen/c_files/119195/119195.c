/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 1));
    var_11 = ((((max((min(var_1, var_1)), ((max(var_8, var_5)))))) ? (!var_9) : ((((max(var_3, 1))) ? ((var_8 ? var_5 : var_8)) : 14336))));
    var_12 = (min(1, 15));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = 1024;
        var_14 = ((10 ? 1 : 2147483642));
        arr_3 [6] |= ((var_2 * (arr_1 [i_0] [i_0 - 1])));
        var_15 = (min(var_15, var_2));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [10] [10] &= var_6;
        arr_7 [i_1] = ((1 ? (((arr_5 [i_1 - 1]) ? -2147483643 : (arr_5 [i_1 + 3]))) : ((var_1 ? (arr_5 [i_1 + 3]) : (arr_5 [i_1 + 3])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_16 = ((1099511627520 ? 1099511627520 : 1879048192));
                    var_17 = (max((max(-2147483643, (arr_10 [i_1 + 3] [i_2] [0]))), (((arr_1 [i_1 + 3] [i_3]) ? (arr_1 [i_3] [i_1 + 1]) : -2147483643))));
                }
            }
        }
        var_18 = (min(var_5, (max((var_4 + var_3), ((min(var_9, var_8)))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 = ((!((max((min(0, 6)), (!var_8))))));
        var_20 = (min((((!(((18446744073709551608 ? (arr_2 [i_4]) : var_0)))))), ((~(1 * 122)))));
    }
    #pragma endscop
}
