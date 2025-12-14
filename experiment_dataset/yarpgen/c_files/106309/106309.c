/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((var_7 ? var_2 : var_5)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 *= ((((arr_0 [i_0 + 3] [2]) / (arr_0 [i_0 + 4] [14]))));
        var_14 = ((~(((arr_0 [i_0] [i_0]) ? var_6 : (arr_0 [i_0 + 1] [i_0])))));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_3] [i_4] [i_1] = 12838;
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4] = (((((((min(12844, 12844)))) <= (min(-12844, (arr_2 [i_2]))))) ? (((max(883053897, 12844)))) : (((var_10 ? 3411913398 : var_3)))));
                                arr_16 [i_1] [i_1] [i_4] [i_1] [i_2] [i_1] = ((((var_1 ? (((max(12840, 12844)))) : (min(var_5, var_5)))) * (((arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] [i_5]) ^ (arr_13 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            }
                        }
                    }
                    var_15 = (((((arr_9 [i_3] [i_1] [i_1] [i_1]) ? ((((!(arr_6 [i_1]))))) : (arr_4 [i_1] [i_1]))) / (arr_6 [i_1])));
                }
            }
        }
        var_16 = (((((((!(arr_3 [i_1] [i_1]))) && (arr_2 [i_1])))) < (((!(arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        var_17 = 2818;
        arr_17 [i_1] = (max(((((((arr_3 [i_1] [i_1]) | 12838))) ^ (min(var_1, var_6)))), (((883053895 < (!51528))))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        var_18 = (min(var_18, (15136 >= 491781855)));
        arr_21 [i_6] = ((~(arr_19 [i_6 + 2])));
        var_19 = (arr_19 [i_6 + 3]);
        var_20 = var_9;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_21 = (max(var_21, (arr_13 [6] [6] [i_7] [i_7] [i_7] [6])));
        var_22 += ((-3250490450 ? (max((arr_2 [i_7]), (arr_2 [i_7]))) : (((arr_2 [i_7]) / (arr_2 [i_7])))));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        var_23 ^= (~((((var_10 ? 11 : -12839)) << (var_8 && 883053870))));
        var_24 = (min(var_24, var_8));
    }
    var_25 = ((var_2 >> ((((max(var_4, var_7))) - 58269))));
    #pragma endscop
}
