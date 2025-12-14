/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 += (((((arr_1 [i_0] [i_0]) ? 16320 : (arr_0 [i_0] [i_0]))) << (65535 - 65489)));
        var_13 = max(((var_6 ? var_4 : (arr_1 [i_0] [i_0]))), ((max(693581707, 255))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = (((((!(arr_2 [i_1])))) <= ((max(-41, 41)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    var_14 = ((((((((32 ? (arr_5 [i_1] [i_2] [i_3]) : (arr_7 [i_1] [i_2] [i_3]))) + 9223372036854775807)) << (((max(var_0, var_0)) - 201585822)))) >= (((min((arr_3 [i_3 + 1] [i_3]), var_1))))));
                    var_15 = (((((min(-8192, ((var_2 + (arr_8 [i_3] [i_2]))))) + 9223372036854775807)) << ((((1 % (arr_9 [i_2] [i_3]))) - 1))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                {
                    var_16 = max(((!(!var_5))), ((((max(18, (arr_12 [i_1] [i_1])))) || 35861)));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_17 -= (((arr_5 [i_1] [i_5 + 3] [i_5 + 3]) / ((((arr_5 [i_1] [i_1] [i_5 + 3]) & (arr_18 [i_1] [i_4] [i_5 + 4] [i_4 - 4] [i_6] [i_6]))))));
                        var_18 = (((arr_14 [i_1] [i_4] [i_4] [i_6]) <= ((var_0 ? (var_4 | var_8) : (min((arr_0 [i_1] [i_4]), var_8))))));
                        arr_20 [i_4] [i_4] [i_4] [i_6] [i_6] = (arr_8 [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_19 += ((var_8 / (arr_13 [i_1] [i_4 - 1])));
                        arr_24 [i_1] [i_4] [2] [0] [i_4] |= var_5;
                        arr_25 [i_1] [i_1] [i_4] [i_1] = ((9666286474919747688 - (arr_23 [i_1] [i_1] [i_5 + 4] [i_5 - 1] [i_1] [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_20 = (arr_28 [3] [i_4] [3] [9]);

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_21 = (max(((2 ? (arr_8 [i_1] [i_4]) : (arr_5 [9] [9] [i_5 + 3]))), (var_3 != 15543603481501743861)));
                            arr_32 [i_1] [i_4] [i_1] [i_8] = (arr_9 [i_5 - 1] [i_4 - 2]);
                            var_22 = ((((var_3 >= (((arr_19 [i_1]) / var_9)))) || (max((arr_15 [i_1] [i_1] [i_5] [i_5 + 1]), (!3601385581)))));
                        }
                        for (int i_10 = 2; i_10 < 7;i_10 += 1)
                        {
                            var_23 = (max((arr_15 [i_4 - 1] [i_4] [i_4] [i_4]), (max(var_8, (((!(arr_5 [4] [4] [i_5]))))))));
                            var_24 &= 65529;
                        }
                        var_25 = ((var_5 || (arr_1 [i_4] [i_4])));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_37 [i_4] [i_4 - 3] [i_4] [i_11] [i_1] = (arr_28 [i_4] [i_4 + 2] [i_4] [i_4]);
                        var_26 = (~105);
                        arr_38 [0] &= ((((var_4 & (arr_16 [i_5 + 1] [i_5] [i_4 - 1] [i_1])))) ? (((min(105, 1338324171)))) : var_2);
                    }
                    arr_39 [i_4] [i_4] [i_1] [i_5] = 133;
                    arr_40 [i_4] = var_7;
                    arr_41 [i_1] [1] |= var_6;
                }
            }
        }
        var_27 = (max(-124, (!var_0)));
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 16;i_12 += 1)
    {
        var_28 ^= (((4 / 553563043) ? ((var_7 ^ (arr_44 [i_12]))) : (arr_44 [i_12 - 4])));
        var_29 += 1;
    }
    var_30 = (max(((max(var_6, var_6))), var_3));
    var_31 = (min(var_31, var_5));

    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        var_32 = (((min((max(186, 15003523241025469876)), 2899557615492656909)) / ((max((min(var_5, 693581700)), var_4)))));
        var_33 = ((var_9 || ((max(1055531162664960, -8192)))));
    }
    #pragma endscop
}
