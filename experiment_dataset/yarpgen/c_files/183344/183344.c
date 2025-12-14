/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_10 ^= ((var_9 ? (arr_4 [i_1 - 1] [i_1] [i_1]) : var_5));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = (163 || -7381915378553360263);
                    var_11 |= (((!25293) ? (arr_5 [i_0]) : var_2));
                    arr_9 [i_1] = ((~(~var_0)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_12 += (((((3012539023 ? (arr_11 [i_1] [i_1 + 1] [i_1 - 1]) : var_9))) ? ((var_7 ? 1792122608 : (arr_3 [i_1]))) : (arr_2 [i_0])));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_16 [1] [i_1] [i_1] [i_4] [i_1] [i_4] = (arr_12 [i_3] [i_3] [i_3] [i_1]);
                        var_13 = (max(var_13, ((((!460861023) ? (!var_1) : var_0)))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_14 *= -var_5;

                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [12] [i_0] [i_0] [i_0] [12] [i_3] |= (arr_14 [i_0] [i_1] [i_1] [i_6 + 1] [i_6] [i_6 - 1]);
                            var_15 -= ((540007884 - (arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_0])));
                            var_16 = var_2;
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_17 = (arr_23 [i_7 - 1] [i_1] [i_1] [i_5] [1]);
                            arr_25 [6] [i_5] [i_5] [i_5] [i_5] [i_5] [i_1] = (((arr_14 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) & var_5));
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    arr_29 [i_1] [i_1] [i_8 + 2] [i_8] = (var_1 ? (var_6 | var_9) : (arr_15 [i_0] [i_1] [i_0] [i_1 - 1]));
                    var_18 = (arr_7 [i_1]);
                    arr_30 [i_0] [i_1] = (!-540007884);
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_8] [i_1] [i_8] [i_1] [i_10] = ((!(arr_32 [i_0] [i_0] [15] [i_0])));
                                arr_37 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [9] = ((!(arr_14 [i_10] [i_9] [i_10] [i_1 + 1] [i_8 + 2] [i_0])));
                            }
                        }
                    }
                }
                arr_38 [i_1] [i_1] = (min((((((!(arr_10 [i_0] [i_0]))) ? ((var_0 ? 168 : (arr_20 [i_0] [i_0] [i_0] [14] [i_0] [i_0] [i_0]))) : var_2))), ((var_3 ? (min((arr_1 [i_0] [i_1 - 1]), (arr_4 [i_0] [i_0] [i_0]))) : (!var_5)))));
            }
        }
    }
    var_19 = (120 & 1974532250);
    var_20 = (min(var_1, ((var_1 ? -3734197741733467406 : var_0))));
    var_21 = min(((max((var_6 - -540007884), var_4))), (min(((var_8 ? var_1 : var_9)), (max(var_2, 7134603961951166489)))));
    #pragma endscop
}
