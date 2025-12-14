/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((~(~4294967295)));
                var_19 = (arr_1 [i_1] [i_0]);
                var_20 = (((arr_5 [i_0]) / 27959));
                var_21 = (min((((arr_3 [i_0]) ^ (arr_3 [i_0]))), ((((arr_2 [i_0]) & ((var_9 ? (arr_4 [i_0] [i_0] [2]) : (arr_4 [i_0] [i_1] [i_0]))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((arr_8 [i_2] [i_2]) ? (arr_7 [i_2]) : 0));
        var_22 = (arr_6 [2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_23 = (((arr_18 [i_3] [i_5] [i_5] [i_5]) ? (arr_18 [i_3] [i_4] [i_4] [i_5]) : (arr_18 [i_3] [i_4] [i_5] [i_5])));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_3] [i_3] [i_5] [i_3] = (~(arr_20 [i_3] [i_5] [i_4] [i_6] [i_4] [i_5]));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_24 = (((arr_1 [i_5] [i_7]) / (arr_1 [i_3] [i_3])));
                            arr_24 [i_7] [i_7] [i_3] = ((-(arr_1 [i_7] [i_5])));
                            var_25 ^= (arr_10 [i_3] [i_4]);
                            var_26 = (arr_10 [i_7] [i_5]);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_27 = 182;
                            var_28 = 27976;
                            arr_29 [0] [i_6] [1] [i_4] [0] = (23820 ^ 27976);
                            var_29 = var_0;
                            arr_30 [i_8] = (!var_1);
                        }
                        var_30 = 0;
                        var_31 = (~1579437358);
                    }
                    var_32 = ((2531865059 ? 1 : var_4));
                    var_33 = (182 <= 2682323695);
                    var_34 = (arr_26 [i_3] [5] [i_3] [i_3]);
                }
            }
        }
        var_35 = (max(var_35, (arr_8 [i_3] [i_3])));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_36 = (max((((!(arr_1 [i_9] [i_9])))), (((arr_6 [i_9]) / var_13))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                {
                    var_37 ^= ((-(((arr_22 [i_10] [i_11 - 1]) ? (arr_4 [i_9] [i_9] [i_9]) : (arr_3 [i_9])))));
                    var_38 = (((min(0, (arr_5 [i_11 - 1]))) > (max((arr_5 [i_11 - 1]), (arr_5 [i_11 - 1])))));
                    var_39 = ((0 != (max((((arr_26 [i_9] [15] [3] [i_11 - 1]) ? var_2 : var_6)), 14005))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_40 = (7826232088241387558 / 27976);
                                var_41 = ((((max(-2074234302, 23287) & (arr_4 [i_10] [i_11] [2])))));
                            }
                        }
                    }
                    arr_43 [i_10] = (arr_5 [i_11]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_42 = (max(var_42, (arr_36 [i_9])));
                    var_43 -= ((4835917628222507777 ? (((arr_41 [i_9] [5] [13] [13] [i_15] [i_15] [7]) ? (arr_41 [i_9] [i_15] [i_15] [4] [i_15] [i_14] [11]) : (arr_41 [8] [i_9] [i_9] [i_9] [i_14] [i_15] [i_14]))) : (arr_41 [i_9] [i_9] [i_9] [11] [0] [i_9] [i_9])));
                    var_44 = (max(851898601, -851898599));
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {

        for (int i_17 = 3; i_17 < 15;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    {
                        var_45 = ((!(arr_13 [i_19])));
                        arr_60 [i_16] [9] [i_19] [i_18] = (max(var_14, (arr_8 [i_16] [i_18])));
                    }
                }
            }
            var_46 = -23820;
            arr_61 [1] [i_17] = ((-(min((arr_27 [i_17] [11] [i_17] [i_17] [3] [i_17] [i_17 - 3]), (var_9 && var_7)))));
            var_47 = -27956;
        }
        for (int i_20 = 3; i_20 < 14;i_20 += 1)
        {
            var_48 |= (max((((min(var_2, (arr_27 [i_16] [1] [i_16] [i_16] [6] [i_20] [i_20]))) + 1)), (arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [i_20] [i_20])));
            var_49 *= ((+(min((arr_10 [i_16] [i_20]), (arr_10 [1] [1])))));
            arr_66 [i_16] [i_16] [i_20] = 4294967282;
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    {
                        var_50 = ((!(((~(arr_25 [i_16] [14] [13] [i_20 + 2] [i_21] [i_22]))))));
                        var_51 = (arr_25 [i_16] [i_16] [i_20] [i_20] [i_20] [15]);
                        var_52 &= (((arr_57 [i_20 + 2] [i_20] [i_20 - 3] [i_20 + 1]) << 0));
                        var_53 = (~-14005);
                        var_54 = (max((arr_70 [i_16] [i_20] [i_21] [i_22]), ((max((arr_50 [i_20 + 1] [i_20 - 3]), 0)))));
                    }
                }
            }
            var_55 = (max(var_55, -27949));
        }
        arr_72 [i_16] = var_9;
    }
    var_56 ^= (max((((120 || (((-270749997333739873 ? 182 : 5465171967604671456)))))), var_5));
    var_57 = ((-27958 * 4294967282) != 823);
    #pragma endscop
}
