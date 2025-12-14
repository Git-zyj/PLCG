/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_11 ? var_9 : var_5))) + var_7))) ? ((-122 ? 1289492073 : 1289492068)) : var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [7] |= ((((((((0 ? 5398 : (arr_1 [i_0])))) ? var_1 : (~var_11)))) ? ((~(((arr_0 [i_0] [i_0]) ? var_9 : var_8)))) : var_2));
        arr_3 [3] = ((var_11 ? (arr_0 [i_0] [i_0]) : var_9));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((((((-122 ? var_6 : var_3))) ? var_1 : (~var_2)))))));
                            var_14 *= ((var_5 ? var_9 : var_6));
                            var_15 = ((((!var_5) ? -123 : ((~(arr_10 [2] [2] [i_1]))))));
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_16 = ((((!(((var_11 ? (arr_11 [7] [0] [0]) : var_2))))) ? (var_7 && var_0) : (arr_5 [i_5] [i_7])));
                                var_17 -= ((((((((var_9 ? var_2 : var_6))) - var_7))) ? ((var_1 ? var_4 : 3005475227)) : ((((((var_4 ? 117 : (arr_15 [i_2] [i_5] [12] [7])))) ? (arr_12 [i_6] [i_5 - 1] [i_5] [i_5 + 2]) : ((-63 & (arr_8 [12] [i_7]))))))));
                                var_18 = 15073;
                            }
                        }
                    }
                    var_19 = var_5;
                    var_20 = (min(var_20, (((var_7 ? -var_7 : ((var_8 << ((((arr_9 [i_2]) && var_7))))))))));
                    var_21 = ((var_3 & (((~((var_3 ? (arr_5 [0] [0]) : var_0)))))));
                    arr_23 [11] [i_2] [i_1] [11] = (((((var_6 == (3005475227 + 3005475228)))) >> (((arr_10 [i_5] [11] [0]) + 10938))));
                }
            }
        }
    }
    var_22 = (var_2 ? ((((!(((var_5 ? var_0 : var_9))))))) : var_4);
    #pragma endscop
}
