/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (min(var_5, (32505856 + 64)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, 127));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((255 >> (((max(var_2, ((9223372036854775807 ? 532676608 : (arr_1 [i_0]))))) - 532676585))));
            var_13 = (max(var_13, 466613850));
            var_14 = max(((~(arr_5 [i_1 + 1] [i_1 + 1]))), (((arr_5 [i_1 + 1] [i_1]) ? 9223372036854775807 : 3762290688)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 = ((-((~(arr_5 [i_3] [i_1])))));
                        var_16 = (~var_3);
                        var_17 += 3828353436;
                        var_18 = var_3;
                        var_19 ^= -532676628;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_22 [i_7] [i_6] [i_5] [i_4] = -11;
                        var_20 ^= ((((max((min(-72, var_2)), -32755))) & (arr_13 [i_4])));
                    }
                }
            }
        }
        var_21 = ((~(!-6)));
        var_22 = (max(var_22, ((min(var_10, ((~(max(3591513848, var_7)))))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                {
                    var_23 = (min(var_23, var_4));
                    var_24 = min((!4294967295), 722697029);
                    arr_28 [i_4] [i_4] [i_4] [i_9] = var_8;
                }
            }
        }
        var_25 = (max(var_25, (((((min((arr_27 [i_4] [i_4] [i_4]), 3762290667))) ? (((arr_25 [i_4] [i_4]) ? (arr_27 [i_4] [i_4] [i_4]) : (arr_27 [i_4] [i_4] [i_4]))) : ((((arr_27 [i_4] [i_4] [i_4]) ? -64 : (arr_19 [i_4] [i_4] [i_4])))))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        var_26 = (max(var_26, ((4780 ? 703453440 : 127))));
        var_27 = (max(var_27, ((((~var_5) ? (arr_27 [i_10 + 2] [i_10 + 3] [i_10 - 1]) : var_7)))));
        arr_31 [i_10] = 127;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_42 [i_11] [i_10] [i_12] [i_13] = ((!(!3572270267)));
                        var_28 += ((!(~var_1)));
                        var_29 = (max(var_29, ((((arr_19 [i_12 - 1] [i_10 + 3] [i_10 - 1]) / (arr_19 [i_12 - 2] [i_10 - 1] [i_10 + 1]))))));

                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            arr_45 [i_11] [i_10] [i_14 + 1] = ((26 ? -1 : (((arr_43 [i_10] [i_10] [i_10] [i_10] [i_13] [i_14]) ? (arr_26 [i_10]) : var_7))));
                            var_30 = 355551456;
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 4; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 10;i_17 += 1)
            {
                {
                    var_31 = ((127 ? (((((((min(14, (arr_4 [i_15] [i_16]))))) != ((-(arr_3 [i_15] [i_16] [i_17 + 3]))))))) : var_6));
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 11;i_18 += 1)
                    {
                        for (int i_19 = 3; i_19 < 12;i_19 += 1)
                        {
                            {
                                arr_60 [i_19] [i_16] [i_15] [i_18 - 3] [i_16] = (max(((((arr_21 [i_16] [i_16] [i_16] [i_16 - 1]) >= (!-7242440829547024627)))), ((~(((var_7 != (arr_4 [i_15] [i_17]))))))));
                                var_32 = ((((((min(var_7, (arr_47 [i_17] [i_17]))) <= (arr_49 [i_16])))) % (arr_2 [i_15])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 1; i_20 < 13;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 13;i_22 += 1)
                {
                    {
                        var_33 ^= (min((7 / 26), 44));

                        for (int i_23 = 2; i_23 < 12;i_23 += 1)
                        {
                            arr_72 [i_15] [i_20] [i_21] [i_23] = (19376 ? 4192215755 : 102751540);
                            var_34 = (min(var_34, (((1544395200 ^ (max(536739840, (arr_18 [i_15] [i_22] [i_15] [i_15]))))))));
                        }
                        /* vectorizable */
                        for (int i_24 = 2; i_24 < 12;i_24 += 1)
                        {
                            var_35 = (min(var_35, var_2));
                            arr_77 [i_21] [i_20] [i_21] [i_22 + 1] [i_24] = (((arr_54 [i_24] [5] [i_24] [i_24] [i_24]) ? var_3 : (arr_53 [i_24] [i_24 - 2] [i_24] [i_24] [i_24] [i_24 + 1])));
                            var_36 = var_4;
                        }
                        arr_78 [i_21] [i_21] [i_22 + 1] = ((((max(var_8, (arr_51 [i_15] [i_20 + 1] [i_22 + 1])))) ? ((((arr_51 [i_20] [i_20 + 1] [i_22 + 1]) ? var_9 : var_3))) : (arr_51 [i_20] [i_20 + 1] [i_22 - 1])));
                        var_37 = (((((min((arr_43 [8] [i_20 - 1] [8] [8] [i_20 - 1] [i_20]), (arr_43 [i_20] [i_20] [i_20] [i_20] [i_20 + 1] [i_20 + 1]))))) >= var_8));
                    }
                }
            }
        }
        var_38 ^= (((((arr_70 [i_15] [i_15] [i_15] [i_15] [i_15]) ? ((281579293 / (arr_32 [i_15]))) : (var_1 * 15360))) > var_6));
    }
    var_39 += var_0;
    var_40 = var_1;
    #pragma endscop
}
