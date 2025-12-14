/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 *= ((~(arr_1 [1])));
        arr_2 [i_0] [i_0] = ((~(((!(((arr_1 [i_0]) && (arr_1 [0]))))))));
        var_18 = 124;
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (!(((248 ? (((min(113, 31744)))) : (((arr_4 [i_1] [i_1]) ? 1073741820 : 1914085108))))));
        var_20 |= (-118 && 31743);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_8 [i_3] [i_4] [i_3] [i_4])));
                            var_22 = (arr_9 [i_1] [i_5 + 1] [i_3]);
                            var_23 = ((arr_14 [i_1] [12] [i_3] [i_4] [11] [i_5 - 1]) | 119);
                        }
                    }
                }
            }
            arr_16 [i_2] = (arr_8 [i_2] [0] [i_1] [0]);
            var_24 += ((~(arr_14 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2])));
            arr_17 [i_2] = (max((arr_14 [8] [10] [i_1] [8] [i_2] [i_2]), (min(561850441793536, var_4))));
        }
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            var_25 |= ((((((((-110 ? (arr_20 [i_1] [i_1] [i_6]) : (arr_9 [i_1] [i_1] [i_1])))) ? (arr_4 [3] [i_6 - 1]) : ((56690910816853770 ? (arr_20 [i_1] [i_1] [i_6 - 2]) : (arr_10 [i_1])))))) && (arr_3 [i_1] [i_6])));
            var_26 = (min(var_26, (arr_3 [i_6 - 2] [i_1])));
            arr_21 [i_1] [i_1] [i_1] = 3067391374;
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_27 = (max(var_27, (((~(min((arr_23 [i_1] [i_7]), (arr_19 [i_1] [i_7]))))))));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_28 = (min(var_28, (-31730 && -31760)));
                var_29 = (min((((-(arr_13 [i_1] [i_8])))), (min((arr_8 [i_8] [1] [i_7] [i_8]), (arr_13 [i_1] [i_8])))));
                arr_27 [i_1] [i_1] [i_1] [i_8] = (((arr_7 [i_8]) ? ((((arr_14 [i_8] [i_7] [i_8] [4] [i_1] [7]) && (((arr_26 [i_8] [i_8]) != 124))))) : (arr_6 [i_1] [i_8] [i_8])));
            }
        }
        var_30 &= ((!(arr_11 [i_1] [i_1] [13] [i_1] [i_1] [i_1])));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_31 = (~119);
        var_32 |= (arr_28 [i_9] [i_9]);
        var_33 = (max(var_33, var_4));
        var_34 = ((var_13 ? (((arr_29 [i_9] [i_9]) | (arr_29 [i_9] [i_9]))) : var_3));
    }
    var_35 += 31711;
    #pragma endscop
}
