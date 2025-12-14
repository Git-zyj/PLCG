/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 &= (max(var_9, (arr_4 [i_4] [i_4])));
                                var_19 = (arr_6 [i_4] [9] [9]);
                                var_20 = (((max((arr_7 [i_4] [0] [i_4] [4] [i_3 + 2]), (((arr_5 [i_2] [i_0]) & var_12)))) & ((((!(2203409148058815805 & 377342515)))))));
                                arr_13 [i_0] [8] [i_1] [i_2] [8] [i_3] [i_0] = (((arr_12 [i_0] [i_0] [i_2] [7] [i_0]) ? (((arr_3 [i_0] [i_0] [i_2]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) : (arr_2 [4] [4])));
                            }
                        }
                    }
                    var_21 = ((((((1038507051 & var_5) ? var_15 : -var_8))) ? (((-2203409148058815805 != ((648630034 ? var_2 : var_6))))) : (((arr_8 [i_0] [i_2]) ? (arr_8 [2] [i_1]) : 15))));
                    arr_14 [i_0] [i_0] = ((((max((arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]), var_4))) * (!7)));
                }
            }
        }
    }
    var_22 = ((var_15 << (((((((var_2 ? var_10 : -1055259325))) ? (((var_12 ? var_11 : var_3))) : ((var_5 ? -8747124010665625070 : var_0)))) - 54029))));
    #pragma endscop
}
