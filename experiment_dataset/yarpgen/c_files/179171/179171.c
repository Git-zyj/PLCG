/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = ((var_6 ? var_7 : (arr_6 [i_2 - 1])));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= ((~(min(0, (46 < var_4)))));
                    arr_9 [i_2] [10] [i_2] [i_0] = (arr_1 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_12 = ((((min(var_9, (((arr_12 [i_3]) ? var_7 : var_1))))) ? (((((((arr_11 [i_3]) - -34))) ? ((min(3, var_7))) : (arr_11 [i_3])))) : ((-4992417013642240551 % (((33 ? 218 : var_7)))))));
                arr_16 [i_3] [i_4] [i_4] = (!var_3);
                arr_17 [i_3] [i_3] = ((var_7 ? ((var_10 ? var_4 : var_8)) : (min(var_7, (arr_10 [i_3])))));
                var_13 = (((min(var_9, 0))));
                var_14 = var_10;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_25 [i_7] [i_6] [i_5] = ((32767 ? -29974 : 1));
                    arr_26 [i_6] = (((((32767 ? (((var_8 ? 0 : var_0))) : 0))) ? ((2933969954588612230 ? (0 & 9223372036854775807) : 15512774119120939395)) : var_9));
                }
            }
        }
    }
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_16 = (arr_32 [i_8] [1]);
                                var_17 = 16383;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_18 = ((!((min((((!(arr_42 [i_13] [i_10] [i_13])))), -68)))));
                                var_19 += (((((var_1 <= (arr_46 [i_8 - 1])))) ^ ((((arr_46 [i_8 - 1]) || (arr_28 [i_8 - 1]))))));
                                arr_47 [i_13] = (((~var_3) * (((((arr_41 [i_8] [i_9] [i_13] [i_9] [i_14]) <= 8))))));
                                arr_48 [i_8 - 3] [i_13] [i_10] [9] [i_13] [i_14] = 1;
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_20 -= ((((((((127 >> (159 - 153)))) ? (((arr_41 [i_8 + 2] [i_9] [0] [i_15] [i_10]) >> (((arr_27 [i_9] [i_8]) - 15943539825356348786)))) : (arr_36 [i_8] [i_8] [i_10] [i_15])))) ? ((var_1 ? (arr_36 [i_8 - 4] [18] [i_8 + 1] [i_8 - 4]) : -127)) : -37719));
                        var_21 = 23;
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_54 [i_8] [21] [22] = (min((((2933969954588612230 ? 3804253494 : 65535))), ((((min((arr_32 [i_9] [17]), 65535))) ? (min(1, -6799033647279911733)) : (var_0 >= 965306451)))));
                        var_22 = 762388575;
                    }
                }
            }
        }
    }
    #pragma endscop
}
