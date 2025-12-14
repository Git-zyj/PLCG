/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = -40;
                    var_17 = ((-(arr_0 [i_0])));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_18 ^= ((-((-(arr_7 [i_3 - 1] [i_1 + 1] [i_2] [i_3])))));
                        arr_10 [i_0] = -var_8;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((~(((arr_8 [i_1] [i_1 + 2] [i_1 + 2]) - 238))));
                        var_19 = (((((!(22284 <= 1))))) % ((-var_7 | ((-3866780474840330736 & (arr_1 [i_0]))))));
                        arr_14 [5] [i_0] [i_0] = ((!((4 <= (arr_7 [i_0 + 1] [i_1 - 1] [i_0] [i_2])))));
                        arr_15 [i_0] [i_0] [i_2] [i_4] = -5;
                        var_20 = (((~(((!(arr_12 [3] [i_1] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_21 = (var_1 && var_2);
                        var_22 &= ((var_8 >= (((arr_6 [i_2] [i_2]) / (arr_12 [i_0] [i_1] [i_5 + 4])))));
                        var_23 *= (((arr_9 [i_0 + 2] [i_1 + 1]) <= (arr_17 [i_0 - 1] [i_0])));
                        var_24 ^= ((~(arr_4 [i_1] [i_5 + 4] [i_5 + 4])));
                        arr_18 [i_0] [i_1] [i_5] = (!var_12);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_25 = (((-5013 & -5013) <= (251 >> var_0)));
                    var_26 *= (((~var_5) + ((((arr_20 [i_7]) >= var_7)))));
                }
            }
        }
    }
    var_27 = ((var_8 < (!var_0)));
    var_28 = var_1;
    #pragma endscop
}
