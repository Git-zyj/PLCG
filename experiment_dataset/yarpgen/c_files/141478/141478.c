/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 = 190;

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_12 = (0 < 255);
                        arr_11 [i_3] [i_2] [i_3] = ((~(min((arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]), 126))));
                    }

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [14] = (max((arr_1 [i_0]), ((((1 < -8378074739201740033) > 0)))));
                        arr_15 [i_2] = (min(var_3, (max(((min(var_3, (arr_13 [i_0] [i_1] [i_2] [i_4])))), (max((arr_9 [i_0] [i_1] [i_2] [i_4 - 1]), var_4))))));
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] [i_5] [i_2] [i_1] [i_0] = 63;
                        arr_19 [i_5] [i_2] [i_1] [i_1] [i_0] = ((-(-71 / 8378074739201740033)));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((((((arr_12 [i_0] [i_0] [i_2]) ? (((((arr_13 [i_0] [i_0] [15] [i_5]) && (arr_3 [i_0]))))) : ((-5569649393538437454 ? 8378074739201740033 : (arr_2 [i_2])))))) >= ((var_5 - (max((arr_1 [i_2]), (arr_9 [i_0] [i_1] [i_2] [i_5])))))));
                    }
                    arr_21 [i_0] [4] = var_7;
                }

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_13 = (min(((((((arr_17 [i_0] [i_1] [i_6]) ^ (arr_5 [i_0] [6] [i_0])))) ? 36829 : (arr_5 [i_6] [i_1] [i_0]))), (((602857800 || (((var_9 % (-2147483647 - 1)))))))));
                    var_14 &= (max((((arr_17 [i_0] [i_0] [i_0]) & var_4)), (min(-5781476527202905239, (arr_6 [i_0] [i_1])))));
                    var_15 = ((((-(arr_4 [i_0] [i_1]))) / (((arr_4 [i_1] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_29 [i_8 - 1] [i_8] [i_7] [i_6] [i_8] [6] = (max((arr_22 [i_8 - 1] [i_8 - 1]), (((arr_6 [i_1] [i_6]) ? ((max(53921, (arr_23 [i_8 - 3])))) : 11744040843094769341))));
                                arr_30 [i_0] [i_1] [i_6] [i_8] [i_8 - 2] = ((-(arr_6 [i_6] [i_6])));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((min(((((arr_22 [i_0] [i_1]) || ((min(var_3, var_9)))))), ((((-(arr_28 [2] [i_1] [i_6] [i_1] [i_0] [i_1]))) << (((arr_24 [i_0] [i_1] [i_1] [8]) - 7477860758361611318)))))))));
                }
                arr_31 [i_0] [i_0] [i_1] = var_8;
            }
        }
    }

    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_17 = (((((((max(1152921504606846975, var_2))) ? (min((arr_33 [i_9]), var_9)) : (((~(arr_34 [i_9]))))))) ? (max((445945091 | 7194887893218062182), (arr_32 [i_9]))) : ((((min((arr_33 [i_9]), 34359737344))) ? (((arr_33 [i_9 - 1]) >> 63)) : (-9223372036854775807 - 1)))));
        var_18 = -13;
        var_19 = ((86 / (max((((arr_32 [i_9]) ? (arr_32 [i_9]) : var_3)), 220620184459940321))));
        var_20 = (105 % (!0));
    }
    var_21 = var_1;
    #pragma endscop
}
