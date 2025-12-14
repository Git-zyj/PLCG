/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_2;
        var_11 = (min(127, -127));
    }

    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_12 = (((!var_5) ? var_2 : var_8));
        arr_5 [6] [i_1] = var_3;
        arr_6 [i_1] &= (max((~var_4), (arr_0 [i_1])));
        arr_7 [i_1] = (((max(32767, -127))));
        var_13 = 32767;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_8 [i_2] [1]);
        var_14 = (min(((~(max(var_9, var_5)))), (62 <= 541265056)));
        arr_13 [i_2] [i_2] = 7819579018096139658;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_15 = (((((var_6 ? var_4 : var_6)) >= var_7)) ? (((!740716458) | ((var_5 << (var_7 - 6168289893644788185))))) : -13961);
        var_16 = (min(var_16, ((((((arr_14 [i_3]) ? var_1 : (arr_14 [i_3]))) & ((-127 ^ (arr_14 [i_3]))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (((((((arr_1 [i_4]) + 2147483647)) << (127 - 127))) <= ((1262433148 ? -126 : -32753))));
        var_17 = (var_5 ? ((~(arr_9 [i_4]))) : (arr_8 [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_23 [i_6] [i_5] [i_4] = ((-(arr_17 [i_5 - 1] [i_5 + 3])));
                    arr_24 [i_6] [5] [i_4] [i_4] = ((!(arr_19 [i_4])));
                    arr_25 [6] = ((var_2 ? (arr_3 [i_5 + 1] [i_5 + 3]) : (arr_3 [i_5 + 1] [i_5 + 3])));
                }
            }
        }
        arr_26 [i_4] = (((arr_21 [0] [0] [i_4]) <= (18225850211079249172 | 2113512575)));
    }
    #pragma endscop
}
