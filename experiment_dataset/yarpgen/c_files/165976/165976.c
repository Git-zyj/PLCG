/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -2039288927;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_18 &= (((arr_3 [10] [i_2 + 2] [i_2 - 2]) ? (arr_3 [14] [i_2 - 2] [i_2 - 2]) : 22));
                        var_19 = (max(var_19, -16));
                    }
                    var_20 = ((117 ? ((((((arr_3 [i_1] [i_2] [i_2]) ? -30 : -16))) ? ((-33 ? 45 : 1)) : -22)) : (arr_0 [i_0] [i_2])));
                }
            }
        }
    }
    var_21 = ((((((((var_5 ? 1 : var_12))) ? var_9 : -22))) ? ((5932987345028014861 ? var_12 : (1 % -91))) : ((925259886 ? ((51 ? var_5 : -51)) : ((-51 ? 0 : -18))))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_19 [i_4] [i_4] [0] [i_4] [8] [i_4] = 0;
                        var_22 = (-127 - 1);
                    }

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_8] [10] &= 9223372036854775807;
                        var_23 = 12756253442735500229;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = ((0 ? 164 : (arr_13 [i_5 - 1] [i_9])));
                        var_25 = (arr_8 [i_4] [i_5] [i_6] [i_6]);
                        var_26 = (min(var_26, (((1 ? (((arr_11 [i_9] [i_6] [i_5]) ? (arr_11 [i_4] [i_4] [i_4]) : 3349)) : (arr_14 [i_4] [i_4] [i_4]))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_27 &= (((1 ? (arr_14 [i_5 - 2] [i_5 - 1] [i_5 + 1]) : (arr_14 [i_5 - 2] [i_5 - 1] [i_5]))));
                        var_28 |= (((20 != 3) ? (((((arr_15 [i_4] [i_5] [i_6] [i_10]) ? (arr_12 [2]) : (arr_9 [i_6 + 1]))))) : ((40 ? ((1 ? -1124914762 : 2705)) : (arr_15 [i_6] [i_6] [i_6] [i_6 + 2])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
