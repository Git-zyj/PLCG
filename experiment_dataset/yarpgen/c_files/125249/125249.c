/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] |= ((!((!(~var_13)))));
                    var_18 = ((-(~var_2)));
                    var_19 *= ((-(!var_3)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_5] [i_5] [i_3] [i_5] [i_5] |= ((~(((!(arr_4 [i_6] [i_6]))))));
                        arr_22 [i_4] = ((!((!(arr_2 [i_3] [1])))));
                        arr_23 [i_4] [i_4] = ((!(!-3437728452)));
                    }
                }
            }
        }
        arr_24 [i_3] = (!-var_3);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_20 = (max(var_20, -var_2));
        arr_29 [i_7] = -1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_21 = (max(var_21, (!4611686018427256832)));
                    arr_36 [i_7] [i_7] [i_7] [i_7] = (!var_13);
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_52 [i_10] [i_12] [i_12] [i_13] [i_14 - 2] [i_10] [i_14 - 1] = 13835058055282294784;
                            arr_53 [i_10] [i_11] [i_12] [i_10] [i_12] [i_14] [17] = (!var_2);
                            var_22 = (min(var_22, (arr_27 [i_10])));
                        }
                    }
                }
                arr_54 [i_12] [i_10] [14] [i_12] = var_15;
                var_23 |= (!21273);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_24 = ((-(arr_4 [i_16 + 4] [i_12 - 1])));
                            var_25 = (--4611686018427256832);
                            var_26 = (!var_3);
                            arr_61 [i_12] [6] [i_12] [i_11] [i_12] = (!(arr_60 [i_10] [i_11] [i_11] [15] [i_16]));
                            var_27 = (!32764);
                        }
                    }
                }
            }
            var_28 = (!var_3);
        }
        var_29 = ((-((-(arr_57 [i_10] [i_10] [i_10] [i_10])))));
    }
    var_30 = var_0;

    /* vectorizable */
    for (int i_17 = 4; i_17 < 12;i_17 += 1)
    {
        arr_64 [i_17] = ((~(arr_37 [i_17 - 2])));
        arr_65 [4] = ((-(arr_34 [i_17] [i_17] [i_17] [i_17 + 1])));
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1)
    {
        arr_70 [i_18] [i_18] = (~-var_11);
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 21;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 22;i_22 += 1)
                        {
                            {
                                var_31 = (max(var_31, (~189)));
                                var_32 = (min(var_32, (((!(~81))))));
                                arr_81 [i_22] [i_18] [i_18] [i_18] [i_18] = ((!(((~(arr_79 [i_22 - 1] [i_22 - 1] [i_22] [i_22 - 1] [i_20 + 1]))))));
                                var_33 = (~var_14);
                            }
                        }
                    }
                    arr_82 [i_18] [i_19] [i_18] = ((~(!-56)));
                    var_34 = (((-(arr_76 [i_19 + 1] [i_20 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
