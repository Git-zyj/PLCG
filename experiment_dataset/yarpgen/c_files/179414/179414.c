/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (min(var_12, var_6));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = ((((((((-92 ? 55 : 32751))) ? ((min(52, -15119))) : -14261))) ? var_1 : (((52 ? (arr_0 [i_0 - 2] [i_1]) : 0)))));
                    var_14 = 11;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_15 = var_1;
                    arr_16 [i_3] [i_4] [i_3] = arr_3 [i_3] [i_5];
                    var_16 = (((max((arr_3 [i_3] [i_3]), ((40 ? var_0 : var_6)))) >= ((max(-1, 1)))));
                    var_17 = (min(var_17, (((~(~40))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_30 [i_6] = (arr_18 [i_6] [i_10]);
                                arr_31 [i_6] [i_6] = ((!(((-16388 / (arr_21 [i_6 - 2] [i_6] [i_6 - 2]))))));
                                var_18 = var_3;
                            }
                        }
                    }
                }
                arr_32 [i_6] [i_6] = ((-15111 ? 1 : 1657288699));
                var_19 = ((((((((arr_25 [i_6 + 1] [i_6] [i_6 - 2] [i_6] [i_7] [i_7]) ? -13915 : -52))) && ((((arr_28 [12] [i_6 + 2] [12]) ^ 1049726255))))) ? (((arr_29 [15] [i_6 + 2] [i_6 - 1] [15] [i_6 + 1]) ? (arr_17 [i_6 + 1]) : var_0)) : var_6));
                var_20 = ((((((arr_22 [i_6 + 2] [i_6 - 3] [i_7]) ? (arr_21 [i_6] [i_7] [i_7]) : var_1))) ? (max((arr_17 [i_6 + 3]), (~302360247814298623))) : ((min(var_2, (~20))))));
                arr_33 [i_7] = (max(((max((arr_25 [i_6 + 3] [i_6] [i_6 - 1] [i_7] [i_6 + 3] [i_6 + 3]), var_2))), (((arr_28 [i_6] [i_6] [i_6]) | (arr_17 [i_7])))));
            }
        }
    }
    #pragma endscop
}
