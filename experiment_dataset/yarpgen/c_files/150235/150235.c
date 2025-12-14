/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] = ((!(((var_6 ? var_1 : var_13)))));
                                arr_13 [i_0] [i_1] [i_2] [1] [i_3] [i_0] = (((((16425160771321297311 ? var_12 : (arr_7 [i_0] [i_4 - 2] [i_2] [i_3] [i_0] [i_4])))) ? (((arr_9 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 1]) - (arr_9 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3]))) : 50));
                            }
                        }
                    }
                    var_14 = ((((((((749781502 ? 55399 : -5556))) ? (((!(arr_2 [i_0 - 1] [i_1])))) : var_13))) ? (arr_1 [i_0]) : ((14218 | (26 || -18043)))));
                    var_15 *= (((((-12636 ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_1 [12])))) ? (max(((6464373287107949939 ^ (arr_4 [i_0] [i_2] [i_2]))), ((min(var_10, var_7))))) : ((max(749781518, -26690)))));
                }
            }
        }
    }
    var_16 = (!55399);
    var_17 = -var_5;
    var_18 = (max(var_9, var_1));
    #pragma endscop
}
