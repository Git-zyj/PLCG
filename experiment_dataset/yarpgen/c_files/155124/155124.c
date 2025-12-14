/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = max((arr_2 [i_0] [i_0]), (arr_3 [i_0]));
        var_11 = (min(var_11, var_8));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_11 [i_2] = var_3;

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_12 = (max((max(127, ((((arr_2 [i_1] [3]) != (arr_1 [i_1])))))), ((max(-6, 127)))));
                            var_13 = (((((((max((arr_8 [i_1]), (arr_7 [i_3])))) ? var_1 : (((arr_0 [i_4] [i_2]) ? var_7 : 24166))))) ? ((max(1, 32767))) : (arr_0 [i_4 - 1] [i_5 + 1])));
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_6] [11] [i_2] [11] [i_1] = ((((max((arr_16 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1]), var_8))) ? ((((arr_15 [i_2]) ? (!1087981879) : -949264744))) : (((!var_7) ? (arr_8 [i_1]) : (((((arr_13 [i_6] [9] [i_2]) != (arr_18 [i_1] [i_2] [i_1] [i_2])))))))));
                            arr_22 [i_2] [5] [i_2] = ((((((arr_9 [i_6 + 1] [i_2] [i_1]) ? (((!(arr_4 [i_4])))) : (((!(arr_17 [i_1] [i_2] [9]))))))) != (((max(var_6, (arr_6 [i_1] [i_1]))) - var_1))));
                            var_14 = ((((((((arr_18 [i_1] [i_2] [i_3] [i_2]) ? -4504268288262413743 : (arr_15 [i_2])))) ? (arr_8 [i_1]) : ((((arr_19 [i_1] [i_4 + 2]) * 1))))) - (arr_18 [i_1] [i_3] [i_4] [i_2])));
                        }
                        var_15 = ((170 ? 127 : 96));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (-7026259884127715184 / var_1)));
                        var_17 = (max(var_17, (((var_7 ? (arr_18 [i_1] [i_2] [i_3] [i_3]) : (arr_16 [i_1] [i_2] [i_3] [i_3] [i_7 - 1] [i_1]))))));
                    }
                    arr_25 [i_1] [i_2] [i_2] [i_2] = ((+(((arr_9 [i_1] [i_2] [i_1]) - (arr_9 [i_1] [i_2] [i_3])))));
                    var_18 = ((var_7 ? (max(var_9, (((arr_2 [3] [i_1]) ? var_9 : var_2)))) : var_4));
                    var_19 = (min(var_19, ((min((arr_10 [i_1] [i_1]), var_5)))));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_20 = (((((max(var_0, (arr_14 [7] [i_2] [7]))) / (max((arr_7 [i_1]), var_5)))) - (arr_18 [i_2] [i_2] [i_2] [i_2])));
                    var_21 = (arr_18 [i_1] [i_2] [i_8] [i_2]);
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {

                            for (int i_11 = 3; i_11 < 9;i_11 += 1)
                            {
                                var_22 |= (((((var_9 ? (arr_29 [i_10] [i_9] [i_9 - 1]) : (arr_29 [i_1] [i_10] [i_9 - 2])))) ? (arr_13 [i_2] [i_10] [i_11 - 1]) : ((((arr_34 [i_1] [i_1] [i_9] [i_10] [i_10]) != ((max((arr_19 [i_2] [i_1]), var_8))))))));
                                var_23 = (max(1, (((arr_33 [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 2] [i_9 + 2]) - (((65 ? 1 : (arr_17 [i_1] [i_1] [i_1]))))))));
                                var_24 = ((((max((arr_13 [i_11 - 2] [i_10] [i_1]), (min(var_8, (arr_19 [i_10] [i_10])))))) ? var_0 : 1));
                            }
                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_25 = (arr_4 [i_1]);
                                var_26 = ((+((((arr_38 [i_9] [i_9 + 2] [i_9 + 2] [10] [i_9 - 2] [i_9 - 1]) != var_8)))));
                            }
                            var_27 = ((((min((arr_6 [i_9 - 1] [i_1]), (arr_6 [i_9 - 2] [i_9])))) ? (arr_6 [i_9 + 1] [i_9]) : (((arr_6 [i_9 + 1] [i_1]) ? (arr_6 [i_9 + 2] [i_9 - 1]) : (arr_6 [i_9 + 2] [1])))));
                            var_28 = (max(((((arr_17 [i_9 + 2] [i_2] [i_9 + 2]) ? (arr_13 [i_9 + 2] [0] [i_9]) : (arr_13 [i_9 + 2] [i_2] [i_9])))), ((((((arr_36 [i_2] [i_2] [i_9] [7] [i_2]) ? (arr_34 [i_1] [i_1] [i_1] [11] [i_1]) : (arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? var_8 : (arr_35 [i_10] [6])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
