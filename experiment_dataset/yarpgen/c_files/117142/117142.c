/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((var_12 ? (arr_0 [i_0] [i_0]) : ((58 ? (((arr_0 [i_0] [i_0]) ? var_6 : (arr_0 [i_0] [i_0]))) : ((min(118, 13209706)))))));
        var_14 = (((arr_1 [i_0]) | ((((!(((var_4 ? (arr_0 [i_0] [i_0]) : var_3)))))))));
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 13209685));
        var_15 = (((((!7607) ? (((arr_0 [i_0] [i_0]) ? var_0 : 1234295372)) : ((var_10 ? var_12 : 13986216312834946366))))) ? (min(-190, (arr_0 [i_0] [3]))) : ((((var_12 <= ((var_11 ? var_6 : 197)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_16 = ((-((~(~28101)))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_12 [i_1] [14] [i_2] [6] [i_1 - 1] [i_1] = ((~(arr_9 [i_2])));
                        var_17 = ((!(arr_7 [i_1 - 2] [i_4] [i_2])));
                    }
                }
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
