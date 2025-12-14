/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_5, (!var_4)));
    var_17 = ((-1 & ((var_12 | ((var_4 ? var_1 : var_12))))));
    var_18 *= (((~var_7) | ((~(~var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [12] = ((((arr_1 [i_0] [i_0]) ? var_2 : (arr_2 [i_0]))));
        var_19 = (min(var_19, ((((((-1824345339 ? 14352 : 8792))) ? -55 : 14388833818813706257)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] = (arr_0 [i_1]);
                        arr_13 [i_0] [1] [i_2] [i_3] = ((var_9 ? (arr_6 [i_2] [i_3]) : var_7));
                        var_20 *= (((arr_4 [i_0] [i_2] [16]) ? (arr_7 [i_0] [i_1]) : (arr_4 [i_0] [i_1] [i_2])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_21 = 183552555748309513;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_22 = (arr_20 [i_5 + 1] [i_5 - 1] [i_5 - 1]);
                    arr_23 [i_4] [i_5] = ((((!(arr_22 [i_4] [i_5] [4] [i_6]))) || (arr_22 [i_5 + 1] [i_5 - 1] [i_5] [i_6])));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_23 ^= ((-((var_13 ? (arr_5 [i_7 + 2]) : 1))));
        arr_26 [i_7] = ((min((arr_6 [i_7 + 2] [i_7 + 2]), var_1)));
    }
    #pragma endscop
}
