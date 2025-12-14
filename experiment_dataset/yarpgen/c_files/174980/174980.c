/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_4, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((((min(var_4, (arr_4 [i_0])))) / ((max(20174, 27607)))))) || (82 / 27607))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = var_13;
                    var_16 = ((var_9 ? (arr_6 [i_0] [i_0] [i_0]) : ((max((27583 || var_7), (((arr_6 [i_1] [i_1] [i_2]) == var_12)))))));
                    var_17 = (min(var_17, (((((((max((arr_6 [i_2] [i_1] [i_0]), 27614))) ? 3 : (((arr_0 [i_0]) & (arr_6 [i_0] [i_1] [i_2])))))) ? (min(var_9, var_5)) : var_7))));
                    var_18 = (var_12 + 32767);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (arr_4 [i_3]);
        var_19 = ((~((var_12 ? (arr_4 [i_3]) : (arr_4 [i_3])))));
        var_20 = 15;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_21 *= ((~((~(arr_12 [i_4] [i_4])))));
        arr_14 [i_4] [i_4] = ((((~var_13) ? (((-21007 ? var_7 : var_7))) : (min(var_5, var_2)))));
        var_22 -= ((-(((arr_13 [i_4] [i_4]) + (arr_13 [i_4] [i_4])))));
        var_23 = (min(var_23, (((((((((18446744073709551587 ? 11592305357718827805 : 36))) ? 12288 : ((max(-100, var_4)))))) && -1)))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (((min((~var_5), (arr_16 [i_5]))) <= var_6));
        arr_18 [i_5] = -60;
        var_24 = 0;
        var_25 = ((18446744073709551588 / ((var_6 * (min(-125, 4))))));
    }
    #pragma endscop
}
