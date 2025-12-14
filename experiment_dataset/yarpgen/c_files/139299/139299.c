/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_12 ^= (~-var_11);
        var_13 = (max(var_13, ((min((min(var_0, var_2), var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (!536862720);
                                var_15 = (max(var_15, ((((arr_2 [i_4] [i_3] [i_2]) ? var_8 : ((~(min((arr_6 [i_0 - 2] [i_0 - 2] [i_2] [i_3]), var_7)))))))));
                            }
                        }
                    }
                    arr_12 [i_0 - 1] [i_0] [i_1] [i_2] = (~var_2);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_16 ^= ((!(!2539944092)));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_17 [i_5] [i_5] = (-(((!(arr_13 [i_6] [i_5])))));
            arr_18 [i_6] = (min(((((arr_16 [i_5]) > (arr_14 [i_5])))), (arr_14 [i_5])));
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_17 = arr_15 [i_7] [i_7];
        var_18 = (~(min((arr_6 [i_7] [i_7] [i_7] [i_7]), var_0)));
        var_19 = var_3;
        arr_21 [2] = max((arr_15 [i_7] [i_7]), (((((2539944085 >= (arr_4 [i_7])))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_20 ^= var_4;
            arr_26 [i_8] [i_8] [i_8] = (((arr_22 [i_8]) && (arr_22 [i_8])));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_30 [i_8] = arr_24 [i_8];
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_21 = (max(var_21, var_7));
                        var_22 = (max(var_22, var_10));
                        var_23 = (~var_8);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 19;i_14 += 1)
                {
                    {
                        var_24 = var_0;
                        arr_43 [i_13] = ((var_11 - (arr_32 [i_13 - 2] [i_13 - 3] [i_13] [i_13])));

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_46 [i_13] [i_15] [i_15] [i_14 - 1] [i_13 + 1] [i_10] [i_13] = var_9;
                            arr_47 [i_8] [i_10] [i_13] [i_14] [i_13] [i_8] = (arr_44 [i_13] [i_15] [i_13] [i_13] [i_13]);
                            arr_48 [i_13] [i_15] [1] = (~1048575);
                            var_25 = (((arr_38 [i_13 - 1] [i_14 - 1] [i_13]) - var_5));
                        }
                        arr_49 [i_13] = (~var_1);
                    }
                }
            }
            var_26 = (~1755023203);
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 4; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_27 ^= (((arr_29 [i_8] [i_8] [i_17 - 4]) > var_9));
                            var_28 = (min(var_28, (((((var_4 >= (arr_42 [8] [i_19] [i_17] [i_18] [i_18] [i_19]))))))));
                            var_29 = (max(var_29, var_7));
                        }
                    }
                }
            }
            arr_59 [i_8] [i_16] [i_16] |= (!1454309610);
        }
        var_30 = (((arr_37 [i_8] [i_8] [i_8]) ^ (arr_37 [i_8] [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_20 = 2; i_20 < 20;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 3; i_24 < 20;i_24 += 1)
                        {
                            {
                                arr_72 [i_20] [i_20] [i_20 - 2] [i_20 - 1] [i_20 - 2] [i_20 + 1] = (!1);
                                var_31 = (~(arr_71 [i_20] [i_20 + 1] [i_20] [i_20 + 1] [i_20] [i_20] [i_20 - 2]));
                            }
                        }
                    }
                    var_32 ^= var_8;
                    var_33 *= (arr_66 [i_22 - 1] [i_21] [i_22] [i_20 - 2]);
                    var_34 = (arr_61 [i_20]);
                    arr_73 [i_20 + 1] [i_21] [13] [i_22] |= (((arr_64 [i_20]) << (var_1 + 865147738)));
                }
            }
        }
        arr_74 [i_20 - 2] = arr_68 [0] [i_20 - 1] [i_20 - 1] [13];
        var_35 = (~469762048);
    }
    #pragma endscop
}
