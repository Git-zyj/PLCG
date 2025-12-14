/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (((var_0 ? (arr_9 [i_0] [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_4] [i_4]) : (arr_9 [i_0] [i_0] [i_1] [i_2 - 3] [i_4] [i_4] [i_4]))));
                                var_12 = ((arr_12 [5]) ^ ((((arr_5 [i_0]) ? ((var_5 | (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0]))) : var_2))));
                            }
                        }
                    }
                    var_13 = ((((((arr_4 [i_0] [i_0] [3]) << (((arr_3 [i_0] [i_2 - 2]) - 2132661618421387979))))) == (arr_3 [i_0] [i_1])));
                    var_14 = var_3;
                    var_15 = var_3;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_16 |= (((((((arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) != (arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? ((((arr_8 [i_5] [i_5]) ? 213 : (((arr_6 [i_5] [i_5]) | (arr_4 [i_5] [i_5] [i_5])))))) : ((((max((arr_14 [i_5]), (arr_7 [i_5] [1] [i_5] [i_5] [i_5] [i_5])))) ? (arr_8 [i_5] [i_5]) : (var_5 | var_6)))));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_17 = arr_19 [i_7];
                var_18 = (max(var_18, (arr_8 [12] [i_7])));
            }
            var_19 -= (arr_14 [i_6]);

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_20 = var_2;
                var_21 = var_2;
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_25 [i_5] [i_6] [i_6] [i_6] = (arr_13 [i_5]);
                var_22 = (((arr_11 [i_5] [i_6] [i_5] [i_5] [i_5] [i_6] [i_6]) == (((~var_5) ? (min(var_1, (arr_10 [i_5]))) : ((min(var_5, (arr_4 [i_5] [i_5] [10]))))))));
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_30 [i_5] [i_5] [i_5] = ((-((var_9 ? (arr_15 [i_5]) : (arr_27 [i_5] [i_6] [i_6] [i_10])))));
                arr_31 [i_5] = 32256;
                var_23 = (arr_24 [i_10] [i_10]);
                var_24 = ((((max((arr_7 [i_5] [i_5] [i_5] [i_6] [i_6] [i_10]), var_9))) ? ((((arr_28 [i_5] [i_6] [i_6] [i_10]) * (arr_23 [i_5] [i_6] [i_5] [i_6])))) : ((var_5 ? var_0 : (arr_22 [i_6] [i_6] [4])))));
            }
        }
        arr_32 [i_5] [i_5] = var_1;
        arr_33 [i_5] = var_4;
        var_25 = ((((((((-(arr_10 [i_5])))) ? (arr_28 [i_5] [i_5] [i_5] [i_5]) : (var_7 != var_5)))) ? (((((max(var_1, (arr_4 [i_5] [i_5] [i_5])))) ? var_4 : ((var_7 ? (arr_16 [i_5] [i_5] [i_5]) : (arr_6 [i_5] [i_5])))))) : ((((min((arr_18 [i_5] [i_5]), (arr_22 [i_5] [i_5] [i_5])))) ^ ((var_7 ? (arr_8 [i_5] [i_5]) : (arr_24 [i_5] [i_5])))))));
    }
    #pragma endscop
}
