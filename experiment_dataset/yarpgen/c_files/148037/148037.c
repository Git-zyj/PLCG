/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_10, (~var_6)))) ? ((var_1 ? var_7 : var_4)) : (((!((max(var_0, var_2))))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 9223372036854775807;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((((((~var_3) ? ((var_3 ? 15 : var_7)) : (~var_3)))) ? var_11 : ((((var_7 ? var_5 : var_12)) | (((((arr_7 [i_2]) != var_12))))))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] |= ((var_3 ? (min((var_13 == -54), var_1)) : (arr_3 [i_0] [i_1])));
                        var_18 = (max(((((((var_5 ? var_15 : (arr_7 [i_0])))) && var_2))), (min((max(9223372036854775801, 63)), var_7))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] = (max(((+((var_6 ? (arr_0 [i_2]) : var_11)))), ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) == ((min(-17, (arr_0 [i_3])))))))));
                    }
                }
            }
        }
        var_19 = (max(var_19, (max(((-9223372036854775801 ? 546106802 : 4246109402108702862)), 1))));
        var_20 = (max(var_20, 4246109402108702862));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 -= (max((((!var_2) ? var_12 : (4487571331050916385 | var_6))), var_16));
                                arr_23 [i_0] [i_0] [i_0] [i_6] [i_4] [i_4] = 1808577930078939961;
                                arr_24 [i_0] [i_4] [i_0] = ((var_16 ? (max(13959172742658635230, var_7)) : (((32 ? ((var_16 ? var_1 : var_16)) : (arr_3 [i_6] [i_5]))))));
                            }
                        }
                    }
                    arr_25 [i_4] = (max((var_0 + var_5), ((((arr_6 [i_5 + 3] [i_5 + 3] [i_4] [i_0]) ? ((var_8 ? (arr_0 [i_0]) : var_8)) : var_13)))));
                    arr_26 [i_0] [1] [i_5 + 3] &= var_12;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_22 = (((((((((arr_8 [i_0] [i_5] [i_5] [i_9]) | (arr_13 [i_0])))) ? (~var_10) : var_14))) ? (max((min(var_6, var_2)), var_8)) : var_13));
                                var_23 -= ((((((arr_19 [i_0] [10] [i_9 + 2]) ? (arr_13 [i_9 - 1]) : (arr_13 [i_9 + 1])))) ? 0 : (~4487571331050916389)));
                            }
                        }
                    }
                    arr_32 [i_0 + 1] [i_0] [i_4] = ((((-(arr_5 [i_5 - 1] [i_5 - 1]))) == (((arr_8 [i_0 + 2] [i_0] [i_4] [i_5 + 1]) ? ((min(var_0, -33))) : (min(9223372036854775801, var_7))))));
                }
            }
        }
    }
    for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_24 = (((min(13959172742658635232, 9837461496422446480)) ^ ((min(var_9, var_6)))));
        arr_36 [i_10] = (((-9318 ? 9223372036854775802 : var_3)));
    }
    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_25 |= (max(((var_7 ? -13 : var_12)), (((((var_7 ? -3284 : -85))) ? ((min(1, var_0))) : (max(0, var_14))))));
        var_26 = (max(8343597541906643126, 1521646060032866304));
        arr_39 [i_11] [i_11 - 1] = (((arr_8 [i_11] [i_11 - 2] [i_11 - 2] [i_11]) | (arr_33 [i_11 - 2])));
    }

    for (int i_12 = 3; i_12 < 16;i_12 += 1)
    {
        var_27 = (min(var_27, -var_11));
        arr_42 [i_12 - 1] = var_10;
    }
    #pragma endscop
}
