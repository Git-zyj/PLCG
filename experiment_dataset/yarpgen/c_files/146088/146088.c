/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (arr_1 [i_0] [i_0]);
        var_14 &= ((arr_0 [i_0]) || ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = ((((max((arr_3 [i_1]), var_10))) % (((arr_3 [i_1]) ? ((((arr_4 [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1] [i_1])))) : var_0))));
        arr_5 [i_1] [i_1] = (((((~(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1] [i_1])))))) == (632147660933027674 - -4096)));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_9 [i_2] = (((~(arr_7 [i_2 + 1]))));
        arr_10 [12] [12] |= ((-((-4096 ? 16383 : 9860368598404624550))));
        arr_11 [i_2] [i_2 + 1] = var_3;
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_14 [i_3] = (((((~(arr_12 [i_3])))) ? ((((((arr_13 [i_3] [i_3]) ? var_5 : (arr_13 [i_3] [i_3])))) - 3425620915)) : (8191 || 80)));
        arr_15 [i_3] = (((((var_11 / (arr_12 [i_3])))) ? var_5 : (16370 / 2046486978)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_16 *= (((arr_20 [i_4 + 1] [i_4 + 1] [i_5] [i_6 + 1] [i_6 - 3] [i_6]) == ((65535 ? 2 : 8191))));
                                var_17 += (((((((arr_17 [i_4]) && ((((arr_12 [i_3]) ? -18038 : 8193))))))) >= (((arr_19 [i_7 - 1] [i_6 - 1] [i_4 - 1]) + var_0))));
                                var_18 += ((+(((((((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) && (arr_20 [i_6] [i_3] [i_3] [i_4 - 1] [i_3] [i_6]))))) % (arr_23 [i_3] [i_3] [i_3] [i_3])))));
                            }
                        }
                    }
                    var_19 = (max(var_19, var_8));
                    var_20 = (((arr_23 [i_3] [i_3] [i_3] [i_3]) >> (var_11 - 25212)));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        arr_29 [i_8] = (arr_23 [i_8] [i_8 + 2] [i_8] [i_8]);
        var_21 = ((+(max((((arr_27 [i_8]) - (arr_24 [i_8] [i_8 + 1] [i_8 - 1]))), -var_5))));
        arr_30 [i_8 + 2] [i_8 + 2] = var_5;
        arr_31 [i_8 + 1] = (((max(-16383, ((((arr_7 [i_8]) == var_12))))) - 2046486994));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_38 [i_8] [i_9 - 4] [i_10] = (min((max(var_5, (arr_20 [i_8] [i_8 + 1] [i_9 - 4] [i_10] [i_10] [i_8]))), (((~((((arr_7 [i_10]) <= var_1))))))));
                    arr_39 [i_10] [i_8 - 2] = ((((((((min(0, 164)))) <= 8586375475304927066))) - ((((arr_20 [i_8] [i_8] [i_9 - 3] [i_9 + 1] [i_10] [i_10]) && var_12)))));
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 23;i_11 += 1)
    {
        var_22 = (arr_19 [i_11 - 4] [i_11 - 4] [i_11 - 4]);
        arr_42 [i_11 + 1] = ((~(arr_41 [i_11 - 3] [i_11 - 1])));
    }
    var_23 = (min(var_23, var_1));
    #pragma endscop
}
