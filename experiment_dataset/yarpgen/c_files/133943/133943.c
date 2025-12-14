/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 -= (((((arr_3 [i_0]) / var_9)) <= ((((35826 ? 16383 : var_6)) - -1))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_0] = ((min(-25988, ((~(arr_2 [i_0]))))));
            arr_8 [i_0] [i_1] |= (max(var_1, (~var_3)));
            var_15 *= (max((arr_2 [i_0]), (var_8 / -3644)));
            var_16 = (max(var_16, ((!((min((arr_0 [i_0]), (min(var_11, (arr_4 [i_0] [i_1] [i_0]))))))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_3] [i_4] = (min(((min(var_4, var_13))), (arr_5 [i_0] [i_0])));
                        var_17 = ((~(!var_2)));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_18 |= (((~32767) ? var_12 : var_4));
                            arr_19 [i_2] [i_2] [i_3] [14] [1] [16] = var_2;
                            arr_20 [i_0] [i_2] [i_2] = ((((((min(var_3, var_13)) || (((~(arr_15 [i_3 - 2] [i_2] [i_3 - 1] [1]))))))) / var_11));
                            arr_21 [i_2] [i_2] [11] [i_4] = 25987;
                            arr_22 [i_0] [i_0] [i_3] [i_4] [i_2] [i_0] = ((((arr_17 [i_5] [i_2] [i_3 + 1] [i_4] [i_5]) && var_3)) && (!1));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_27 [i_2] = ((~(!1)));
                            var_19 *= (!var_12);
                        }
                        arr_28 [i_0] [1] [i_3 - 1] [i_4] [i_2] [i_2] = 0;
                    }
                }
            }
            arr_29 [i_2] [1] [i_2] = ((((min((arr_13 [i_0] [i_2] [i_2]), var_8))) > -var_7));
            var_20 *= (min(-0, (((var_11 ? var_13 : (arr_4 [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_35 [i_2] [i_2] [i_2] = var_1;
                        var_21 = (min(var_21, (min((((!((((arr_17 [i_0] [i_2] [1] [i_8] [i_7]) ? var_10 : -17970)))))), 35826))));
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                arr_40 [1] [i_9 + 2] [i_10] &= ((-((-((min((arr_11 [i_0] [i_9]), var_2)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_22 = (((arr_39 [i_0] [i_9 + 2]) == (arr_39 [i_12] [i_9 + 1])));
                            arr_45 [i_0] [i_0] [i_0] [i_11] [i_12] [i_9] = var_8;
                            var_23 += ((~((~(arr_15 [1] [4] [i_10] [i_11])))));
                        }
                    }
                }
                arr_46 [6] [6] [i_9] = (arr_0 [i_9 + 1]);
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                arr_50 [i_9] [i_9] [i_13] = ((!(((arr_25 [i_9 - 1] [i_9 - 1] [i_0] [i_9 - 1] [i_0]) == (arr_25 [i_9] [i_9] [i_9] [i_9 + 1] [i_9])))));
                arr_51 [8] [8] [i_13] [i_9] = (((((((~(arr_6 [i_13] [1]))) + 20930))) ? 35831 : ((max(var_0, 1)))));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_55 [i_9] [i_14] [8] [i_0] = 0;
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        {
                            arr_62 [i_14] [i_9 + 2] [i_14] [i_9] [i_9] [i_16] [i_16] = ((!(((arr_54 [i_0] [i_9] [i_9] [i_9]) && var_1))));
                            var_24 = (max((+-32709), ((min(var_4, (var_9 > 25987))))));
                        }
                    }
                }
                arr_63 [i_0] [i_9] [i_9] = (max(1, -var_0));
            }
            arr_64 [i_9] [i_9] [i_9] = (((~((max(var_10, var_4))))));
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            arr_67 [i_0] [i_17] = ((((-((var_11 ? var_12 : var_6)))) * var_8));

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                arr_70 [i_0] [i_0] [i_0] = ((((~-3644) ? ((max((arr_59 [i_0] [i_17] [i_18] [22]), (arr_38 [4] [4])))) : var_12)));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        {
                            var_25 = (((min(32701, ((var_13 ? var_12 : var_6)))) ^ ((max((arr_44 [i_18] [i_17] [i_18] [i_19] [15] [i_19]), (arr_44 [1] [i_17] [i_20] [i_19] [i_20] [i_20]))))));
                            arr_75 [i_0] = (min((((~var_9) - (var_3 / var_8))), (((((arr_42 [i_19] [i_20] [i_18]) % var_11))))));
                            arr_76 [i_0] [i_0] [1] [i_19] [i_20] = ((-((var_1 >> (arr_32 [i_19])))));
                            var_26 = (min(var_26, 1));
                        }
                    }
                }
            }
            var_27 -= (((var_2 - var_3) >> var_3));
            var_28 = (((((arr_71 [i_0] [i_17] [i_0] [i_0] [i_17] [i_0]) ? ((min((arr_41 [i_17] [i_17] [i_0] [i_17] [i_17]), var_3))) : ((min(5805, var_8))))) < (((max(var_1, -11442))))));
            arr_77 [1] = (((((((arr_53 [i_0] [i_17] [i_17]) ? 1667 : var_6)) * 8257)) / (arr_49 [i_0] [i_0] [1])));
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 20;i_22 += 1)
        {
            {
                arr_83 [i_21] = (((((var_10 ? var_4 : var_9))) ? -var_2 : -1));
                var_29 *= ((((!var_1) ? var_6 : var_0)));
                arr_84 [i_21] [i_21] [i_22] = -32759;
            }
        }
    }
    #pragma endscop
}
