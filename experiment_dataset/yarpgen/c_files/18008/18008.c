/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = ((((((max(4388675167475535207, 11817))) ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((arr_2 [i_0]) ? var_15 : (arr_2 [i_0]))))) < (min(-1, 11817))));
                    var_21 = (max(var_21, ((((-1 / 22425) ^ ((-(max((arr_5 [i_0]), (arr_5 [i_2]))))))))));
                    var_22 = (min(var_22, var_11));
                }
                var_23 = (max(var_23, ((((~(arr_7 [i_0 - 1] [i_1] [1] [i_1]))) != ((((((12405 <= (arr_0 [i_0 + 1]))) && ((((arr_2 [1]) / var_0)))))))))));
                var_24 ^= ((var_11 / (arr_6 [i_0] [i_0 + 1] [i_1])));
                var_25 = (min(var_25, (max(((((-22425 ? (arr_2 [i_0]) : var_12)) - (arr_4 [i_1] [i_0] [i_0 - 1]))), 35))));
                var_26 = (min(var_26, ((max(((((arr_6 [i_1] [2] [i_1]) ? (arr_0 [i_1]) : var_8))), (!var_11))))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_27 ^= max((((arr_9 [i_3] [i_3]) ^ (arr_7 [i_3] [i_3] [i_3] [9]))), (max((min(-6423, 15)), (arr_0 [i_3]))));
        var_28 = ((max((-32767 - 1), 11835)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_29 = min((min(((min((arr_2 [i_4]), (arr_4 [i_4] [i_4] [i_4])))), (((arr_1 [i_4] [10]) ? (arr_9 [4] [4]) : var_7)))), ((((-32767 - 1) || 6404))));
        var_30 = (min(var_30, 6));
        var_31 = (arr_3 [i_4]);
        var_32 = arr_3 [i_4];
    }
    var_33 = ((((var_6 < (var_12 + var_5))) || var_1));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_34 = ((~(((arr_2 [0]) ? (arr_6 [i_5] [i_5] [i_5]) : (arr_8 [2] [2])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_35 = (~-6419);
                        var_36 = -var_1;
                        var_37 = arr_11 [i_7];
                    }
                }
            }
        }
        var_38 = (var_12 ? (2147483647 ^ var_10) : (!var_19));
        var_39 -= var_14;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_40 = var_12;
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {

                        for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            var_41 ^= arr_34 [i_11] [i_12] [i_9] [i_12] [i_13] [i_13 + 1];
                            var_42 = (min(var_42, (((arr_18 [i_10 + 2] [1] [10]) + (arr_6 [i_9] [i_12] [i_9])))));
                        }
                        for (int i_14 = 2; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            var_43 -= -1;
                            var_44 = (((((((arr_35 [i_9] [i_10]) ? (arr_15 [i_9] [i_9]) : (arr_17 [2] [2]))) + 9223372036854775807)) >> (((arr_17 [i_10 - 2] [i_14 - 2]) - 6047916976617335089))));
                        }
                        for (int i_15 = 2; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            var_45 = (((arr_20 [i_9] [i_15 + 1] [i_10 + 1] [i_12]) == (arr_32 [i_15] [i_10] [i_10] [i_10])));
                            var_46 = (min(var_46, (arr_16 [i_10 + 4] [i_10 + 4] [i_10 - 1])));
                        }
                        for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
                        {
                            var_47 |= (((arr_30 [i_9] [i_10] [i_12]) & (arr_14 [i_16 + 1])));
                            var_48 = ((((((arr_21 [i_16 - 1] [i_10] [i_10] [i_9]) ? (arr_33 [i_9]) : (arr_29 [i_9] [i_11] [i_12] [i_10])))) ? (((arr_37 [i_16] [i_12] [i_11] [14] [i_9]) | var_18)) : var_17));
                        }
                        var_49 = 27073;
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_50 -= (((arr_38 [i_9] [i_10] [i_9] [8] [i_11] [i_11] [i_17]) ? 0 : var_6));
                        var_51 = ((-16 ? -1 : 1));
                        var_52 = ((arr_30 [i_9] [i_10 + 4] [i_17]) | (arr_30 [i_9] [i_9] [i_9]));
                        var_53 = (min(var_53, (6404 <= 1)));
                        var_54 = (max(var_54, (arr_8 [i_10 + 3] [i_10 + 1])));
                    }
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_55 = (arr_2 [i_11]);
                        var_56 = 1152921504606584832;
                    }
                    var_57 = (max(var_57, ((((!var_15) > -6445)))));
                    var_58 = (arr_37 [i_9] [9] [i_9] [i_11] [i_11]);
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
    {
        var_59 = (arr_10 [11]);
        var_60 = (min(var_60, ((((min((((arr_4 [i_19] [16] [i_19]) ? (arr_37 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_23 [i_19] [i_19] [i_19] [i_19] [i_19]))), (((arr_44 [i_19] [i_19]) % var_12)))) * (((((arr_49 [i_19]) / var_16)) / -var_5)))))));
        var_61 *= (min((67 & 61), ((-(65535 - var_16)))));
        var_62 = var_17;
    }
    #pragma endscop
}
