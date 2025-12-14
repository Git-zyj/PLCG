/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = ((var_3 - ((var_1 ? (arr_0 [i_0] [i_0]) : 22521))));
        var_16 = (!var_7);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_1] = 14020;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] = (~(arr_7 [i_4] [i_3]));
                        var_17 = (3370 & 1);
                        var_18 ^= ((var_0 ? (arr_5 [i_1]) : 51515));

                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_19 -= ((arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) + (arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]));
                            var_20 = (max(var_20, var_5));
                        }
                        var_21 = (((var_6 ? 51515 : var_13)));
                    }
                }
            }
        }
        var_22 ^= (((arr_16 [10] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_16 [i_1] [i_1] [i_1] [10] [i_1] [10] [1])));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 = (max(var_23, (((-(arr_11 [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_29 [i_6] [i_6] [i_6] [7] [7] [3] = (arr_25 [i_6 - 1] [i_6] [i_6] [i_6 + 1]);
                                var_24 = (max(var_24, (((arr_27 [i_1] [i_1] [i_1] [i_6 + 1] [i_1] [1] [i_8]) ? var_0 : (arr_27 [i_1] [i_6] [i_1] [i_6 + 1] [i_6] [i_9] [i_1])))));
                                arr_30 [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] [i_6] = (arr_15 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]);
                            }
                        }
                    }
                    arr_31 [i_6] [i_6] = (((((-1757253010 ? (arr_21 [i_6] [i_6]) : var_10))) && (arr_24 [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 2])));
                    arr_32 [i_1] [i_1] [i_6] [i_1] = (!var_1);
                }
            }
        }
        arr_33 [i_1] = arr_20 [i_1] [i_1] [i_1] [i_1];
        var_25 = (max(var_25, (((~((-(arr_15 [i_1] [0] [i_1] [i_1] [i_1]))))))));
    }
    var_26 = (max((max(-5108, 25656)), var_2));
    #pragma endscop
}
