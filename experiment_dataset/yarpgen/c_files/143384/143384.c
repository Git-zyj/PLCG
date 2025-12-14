/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [6]);
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_12 = (!(((65535 << (1793750618 - 1793750609)))));
            var_13 = (arr_4 [i_2] [i_2]);
        }
        var_14 = (max((((((480 & (arr_8 [i_1] [i_1])))) ? ((max((arr_6 [10]), 1774631902))) : (arr_9 [i_1] [i_1]))), ((((!-1774631904) ? -1774631898 : -1793942034)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_14 [i_4] = var_3;
                    var_15 = (((((arr_11 [i_3 + 1]) ? var_0 : (max((arr_9 [i_1] [i_1]), var_9)))) > 4261568230));
                    arr_15 [8] = 40436;
                }
            }
        }
        arr_16 [1] = (arr_13 [7] [i_1]);
        arr_17 [i_1] |= (!var_2);
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_16 = (((((101 << (-1774631902 + 1774631918)))) ? 30410 : (((arr_19 [i_5]) ? -8896830402179029537 : (arr_19 [i_5])))));
        var_17 = 1774631898;
        var_18 = (((!((max(var_6, 18446744073709551615))))) ? (arr_19 [i_5]) : var_6);
    }
    #pragma endscop
}
