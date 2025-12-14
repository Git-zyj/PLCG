/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((arr_0 [i_0]) || (((-4436120216264762818 & (!var_9)))));
        var_11 = ((-var_4 ? (((arr_0 [i_0]) / var_1)) : (arr_2 [i_0] [i_0])));
        var_12 += (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((((0 ? (var_4 && 44) : (max((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))) < 1));
        var_13 = (max(var_13, ((((-6184448085091361440 > var_1) | (((arr_2 [i_0] [i_0]) ? ((7 ? 34 : (arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))))))));
    }

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_14 = (((((((var_3 ? (arr_4 [i_1]) : var_4)) & var_4))) && 7981092861461479420));
                    var_15 = (max(var_15, ((max(12975, 49568)))));
                    var_16 = (~(((((var_6 + (arr_12 [8] [i_2] [i_3])))) ? (max(var_9, 1271347174)) : 65070)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_18 [5] [5] [2] [i_2] [i_3] [i_4] [i_5] = ((var_9 > (((((((arr_11 [i_1 + 1]) ? var_9 : 32))) ? ((max(var_0, (arr_0 [i_3])))) : 42360)))));
                                var_17 ^= (min(((((var_5 ^ var_4) != (max((arr_4 [i_3]), 91))))), ((~(max((arr_12 [i_1] [i_2] [i_2]), (arr_2 [i_1 - 2] [i_1 - 2])))))));
                                arr_19 [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2] [i_1 + 1] = var_2;
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_1 - 1] [i_1 - 1] = ((min((arr_5 [i_1] [i_1]), (65535 ^ 49))));
        var_18 = (max(var_18, ((((((-(arr_2 [i_1 - 2] [8])))) & (((max((arr_8 [2] [2] [i_1]), (arr_4 [1]))) >> (((arr_14 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 2]) - 96)))))))));

        for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
        {
            arr_24 [i_1 - 2] [i_6] = ((var_0 % 18446744073709551615) << ((min(16411, (!1)))));
            var_19 = ((-(arr_12 [i_1 + 1] [i_6 + 2] [i_6 + 2])));
            arr_25 [i_1] [i_1] [i_1] |= (min((((min(var_8, var_3)) << (((((arr_5 [i_6 + 1] [i_6 - 1]) | var_7)) - 3881616155144552402)))), ((max((arr_7 [i_6 + 1] [9] [i_6 + 1]), (arr_4 [i_1 + 1]))))));
            arr_26 [i_1] [i_1 - 1] [i_6 - 1] = (((max(1, ((var_8 ? var_3 : var_4)))) / ((((min((arr_23 [i_1] [i_1]), 3452094840)))))));
        }
        for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
        {
            var_20 -= ((((max(30289, 10557768144777577207))) ? (max(-3456, 18446744073709551608)) : (((var_8 >> 3) ? 0 : 127))));
            var_21 = -21165;
        }
    }
    var_22 = ((-var_5 && ((max(var_6, ((var_5 ? var_9 : 15209400468262766072)))))));
    #pragma endscop
}
