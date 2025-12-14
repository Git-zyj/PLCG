/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = ((-(min(var_4, 17941710674917310173))));
                var_11 = (max(var_11, -var_6));
                var_12 ^= (min(((((min((arr_0 [i_1 + 1] [i_0]), (arr_3 [i_0] [13])))) ? var_2 : 96)), (arr_3 [i_1] [i_1 - 3])));
                arr_5 [i_1 - 2] [7] [7] = ((((~var_5) & (arr_2 [i_1 + 1] [i_0]))));
            }
        }
    }
    var_13 = (max(var_13, ((((max(-1125948165966496733, ((1125948165966496732 ? var_8 : var_3))))) ? ((var_1 ? (var_8 + var_5) : 0)) : var_3))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                arr_12 [i_3] = ((((-1125948165966496725 ? var_5 : ((-45 ? (arr_6 [i_2 - 1]) : -1467243826453024396)))) + (((((121 ? 89 : 35993612646875136))) ? 964225216 : ((-(arr_11 [i_3] [i_3])))))));
                var_14 *= ((((((64 ? 1821931061 : var_6)))) ? (((arr_11 [i_2] [i_2]) & -16071)) : (min((var_3 ^ var_1), 25))));

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_15 = (max(var_15, (((((min((min(9624476221093259811, var_9)), -8))) ? (~var_8) : ((min(-1051268313, (min((arr_6 [i_3]), 1997278401))))))))));
                    arr_15 [1] [9] [i_3] = -1125948165966496758;
                    arr_16 [i_3] = ((-(arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((var_3 ? (((arr_21 [i_2] [i_2 - 2]) ? -1125948165966496733 : var_6)) : (arr_21 [i_2] [i_2 - 1]))))));
                                arr_22 [i_4] [i_4] &= (((~7) - (arr_7 [i_3 - 2])));
                                arr_23 [16] [16] [6] [0] [i_4] &= var_5;
                                var_17 = (arr_19 [i_5 + 1] [11] [i_5 - 1] [i_3 - 2]);
                            }
                        }
                    }
                    var_18 |= ((((((((arr_20 [i_2] [i_2] [12] [17] [i_2]) ? -17 : var_3))) ? (min((-9223372036854775807 - 1), var_7)) : 16383)) / (((arr_11 [i_2] [i_2]) - (arr_10 [i_2] [1] [1])))));
                }
            }
        }
    }
    #pragma endscop
}
