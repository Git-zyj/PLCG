/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] [16] = var_6;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((((((-31 ? var_12 : var_4))) ? (!1) : (1 == var_18)))) ? 1 : (var_13 <= var_9)));
                            }
                        }
                    }
                    arr_16 [i_0] = ((~(!var_13)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_31 [i_7] [i_9] [i_8] [i_7] [19] [i_7] = (((var_8 ^ var_18) ? (arr_19 [i_8]) : 1));
                                arr_32 [i_5] [i_5 + 2] [i_7] [i_7] [i_5] = (var_13 & var_1);
                                var_19 &= ((var_13 ? (!var_3) : -1));
                                arr_33 [i_5] [i_5] [i_7] [i_5] [i_5 + 2] = var_2;
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_39 [i_7] [i_6] = ((arr_38 [i_5] [i_5 + 3] [i_6] [i_7] [i_10] [i_5 + 3]) || 127);
                            var_20 = (min(var_20, (((arr_23 [i_7] [i_10]) ? var_8 : 2266953704))));
                            arr_40 [i_6] [i_6] [i_7] [i_6] [i_6] = 1;
                            var_21 = -1212765473;
                            arr_41 [i_5] [i_5] [i_7] [i_7] [i_7] [i_11] = var_18;
                        }
                        var_22 = var_13;
                        arr_42 [i_7] [i_6] [i_7] [i_10] = 0;
                    }
                    for (int i_12 = 4; i_12 < 21;i_12 += 1)
                    {
                        arr_45 [i_5] [i_6] [i_7] [i_7] = (((~1) ? (arr_29 [i_12] [i_12] [i_7] [i_6] [1] [i_6] [i_5 + 3]) : var_0));
                        var_23 += var_4;
                        var_24 = -var_12;
                    }
                    var_25 = (max(var_25, (((~(arr_44 [i_5] [i_6] [i_7] [16] [i_7] [i_7]))))));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_26 = (~var_3);
                                var_27 = var_1;
                                var_28 |= 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_58 [i_5] [i_6] [i_13] [i_5] [i_17] = (((~1) / (((arr_35 [i_5] [i_5] [13] [i_5]) ? (arr_55 [i_6] [i_13]) : (((arr_44 [i_17] [18] [i_16] [i_13] [i_6] [i_5]) ? 127 : -127))))));
                                arr_59 [i_5] [i_5 + 2] [i_5] [i_5] [1] = -1;
                            }
                        }
                    }
                    var_29 = 1;
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 21;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 20;i_19 += 1)
                        {
                            {
                                arr_64 [i_5] [i_19] [i_5] [i_5] [i_19] [i_6] = ((~(((arr_22 [i_19 + 1] [i_18 - 1] [i_18 - 1] [11]) ? (arr_22 [i_19 - 1] [i_19] [i_18 - 3] [i_5]) : (arr_22 [i_19 - 1] [i_19] [i_18 - 3] [i_5])))));
                                var_30 = -1817311382;
                            }
                        }
                    }
                    var_31 = ((((max((~var_6), ((max(var_13, (arr_61 [i_5 - 2] [i_6] [i_13] [i_6]))))))) ? ((min((arr_35 [i_5] [i_6] [i_6] [17]), var_11))) : ((min(-107, (arr_34 [i_13] [i_6] [i_13]))))));
                }
                arr_65 [i_5] [i_5] [i_5] = (min((((arr_53 [i_5 + 2] [i_5] [i_5 + 1] [i_5 - 1] [12]) ? (arr_53 [i_5 - 2] [i_5] [i_5 + 2] [i_5 + 1] [i_6]) : var_12)), ((max((arr_53 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 + 3] [i_5 + 3]), var_14)))));
                arr_66 [i_5] [i_5] [i_5 + 1] = -110;
            }
        }
    }
    #pragma endscop
}
