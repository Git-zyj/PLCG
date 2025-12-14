/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (42 % 62);
                var_15 -= ((((max(3988168850868150617, ((1454435120 ? var_9 : (arr_2 [i_0] [i_1])))))) ? (!137) : (((!3565196227) ? (((arr_4 [i_1] [i_1]) ? 80 : 16955943240454837001)) : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [9]))))))));
                arr_5 [i_1] [i_1] [i_1] = ((((((((125 ? (arr_0 [i_0]) : 9223372036854775807))) ? (min((arr_3 [i_0]), (arr_0 [i_0]))) : var_6))) ? (((arr_1 [i_0]) << (var_12 || 36))) : var_5));
                var_16 = (arr_4 [i_1] [i_0]);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_17 += ((((((arr_7 [i_2] [i_1] [i_0]) ? (((((arr_4 [i_0] [i_1]) && var_9)))) : (arr_1 [i_1])))) ? (((arr_6 [i_0] [i_1] [i_2] [i_0]) ? ((58720256 ? (arr_4 [i_0] [i_1]) : -1273698198558619745)) : (((-8756 | (arr_8 [i_2] [i_0] [i_0] [i_0])))))) : ((((!((((((arr_4 [i_0] [i_1]) + 2147483647)) << (((arr_3 [i_0]) - 302420219804443016)))))))))));
                    var_18 *= ((((((((~(arr_0 [i_0])))) ? (((((arr_3 [i_1]) <= var_5)))) : ((var_9 ? (arr_1 [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_2])))))) / ((var_9 ? ((~(arr_2 [1] [i_0]))) : (((var_13 ? 1534400812 : (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_9 [i_2] [i_0] [i_0] |= (((!18446744073709551610) ? (arr_4 [i_2] [i_0]) : (((((arr_0 [i_0]) != var_11)) ? (((arr_3 [i_0]) ? var_3 : var_9)) : (((((arr_7 [i_0] [i_0] [i_0]) > var_13))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (arr_2 [3] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_19 -= (((~var_6) ? -8670430560516269421 : -9513));
                    arr_14 [i_0] [i_1] [i_0] = (arr_3 [13]);
                    var_20 = ((var_0 > (arr_2 [i_0] [i_0])));
                    arr_15 [i_1] [i_1] [i_1] = ((~(~var_2)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_3] [i_4] [i_5] = (-166578501146011486 / var_3);
                                var_21 = (min(var_21, var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(((-1273698198558619763 ? ((max(var_6, var_10))) : (!var_13))), -32741));
    var_23 = (min(var_23, (((((((var_8 ? 62 : var_5))) ? var_1 : ((113 ? 5830139706780835672 : 18446744073709551614))))))));
    #pragma endscop
}
