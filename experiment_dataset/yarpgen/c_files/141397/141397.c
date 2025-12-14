/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((11 ? var_3 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((min(((((78931953 ? 1 : 1)) ^ 1)), -var_1)))));
                                var_12 *= ((((max(var_7, (arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))) ? ((((min((arr_6 [i_1] [i_1] [i_1]), 11))) ? ((1 ? var_8 : (arr_3 [i_2] [i_4]))) : 1)) : (((arr_8 [i_0 + 1]) ? 11 : -1))));
                                var_13 = ((((~(arr_1 [i_0] [i_3])))));
                                var_14 = (min(((max(1, (arr_12 [i_0 + 1])))), (((((~var_8) + 2147483647)) << (1099511625728 - 1099511625728)))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0 + 1] = (min((((-((28 >> (arr_5 [i_0])))))), ((~(arr_9 [i_0] [i_1] [i_2] [i_0 + 1])))));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((~((var_1 ? (arr_6 [i_0 - 1] [i_2] [i_5 + 2]) : -17085))));
                            var_15 -= (((var_8 ? -26 : (arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))));
                            var_16 = (((((var_7 ? 17084 : var_6))) ? (5775 | -6) : var_5));
                            var_17 = ((!((!(arr_12 [i_0])))));
                            arr_19 [i_2] [i_1] [i_2] [i_1] [i_0 - 1] = (!-112);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_18 = 12011911717633740794;
                            var_19 = ((-14 ? 17080 : 93));
                        }
                        var_20 = (min(var_20, ((((arr_15 [i_0] [i_0 - 1] [i_0 - 1]) ? 1099511625728 : var_5)))));
                        var_21 = (var_8 <= (((-14 ? var_0 : (arr_10 [i_5] [i_2] [i_1] [i_0])))));
                    }
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_22 = (((((((arr_10 [i_0] [i_0] [i_0] [i_8 - 1]) ? var_4 : var_8))) ? ((var_0 ? var_3 : (arr_3 [i_1] [i_1]))) : (((max((arr_1 [i_8 - 1] [i_8 - 1]), var_8)))))));
                        var_23 = (max((((-((max(var_1, 1)))))), (min((min(var_5, 18119702843949669277)), ((((arr_12 [i_8]) + var_1)))))));
                        var_24 = ((-17085 ? (((min((max((arr_6 [i_1] [i_1] [i_1]), 1)), (-94 <= var_8))))) : ((((max(14, (arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_8 - 1])))) ? var_8 : ((9 ? (arr_21 [i_0] [i_1]) : var_7))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, ((!((((arr_12 [i_1]) ? (arr_25 [i_0 - 1] [i_9] [i_2] [i_9 - 1]) : (arr_4 [i_1] [i_1]))))))));
                        var_26 = 18446742974197925887;
                        arr_27 [i_1] = 11761;
                        arr_28 [i_9 - 1] [i_1] = ((+((((arr_24 [i_0]) >= var_8)))));
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (min(9765203338264201066, -13))));
                        var_28 -= ((((min(((var_0 | (arr_0 [i_0 + 1] [i_2]))), (var_7 >= -27281)))) ? var_5 : (((max(26, 255))))));
                    }
                    var_29 = -var_2;
                }
            }
        }
    }
    var_30 = (min(var_30, ((((!var_8) + ((-(!var_2))))))));
    var_31 = (max(((((((-9223372036854775807 - 1) ? var_8 : var_9))) ? ((var_3 ? var_5 : var_4)) : var_6)), (((((max(var_7, 255))) ? ((var_1 ? -122 : var_6)) : (var_1 * 1))))));
    #pragma endscop
}
