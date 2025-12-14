/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((+((var_1 ? (var_4 && var_13) : (arr_0 [i_0 + 1] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 *= ((246342574 && ((max((min(235, 246342574)), (min(var_7, 2015906655)))))));
                                var_19 = (max(246342574, (min((arr_11 [i_1] [i_0 - 2] [i_2 - 2] [i_3]), 36048))));
                                var_20 = (arr_1 [i_2 - 2]);
                                var_21 = ((~(!var_9)));
                                arr_17 [i_1] [i_2] [i_2] [i_1] [i_1] = (min((((var_4 ? 25907 : (!var_7)))), (((arr_1 [i_0 + 1]) ? (2296684116 > var_14) : (~660917140)))));
                            }
                        }
                    }
                }
                arr_18 [i_1] = ((-((min((arr_6 [i_0 + 1]), (arr_6 [i_0 + 2]))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 = ((-(((arr_13 [i_7] [i_7 + 1] [i_1] [i_7 + 4] [i_7]) ? var_14 : ((min(8388352, (arr_20 [i_1]))))))));
                                var_23 = ((~(~var_16)));
                                var_24 = ((((~(max(0, 246342574)))) < ((min((arr_26 [i_7 - 1] [i_1] [i_7 + 3] [i_7] [i_1]), (arr_26 [i_7 - 1] [i_1] [i_7 + 3] [i_7 - 1] [i_7]))))));
                                var_25 = ((((!(var_12 ^ 36048))) ? ((min(var_4, 1539135481))) : ((min(var_7, (~124))))));
                            }
                        }
                    }
                }
                var_26 = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_27 = ((var_1 ? (min((arr_33 [i_8 + 1] [i_8 - 1] [i_10]), 2314143192)) : ((-(((arr_13 [i_8] [14] [i_8] [i_10] [i_8]) ? -109 : 975916168))))));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_28 = (((!var_9) <= (((!var_2) + ((min(1, var_7)))))));
                                arr_40 [i_8] = (min((min((min(44, 15867358597497463866)), (247 && 24722))), var_15));
                                var_29 = ((((21823 ? 1 : 2579385476212087749)) >> (((min(-12045, 147109689)) + 12079))));
                                var_30 = (max(var_30, 1));
                                var_31 = min((min((arr_22 [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2]), var_15)), -16);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_47 [i_8] [i_8] = ((~((~(arr_28 [i_8])))));
                                var_32 = (max(var_32, ((max((!var_10), ((((((arr_31 [i_10]) & 75))) ? (min(var_16, var_12)) : (((var_7 ? 1 : 2343806807901856629))))))))));
                                var_33 = -5387471358300107035;
                            }
                        }
                    }
                    var_34 = (min(var_34, ((min(1172077966, 9)))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_35 = 17650;
                        arr_54 [i_8] [i_8] [i_8] [i_8] = var_13;
                        arr_55 [i_9] [i_8] [i_16] = (arr_32 [i_9] [i_15] [i_16]);
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_36 = (~var_5);
                            var_37 = (min(var_37, ((((arr_49 [12] [i_9] [i_9] [i_8 - 3]) ? (arr_49 [i_8] [i_15] [i_15] [i_8 - 3]) : (arr_49 [i_8] [i_8] [i_8] [i_8 + 3]))))));
                        }
                        arr_60 [i_8] [i_9] [i_8] [i_9] = 268435455;

                        for (int i_19 = 3; i_19 < 13;i_19 += 1)
                        {
                            var_38 = (arr_62 [i_8] [i_15] [i_19]);
                            var_39 = var_6;
                            arr_63 [i_8] [i_8] [i_8] [i_8] [i_19 - 3] = (((arr_46 [i_8] [i_8] [i_8 + 2] [i_8 + 4] [i_8] [i_19] [i_19 - 1]) ? var_15 : var_15));
                        }
                    }
                    arr_64 [i_8] [i_9] [i_9] = ((arr_39 [i_8 - 3]) ? (((arr_44 [i_8]) ? var_8 : (arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_15]))) : (arr_61 [i_8] [i_8] [i_8] [i_8] [i_8 + 3]));
                    var_40 = 2162701758;
                }
                var_41 = (max(var_41, ((min((var_8 || var_5), ((-(arr_1 [i_8 + 2]))))))));
                var_42 = ((((((!(arr_58 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9] [i_8]))))) ? var_9 : ((-(arr_33 [1] [i_9] [i_9])))));
            }
        }
    }
    #pragma endscop
}
