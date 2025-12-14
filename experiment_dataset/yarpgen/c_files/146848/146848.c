/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max((((max(var_1, var_14)))), (((var_4 || (-1145993351 & var_2))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_18 = (arr_1 [i_0 - 4] [i_0 - 4]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (((2147483646 % (arr_0 [i_1] [i_1]))) == (arr_0 [i_0] [i_0 - 1]));
            arr_6 [i_0] [i_1] |= (((arr_1 [i_0 - 2] [1]) ? (arr_4 [i_0 - 3] [i_0] [i_0 + 2]) : ((var_0 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_1] [i_1])))));
            var_19 |= ((arr_3 [i_0 - 1] [i_0 + 1]) ? (((arr_3 [i_0] [9]) ? var_0 : var_11)) : (arr_4 [i_0] [i_0] [i_1]));
        }
        var_20 &= (var_6 & 2320520348276512172);
        arr_7 [i_0] = var_1;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 12;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = min((((26346 / 4294934528) / (((var_2 ? var_7 : (arr_12 [i_2] [i_3 + 2] [i_3 + 2])))))), var_4);
                    var_21 = (min(var_21, ((min(((((max((arr_13 [i_2] [i_2]), var_11))) ? var_15 : var_9)), ((min((-834077824 | 15206), (min((arr_12 [i_2] [i_3] [i_2]), 3))))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_5] [i_5 - 1] [i_6] [i_5] [i_5 - 1] = ((var_10 ^ (min((arr_17 [i_5] [i_5]), ((min((arr_23 [i_5] [i_7] [i_7] [i_7]), 65529)))))));
                                arr_29 [i_5] [i_6] [i_6] [1] [1] = ((-((-(var_0 / var_11)))));
                                arr_30 [i_5] [i_9] [i_5] [i_6] [i_9] [i_5 + 4] = ((((((arr_20 [i_9] [i_6]) ? (max((arr_19 [i_9] [i_6]), -2320520348276512163)) : (16323415349142678717 && var_2)))) || ((min((min((arr_24 [i_6] [i_6] [i_7] [i_6]), var_0)), (!1))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((min(((~(~2147483646))), ((((var_4 / var_1) && var_16))))))));
                    arr_31 [i_5] [i_5] [i_6] = (max(((((max(var_5, (arr_25 [i_5] [i_6] [i_7])))) ? (max((arr_24 [i_6] [i_6] [i_6] [i_6]), (arr_21 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_7]))) : (((max(16384, 1)))))), ((((((-6841441064597665953 ? (arr_23 [i_5 + 1] [i_6] [i_6] [i_5]) : (arr_27 [i_7] [i_5] [i_5] [i_5])))) ? var_14 : ((var_5 ? (arr_17 [3] [i_6 + 3]) : (arr_18 [i_7]))))))));
                }
            }
        }
    }
    var_23 = (min(var_23, var_16));
    #pragma endscop
}
