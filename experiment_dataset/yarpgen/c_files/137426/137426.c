/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max((((-((var_3 ? 1 : var_3))))), ((var_1 & (((var_8 ? 1 : 13)))))));
        arr_2 [i_0] [i_0] = (((arr_0 [17]) ? var_5 : var_7));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 = (((max(-255, (min((arr_7 [i_0] [i_1] [1] [i_3 - 1]), (arr_10 [i_0] [7] [i_2 - 3] [i_1] [1] [i_3]))))) >> ((((((max((arr_4 [i_3] [i_2] [i_1]), var_8))) ? var_0 : (!var_4))) - 186))));
                        var_13 &= (((~(((arr_6 [12] [12]) ? var_3 : var_4)))));
                        arr_11 [i_0] [i_1] [2] [i_1] [i_1] [i_1] = (min(((((arr_8 [i_3 + 1]) < (var_6 & var_2)))), ((-(arr_9 [i_0])))));
                    }
                }
            }
            var_14 = ((-((~(arr_5 [i_0] [i_0] [i_0])))));

            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                arr_15 [i_0] [14] [i_0] [i_0] = (((!((((arr_14 [i_0] [i_0] [i_0]) & var_4))))) && (((-(var_9 > -12300)))));
                var_15 = ((var_2 - ((var_8 >> (((arr_10 [i_0] [i_4 + 2] [i_4] [i_4 - 2] [i_0] [i_4 - 2]) - 2007335075824011760))))));
                var_16 = (max(var_16, var_3));
                var_17 = (min(var_17, ((max(var_1, (((max((arr_4 [i_0] [i_0] [i_4 + 1]), (arr_3 [i_0]))))))))));
                arr_16 [i_0] [i_0] [i_4] = ((-(max(((max((arr_1 [i_0]), var_9))), ((var_6 ? var_7 : (arr_1 [i_0])))))));
            }
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                var_18 = 2256023130807395534;
                var_19 = (((arr_9 [i_0]) ? var_2 : (((((min((arr_1 [i_0]), 1))) >= ((-(arr_19 [i_0] [i_0] [i_5] [i_5]))))))));
                arr_21 [i_0] [7] [i_0] [i_0] = (((max((arr_19 [i_0] [i_0] [i_0] [i_0]), var_3)) < -46781));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 = (((((((~var_7) + 2147483647)) << (var_6 - 129169899))) != 1242651219));
                            arr_26 [i_0] [i_1] = -var_6;
                            arr_27 [4] [i_1] [i_1] [i_1] [i_0] [i_0] = (!46781);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_21 -= var_10;
            var_22 = -var_2;

            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                var_23 = var_8;
                arr_34 [i_0] [i_8] [i_0] [i_9] = (((arr_24 [i_0] [i_0] [i_9 + 2] [i_9] [i_9]) ? (arr_24 [i_0] [i_0] [i_9 - 1] [i_9 - 1] [0]) : var_3));
            }
            var_24 = -32744;
        }
        var_25 = ((max(var_3, var_6)));
        arr_35 [i_0] [i_0] = (!var_1);
    }
    for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] [i_10] = (((((~(54000 || var_3)))) ? 54000 : (max((var_7 + var_9), ((var_7 ? var_8 : var_6))))));
        var_26 = ((max(14735300464056785767, (arr_12 [i_10] [i_10] [i_10] [i_10 + 1]))));

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_42 [i_11] [i_11] [i_10 + 1] = (min((((!(arr_4 [i_10] [i_10 - 1] [i_10 - 1])))), (arr_4 [i_10] [i_10 + 1] [i_11])));
            var_27 = ((25655 ? (var_7 - var_5) : (18773 - 1)));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            arr_46 [i_10 - 1] = (arr_29 [i_12 + 1] [i_10 + 1] [i_12]);
            var_28 = arr_43 [10];
        }
        var_29 = ((((var_6 ? var_1 : (arr_28 [i_10] [i_10 - 1] [i_10 + 1]))) - (((((arr_28 [13] [i_10 - 1] [i_10 + 1]) || (arr_28 [i_10 - 1] [i_10 - 1] [i_10 + 1])))))));
    }
    for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = (min(((max(var_6, var_0))), var_2));
        arr_50 [i_13] = (((((arr_40 [i_13 - 1]) && (arr_22 [i_13] [i_13 + 1] [i_13 - 1] [i_13]))) || (((var_2 ? (arr_40 [i_13 - 1]) : var_1)))));
        var_30 = (!(var_3 | 14425674191540752327));
    }
    var_31 = var_1;
    #pragma endscop
}
