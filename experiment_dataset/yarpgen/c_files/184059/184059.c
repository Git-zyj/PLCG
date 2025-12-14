/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (--10867);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((-(((!(arr_0 [i_0] [i_0]))))))) ? (((!(((2014698121 ? 2147483647 : var_13)))))) : (arr_3 [i_0] [i_0])));
        arr_5 [i_0] = (((((min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))))) / var_6));
        var_16 = 17;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1 + 1] = -10864;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_16 [i_1] = (min(1536, -1));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_17 = var_14;
                        arr_19 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((((((arr_13 [i_1] [i_1 - 1] [i_2 - 2]) ? 1 : 1))) ? (((arr_6 [i_1 + 1] [i_1]) / 436547126)) : ((((arr_11 [i_1 + 1]) ? 2147483647 : 96)))));
                        var_18 -= (((236 ? var_11 : (arr_7 [i_2 + 1]))));
                    }

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_1 + 1] = (((((1544 ? ((249 ? var_8 : -37)) : -88))) ? (~15092) : (+-65535)));
                        var_19 = (max((((arr_8 [i_5]) / (arr_12 [i_1 + 1] [i_2]))), (min((var_6 / -47), -97))));
                        var_20 -= -10870;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_21 *= (max(((63991 ? 36028797018963968 : 55240)), (((var_1 >= (arr_9 [i_1] [i_1]))))));
                        var_22 = (max(var_22, (~var_5)));
                    }
                }
            }
        }
        arr_27 [i_1] = (max((((arr_11 [i_1 - 1]) / (((arr_7 [i_1]) ? -8 : (arr_12 [i_1] [i_1]))))), var_0));
        arr_28 [i_1] [i_1] = (min((var_3 / 1), (arr_18 [i_1] [i_1] [i_1] [i_1 + 1])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_23 = (arr_21 [i_1]);
                            arr_42 [22] [i_7] [i_7] [i_1] [i_7] = (-(arr_21 [i_1]));
                        }
                        for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            arr_46 [i_1] [i_7] [i_8] [i_9] [i_7] [i_11] = 1;
                            arr_47 [i_11] [i_11] [i_9] [i_1] [i_7] [i_7] [i_1] = (((-(arr_12 [i_1 + 1] [i_1 - 1]))));
                            arr_48 [i_9] [i_9] [i_9] [i_9] [i_1] [i_9 - 1] = ((+(((arr_20 [i_9] [i_9] [i_9 - 3] [1]) ? (((((arr_23 [i_7] [i_8] [i_11 + 1]) >= var_11)))) : var_10))));
                        }
                        arr_49 [i_1] = 8;

                        for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            var_24 = ((((min((~var_11), 15661))) ? var_11 : 2047));
                            var_25 ^= (((arr_50 [i_8] [i_9 - 2] [13] [i_12] [13]) >= ((min(1, 47)))));
                        }
                        for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
                        {
                            arr_55 [i_7] [i_7] &= (arr_33 [i_1] [i_7] [i_13 + 2] [i_7]);
                            var_26 = ((~(((arr_24 [i_1] [i_7] [9] [i_9] [i_13 + 4]) ? ((15657 ? var_6 : var_10)) : 1519))));
                            arr_56 [i_13] [i_13 - 1] [i_13] [i_1] [i_13] = (((((30818 ? (-993786668 / -10875) : var_11))) * ((252 / ((var_13 ? (arr_11 [i_9]) : var_11))))));
                            arr_57 [i_8] [i_1] = var_3;
                            var_27 = ((1 ? ((((arr_38 [i_1]) ? 49874 : ((var_3 ? (arr_54 [i_13] [i_13] [i_7] [i_9] [i_1]) : (arr_26 [i_1] [i_1] [i_9 - 1] [i_9])))))) : var_14));
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 22;i_14 += 1) /* same iter space */
    {
        var_28 = (((247 >= 1) / (arr_37 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 22;i_17 += 1)
                {
                    {
                        arr_69 [i_15 - 1] [i_14] = (~(((arr_54 [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1]) / (arr_54 [i_16 - 3] [i_16 - 3] [i_16] [i_16] [i_16]))));

                        for (int i_18 = 1; i_18 < 20;i_18 += 1)
                        {
                            arr_72 [i_14] [i_17 - 1] [1] [i_15] [i_14] = (arr_32 [i_17]);
                            arr_73 [i_15 - 3] [i_14] [i_15] [i_15] [i_15] = ((((max((arr_9 [i_17] [i_14 + 1]), 1))) ? var_11 : ((var_5 * ((var_8 / (arr_9 [i_17] [i_17])))))));
                            arr_74 [i_14] [i_14] [i_14 - 1] [i_14] [i_14] = 60;
                            arr_75 [i_17] [i_17] [i_17] [i_17 - 1] [i_18] [20] [6] &= 1;
                            var_29 ^= (max(((-(min(18446744073709551615, (arr_71 [i_14] [i_15] [i_18]))))), var_0));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 1; i_19 < 22;i_19 += 1) /* same iter space */
    {
        arr_78 [i_19] [i_19] = (!1);
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                {
                    var_30 ^= (((((arr_7 [i_19]) ? 1 : 1)) >= -25));
                    arr_87 [i_19 + 1] [i_19 + 1] [i_21] &= (arr_68 [i_19] [i_20] [i_20] [i_19] [i_19] [i_19]);
                    var_31 = (((arr_23 [i_19 + 1] [i_19 + 1] [i_19 - 1]) - (arr_23 [i_19 + 1] [i_19 + 1] [i_19 + 1])));
                    var_32 += var_12;
                }
            }
        }
    }
    var_33 = (!-var_11);
    #pragma endscop
}
