/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((((var_18 ? var_16 : var_0))) | (max(var_11, var_2)))) <= (~var_17))))));
    var_20 = var_3;
    var_21 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = var_3;
        arr_3 [i_0] |= (!(((var_5 ? 19483 : (arr_2 [i_0])))));
        var_23 = (((arr_0 [i_0]) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? var_16 : var_9))));
        arr_4 [i_0] [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_24 += (-15254 <= 15262);
                                arr_17 [i_1] [i_1] [i_3 + 1] [i_1] [i_1] [i_1] = ((var_1 ? 1 : 739395986614729598));
                                var_25 = (min(var_25, (arr_16 [6] [6])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_26 = 1;
                                var_27 = (arr_18 [i_1] [i_2 + 2] [i_1] [i_3] [i_6 - 2] [i_7]);
                            }
                        }
                    }
                    var_28 += 1;
                }
            }
        }
        var_29 = (+-25517);
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        var_30 = (min(var_30, ((((((max(var_11, (arr_18 [0] [0] [i_8 + 2] [0] [0] [0])))) ? var_16 : (arr_15 [8] [i_8] [0])))))));
        arr_29 [i_8] [i_8] = (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]);
        arr_30 [i_8] = var_9;

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_31 = var_17;
            arr_33 [i_8] = -15277;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_32 = (((+-34528) * var_7));
                        arr_39 [i_9] [i_10] [i_8] = (((((-(arr_25 [i_8])))) ? (arr_6 [i_8]) : ((((arr_12 [i_8 - 1] [i_8]) * (!var_8))))));

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_43 [3] [i_8] [i_10] [i_10] [i_11] [i_10] [i_12] = ((((!1) ? 41 : 175)));
                            var_33 += 739395986614729578;
                            arr_44 [i_8] [i_9] [i_8] [i_11] [i_11] [i_12] = (min((arr_12 [i_8 + 2] [i_8]), 15262));
                        }
                        for (int i_13 = 3; i_13 < 13;i_13 += 1)
                        {
                            arr_48 [i_8 + 1] [i_8 - 1] [i_8] = (max(((max(var_7, (arr_35 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_8 + 1])))), (arr_22 [i_13 - 1] [i_13 + 2] [i_9] [i_8 - 1] [i_8 - 1] [i_8] [i_8])));
                            var_34 &= (!var_14);
                            var_35 = var_7;
                            arr_49 [10] [i_8] [i_9] [0] [i_10] [i_11] [i_13] = 1;
                        }
                        /* vectorizable */
                        for (int i_14 = 4; i_14 < 14;i_14 += 1)
                        {
                            var_36 += var_3;
                            arr_54 [i_8] [i_8] [i_10] [i_11] [i_8] = (1 != 15820274026289529379);
                            var_37 = var_1;
                            arr_55 [14] [14] [i_10] [i_10] [i_10] [i_8] [14] = ((1 * (((arr_20 [i_8] [i_11] [i_10] [i_9] [i_8]) / var_10))));
                            arr_56 [i_8] [i_8] = -1;
                        }
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            var_38 = ((1 ? 8667675478950058552 : 46053));
                            var_39 = (max(24495, 832231642560704715));
                            arr_59 [i_8] [7] [i_8] [6] [i_15] = ((var_18 ? 7 : var_3));
                        }
                    }
                }
            }
        }
    }
    var_40 = ((var_8 ? var_12 : var_1));
    #pragma endscop
}
