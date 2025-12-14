/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((17812 ^ (!var_8)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 *= (!1);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 = -128;
            arr_5 [i_0] [i_1] [10] = (((arr_1 [i_0]) ? (arr_2 [10] [i_1]) : (arr_1 [i_0 - 1])));
            arr_6 [i_0] [i_1] = (arr_3 [18] [i_0] [i_0]);
        }
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = (((max((((var_11 ? var_9 : var_4))), (arr_3 [12] [12] [i_2]))) == 0));
        var_21 *= ((var_3 >> (31212 - 31210)));
        var_22 |= var_7;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_12 [12] |= -31202;
        var_23 = (max(var_23, -31202));
        arr_13 [i_3] = ((1 ? -18378 : 9877979891884084338));
        var_24 = ((31200 ? -31188 : 31178));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_25 = (max(var_25, var_13));
        var_26 = (2465563024 ^ 3751311598);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_23 [i_4] = ((6118 >> (((((!(arr_19 [i_5 - 2] [14])))) >> (((~var_1) + 6945101032763959589))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_7] [i_8] [i_5] [i_6] = (((((1563763991 ? ((var_3 ? (arr_26 [i_4] [i_5 + 1] [i_6]) : (arr_19 [i_5] [i_7]))) : ((var_5 ? (arr_18 [i_4]) : (arr_29 [i_4] [14] [16] [12] [i_8])))))) ? ((((16256 != (arr_11 [i_8 + 1]))))) : ((-var_14 ? -var_9 : (((max(23, (arr_1 [i_4])))))))));
                                var_27 = (max(var_27, 65527));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_28 *= 1;
                                arr_36 [9] [i_5] [i_6] [19] [i_10] = -1;
                                var_29 ^= (((arr_2 [1] [i_4]) == 1));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_30 = ((((((arr_0 [i_11]) % 1))) - ((17203233700171296068 ? ((((arr_35 [i_4] [i_5] [i_5] [15] [0]) ? 1 : (arr_1 [14])))) : ((var_15 ? (arr_33 [0] [i_5] [i_6] [11] [i_5] [18]) : 71))))));
                        var_31 |= (((((var_11 < 2046) & 31204)) >> ((var_0 ? (arr_2 [i_4 - 1] [i_5 + 1]) : ((-(arr_33 [i_4] [i_4 - 1] [15] [i_4 - 1] [i_6] [i_6])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_32 = 32;
                        var_33 = ((((((min((arr_44 [i_4] [i_12] [i_13] [i_14]), (arr_14 [i_4]))) / var_16))) - (((((arr_26 [i_12] [i_13] [i_14]) ? (arr_25 [i_4]) : (arr_9 [i_13]))) - (arr_19 [i_4] [i_12])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
