/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1 ? (((~(~var_7)))) : (((var_0 + var_12) / var_11))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((max(((((arr_4 [i_0] [i_0]) + (arr_0 [i_0])))), (arr_7 [i_0] [i_0] [i_0]))));
                    arr_9 [0] [i_1] [2] = -912868573;
                    var_17 = (max(((min(((((arr_5 [i_1]) % -91))), (min((arr_6 [i_1]), var_9))))), ((((((arr_3 [i_2] [1] [i_0]) / -912868573))) ? (((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [11]) : (arr_6 [i_1]))) : (min(6223561934463436413, (arr_5 [i_1])))))));
                    var_18 = (arr_1 [i_0]);
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((((((((arr_6 [i_1]) ? (arr_5 [i_0]) : var_9))) ? (max(var_12, var_7)) : ((50 ? var_12 : var_7)))) | (arr_5 [i_2])));
                }
            }
        }
        var_19 = (arr_4 [4] [4]);
        var_20 = var_11;
        arr_11 [i_0] [i_0] = var_12;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_21 = (arr_5 [1]);
                    var_22 *= 12223182139246115203;
                    var_23 -= -var_14;
                    arr_16 [i_4] = (!var_8);
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_24 = var_2;
        var_25 = ((((((((!(arr_17 [i_5]))))) - (max(var_9, (arr_18 [i_5]))))) | (((+(((arr_17 [i_5]) / (arr_17 [i_5]))))))));
    }
    var_26 -= (max(var_3, var_6));
    var_27 |= var_4;
    var_28 = (((((((max(var_14, var_2))) | var_11))) ? -80 : var_12));
    #pragma endscop
}
