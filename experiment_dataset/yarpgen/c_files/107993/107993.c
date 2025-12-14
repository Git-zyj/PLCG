/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = ((!(((((((arr_2 [i_0] [17]) ? -1145484242 : 46896))) ? (arr_1 [i_0] [i_0]) : ((-(arr_2 [i_0] [i_0]))))))));
        var_12 = ((((((((arr_2 [i_0] [i_0]) + 2147483647)) << (var_2 - 470832514819463687)))) ? (arr_2 [i_0] [i_0]) : (((((arr_0 [i_0]) ? var_4 : -7879)) & (((var_6 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [1] &= ((((!(arr_3 [i_1] [i_1])))) * (arr_1 [i_1 + 1] [i_2]));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_13 = 945435545;
                            arr_17 [i_4] [i_4] [i_3] [i_4] [i_5 - 1] = (((((arr_7 [i_2] [6] [i_4]) ? var_2 : (arr_10 [7]))) - var_8));
                        }
                    }
                }
            }
            arr_18 [i_1 + 1] |= (arr_8 [i_1 + 1]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_28 [i_1 + 1] [i_1 + 1] [i_8] [i_8 + 1] [i_9] = (2583566126941386158 + 1717700339666556598);
                            var_14 -= (((arr_2 [i_1 - 1] [i_6]) || ((((arr_12 [i_1] [i_1 + 1]) / 2430)))));
                        }
                    }
                }
            }
            arr_29 [i_1] = 3894466003;
            var_15 = (arr_24 [i_1] [i_6] [i_1 - 1]);
        }

        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            arr_33 [i_1 + 1] [i_1] [i_1] &= (min((min((63106 && var_1), var_4)), ((~(((!(arr_7 [i_10] [i_10] [i_10]))))))));
            var_16 = ((((((arr_14 [i_1] [i_1] [2] [i_1]) - (!63106)))) ? (((~(arr_5 [i_10 - 1])))) : (((-91 ? ((max(91, 27121))) : 63106)))));
        }
    }
    for (int i_11 = 4; i_11 < 24;i_11 += 1)
    {
        var_17 = (-(min((arr_35 [i_11]), var_0)));
        var_18 = (min(var_18, var_8));

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            arr_40 [i_11] [i_11] = ((((((var_2 ? 11 : (arr_38 [i_11] [i_11 - 1] [i_11]))))) + ((var_3 + (arr_35 [i_11 + 1])))));
            var_19 = ((((((arr_35 [i_11 + 1]) ? var_3 : (arr_37 [i_11 - 4] [i_11 - 2])))) ? ((~(arr_38 [i_11 - 4] [i_11 - 4] [i_11 + 1]))) : ((63131 ? 54867 : -71))));
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_20 = ((-((-var_8 ? (arr_36 [i_12]) : (arr_36 [i_13 - 1])))));
                            var_21 = (max(var_21, (((-(((((var_10 ? var_9 : var_9))) ? (var_8 != var_9) : ((min(var_1, -119))))))))));
                        }
                    }
                }
            }
        }
        var_22 *= (((min((arr_45 [i_11] [i_11] [i_11 - 2] [i_11 - 1] [i_11] [i_11 + 1] [i_11]), ((min(var_0, (arr_41 [i_11] [i_11 - 1] [i_11 - 3] [i_11])))))) % (((var_0 ? ((var_2 ? (arr_34 [i_11 + 1]) : var_10)) : ((((arr_39 [i_11] [i_11 - 2]) << (var_2 - 470832514819463675)))))))));
    }
    var_23 = (((((-(!var_0)))) > ((-(min(var_6, var_2))))));
    var_24 = ((((min(-var_9, ((max(var_6, var_0)))))) ? var_8 : var_0));
    #pragma endscop
}
