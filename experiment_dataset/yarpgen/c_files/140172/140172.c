/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_17 ^= ((((((min(var_3, 1586899864))) ? ((max(var_16, 1586899864))) : (min(var_2, 1586899869))))) ? ((-(min(2708067426, var_0)))) : (((((var_7 ? var_14 : (-9223372036854775807 - 1)))))));
        var_18 = (min(var_18, 36028797018963967));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_19 ^= var_14;
            var_20 = (min(var_20, ((((((1586899864 ? 24 : 1303691577))) ? 36028797018963971 : ((var_12 ? var_15 : (-9223372036854775807 - 1))))))));
        }
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_7 [i_2] [4] = (((min(var_16, 24))) ? (!var_14) : ((1586899864 ? 28932 : 2708067432)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_3] [i_2] [i_3] [1] = (min(((((1586899869 ? var_5 : var_1)))), ((var_15 ? 2147483647 : ((var_6 ? var_8 : var_16))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 -= 175;
                                arr_19 [i_2] [11] [i_4] [i_5] [0] [i_3] = (min((min(var_12, ((min(var_0, 2708067431))))), (min((min(var_15, var_10)), ((max(1, -50)))))));
                            }
                        }
                    }
                    var_22 ^= ((var_10 ? var_13 : ((-322806764 ? var_2 : (((-46 ? 2147483647 : var_7)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    var_23 = -8016458148945641404;
                    var_24 += (0 ? 309747306 : 73);

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_28 [3] [5] [3] [i_9] = (((4357151093995786776 ? (min(var_0, 1586899865)) : ((var_16 ? 2708067432 : var_15)))));
                        var_25 = (max(var_25, var_9));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_31 [i_2 + 3] [i_8] [i_7] [1] [i_2 + 3] = ((min(((var_13 ? var_13 : var_3)), -124728722)));
                        var_26 += -23977;
                        var_27 = (min(((var_4 ? var_0 : -7070266718480411996)), (!1586899865)));
                        arr_32 [i_2] [i_2 - 1] [8] [i_2 - 1] [10] [i_2 + 3] = 2708067418;
                        arr_33 [i_2 - 1] [i_7] [i_8] [i_10] = -var_9;
                    }
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        arr_36 [i_7] [i_11] = 2605119133489722405;
                        var_28 = ((var_5 ? ((var_6 ? var_10 : -36028797018963968)) : ((min(var_4, var_14)))));

                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            arr_39 [i_11] [i_11] [i_8] [i_8] [i_8 + 2] [i_8 - 1] = (min(var_13, ((((((226 ? -322806764 : 19))) ? 7 : 22)))));
                            arr_40 [8] &= (min((((((var_7 ? var_10 : var_16))) ? var_13 : (((-822267117666851683 ? 3544412080162145411 : 4))))), ((min(20166, var_1)))));
                        }
                        arr_41 [4] [8] [10] [i_11 - 1] |= (-(!var_9));
                    }
                }
            }
        }
    }
    for (int i_13 = 4; i_13 < 17;i_13 += 1)
    {
        var_29 = -125;
        var_30 += ((max(var_14, (min(var_14, 822267117666851683)))));
    }
    var_31 = (min(var_7, var_1));
    var_32 = (max(var_32, (((((((9223372036854775807 ? -32496 : var_7)))) ? ((((var_15 ? var_16 : var_10)))) : (min(13737169593883606988, 18446744073709551615)))))));
    var_33 = var_2;
    #pragma endscop
}
