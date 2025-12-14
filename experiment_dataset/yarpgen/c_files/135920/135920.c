/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-var_9 >= var_4) ? (9223372036854775807 & 0) : ((min(var_7, var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = 1;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_1] [i_3] = (((arr_8 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1]) > (arr_8 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                        var_18 = ((0 ? ((~(arr_10 [i_0] [i_0] [i_2] [i_1]))) : (arr_3 [i_0] [i_0])));
                        var_19 = (min(var_19, (((-var_6 & (~var_2))))));
                        var_20 = (max(var_20, (arr_8 [i_0] [i_1] [i_2] [i_3])));
                        var_21 = (max(var_21, (!var_2)));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((-((((arr_11 [i_2 - 2]) >= (arr_11 [i_2 + 2]))))));
                        var_23 = (max(var_23, ((max(-3, (((arr_8 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2]) ? (((arr_3 [i_0] [i_0]) ? (arr_16 [i_0] [14] [i_0] [i_4]) : var_13)) : (arr_8 [i_0] [i_1] [i_2] [i_4]))))))));
                        var_24 = var_6;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_25 += ((min(1, (25 * 0))));
                        var_26 = (max(var_26, (((1 ^ (arr_11 [i_2]))))));
                        var_27 = ((22 ? 1165737634 : 136));
                        arr_19 [i_0] [9] [1] [4] [i_1] = (max((((((~(arr_4 [i_0] [i_0])))) ? 112 : var_0)), (arr_17 [i_5] [i_1] [i_1] [i_1] [i_0])));
                        arr_20 [i_1] = 637570573515203364;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_28 = (1073741823 || 1523590839);
                        arr_25 [i_0] [i_0] [i_6] [i_1] [i_0] [i_6] = (19832 << 1);
                        var_29 &= (min(((((arr_10 [i_0] [i_2 - 2] [i_2 + 2] [i_0]) < (arr_8 [i_0] [i_0] [i_0] [i_0])))), (max(11052291381866927388, 6647716202808557998))));
                    }
                    arr_26 [i_0] [i_1] = ((((arr_8 [i_0] [i_0] [i_2] [i_2]) ? ((112 ? (arr_16 [i_1] [i_1] [i_1] [i_1]) : var_9)) : ((((arr_5 [i_2] [i_1] [1]) ? (arr_7 [i_0] [i_0]) : var_4))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_32 [i_1] [i_1] [i_1] [i_0] = min((((arr_24 [i_8] [i_0] [i_2 + 1] [i_0] [i_0]) ? (arr_24 [7] [i_1] [i_2 + 1] [i_1] [i_0]) : (arr_24 [i_0] [i_0] [i_2 - 2] [i_7 + 1] [i_8]))), (15681606112880079791 || -17));
                                var_30 = (max((((-122 ? 358728993 : 0))), ((var_0 / (arr_6 [6] [i_8])))));
                                arr_33 [i_8] [i_7] [i_1] [i_2] [i_1] [i_0] [i_0] = ((~(min(1778867094, (arr_17 [i_7 - 2] [i_2 + 2] [i_2 + 2] [i_1] [i_2 + 2])))));
                            }
                        }
                    }
                    var_31 = -var_10;
                }
            }
        }
    }
    #pragma endscop
}
