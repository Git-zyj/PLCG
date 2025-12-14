/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4 + 1] = (arr_5 [i_0] [i_3]);
                                var_18 = (arr_6 [i_0] [i_4 + 1] [i_1]);
                            }
                        }
                    }
                    arr_17 [i_1] = (((((-(arr_3 [i_2])))) ? (arr_9 [i_0] [17] [i_2] [i_2]) : var_14));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [14] [i_0] [i_1] [i_1] [i_5] = ((-(((arr_14 [i_5] [i_2] [i_0] [1] [i_0]) ? (arr_1 [i_0] [2]) : (arr_14 [i_0] [i_1] [9] [i_2] [i_5])))));
                        arr_22 [i_1] [i_2] [17] [i_1] = ((((82 != (arr_14 [8] [i_1] [i_0] [i_5] [i_1])))) >> (var_0 - 1264225522));
                        arr_23 [i_1] [12] [i_1] [i_2] [i_5] = (arr_3 [i_0]);
                    }
                }
            }
        }
        var_19 ^= (((((65527 << (((-1066938103 + 1066938127) - 21))))) ? var_3 : (arr_7 [7] [i_0] [11] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            {
                arr_29 [9] = (!4294967295);

                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_20 += ((((9223372036854775798 ? 860411151 : 30711)) == (((((-(arr_30 [i_6] [i_6] [i_8])))) ? ((min(var_15, (arr_31 [i_9] [i_8] [2])))) : (arr_25 [16])))));
                        var_21 -= 874;
                    }
                    var_22 += 554690263;
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_39 [i_11] [i_10] [i_6] [i_6] = ((127 ? 2061204636 : 928130123));
                        arr_40 [i_6] [1] [i_6] [i_6 - 1] = 52;
                        arr_41 [i_6] [i_6 + 1] [i_6 + 1] [i_10] [i_11] |= (+((~(((arr_25 [i_6]) + var_4)))));
                        var_23 = var_12;
                    }
                    var_24 = (((min(1536443108, 0)) < (min((arr_37 [i_6 - 1] [i_6 - 1] [i_7 - 2] [i_7 + 1]), (arr_37 [i_6 - 1] [i_6 + 1] [i_7 - 1] [i_7 + 3])))));
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 19;i_14 += 1)
                        {
                            {
                                arr_49 [i_14 - 4] [i_13] [i_7 + 2] [i_7 + 2] [i_6] = (min(((-(min((arr_42 [i_7 + 2] [i_7 + 2] [9]), (arr_37 [i_6 - 1] [i_7 - 1] [9] [i_14]))))), (((!40) ? (arr_32 [i_6 - 1] [i_7 + 1]) : var_3))));
                                var_25 ^= ((~((min(208, 33206)))));
                                var_26 ^= (arr_38 [i_14 - 4] [i_13] [i_7] [i_7]);
                            }
                        }
                    }
                    var_27 = ((var_16 ? (max(((3848290697216 ? 18446744073709551615 : 732903189)), ((max(var_12, (arr_27 [i_6] [i_7])))))) : ((((!8420683331405421531) ? (arr_38 [i_6 + 1] [1] [i_6] [i_7]) : 120)))));
                }
                var_28 += (arr_43 [16] [i_7] [i_7 + 1] [3]);
            }
        }
    }
    var_29 = (max(var_29, var_4));
    #pragma endscop
}
