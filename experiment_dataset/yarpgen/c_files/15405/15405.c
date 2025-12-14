/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? var_4 : var_6));
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [4] = ((-(max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [1])))));
        arr_4 [4] = (((((var_4 ? 47 : (((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])))))) ? ((max(22, 22))) : (((!(arr_1 [i_0]))))));
        var_14 += ((!(((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) > (arr_2 [i_0] [3])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_15 = (((arr_7 [i_1]) ? 226 : 27408));
                        var_16 = ((!((((arr_10 [i_1] [i_1] [i_1]) + (arr_10 [i_1] [i_1] [i_4]))))));
                    }
                }
            }

            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_17 = (i_1 % 2 == 0) ? (((((((arr_6 [i_1]) | (arr_9 [i_1] [i_2] [i_1])))) ? (((((max(243, (arr_16 [i_1] [i_2] [i_5])))) << (((arr_6 [i_1]) - 694510434))))) : ((var_5 ? ((((!(arr_12 [i_5] [i_2]))))) : (min((arr_11 [i_1] [i_2] [i_1] [i_1]), 0))))))) : (((((((arr_6 [i_1]) | (arr_9 [i_1] [i_2] [i_1])))) ? (((((max(243, (arr_16 [i_1] [i_2] [i_5])))) << (((((arr_6 [i_1]) - 694510434)) - 3114484173))))) : ((var_5 ? ((((!(arr_12 [i_5] [i_2]))))) : (min((arr_11 [i_1] [i_2] [i_1] [i_1]), 0)))))));
                arr_20 [i_1] [i_1] [i_1] = 42;
                var_18 -= (arr_18 [i_1] [i_1] [i_1]);
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_19 = (0 ? var_10 : ((+((((arr_8 [12] [i_2] [i_1]) >= (arr_19 [1] [i_6] [i_1] [i_8])))))));
                            var_20 += ((((-(((arr_24 [10] [10] [10]) ? 204 : var_10)))) + (arr_9 [6] [10] [6])));
                        }
                    }
                }
                var_21 = (((((1449649177916399613 ? (arr_17 [11] [i_1] [i_6] [i_2]) : 28))) ? (((arr_11 [i_1] [i_2] [i_2] [i_1]) ? (arr_11 [i_1] [11] [0] [i_1]) : (arr_11 [i_1] [i_2] [i_1] [i_1]))) : ((((arr_26 [i_1] [2] [i_1] [i_2] [i_6] [i_6] [i_6]) ? -var_3 : (var_5 > 96))))));
                var_22 = (min(var_22, (arr_23 [i_1] [1])));
                var_23 |= var_4;
                var_24 = (i_1 % 2 == 0) ? ((((((arr_24 [i_1] [i_2] [i_1]) ? (arr_24 [i_1] [i_1] [i_6]) : (arr_24 [i_1] [i_2] [i_2]))) >> ((((((var_11 / (arr_21 [i_1] [i_2] [i_2] [i_6]))) + ((((arr_23 [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_15 [i_1] [i_2] [i_1] [i_2] [i_1])))))) - 694510445))))) : ((((((arr_24 [i_1] [i_2] [i_1]) ? (arr_24 [i_1] [i_1] [i_6]) : (arr_24 [i_1] [i_2] [i_2]))) >> ((((((((var_11 / (arr_21 [i_1] [i_2] [i_2] [i_6]))) + ((((arr_23 [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_15 [i_1] [i_2] [i_1] [i_2] [i_1])))))) - 694510445)) - 3114484135)))));
            }
            arr_27 [i_2] [i_1] = 1;
        }
        var_25 = max((arr_24 [i_1] [i_1] [i_1]), (((!(arr_24 [i_1] [i_1] [i_1])))));
    }
    #pragma endscop
}
