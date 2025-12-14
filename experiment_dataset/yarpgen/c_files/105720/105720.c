/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((((var_0 ? var_6 : var_0))) ? var_9 : var_15))) ? (max((var_6 || var_16), (var_15 | var_14))) : var_13));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!((!(arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = (arr_8 [i_0] [i_3] [i_0] [i_0]);
                        var_18 ^= arr_9 [i_0];
                        var_19 ^= ((arr_6 [i_2 + 2] [i_2 + 1] [i_2]) / (arr_1 [i_0] [i_3]));
                        var_20 = (((arr_5 [i_0]) < (19 - 16458)));
                        var_21 = (min(var_21, 1999522263));
                    }
                }
            }
            var_22 ^= (((arr_3 [i_0] [0]) >= (arr_10 [i_0] [i_0] [i_0] [12])));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_23 = (max((!1999522263), (max((!-1999522262), (((arr_8 [i_0] [i_4] [i_0] [i_0]) || (arr_14 [16] [i_0])))))));
            arr_15 [i_0] [i_0] [i_0] = (max((((((-725036410 ? -2123859332 : 16843))) ? var_9 : (min(var_12, (arr_13 [i_0] [i_0]))))), (max((max((arr_10 [i_0] [i_4] [i_4] [i_0]), (arr_13 [i_0] [i_4]))), (arr_12 [i_0] [i_4])))));
            var_24 -= (min((((!((min(3, 1999522267)))))), (((arr_13 [i_4] [i_0]) ? (arr_10 [i_0] [i_0] [i_4] [i_4]) : (arr_7 [i_4] [i_4])))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_25 = (max(var_25, (arr_8 [i_5] [i_5] [i_0] [i_5])));
            var_26 = ((var_12 ? (min((((arr_1 [i_0] [i_0]) ? var_1 : var_3)), 50334)) : var_13));
            var_27 &= ((!var_1) ^ (min(7647224136043643641, 8046806542108662879)));
        }
        var_28 = (arr_18 [i_0] [i_0] [i_0]);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_29 = (arr_2 [i_8]);
                        var_30 |= ((((max(var_3, var_6))) ? (arr_10 [i_6] [i_6] [i_8] [i_8]) : ((~(arr_26 [i_6] [i_7] [i_8] [i_8] [i_9] [i_9])))));
                        var_31 = (max(var_31, (arr_22 [i_6] [i_7] [i_8])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_32 += var_2;
                        arr_38 [i_6] [i_6] [i_10] [i_6] = ((!(((var_8 | (arr_0 [i_6] [i_10]))))));
                    }
                }
            }
        }
        var_33 = ((-((((((min((arr_34 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_21 [i_6]))))) >= (var_2 ^ 18446744073709551615))))));
        var_34 = ((((arr_22 [i_6] [i_6] [i_6]) ? (arr_22 [5] [i_6] [i_6]) : (arr_22 [i_6] [i_6] [i_6]))));
        var_35 = ((((((!(arr_19 [12])))) << (var_8 - 4097800331))));
    }
    #pragma endscop
}
