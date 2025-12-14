/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = (((((var_10 ? (max((arr_5 [i_0] [i_1] [i_1]), var_10)) : (var_1 <= 2988302078953683822)))) ? 30133 : ((var_11 ? (arr_2 [i_0]) : 30133))));
                            arr_12 [i_2 + 1] [i_0] [i_2 + 1] [i_3 + 1] [i_3] = (min(var_3, (min(0, 60278))));
                            arr_13 [i_0] [i_1] [i_2] [8] = ((!((((arr_11 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1] [1]) ? (arr_11 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3]) : var_6)))));
                            var_14 = var_4;
                        }
                    }
                }
                var_15 = (!var_10);
                arr_14 [i_0] [i_0] [i_1] = ((((max(((-(arr_6 [i_0]))), (((!(arr_6 [i_0]))))))) ? (min((arr_10 [10] [i_1]), ((0 ? var_7 : (arr_8 [i_0]))))) : ((var_10 ? (arr_8 [i_0]) : (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])))));
            }
        }
    }
    var_16 = (((~var_0) ? var_0 : (((1447742565 / (var_2 && -1))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 *= (min(169585026474430168, (-32767 - 1)));
                        var_18 = 1;
                        var_19 -= (((max(var_5, (arr_20 [i_4] [i_5] [17] [i_7])))));
                        arr_24 [i_4] [i_4] [i_4] [i_5] = ((((min(var_8, ((var_6 ? (arr_19 [i_5] [i_5 + 1] [i_6]) : 1506325479))))) ? ((((min(1, 18446744073709551615))) ? var_7 : (min((arr_18 [i_4]), (arr_22 [11]))))) : (((((var_10 ? var_0 : (arr_18 [i_5]))))))));
                    }
                    var_20 = (min((((((min(var_3, (arr_20 [i_6] [i_5 + 2] [i_5 + 2] [i_4])))) ? (var_4 / 1929537233) : (((((arr_23 [i_5] [i_5] [i_6] [i_4]) <= var_10))))))), ((~(((arr_15 [i_4]) ? 5555 : var_12))))));

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_28 [i_4] [i_5] [i_6] [i_8] [i_8] = ((var_2 ? (((!(arr_15 [i_5])))) : ((((((max(var_8, var_2)))) <= (arr_26 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 2]))))));
                        var_21 = (min(var_21, ((((arr_21 [i_4] [8] [i_6] [i_8] [i_4] [i_5 + 2]) ? (arr_21 [i_8] [i_5] [i_8] [i_5] [i_5 - 1] [i_5 + 1]) : (!var_6))))));
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        arr_32 [i_4] [i_4] [i_5] [3] = (arr_21 [i_5] [15] [15] [i_5] [i_4] [i_5]);
                        arr_33 [i_5] [i_5] [i_6] [i_6] = ((-(arr_20 [i_5] [i_5] [i_5 + 2] [i_9 + 1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_22 = (max(var_22, ((((arr_30 [i_4] [i_4] [6] [6] [i_5 + 1]) ? (var_8 ^ var_6) : ((1 ? var_3 : var_2)))))));
                        arr_36 [1] [i_4] [i_6] [i_10] &= 43441;
                    }
                    arr_37 [i_5] [i_5 + 2] [i_5 + 2] = ((((2754390377 <= 42825) ? ((16384 ? 7554328848935954601 : -12237)) : (((16507 ? 50322 : 9223372036854775807))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            {
                var_23 = ((((arr_7 [i_11 + 1]) ? (arr_7 [i_11 - 1]) : var_0)));

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_24 -= (arr_25 [i_12] [i_13] [i_12] [18]);
                    var_25 *= ((~((-(arr_34 [i_11] [i_12] [i_13] [i_11 + 1] [i_13] [i_11 + 1])))));
                }
                arr_46 [7] [i_12] [i_11] = ((((((!var_3) ? (min(var_10, (arr_38 [i_11]))) : 10879348223514987900))) && var_4));
            }
        }
    }
    #pragma endscop
}
