/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) ^ ((~(arr_1 [i_0])))));
        var_21 = (max(var_21, (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [16]))) / 1313691435)) == ((((var_6 != (arr_1 [i_0])))))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_22 = 254;
        var_23 = (((arr_3 [i_1]) ? (((!(arr_3 [i_1])))) : (5812 || 5799261304838960446)));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_24 = ((((~(arr_11 [i_2 - 2] [i_3 + 1]))) ^ (87407024 % -1313691435)));
                    var_25 = ((min((((-(arr_5 [i_2])))), var_4)) + (((((((arr_0 [i_2] [i_4]) - (arr_10 [9] [9] [i_4 - 2])))) ? (1313691435 != var_2) : ((var_6 ? var_7 : var_9))))));
                }
            }
        }
        var_26 = (var_19 <= (((!(arr_4 [i_2] [i_2 - 2])))));
        var_27 = var_11;
    }
    var_28 = (~var_3);

    /* vectorizable */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = var_8;
        arr_18 [i_5] [i_5] = (((arr_12 [i_5] [i_5] [i_5] [i_5 + 1]) ? (arr_14 [i_5] [i_5] [i_5] [i_5]) : (arr_16 [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_29 &= (((arr_2 [13]) ? (arr_1 [i_6]) : var_11));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_30 = (min(var_30, var_8));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_31 = var_5;
                        var_32 = (!8);

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_33 [i_6] [i_6] [i_6] [i_6] [6] = var_15;
                            var_33 = (max(var_33, var_3));
                            arr_34 [i_6] [i_6] [i_8] [i_9] [1] [i_10] = 1313691435;
                            var_34 = (((arr_3 [i_7]) ? ((-(arr_7 [i_6] [i_7]))) : (((9562726175953898070 ? 33516 : 33751)))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_35 ^= ((3807 | ((776289587 ? 288693337 : 6929291885829753740))));
                            var_36 = var_5;
                            arr_39 [i_6] [10] [i_6] &= ((var_6 ? (arr_38 [i_6]) : 2310290935276262438));
                        }
                        arr_40 [i_6] [8] [i_6] [i_9] = -1;
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_43 [i_6] [i_6] [i_12] [i_12] [i_6] = (~1313691435);
                        arr_44 [i_12] [i_12] = 33519;
                    }
                }
            }
        }
        var_37 = (arr_14 [i_6] [i_6] [i_6] [1]);

        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {
            var_38 = (((!(arr_22 [i_6]))) ? (236 & 167) : (arr_37 [i_6] [i_13 - 4] [0]));
            var_39 = (((arr_8 [i_13 - 4] [i_13 + 2]) ? (arr_8 [i_13 - 3] [i_13]) : var_5));
            arr_48 [i_6] [i_13] = ((((1 || (arr_31 [i_13] [i_6] [i_13] [i_6] [i_6] [i_6] [i_6])))));
        }
        for (int i_14 = 2; i_14 < 17;i_14 += 1)
        {
            var_40 = ((~(((arr_45 [i_6]) | (arr_41 [i_6] [i_6] [i_14] [i_14] [i_14])))));
            arr_52 [i_6] [i_14 - 1] [i_14] = (((((arr_42 [i_6] [i_14 + 1]) + 2147483647)) >> (((arr_42 [i_6] [i_14 + 2]) + 206432194))));
            var_41 = var_13;
            var_42 = ((-(arr_26 [i_14 - 2] [i_14 - 2])));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_43 = ((var_7 < (arr_0 [i_6] [8])));
            var_44 = ((((((arr_35 [i_6] [i_6] [7] [i_6] [i_15]) ? (arr_11 [18] [18]) : (arr_23 [i_6] [i_6] [i_15])))) ? var_18 : (arr_12 [i_6] [i_15] [i_15] [i_15])));
            var_45 = var_0;
            var_46 = (((arr_13 [8] [i_6] [20] [i_15]) ? (arr_29 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) : var_5));
            arr_55 [i_6] [i_15] = (((arr_25 [i_6] [i_15] [i_6]) ? (arr_25 [13] [3] [i_15]) : (arr_11 [i_6] [7])));
        }
    }
    var_47 *= var_4;
    #pragma endscop
}
