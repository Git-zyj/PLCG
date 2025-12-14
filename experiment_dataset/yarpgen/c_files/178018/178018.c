/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_1]);
                var_15 = ((~(((arr_2 [i_1 - 2] [i_1 - 2]) ? (arr_5 [1] [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1 - 4] [i_1 - 4] [i_1 - 4])))));
            }
        }
    }
    var_16 += (-61 % -115);

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_17 += 3599274653820721572;
                        arr_15 [i_2] [i_2] [i_4] [i_5] = (arr_12 [11] [i_2]);
                        arr_16 [i_2] [i_2] [i_4] [i_4] [i_2] = -29347;
                    }
                }
            }
        }
        arr_17 [1] [0] &= -3599274653820721573;
        arr_18 [i_2] = var_12;
        arr_19 [i_2] = (arr_7 [i_2]);
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    {
                        var_18 |= var_9;
                        var_19 -= (max((5813889380751400028 - 3599274653820721572), ((min(2003648234, -55)))));
                        var_20 = (min(var_10, 1));
                    }
                }
            }
            arr_32 [i_6] [i_6] = ((~var_6) != (min((min(3599274653820721572, -61)), ((((arr_24 [i_6]) << (var_8 - 118)))))));
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            arr_35 [i_6] [i_10] [i_10] = ((((min((arr_26 [i_6 - 1] [i_10 - 1]), -var_7))) ? 3599274653820721572 : 200));
            var_21 = ((203 ? ((-(arr_31 [i_6 - 2] [i_6] [i_6 + 1] [i_10 + 2] [i_10]))) : ((max(161, -96)))));
        }
        var_22 = var_0;
        var_23 = (arr_20 [i_6 - 1]);
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_47 [i_11] [i_12] [i_13 - 1] [i_14] = -5813889380751400036;
                                arr_48 [i_11] [i_11] [i_13] [i_14] [i_15] = (arr_39 [i_11] [i_12] [i_11]);
                            }
                        }
                    }
                    var_24 *= var_4;
                    var_25 = (max(((~(max(3631248447, 4253)))), (((min((arr_41 [i_11]), var_5))))));
                    arr_49 [i_11] [i_13] = (min((min(((-94 % (arr_40 [i_11] [i_11]))), (arr_43 [12] [i_11] [i_11] [i_13]))), ((~(arr_36 [i_11])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 1;i_18 += 1)
                {
                    {
                        var_26 = (!((min((min(var_4, 1064343513)), var_11))));
                        var_27 = (max(var_27, var_1));
                        var_28 -= ((((max(157, 0)))));
                        var_29 -= ((((min(-4249, (((arr_52 [i_11] [i_11] [i_11]) + (arr_55 [i_11])))))) ? ((min(((27 << (((((arr_53 [i_16] [i_17] [i_18]) + 53)) - 27)))), ((min(var_4, 33098)))))) : ((~((-(arr_51 [i_11] [i_18])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
