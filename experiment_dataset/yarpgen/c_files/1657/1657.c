/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((((((!(arr_4 [i_1] [i_0]))) ? (((arr_3 [i_0] [i_1]) ? (arr_2 [i_0]) : (arr_1 [i_1] [i_0]))) : (arr_1 [i_0] [i_1 + 2]))) == ((((arr_2 [9]) ? (arr_3 [2] [i_1]) : (arr_3 [12] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((~(((arr_1 [i_1 + 2] [i_1 + 2]) ? (arr_1 [i_1 + 2] [i_1 - 1]) : (arr_1 [i_1 + 2] [i_1 + 2])))));
                                var_21 = (((arr_9 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((((arr_9 [i_1] [i_2] [i_1] [10] [9] [i_1] [9]) ? (arr_8 [i_0] [1] [i_0] [i_0]) : (arr_4 [i_1] [i_1])))) ? (((((arr_6 [i_0] [i_0] [i_2] [i_3]) <= (arr_9 [i_0] [i_2] [i_1] [i_2] [i_2] [i_4] [i_4]))))) : (((arr_2 [i_2]) ? (arr_2 [i_0]) : (arr_6 [i_0] [i_3] [i_2] [i_3]))))) : ((((((~(arr_3 [i_0] [i_0])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((arr_3 [i_0] [i_0]) ? (arr_0 [i_2]) : (arr_5 [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_22 = (((((((((arr_12 [i_5] [11]) ? (arr_1 [i_5] [i_5]) : (arr_7 [i_5] [0] [i_5] [i_5] [i_5])))) ? (((arr_4 [12] [i_5]) - (arr_2 [1]))) : (((arr_8 [i_5] [i_5] [i_5] [i_5]) ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (((arr_5 [i_5]) ? (arr_10 [i_5] [12] [i_5] [i_5] [i_5]) : (((arr_0 [i_5]) ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : (arr_5 [i_5]))))) : ((((arr_3 [i_5] [9]) + ((-(arr_12 [i_5] [i_5]))))))));
        var_23 = ((((((((arr_2 [i_5]) << (((arr_7 [i_5] [i_5] [i_5] [i_5] [i_5]) - 605580517)))) - (((-(arr_12 [i_5] [i_5]))))))) ? ((((((arr_1 [i_5] [16]) ? (arr_12 [i_5] [i_5]) : (arr_3 [i_5] [i_5]))) + (((arr_0 [i_5]) - (arr_10 [i_5] [i_5] [18] [i_5] [i_5])))))) : (((((arr_1 [18] [i_5]) ? (arr_3 [i_5] [i_5]) : (arr_2 [i_5]))) << (arr_4 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_24 = ((~(arr_9 [i_6] [i_6] [i_6] [i_7] [18] [13] [i_6])));
            var_25 = ((((((arr_14 [i_6]) ? (arr_3 [i_6] [i_6]) : (arr_0 [i_7])))) ? (((arr_4 [i_6] [1]) ^ (arr_17 [i_6]))) : ((~(arr_13 [i_6] [i_6])))));
            var_26 = (((arr_9 [i_7] [i_6] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_1 [i_6] [i_7]) : (arr_16 [i_6] [i_6])));
        }
        arr_19 [4] |= (arr_18 [i_6] [i_6]);
        var_27 = (((arr_17 [i_6]) ^ (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        var_28 = (((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_15 [i_6]) : (arr_6 [i_6] [i_6] [14] [i_6])));
    }
    var_29 = ((-((var_13 ? (((var_16 ? var_7 : var_1))) : (var_14 / var_16)))));
    #pragma endscop
}
