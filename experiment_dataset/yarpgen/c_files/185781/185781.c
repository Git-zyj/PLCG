/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (7565932594662194175 < 1);
                var_17 = (arr_0 [i_0]);
                var_18 = (!5686338097378885664);
                var_19 = ((!(((5686338097378885664 ? 16384 : 192)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_20 *= arr_8 [i_5 - 1];
                                arr_17 [i_2] [i_2] [i_2] = var_1;
                                var_21 = (((arr_13 [i_4 - 1] [i_5 - 1] [i_4 - 1] [i_5 - 1] [i_6 - 1]) ? -781678413 : (((!(arr_16 [i_2] [i_2] [i_3] [i_4] [i_2] [i_6 + 3]))))));
                                var_22 = (((arr_14 [i_2] [i_3] [i_2] [i_4 - 1] [i_2]) << (49155 - 49148)));
                            }
                        }
                    }
                    var_23 += ((4959949371630198913 ? 16384 : 13807051306238787729));
                    var_24 = (-(arr_14 [i_2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_25 += arr_14 [1] [1] [i_4 - 1] [i_4 - 1] [i_4 - 1];
                        var_26 = (var_10 < (arr_18 [i_3] [i_2] [i_2] [i_7]));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_27 = (((arr_20 [i_4] [i_4] [i_2] [i_2]) >= var_12));
                        var_28 -= (arr_11 [i_4 - 1] [10] [10] [i_3]);
                        var_29 = var_10;
                    }
                    var_30 = (arr_16 [i_2] [i_2] [i_4] [i_4 - 1] [i_2] [i_3]);
                }
            }
        }
        arr_23 [i_2] = (((arr_10 [i_2] [i_2] [i_2] [i_2]) >= (arr_20 [i_2] [i_2] [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_31 = (max(var_31, (arr_26 [i_9])));
        var_32 = (arr_27 [3]);
        var_33 = (~(arr_26 [i_9]));
        arr_28 [15] = var_12;
    }
    var_34 = ((((((~var_7) / var_5))) ^ ((65535 ? 18446744073709551615 : 2147483647))));
    var_35 = ((var_10 ? var_11 : (((var_9 ? ((-101 ? var_13 : var_3)) : (min(var_10, 1)))))));
    #pragma endscop
}
