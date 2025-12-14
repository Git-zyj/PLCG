/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? (((var_5 & (41 >= 2820205381406988203)))) : (max((!0), (min(0, var_12))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [10] [i_0] = arr_1 [16] [i_0 + 1];
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = ((var_0 && (arr_1 [i_1 + 1] [i_0 - 1])));
                    arr_9 [i_1] [i_1 + 1] [i_1] = 1;
                    var_22 &= (((arr_8 [i_2] [i_1 - 3] [i_2]) == (~var_14)));
                    var_23 = 1;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_24 = (((arr_8 [i_1] [i_1 - 1] [i_1 + 1]) / (arr_8 [i_1] [i_0] [i_1 - 1])));
                            var_25 = ((1 >> (((arr_0 [i_0 - 1] [i_2]) - 3217768273))));
                            var_26 = ((((((arr_13 [i_3]) >> (var_16 + 1376126133)))) ? var_13 : (var_7 | var_16)));
                            arr_15 [i_1] [i_1] = ((85 > ((((arr_2 [i_0] [i_0]) < (arr_0 [i_0] [i_2]))))));
                            var_27 = (231 == 1);
                        }
                        var_28 = var_19;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_29 = (min((arr_16 [0] [4] [i_0 + 1]), (max((arr_17 [i_1] [i_1] [i_2]), (34587 & 1)))));
                        var_30 = ((0 % ((~(!95244379)))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_31 = (~var_2);
                        arr_29 [7] [6] = (arr_21 [i_6] [i_7]);
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_32 = (max(var_32, ((((((~(-1 | 1)))) ? (((((~(arr_31 [i_7] [i_7]))) | ((~(arr_27 [i_7] [i_6] [i_7] [i_6])))))) : (arr_26 [i_10] [i_8] [17] [i_6]))))));
                        arr_32 [i_6] [i_6] [i_7] [6] [i_8 + 4] [i_6] = ((~(((arr_20 [i_8 + 3] [i_8 + 2]) - (arr_20 [i_8 + 4] [i_8 + 2])))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_33 = var_8;
                        var_34 = (((1 > 0) / (max(2137341409969052677, -95244351))));
                        arr_36 [12] [i_7] [12] [i_11] = (+(((arr_33 [i_6] [i_8 - 1] [8] [0]) ? var_1 : (arr_33 [i_6] [i_8 - 1] [i_8] [i_11]))));
                        var_35 = 62;
                    }
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        var_36 = (max(var_36, var_5));
                        var_37 = ((((((-(arr_24 [6] [i_7] [i_7]))) + 2147483647)) << (31 - 31)));
                        var_38 = (min(1, (max((((arr_24 [i_6] [i_6] [i_6]) >> (var_3 + 16205))), ((-(arr_39 [i_7] [i_7])))))));
                        var_39 = var_19;
                    }
                    var_40 = ((((0 ? 0 : -21685)) < 80));
                }
            }
        }
    }
    var_41 &= (((((1 >> (29335 - 29323)))) ? var_18 : var_10));
    var_42 = 0;
    #pragma endscop
}
