/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 |= (((((var_10 ? -1588150557 : var_8))) ? ((-(min(var_12, 1)))) : 12897865958411753317));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((arr_0 [i_1]) ? 0 : ((var_4 ? 32 : (arr_4 [i_0 + 1] [2]))))))));
                var_20 = ((0 ? ((~(arr_1 [i_0 - 1]))) : var_3));
                var_21 = var_15;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            var_22 = ((12897865958411753313 ? (-57 / var_15) : ((553951593625830805 | (arr_10 [8] [i_3 - 2])))));
            arr_11 [i_2] [i_2] [4] |= 1879957840;
            arr_12 [1] [2] [1] |= (9082739929350554755 ? -281685482 : -41);
            arr_13 [i_2] [i_3] [i_3 - 2] = 24;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_20 [i_5] = 758305172;
                arr_21 [i_2] [i_2] [i_4] [i_5] |= (!1145218536);
                arr_22 [i_5] [i_5] [i_5] [i_2] = var_2;
            }
            arr_23 [i_2] |= (var_8 ? 11756 : (arr_6 [i_2]));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_29 [i_2] [i_6] [i_6 - 1] [i_7] |= (~(arr_2 [1] [i_4] [i_2]));
                        var_23 = ((-9042069909821547746 >= (~1)));
                        var_24 = 17764;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = ((arr_14 [i_6 + 3] [i_6 + 1] [i_6 - 1]) & (arr_14 [i_6 + 3] [i_6] [i_6 - 2]));
                            var_26 |= var_6;
                            var_27 = (490510335 <= var_7);
                        }
                    }
                }
            }
        }
        arr_33 [9] = ((1 * (arr_7 [i_2] [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_28 = (~203267364);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_29 = var_4;
                                var_30 = ((-(arr_8 [i_12] [i_11])));
                            }
                        }
                    }
                    arr_44 [i_2] [i_2] [i_9] [i_10] = (((arr_39 [i_2]) - (arr_32 [2] [i_9] [i_9] [i_9] [i_10])));
                    arr_45 [0] [i_10] = ((var_6 ? (((arr_3 [i_10]) ? (arr_43 [i_2] [i_9] [i_10] [i_2] [i_2] [i_9]) : var_10)) : var_9));
                }
            }
        }
    }
    #pragma endscop
}
