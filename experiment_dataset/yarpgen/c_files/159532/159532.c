/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 &= (((((1272817239 ? (max(var_6, var_1)) : (arr_3 [i_0] [i_0])))) ? (max(var_3, (arr_2 [i_0]))) : ((((var_2 ? var_5 : var_5))))));
        arr_4 [i_0] [i_0] = (((((var_2 & (arr_1 [i_0] [i_0])))) ? (39155 / var_15) : (min(((var_5 ? 32767 : var_15)), var_5))));
        arr_5 [i_0] = (!var_0);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_1 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_17 [i_1] [i_1] [i_3] [i_2] = ((((arr_1 [i_2 + 1] [i_2 + 1]) >> (((arr_1 [i_2 + 1] [i_2 + 1]) - 12296461389944356838)))));

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_19 = (min(var_19, (~9150048280782680885)));
                    arr_20 [i_1] [i_1] [i_1] [i_3] &= (min(((((max(var_12, (arr_9 [i_4]))) <= (arr_8 [i_4 + 2])))), (var_6 ^ 14473829150088970729)));
                }
                arr_21 [i_2] = ((-(arr_19 [i_2])));
                arr_22 [i_3] [i_2] [i_2] [i_1] = ((((((1 ? 5724 : 31)) ? (0 / -5710) : var_15))));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_25 [i_1] [i_2] [4] [i_1] = ((~(((min((arr_10 [i_2] [i_2]), var_9)) ^ -16246))));
                arr_26 [i_2] [i_2] [i_5] = (-var_9 / (arr_8 [i_5]));
                var_20 = (-((-(((var_1 + 9223372036854775807) << (500253833 - 500253833))))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_21 = 5729;
                            var_22 = 1;
                        }
                    }
                }
                var_23 = (var_13 ? (arr_28 [i_1] [i_2] [i_2]) : 1);
            }
            var_24 = (((((~(!2041648285)))) & ((var_0 / (3336001427782241405 & var_7)))));
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_25 = ((((var_7 ? (arr_38 [i_1] [i_10]) : (~var_5)))) ? (((arr_1 [i_1] [i_9 + 1]) ? 1880590606 : -var_9)) : ((var_15 / (arr_12 [i_9] [i_1]))));
                var_26 = (min(var_26, var_0));
            }
            arr_41 [i_9] = ((-((var_14 / (arr_0 [i_1] [i_9 + 1])))));

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_27 = (max(var_27, (5724 <= 15865)));
                var_28 = ((((arr_12 [i_9] [i_9]) ? (arr_12 [i_9] [i_9]) : var_5)));
                arr_46 [i_1] [i_9] [i_1] [i_9 + 1] = -5728;
            }
            for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
            {
                var_29 ^= ((((var_0 * ((var_14 / (arr_7 [i_1]))))) * (((-(((arr_40 [i_12] [i_12] [i_12] [i_1]) / (-127 - 1))))))));
                var_30 = (min(var_30, ((((~var_3) == var_13)))));
            }
            for (int i_13 = 3; i_13 < 18;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_31 = (min(var_31, ((((arr_9 [i_9 + 1]) ? ((~(~65528))) : var_16)))));
                            var_32 |= (min((var_11 * var_2), (((~(arr_42 [i_14] [i_13 - 3] [i_13 - 3]))))));
                        }
                    }
                }
                arr_59 [i_9] [i_9] [i_9] [i_1] = var_3;
                var_33 = ((-106 ? (((-1939018214538506724 | 1285536077) ? 4086120992 : (~0))) : (~101)));
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_34 = ((~((~(3336001427782241420 ^ 57965)))));
                            var_35 = (min(var_35, (((~(((-127 - 1) & (max(var_14, var_6)))))))));
                        }
                    }
                }
            }
            var_36 = ((((-(((arr_33 [i_9] [i_9] [i_9] [i_9] [17]) ^ (arr_37 [i_1] [i_9]))))) - (arr_29 [i_1] [1] [7] [i_1] [i_1] [i_1])));
        }
    }
    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
    {
        arr_70 [i_19] = (!var_9);
        arr_71 [i_19] [i_19] = (max(239, ((1680512138 ? ((1 ? 0 : 12178396945614567403)) : 19))));
        var_37 = (min((1521057284 / 117), (arr_0 [i_19] [i_19])));
        var_38 = (arr_24 [i_19] [i_19] [i_19] [16]);
        var_39 -= ((~(arr_10 [i_19] [i_19])));
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            {
                arr_78 [i_20] [i_21] [8] = ((-((var_6 ? (arr_74 [i_21]) : (arr_73 [1])))));
                var_40 = (max(var_40, ((((((((min(var_6, var_16))) ? var_3 : (min((arr_74 [5]), 16258))))) ? 27 : var_5)))));
                var_41 = (((var_7 + var_6) || var_0));
            }
        }
    }
    #pragma endscop
}
