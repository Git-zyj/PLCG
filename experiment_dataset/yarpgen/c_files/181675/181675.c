/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_1, 4294967295)) != ((((var_10 && (((var_1 ? var_2 : var_5)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (((-94 + 2147483647) >> 0));
        var_13 -= (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_14 *= var_2;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_15 = (arr_4 [i_1] [i_1 + 1]);

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_16 = (arr_11 [i_2 - 1] [i_3 + 1] [i_1 + 2]);
                    var_17 = var_1;
                    var_18 = ((((((arr_3 [i_3]) * 0))) ? (65535 % 124) : -var_7));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_16 [i_1] [i_2] [i_1] [i_5] [i_2] [i_1] |= var_4;
                    arr_17 [i_1] [i_2] [i_1] [i_3] = arr_2 [i_5];
                    var_19 *= (((arr_15 [i_1] [i_1 - 1]) >= 7656));
                }
                arr_18 [i_1] [i_3] = (((arr_12 [i_3 - 2] [i_3] [i_2 + 3] [i_1 + 1]) || (((27957 ? (arr_10 [i_1] [i_1]) : var_10)))));
                var_20 = (arr_12 [i_1] [i_1] [i_1] [i_1]);
            }
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_21 |= var_5;
            var_22 = var_9;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_23 = ((var_9 ? var_6 : ((~(22808 >= 32767)))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    {
                        var_24 = ((((!(arr_2 [i_8 + 1])))) != (((((min(-27957, (arr_4 [i_7] [i_8 - 1])))) == var_2))));

                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            var_25 = var_8;
                            var_26 |= (((((((((max(0, -27957)))) != ((17756215054540408573 ? (arr_3 [i_11]) : 28)))))) / (((((var_6 ? var_9 : var_9))) | (arr_29 [i_7] [i_8 + 1] [i_8] [i_9] [i_7] [i_11])))));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_27 &= (max((max((min(4958308999231273883, 4233327710)), ((max(-7656, var_6))))), (((7656 ? (arr_27 [i_8 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 2]) : (arr_27 [i_8 + 1] [i_10 + 3] [i_10 + 3] [i_10 - 2]))))));
                            var_28 = ((((((arr_21 [i_8 + 1]) % 32767))) ? (((!(arr_27 [i_10 - 2] [i_8 + 1] [i_9] [i_8 + 1])))) : ((21854 ? var_3 : 1))));
                        }
                    }
                }
            }
        }
        var_29 = (((((1 ^ 1) == 0)) ? (arr_11 [i_7] [i_7] [i_7]) : var_7));
    }

    /* vectorizable */
    for (int i_13 = 3; i_13 < 13;i_13 += 1)
    {
        var_30 = (min(var_30, var_4));

        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_49 [i_13] [i_13] [i_16] = -0;
                        arr_50 [i_13] [i_14] [i_13] [i_16] [i_13 + 2] [i_13] = ((var_5 ? var_3 : (arr_2 [i_13 - 2])));
                        arr_51 [i_13] [i_15] [i_15] [i_15] [i_15] |= (((((arr_9 [i_14] [i_15]) >> 0)) | ((((arr_25 [i_15]) ? var_3 : 0)))));
                        var_31 = (((arr_8 [i_13 + 2] [i_13] [i_14 - 2]) == (arr_8 [i_13 + 2] [i_13] [i_14 - 2])));
                        var_32 = var_2;
                    }
                }
            }
            var_33 = ((((0 || (arr_33 [i_13] [i_13] [i_13] [i_13] [i_14])))) <= (var_0 && 0));
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            arr_56 [i_13] = (((arr_34 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 - 3]) || var_1));
            var_34 = ((28 ? 159 : var_0));
        }
        var_35 = (arr_15 [i_13 - 2] [i_13]);
        var_36 = (arr_7 [i_13] [i_13]);
    }
    #pragma endscop
}
