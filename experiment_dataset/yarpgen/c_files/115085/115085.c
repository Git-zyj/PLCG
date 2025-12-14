/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_10 ? (min(((min(222, 222))), (min(var_6, var_12)))) : ((4294967292 ? var_7 : (!4294967292)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 -= var_6;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] [10] |= (4 <= 4294967268);
                        var_16 += (arr_8 [i_1] [i_2 - 2] [i_2 + 1] [i_3] [i_3]);
                        var_17 = var_12;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_18 = ((4294967286 ? ((var_2 ? 26300 : (arr_6 [i_4] [i_1] [i_1] [i_1]))) : (arr_3 [1] [1] [i_0])));
                            var_19 -= (arr_13 [i_2] [i_1] [i_2 - 2] [i_3] [i_3]);
                        }
                    }
                }
            }
            arr_15 [i_1] = ((~(arr_13 [i_1] [i_1] [i_0] [i_0] [i_1])));
            var_20 = (arr_0 [i_1]);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (((arr_1 [i_0]) + ((((arr_16 [i_5]) ^ 4294967292)))))));
            var_22 |= 39235;
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_23 = (((!-3005914598946693944) >= var_6));

            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                var_24 += (arr_3 [i_7 - 1] [i_7 - 1] [i_0]);
                var_25 = (arr_21 [i_6] [i_7 + 3] [i_6]);
                arr_24 [i_7] [i_6] [i_6] [i_7 + 3] = (~4294967288);
                var_26 |= (arr_8 [i_0] [i_0] [i_7 + 3] [i_7 - 1] [i_7 - 1]);
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    {
                        var_27 = (max(var_27, (((!(arr_2 [i_8 + 1]))))));
                        var_28 = (((arr_26 [i_6] [i_6] [i_6]) ? (arr_26 [i_6] [i_6] [i_0]) : (arr_26 [i_6] [i_9] [i_8 - 1])));
                    }
                }
            }
            arr_29 [i_6] [i_6] = -var_0;
            var_29 = (arr_1 [i_6]);
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] [i_10] |= (((arr_14 [i_10] [i_10] [10] [8] [18] [i_10]) > (((var_12 != (arr_30 [i_0]))))));
            arr_33 [i_0] = (var_10 | var_12);
        }
        var_30 -= (arr_2 [i_0]);
        arr_34 [i_0] = (127 ? 8589410304 : 93);
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {
        var_31 = ((((~(((var_6 == (arr_2 [4])))))) | 1084853195));
        var_32 = (!var_11);
        var_33 = (min(8872314131595166246, 36896));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        var_34 = var_12;
                        var_35 = (((arr_25 [i_11 + 1] [i_11 - 1] [i_11]) | 65535));

                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            var_36 = 131;
                            var_37 += (max(((((((arr_40 [0]) * 1123092469))) ? (((max(51303, (arr_45 [i_11] [i_11] [i_13] [i_13] [i_11] [i_15 + 1]))))) : ((var_9 ? (arr_19 [i_14] [i_12]) : (arr_26 [i_12] [i_15] [i_12]))))), (4294967292 <= 4294967288)));
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        var_38 = (max(var_38, var_1));
        arr_50 [i_16] |= arr_5 [i_16] [i_16] [i_16];
        arr_51 [i_16] [i_16] = ((~(((var_11 << (var_6 - 44))))));
    }
    var_39 = ((!((max((((4294967286 ? 65524 : 93))), (((var_7 + 9223372036854775807) << (var_12 + 8114704086477623594))))))));
    #pragma endscop
}
