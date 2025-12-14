/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1477119940848188932 ^ (-21300 < 4937138252685192214)))) ? -var_11 : var_13));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_15 = var_11;
                        var_16 = ((arr_7 [i_3 + 4] [i_3 + 4] [i_3] [i_3 + 3]) || ((min((arr_7 [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_3 + 3]), (arr_10 [i_3 + 4] [i_3 + 4] [i_0] [i_3 + 3] [i_3 - 1])))));
                        var_17 |= ((((-(min(511, var_0)))) < (arr_10 [i_0] [i_0] [6] [4] [i_3 - 1])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_18 = (max(var_18, ((min((arr_10 [i_0] [i_1] [18] [i_2] [i_4]), ((-(min(var_9, 65014)))))))));
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [0] = var_8;
                        arr_16 [i_0] [5] [i_0] [i_0] = (((((((var_11 - (arr_7 [i_0] [i_1] [i_2] [i_4]))) / var_4))) - (arr_1 [i_0] [i_0])));
                    }
                    var_19 = 32767;
                    var_20 = (!((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [20] [i_0]) : (arr_12 [i_0] [i_1] [i_1] [i_0])))));
                    arr_17 [i_2] [i_0] [i_2] [21] = ((((arr_0 [i_0] [i_1]) ? (arr_9 [i_0] [i_0] [i_2]) : var_7)));
                }
            }
        }

        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            arr_20 [i_0] [i_0] [i_5] = ((-12261 ? (min((((arr_2 [i_5]) ? (arr_7 [i_0] [i_0] [i_5] [i_5 + 2]) : (arr_9 [i_0] [i_0] [i_5]))), (arr_14 [i_0]))) : (arr_6 [i_0] [i_5] [i_5 - 2])));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_21 = (((((-(arr_11 [i_0] [i_5 + 1] [i_6 - 2] [i_6])))) ? 842 : (((arr_7 [i_0] [i_5 - 3] [i_6 + 1] [i_7]) & (arr_11 [i_0] [i_5 + 1] [i_6 - 4] [i_6 + 4])))));
                        arr_28 [i_0] [i_5] [i_6] [i_0] = (arr_1 [i_7] [20]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_22 = ((-(arr_12 [i_8] [i_8 + 1] [i_8 - 2] [22])));
        var_23 = (min(var_23, (((((((arr_21 [i_8] [16] [i_8 + 1] [16]) + var_12))) ? (var_13 - 65047) : var_9)))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    arr_38 [3] [i_10] = var_12;
                    arr_39 [i_9] [i_10] [i_11] = min(var_0, ((min((((arr_1 [i_9] [17]) ? var_1 : 70)), (arr_25 [0] [i_10] [i_11] [9])))));
                    arr_40 [i_9] [i_9] [i_9] [1] = 842;
                    var_24 = (min((min((arr_2 [i_9]), (arr_2 [i_10]))), 0));
                }
            }
        }
        var_25 = (((((!var_9) || ((!(arr_31 [i_9] [i_9]))))) ? var_1 : ((((!(arr_7 [i_9] [i_9] [i_9] [i_9])))))));
        var_26 -= (((arr_1 [i_9] [8]) ? (arr_9 [i_9] [i_9] [i_9]) : ((min((65014 != var_5), ((-(arr_29 [i_9] [3]))))))));
    }
    #pragma endscop
}
