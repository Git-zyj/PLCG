/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_16;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        var_19 &= (-127 - 1);
        var_20 = (min((((var_8 / var_12) ? (~0) : (-127 - 1))), var_10));
    }
    var_21 = var_0;

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((((max(203, var_15))) ? var_15 : ((((7 ? -6 : var_5)) % ((53 ? (arr_0 [i_1]) : -124))))));
        arr_6 [i_1] = ((var_11 ? ((-(((arr_1 [i_1] [i_1]) ? var_3 : -6)))) : ((-((215 ? -74 : (arr_0 [i_1])))))));
        arr_7 [i_1] [2] = ((91 % (((arr_1 [i_1] [i_1]) ? ((max((arr_0 [i_1]), (arr_0 [i_1])))) : ((min((arr_1 [i_1] [9]), (arr_4 [i_1] [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_22 = 0;
                        arr_18 [i_4] [i_2] = -112;
                        var_23 = (min(var_23, (arr_11 [i_1] [i_2] [i_1])));
                        var_24 = (((((((arr_15 [i_2] [i_2]) ? (arr_8 [i_1]) : (arr_8 [i_1]))))) ? (((((arr_13 [i_1]) + 2147483647)) << (((((arr_4 [i_2] [i_3]) ? var_13 : (arr_17 [i_1] [i_2] [i_3] [i_4 + 3]))) - 44)))) : (arr_4 [i_2 - 2] [i_2 + 1])));
                    }
                    arr_19 [i_3] [i_2] [i_1] = min(176, 114);
                    var_25 = (min(var_25, (!var_0)));
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_26 = (min(var_26, var_2));
            var_27 = (min(var_27, (7 && 73)));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_28 = -126;
            var_29 = ((((((max((arr_22 [i_1]), var_14))) + 2147483647)) >> ((((~(((arr_2 [i_6]) * -4)))) - 885))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_29 [i_1] = (-68 != 125);
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_30 = (min(var_30, (arr_33 [i_7])));
                        var_31 ^= ((-124 ? -27 : 29));
                        var_32 = ((((((((-95 ? 22 : 53))) ? (arr_27 [i_8] [i_7]) : 22))) ? (((((arr_25 [i_1] [i_8] [i_8]) ? 94 : 48)) >> (((arr_21 [i_8] [1] [i_1]) - 97)))) : (((var_7 + 2147483647) << (((((arr_34 [i_1] [i_8 + 2] [i_8] [i_8]) + 98)) - 8))))));
                    }
                }
            }
        }
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            arr_37 [i_1] [i_1] [i_10] &= -79;
            arr_38 [i_10] [i_10] = ((+((min((arr_13 [i_10 - 1]), (min((arr_31 [i_1] [i_10] [i_10]), (arr_0 [i_1]))))))));
            arr_39 [i_10] [i_10] [i_10] = (((arr_26 [i_10] [i_10 + 3]) ? ((((var_5 / (arr_33 [i_1]))) * var_4)) : ((-99 * (95 + 53)))));
        }
    }
    #pragma endscop
}
