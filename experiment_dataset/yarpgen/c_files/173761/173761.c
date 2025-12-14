/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_11;
    var_19 = (max(var_19, var_3));
    var_20 = (max(var_20, var_10));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 += ((((((((var_15 && (arr_2 [i_0] [i_0])))) | (arr_2 [i_0] [i_0])))) ? (-28216 < var_11) : (((18446744073709551604 <= ((30 ? 16 : 18446744073709551604)))))));
        var_22 = (max((max(var_5, var_7)), (((((((arr_3 [i_0]) <= var_16))) < var_3)))));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) | -var_2));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_23 = var_10;
                        var_24 = ((~(((~var_2) ? (arr_0 [i_0] [i_0]) : var_17))));
                    }
                }
            }
        }
        arr_16 [i_0] = ((-((-(arr_14 [i_0] [i_0])))));
    }

    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_25 = (+(((arr_19 [i_5]) ? (arr_17 [i_4]) : (arr_20 [i_4]))));
                        var_26 = (((arr_17 [i_4 - 3]) ? (arr_17 [i_4 - 1]) : var_13));
                        var_27 = (arr_23 [i_4] [i_4 - 3] [i_4 - 3] [i_4]);
                    }
                    var_28 = ((var_4 ? (arr_20 [i_4]) : ((var_17 ? (arr_18 [i_4 - 2]) : (arr_21 [i_6] [i_6] [i_6] [i_5])))));
                    arr_27 [i_4] [i_6] = (((max(-18446744073709551604, (arr_19 [i_4 - 1])))) ? ((max((arr_20 [i_4]), (arr_20 [i_4])))) : (((arr_23 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4]) ? (arr_24 [i_4]) : (arr_19 [i_4]))));
                    var_29 = (max(var_29, (arr_22 [1] [1] [i_6] [1])));
                }
            }
        }
        arr_28 [2] |= -var_15;
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_30 = ((((((arr_24 [i_4]) < (arr_20 [i_4])))) | ((~(arr_33 [i_4] [i_4] [i_4] [8] [i_9])))));
                        arr_36 [i_4] [i_9] = (arr_35 [i_4] [i_4] [i_4] [i_10]);
                        arr_37 [i_4] [6] [i_9] [i_10] = ((((((arr_22 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_8 - 1]) | (arr_26 [i_8] [i_4] [i_4] [i_8 - 1] [i_4] [i_10])))) ? (arr_29 [i_8 - 1] [i_8] [i_4]) : ((max((arr_19 [i_4 + 1]), ((((arr_21 [i_4] [i_8 - 1] [i_4] [i_10]) || var_11))))))));
                    }
                }
            }
        }
        arr_38 [i_4] = (arr_25 [i_4] [i_4] [i_4] [i_4 - 3]);
    }
    #pragma endscop
}
