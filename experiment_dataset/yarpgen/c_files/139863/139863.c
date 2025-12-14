/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (arr_3 [i_0] [i_1]);
                    var_17 = (((((~(((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_9))))) ? ((((arr_1 [i_2 + 1] [i_0]) && (7948581785001387379 && var_6)))) : ((((var_4 ? var_13 : var_10))))));
                    var_18 = (min(var_18, (arr_3 [i_0 + 2] [i_2 - 1])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] = ((~(arr_11 [7] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_19 ^= (arr_13 [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 &= (!var_3);
                                var_21 ^= ((-1360456620 ? 0 : 1));
                                var_22 = (((((var_2 ? 1 : (arr_9 [i_5] [i_5])))) ? var_9 : 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_26 [i_9] [i_4] [i_4] [i_4] = (((arr_9 [i_8 - 1] [i_8 - 1]) ? 1 : (arr_9 [i_8 - 1] [i_8 - 1])));
                                var_23 = (156 & 11745);
                                var_24 = (arr_16 [i_3] [i_3] [i_3]);
                                arr_27 [4] [i_4] [i_4] [i_3] = 59328947;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_25 = ((var_9 ? (min(-1446779671831904931, 14516050169332918704)) : ((((!((((arr_4 [4] [4]) ? var_15 : var_15)))))))));
        arr_31 [i_10] [i_10] = (arr_19 [13] [i_10] [i_10] [i_10] [i_10]);
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_26 = (arr_9 [i_12 - 1] [i_12]);
                        var_27 = var_2;
                        var_28 = var_14;
                        var_29 += ((-(((arr_7 [i_14] [i_12] [i_12] [i_12 - 3]) ? (arr_7 [i_13] [i_11] [i_11] [i_12 - 1]) : var_11))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                {
                    var_30 &= var_0;
                    var_31 = -var_8;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                arr_53 [i_16] [i_16] [i_15] [i_16] [4] = ((+(((arr_46 [i_18] [i_16] [i_15] [i_11]) ? (!var_4) : (arr_37 [i_15])))));
                                arr_54 [i_16] [i_15] [i_16] [i_15] [i_15] [i_15] [i_15] = (arr_49 [i_11] [i_15] [i_16]);
                            }
                        }
                    }
                }
            }
        }
        arr_55 [i_11] = ((((max(((var_14 ? (arr_0 [i_11]) : (arr_19 [i_11] [i_11] [i_11] [1] [1]))), var_7))) | ((3930693904376632911 ? 14516050169332918704 : 1446779671831904931))));
        arr_56 [i_11] = (min((((((((4485 ? (arr_43 [i_11] [i_11] [i_11] [i_11]) : 1)) + 2147483647)) >> (((((arr_49 [i_11] [i_11] [i_11]) ? var_4 : var_8)) - 74))))), (~-1446779671831904932)));
    }
    var_32 += var_5;
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 17;i_20 += 1)
        {
            {
                var_33 = ((-(9422813238397292373 < -1446779671831904904)));

                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    var_34 = ((14166941354117877593 ? 1 : -8693833667713533316));
                    arr_63 [i_19] = (18 / 1446779671831904932);
                    var_35 = ((min((arr_16 [i_20 + 1] [i_20 - 1] [i_20]), (max(9422813238397292373, 65215)))));
                    var_36 |= (((arr_23 [i_19] [i_20] [i_21] [i_20 - 1] [19]) ? (min((1 <= 1), ((-(arr_57 [i_21]))))) : (arr_11 [i_20 + 1] [i_19])));
                }
                var_37 = (min(var_37, -1446779671831904931));
                var_38 = (min(var_38, ((min(1, ((-1517721643161064535 ? (arr_62 [i_20] [i_20] [0] [i_20]) : var_6)))))));
                arr_64 [15] [i_19] = (((((var_0 ? 25 : var_1))) ? 57 : 1));
            }
        }
    }
    #pragma endscop
}
