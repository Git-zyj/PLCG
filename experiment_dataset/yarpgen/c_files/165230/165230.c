/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = (((max((((var_1 ? var_1 : var_5))), ((var_5 ? var_2 : var_10)))) / var_10));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                var_21 = (((arr_4 [i_2 - 2] [i_1 + 1]) ? 1 : (arr_4 [i_2 - 3] [i_1 - 2])));
                var_22 = var_4;

                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    arr_9 [i_3 - 1] [i_3] [i_3] [i_0] = (3 ? 1 : (((arr_0 [5] [i_2]) ? 1 : 1)));

                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_23 = 1;
                        arr_14 [i_0] [i_1] [i_2] [7] [i_3] = (((-30582 + 2147483647) << (1 - 1)));
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_1] [i_0] = var_0;
                    arr_19 [i_0] [i_5] = var_2;
                }
            }
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                var_24 ^= (((((max((arr_0 [i_0] [i_6 + 1]), (arr_2 [i_1 - 2] [i_6]))) | ((max(4199214743, (arr_16 [i_0])))))) % ((min(1, 363152687)))));
                var_25 &= ((((~(arr_13 [i_1 + 2] [i_1 - 1] [i_1 - 2]))) % (((arr_20 [i_1 - 2] [9] [i_1 + 2] [i_1 + 1]) ? (arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2]) : (arr_20 [i_1 + 2] [i_1] [i_1] [i_1 - 1])))));
            }
            var_26 -= ((-((max((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 2]), var_5)))));
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_27 -= 363152689;
            arr_26 [i_0] [i_7] [i_7 - 2] = ((var_7 ? (((min(1, (1 || 363152668))))) : (arr_3 [i_7 - 1] [i_7 + 1])));
            arr_27 [1] &= ((-1 != ((1 * (((arr_6 [i_7] [i_0] [i_7] [i_0]) << var_14))))));
            arr_28 [i_0] = (max(((((var_8 ? 1 : (arr_16 [i_0]))) + (arr_17 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2]))), ((max(1, ((-(arr_7 [i_0] [i_7] [i_0]))))))));
        }
        var_28 = var_15;
        arr_29 [i_0] [i_0] = 1;
        var_29 = (max(((max(-31517, (arr_6 [i_0] [i_0] [11] [i_0])))), 95752538));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = (((min(95752559, ((var_14 != (arr_8 [i_8] [i_8] [i_8])))))));
        var_30 = ((((((((arr_6 [i_8] [i_8] [i_8] [i_8]) ? 1 : var_2))) ? (var_1 + var_6) : (min(1, 3931814610)))) != (1 ^ 1)));

        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            arr_36 [i_9] [i_9] [i_9 + 2] = 3540222973;
            var_31 = (min((min((arr_32 [i_9 + 2]), (((4294967286 | (arr_5 [i_9] [i_8])))))), ((min(9, 1)))));
        }
    }
    #pragma endscop
}
