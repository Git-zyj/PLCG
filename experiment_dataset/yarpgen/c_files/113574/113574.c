/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (!5);
                    var_17 &= ((-(arr_7 [i_2] [i_1] [i_2 - 1])));
                    var_18 *= ((((((!(arr_2 [i_1] [i_1] [i_0]))))) | (((arr_5 [i_1] [i_1] [i_1]) ? var_5 : (arr_7 [6] [i_1] [i_2])))));
                }
            }
        }
        arr_9 [i_0] [i_0] = var_12;
        arr_10 [6] |= (!3899157877);
        var_19 = (((arr_7 [i_0] [i_0] [i_0]) ? (arr_7 [11] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])));
        arr_11 [2] [i_0] &= (-44 || -42);
    }
    var_20 = var_7;
    var_21 = ((-(!var_5)));
    var_22 = ((~(((!var_7) ? (((max(var_7, 68)))) : (min(150, var_5))))));
    var_23 &= (max(var_15, (min(((var_14 ? -3378607570749509392 : 1)), var_4))));
    #pragma endscop
}
