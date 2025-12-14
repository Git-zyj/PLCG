/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = (arr_3 [i_0] [i_0]);
            var_20 = (max(((26081 ? (arr_3 [i_0] [i_1]) : ((((arr_0 [i_1] [i_0]) != var_16))))), var_2));
            var_21 -= (max(65535, -11064));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = (max((arr_1 [i_0] [i_0]), -11064));
            arr_11 [i_2] [i_2] = ((~((((~12697414404618846992) <= (((max(var_13, -28115)))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_0] [i_2] [i_4] = ((-(arr_5 [i_0] [0] [i_3])));
                        arr_18 [i_4] [i_3] [i_4] = (max(((-(65535 | 28115))), ((max(28115, 28103)))));
                    }
                }
            }
        }
        var_23 = (max(var_23, var_14));
        var_24 = ((((-(arr_3 [16] [i_0]))) ^ 60));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_30 [i_0] [i_5] [i_5] [i_0] = ((-((var_5 - (arr_24 [11] [i_5] [i_5] [i_0])))));
                        arr_31 [i_7] [7] [i_5] [i_5] [i_0] [i_0] = 2622514374;

                        for (int i_8 = 4; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_5] [i_0] = (max(-28129, (arr_32 [i_8] [i_5] [i_8] [i_5] [i_7])));
                            arr_35 [1] [i_5] [10] [i_5] [10] = (((arr_27 [i_0] [i_5] [17] [1]) ? (((~(arr_24 [i_0] [i_6] [i_5] [i_8])))) : ((((((var_10 ? 2147483640 : 1)) > (arr_27 [i_0] [i_5] [1] [i_8])))))));
                            var_25 = ((((min((43789 || var_10), (~var_3)))) ? ((max(((var_8 ? var_15 : var_13)), ((max((arr_4 [i_0]), var_18)))))) : (min((arr_33 [i_0] [i_0] [8] [14] [i_8 - 4] [i_0] [i_8 - 1]), (arr_33 [i_0] [i_5] [i_6] [i_6] [i_6] [i_6] [i_8 - 4])))));
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_26 = var_16;
                            arr_39 [i_5] [i_5] [0] [i_7] [i_5] [i_6] [i_5] = (((arr_27 [i_9] [i_0] [i_5] [i_0]) + (((arr_23 [i_9] [i_6] [i_5]) ? -86 : 11064))));
                            var_27 ^= (((((1073741824 << (((((arr_22 [i_9] [i_9]) + 780804593)) - 13))))) ? (arr_3 [i_5] [i_5]) : 204));
                        }
                        var_28 = (arr_9 [i_7]);
                        var_29 = (max(var_12, 10681));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_30 &= (var_11 ? (arr_21 [i_10] [i_10] [14]) : (~83));
        arr_44 [i_10] = (!(~var_18));

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    {
                        var_31 += ((-11064 ? var_18 : var_6));
                        var_32 = (((arr_26 [i_12 + 1] [i_12 - 1] [i_13 - 2] [i_13] [i_13 - 2]) >> (2147483647 - 2147483618)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 6;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_33 = (((~var_8) ^ (((arr_33 [i_10] [i_11] [i_11] [i_14] [i_15 + 3] [i_15] [i_16]) ? 28115 : (arr_4 [i_11])))));
                            arr_62 [i_14] [i_15] [i_14] [i_11] [i_10] = (((arr_32 [i_15 - 1] [i_11] [i_15 + 1] [i_15] [i_15]) - (arr_32 [i_15 - 1] [i_11] [i_15 + 2] [i_15] [i_15])));
                            var_34 = (arr_50 [i_11] [i_10] [i_14] [i_15]);
                        }
                    }
                }
            }
            var_35 = var_10;
            arr_63 [i_10] = ((-var_3 ? (arr_55 [0] [0]) : (-2147483647 - 1)));
        }
        for (int i_17 = 1; i_17 < 8;i_17 += 1)
        {
            arr_68 [i_17] = (((28115 ? 114 : var_11)));

            for (int i_18 = 1; i_18 < 9;i_18 += 1)
            {
                arr_71 [i_10] [i_17] [i_10] [i_10] = ((var_15 ? ((var_18 ? 2147483647 : var_0)) : -var_19));
                arr_72 [2] [i_17] [2] |= ((28114 ? 9505 : 32767));
                var_36 = (arr_19 [14]);
            }
            arr_73 [i_10] [i_17] = var_19;
        }
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {
        arr_77 [i_19] &= ((((max((~var_19), (((var_11 != (arr_15 [4] [4]))))))) | (min(var_10, (var_17 | -28119)))));
        /* LoopNest 2 */
        for (int i_20 = 2; i_20 < 9;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                {
                    var_37 = (arr_51 [i_20]);
                    arr_84 [i_20] [i_20] [i_20] = (max(var_16, -var_18));
                }
            }
        }
        arr_85 [i_19] [i_19] = (min((((-(((arr_1 [i_19] [i_19]) ? var_2 : -1640346102))))), (max((((var_12 ? var_5 : (arr_47 [i_19] [i_19] [i_19] [i_19])))), 14004355319469933190))));
        var_38 = (max((((((min(27552, var_18))) ? -var_18 : (arr_27 [i_19] [i_19] [i_19] [i_19])))), (max(var_1, ((max(-28115, var_0)))))));
    }
    var_39 = ((1 | ((var_15 / (-805 - var_16)))));
    #pragma endscop
}
