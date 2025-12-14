/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_0, -2550243251787857952));
    var_21 = ((((0 && (var_12 && 464))) ? var_10 : var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [5] [i_0] = 13;
                arr_7 [i_0] [i_0] = (((((-4096431929400714288 ? ((max(var_2, var_3))) : (min((arr_4 [i_1] [i_0] [i_0]), -2147483642))))) <= (((26 & 17293822569102704640) ? var_9 : (((arr_4 [4] [i_1] [i_0]) ? (arr_0 [i_1] [i_0]) : var_5))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_15 [i_3] = ((((((((arr_10 [i_4]) > (arr_8 [i_2]))) ? (arr_8 [i_2 - 2]) : (arr_10 [i_4])))) ? (((!((max((arr_13 [1] [i_3] [i_2]), 1)))))) : 4113));
                    arr_16 [i_4] [i_2 + 1] = ((((max(1, -93))) ? (arr_8 [i_2 - 2]) : 26));
                    arr_17 [i_2 - 2] [i_3] [i_2 - 2] = (((((-9 ? 40 : -23))) && (arr_12 [i_2 - 1])));
                    arr_18 [i_4] [i_3] [i_2 + 1] = ((((((arr_12 [i_2]) ? 0 : (((arr_9 [5] [17]) ? var_1 : 12))))) ? 21 : ((16027002762623189053 - (((arr_8 [i_3]) ? 1 : -27))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_25 [i_6 - 3] [i_5] [i_6] [i_3] [i_2] = (((arr_19 [i_6 + 3] [i_6] [14] [i_5 - 1] [i_2 + 1]) ? (((!(arr_9 [i_6 + 1] [i_5 - 1])))) : (arr_9 [i_6 - 3] [i_5 - 1])));
                                arr_26 [i_6] [i_6] [i_5] [0] [i_4] [i_6] [i_2] = ((((((((17650620759814945514 ? (arr_19 [i_6] [i_5 - 1] [i_4] [i_2] [i_2]) : var_13))) ? (arr_23 [1] [i_6] [i_4] [i_4] [i_6] [i_2]) : (arr_19 [i_6] [i_2] [i_4] [i_2] [i_2])))) ? (~87) : ((((min(0, 17813))) ? (arr_24 [i_6] [i_5 - 1] [i_5 - 1] [i_5] [i_5]) : 1))));
                                arr_27 [i_6 + 4] [i_6] [i_4] [i_6] [i_2] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
