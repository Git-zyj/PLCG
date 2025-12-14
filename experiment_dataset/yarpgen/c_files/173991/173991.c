/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 ^= 113;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((86 ? -124 : 12337003629745889357));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (arr_2 [4]);
                            var_21 = (max((((arr_2 [20]) ? -var_16 : (((arr_11 [i_0] [2] [13] [i_1] [i_2] [0]) ? (arr_6 [23] [i_1]) : 29530)))), (((~(arr_10 [i_3 - 1] [i_2 + 2] [i_2 + 2] [i_0]))))));
                            arr_12 [i_0] [i_1] [i_3] = -54;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            {
                arr_19 [i_4] = (((min(var_4, -7384158654177867275)) & (~-344576952)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] = ((((((~1) ? (~var_10) : (min(17503733787962816016, 18446744073709551608))))) ? (arr_21 [i_6] [i_6] [3] [i_4]) : 1));
                            arr_26 [5] = ((-57 ? ((min(var_13, 55680))) : 55680));
                            var_22 = -118;
                        }
                    }
                }
                arr_27 [i_5] [i_4] = (arr_13 [i_4]);
                var_23 = var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            {
                arr_33 [i_9] [7] = ((((min(-1508057743, (arr_29 [11])))) ? ((((max(var_0, (arr_17 [i_8])))) ? var_16 : (((~(arr_7 [i_8] [21] [i_9])))))) : ((min((max((arr_17 [i_8]), 57)), (arr_22 [i_9] [i_9] [i_8] [16]))))));

                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    arr_36 [i_8] [i_8] [1] = (min((arr_22 [i_8] [i_8] [i_9] [i_10]), (min(-1392273703, 9496859248149863958))));
                    arr_37 [i_8] [i_8] [i_10] [1] = var_8;
                    arr_38 [i_8] = ((+(max(((((arr_21 [i_8] [i_8] [i_8] [i_8]) / (arr_34 [13] [12])))), 7384158654177867278))));
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_49 [13] [1] [i_12] [i_11] [i_13] [3] = 4107022471213449746;
                                var_24 = (max(var_24, ((((arr_42 [i_8] [i_8] [7] [15]) ? var_8 : -4503599627370492)))));
                                arr_50 [i_8] [i_12] [i_8] [i_8] [i_8] [15] [1] = -18828;
                                var_25 &= (arr_9 [i_8] [i_8] [i_12] [i_11]);
                                arr_51 [2] [i_12] [i_11] [i_11] [4] [i_12] [i_12] = (min(((max(var_5, ((var_9 ? -101 : 33))))), (((max(18442240474082181123, (arr_11 [i_8] [22] [i_11] [9] [i_12] [22]))) - (arr_41 [i_8] [i_9])))));
                            }
                        }
                    }
                    arr_52 [12] [i_8] [i_8] [i_8] = (max((min(3, -5106)), ((max((6620427679369765907 || 71), ((~(arr_2 [13]))))))));

                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        var_26 = ((min((max(var_11, var_0), (arr_22 [i_8] [i_9 - 1] [i_8] [i_14])))));
                        var_27 = ((((((((arr_20 [i_8]) ? 185 : 4107022471213449746)) / (arr_6 [i_8] [i_11])))) ? (((var_13 ? 27 : (arr_2 [13])))) : (-1021915983 / 184)));
                        var_28 ^= -1128048515352911059;
                    }
                    arr_56 [i_8] = (arr_15 [5] [i_8]);
                    var_29 = 10170;
                }
            }
        }
    }
    #pragma endscop
}
