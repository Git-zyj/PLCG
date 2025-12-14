/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 += (((((arr_8 [18] [i_1] [i_0] [i_3] [i_4] [i_0]) >= (((min(var_13, var_5)))))) ? ((max((((!(arr_3 [i_2 + 3] [i_3] [i_3])))), (max(var_6, (arr_3 [i_1] [i_1] [i_3])))))) : ((min(30, (((var_3 < (arr_1 [i_1])))))))));
                                var_15 = 30;
                            }
                        }
                    }
                }
                var_16 -= ((min((arr_0 [i_0]), var_9)));
                arr_11 [i_0] = (((!((((arr_0 [i_0]) ? 14145568362676229634 : var_12))))));
                arr_12 [i_0] = ((var_0 | (((((var_4 <= (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                {
                    var_17 += var_11;
                    var_18 = (max((var_11 || var_4), (arr_19 [i_5])));

                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        arr_23 [i_6] [3] [i_7] [i_6 - 1] [i_6 - 1] [i_6] = ((35465847065542656 > (~0)));
                        var_19 = (min(var_19, (arr_17 [i_5] [i_7] [i_5])));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_27 [i_5] [i_9] [i_6] [2] = 304420060898717733;
                        var_20 *= ((~(arr_17 [i_5] [i_6] [i_9])));
                        arr_28 [i_5] [i_5] |= ((~(((!(arr_15 [i_6] [i_6 - 1]))))));
                        var_21 = ((!(arr_9 [9] [i_7])));
                    }
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        var_22 = 32;
                        var_23 = (min((arr_9 [i_7 - 3] [i_6 - 1]), (~65518)));
                        var_24 = (min(((((min((arr_10 [i_7] [i_6]), -1))) ? (~0) : var_7)), (((((((arr_4 [i_5] [0] [i_6] [i_5]) == 30)))) - (arr_0 [i_5])))));
                    }
                }
            }
        }
        var_25 = var_1;
        arr_32 [i_5] = ((!((((((arr_1 [i_5]) != var_3))) == ((min(var_5, (arr_2 [i_5] [i_5] [i_5]))))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_40 [i_12] = ((!((min(((-33 ? (arr_2 [i_5] [i_5] [i_5]) : var_9)), 0)))));
                        var_26 = var_13;
                        arr_41 [i_12] [i_5] = (arr_7 [i_5] [i_11] [i_5] [i_11]);
                        var_27 &= ((~(!var_5)));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_44 [i_14] = var_2;
        arr_45 [i_14] = ((((max(var_4, 1))) ? (max((!var_10), -32767)) : (((!(!var_4))))));
    }
    var_28 &= 6570153362882527473;
    #pragma endscop
}
