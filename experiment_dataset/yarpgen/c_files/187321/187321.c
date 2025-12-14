/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 -= (((arr_10 [i_0 + 1] [i_2] [i_3]) ? (arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0] [i_0] [i_0 + 1] [i_0])));
                        var_20 = (((arr_9 [13] [i_2] [i_0]) ? (arr_6 [1] [i_0]) : (((arr_7 [i_0] [i_1] [1] [i_3]) ? (arr_6 [i_0] [i_0]) : -4554652413997891944))));
                    }
                }
            }
        }
    }
    var_21 = 10;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_22 = ((((arr_2 [i_4] [i_4] [i_4]) ? (arr_7 [i_4] [4] [4] [i_4]) : (arr_8 [i_4] [6] [i_4] [i_4] [i_4] [16]))));
        var_23 ^= (((arr_8 [i_4] [10] [8] [i_4] [10] [12]) - (arr_1 [1])));
        var_24 *= (arr_9 [i_4] [i_4] [i_4]);
        var_25 = (-121 > 192);
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_26 = var_14;
        var_27 += (min((arr_18 [16]), (arr_15 [4])));
        var_28 = (max(var_1, ((min((arr_16 [i_5]), (arr_16 [i_5]))))));
    }
    #pragma endscop
}
