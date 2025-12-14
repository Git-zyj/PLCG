/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((((!(arr_2 [i_0] [i_0]))) ? 18446744073709551615 : ((max(255, (arr_1 [4] [i_0]))))));
        arr_3 [i_0] = (((!-1) || ((!(arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_20 += -1;
        var_21 = (((!21) ^ (((!(arr_5 [4] [i_1 + 2]))))));
        var_22 = (min(var_22, ((!(((~(arr_1 [i_1 + 4] [i_1 - 1]))))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = (((arr_1 [11] [i_2]) / ((-((min((arr_1 [i_2] [5]), (arr_0 [i_2]))))))));
        var_24 *= (min((((-(arr_1 [i_2] [i_2])))), ((-47 | (arr_0 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_25 = (var_9 ? ((max((min(4, -75)), (arr_0 [i_4 - 1])))) : (max((max((arr_2 [18] [9]), var_17)), 22)));
                    var_26 = (min(var_26, (((~((~(arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_27 = (((22 * (arr_21 [i_6 - 1] [i_6] [i_5]))));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_28 = (min(var_28, 0));
                            var_29 ^= (arr_1 [i_5] [i_5]);
                            var_30 = var_8;
                            arr_29 [6] [13] [i_7] [i_7] [i_7] [i_9] [i_9] = 0;
                            var_31 = var_7;
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_32 &= 19;
                            arr_32 [i_8] = ((((((arr_10 [i_6 - 1]) / (arr_10 [i_6 + 1])))) ? var_17 : (((arr_10 [i_6 - 2]) | (arr_2 [i_6 + 1] [18])))));
                            var_33 = ((-(max((min(-22, -22)), (((-(arr_17 [7]))))))));
                        }
                        var_34 = (arr_8 [i_5] [i_6]);

                        for (int i_11 = 4; i_11 < 15;i_11 += 1)
                        {
                            var_35 = arr_13 [i_5] [3] [i_5];
                            var_36 = var_10;
                        }
                        for (int i_12 = 4; i_12 < 15;i_12 += 1)
                        {
                            arr_38 [9] [i_6] [i_6] [i_6] [11] &= (max((((((!(arr_16 [i_5]))) && var_16))), var_7));
                            arr_39 [6] [i_6 + 2] [i_7] [13] [i_12] = (((((arr_27 [i_5] [12] [i_7]) & (arr_36 [i_6 - 2] [i_12 - 2] [i_7] [i_8] [i_7] [15] [i_12 - 3]))) - ((((!(((1 << (((arr_8 [i_5] [i_6 + 2]) - 2993729549186149212)))))))))));
                            var_37 = (arr_8 [i_5] [i_5]);
                            var_38 = (min(var_38, (((((~(arr_22 [i_6 - 1]))) - ((-(arr_22 [i_6 + 1]))))))));
                        }
                        arr_40 [i_5] [9] [9] [i_5] [i_5] [i_5] = (((var_16 - (arr_24 [i_6 + 1] [i_6 + 2] [i_6 + 2]))));
                    }
                    arr_41 [i_6] [i_6] [i_6] [i_6 - 2] = (min(((((arr_37 [i_6 - 2] [i_6] [i_7] [i_6 - 2] [i_6 - 2] [i_7]) % (arr_37 [i_6 - 2] [8] [11] [i_6 - 2] [i_6] [13])))), (min((arr_12 [13] [i_6 + 1]), (arr_12 [1] [i_6 - 1])))));
                    var_39 = (max(21, (((3932160 ? (-127 - 1) : (arr_26 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 1]))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        var_40 = (max(var_7, (max((arr_28 [i_15] [i_14 - 1] [i_5] [i_5] [16] [i_5] [i_5]), (arr_46 [7] [i_5] [i_5])))));
                        var_41 = (max(var_41, ((((max((arr_36 [i_13] [0] [i_13] [i_14 - 1] [i_14] [0] [i_14 - 1]), (arr_7 [i_14 + 1] [10])))) ? (max((arr_18 [i_5] [i_5] [14]), (arr_16 [i_15]))) : -127))));
                        var_42 = (min(var_42, (arr_18 [1] [i_13] [i_13])));
                    }
                }
            }
        }
        var_43 ^= max(-44, var_15);
        var_44 = (max(var_44, (max((max((arr_2 [i_5] [6]), (arr_16 [i_5]))), (((var_5 <= (arr_8 [i_5] [i_5]))))))));
    }
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                {
                    var_45 = (min(var_45, (((-(~16))))));
                    var_46 = (min(((0 & (arr_28 [2] [i_18] [1] [i_17] [i_17] [i_16] [6]))), ((~(max(var_9, -1))))));
                }
            }
        }
        var_47 += -117;
    }
    var_48 = var_1;
    #pragma endscop
}
