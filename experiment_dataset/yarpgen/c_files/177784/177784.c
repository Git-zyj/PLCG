/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] = (max((var_16 * var_12), 99));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = ((133 ? (arr_8 [i_0] [i_2] [i_2] [i_0 - 1] [i_0]) : (arr_0 [i_0 - 1])));
                        var_19 = (max(var_19, (arr_10 [i_0 - 1] [i_0 - 1] [i_3])));
                        var_20 = (max(var_20, (32256 * var_13)));
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_1] = 1345654719;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_16 [7] [i_1] [i_1] [i_4] [i_1] [i_1] = ((-22431 < (((!0) >> ((((var_2 ? 2199023251456 : (arr_8 [i_0] [i_1] [i_1] [i_2] [i_4]))) - 35))))));
                        arr_17 [i_4] [7] [7] = ((-(((arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0]) ? 1 : (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [0])))));
                        var_21 = ((+(((arr_8 [i_0] [i_1] [i_2] [i_0] [1]) + (arr_0 [i_0 - 1])))));
                        var_22 = (min(var_22, (arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4])));
                        var_23 = ((-(arr_4 [9])));
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_24 = (max(var_24, ((((arr_12 [i_0] [i_0] [6] [i_0 - 1] [i_0 - 1] [i_1]) ? ((max((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1]), var_0))) : (arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1]))))));
                        var_25 = max((((0 ? 4 : 1))), 512);
                        var_26 = (((((var_16 ^ (1 > var_0)))) ? (max(((var_14 ? 7857701713025521266 : var_11)), ((((arr_6 [i_0] [i_1] [i_2] [i_5 - 1]) ? -32753 : (arr_19 [i_0 - 1] [i_1] [5] [i_5])))))) : var_10));
                    }
                    var_27 *= ((!(((max(22431, 74))))));
                }
            }
        }
    }
    var_28 = ((!(13370867322246231975 - -1)));
    var_29 = ((((((~5983) ? ((1 ? var_10 : 255)) : 27095))) ? var_7 : var_1));
    var_30 += 22431;
    #pragma endscop
}
