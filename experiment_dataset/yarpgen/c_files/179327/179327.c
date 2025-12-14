/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) ? ((var_3 & (arr_3 [1]))) : 173));
        var_13 += (((arr_0 [17] [17]) || (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = 295145568;
                    arr_12 [i_0] [i_1] [i_0] = 17500;
                    var_14 -= 246501549;
                }
            }
        }
        var_15 &= -4294967295;
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_22 [i_5] [i_5] &= (-(arr_13 [i_5]));
                    var_16 = (max(var_16, (~0)));
                    var_17 = (min(var_17, ((min(((~(max(48048, var_3)))), (417426968 || 11889217965100343374))))));
                    var_18 = (5341572943305758449 - var_0);
                    var_19 = (max(var_19, (arr_17 [7] [i_4] [1])));
                }
            }
        }
        var_20 = (max((~-417426968), (max(var_10, -417426968))));
        var_21 *= (((((arr_5 [i_3 + 1]) * (arr_5 [i_3 - 1]))) + ((min((arr_5 [i_3 + 1]), var_9)))));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_33 [i_8] [i_7] [i_3] = -812751685;
                        var_22 *= ((!(arr_26 [i_3] [i_3 - 2] [i_7] [i_7])));
                        arr_34 [i_3] = (arr_26 [i_3 + 1] [i_6] [i_7] [i_8]);
                        var_23 &= ((!(~12)));
                        arr_35 [i_3] [i_6] [i_7] [i_8] = ((!(arr_14 [i_3])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    {
                        var_24 = ((26479834 + (arr_20 [i_9] [i_6] [i_9] [i_9 - 1])));
                        var_25 = (arr_20 [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]);
                        var_26 = (max(var_26, ((((arr_25 [i_3] [i_6] [i_6]) & -417426992)))));
                        var_27 -= ((((((arr_1 [i_3 - 2] [i_6]) ? (arr_1 [1] [i_6]) : (arr_1 [i_9] [3])))) ? (~-4196639895) : (4141883879 - 14680064)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            {
                var_28 = (min(var_28, 67104768));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_29 = 1880943426;
                            arr_51 [i_14] = ((max((arr_2 [i_11]), (arr_2 [i_14]))));
                        }
                    }
                }
                var_30 = ((((~(arr_1 [i_11 - 3] [i_11 - 2]))) <= (min(((min((arr_43 [i_11]), (arr_0 [i_11] [i_12])))), (((arr_6 [i_12] [i_11] [i_11]) + (arr_1 [i_12] [i_12])))))));
            }
        }
    }
    var_31 *= (((!2767981784) * (32853 == 17500)));

    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                {
                    var_32 ^= ((((arr_5 [i_16]) % (min(2767981767, var_7)))));
                    arr_60 [i_17] [i_16] [i_15] = (min(((((((-812751676 ? 31 : 3297374825))) || (((arr_1 [i_15] [i_15]) && 4294967295))))), (max(8187237969198506005, (((0 <= (arr_0 [i_15] [13]))))))));
                }
            }
        }
        arr_61 [i_15] = (!30373);
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 11;i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 10;i_20 += 1)
            {
                {
                    var_33 ^= (arr_58 [i_20 + 3] [i_19] [i_18 + 2] [i_18]);
                    var_34 = ((~(arr_45 [i_18] [i_18] [i_18 + 1])));

                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        var_35 = (min(var_35, (+-1880943426)));
                        arr_74 [i_19] [i_19] [i_19] [i_19] = (arr_47 [i_18] [i_18]);
                    }

                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        var_36 = 153083417;
                        var_37 = (min(var_37, 790099890));

                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            var_38 = var_0;
                            var_39 = 127;
                            arr_80 [i_18] [i_19] [i_20] [i_23] = ((30363 ? 42582098 : 153083414));
                        }
                        var_40 = (((arr_78 [i_19] [i_20 + 3] [i_18 - 1] [i_19]) + (arr_78 [i_19] [i_20 + 3] [i_18 + 1] [i_19])));
                    }
                    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                    {

                        for (int i_25 = 3; i_25 < 13;i_25 += 1)
                        {
                            arr_87 [i_18] [i_20] [i_20] &= (!98327378);
                            var_41 ^= (30363 && 1880943404);
                        }
                        arr_88 [i_20] &= ((!(arr_7 [i_18 - 1])));
                    }
                }
            }
        }
        arr_89 [i_18] = (((3885113808 || var_9) + 0));
    }
    for (int i_26 = 1; i_26 < 11;i_26 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 14;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 14;i_28 += 1)
            {
                for (int i_29 = 2; i_29 < 11;i_29 += 1)
                {
                    {
                        var_42 = (min(var_42, (((((arr_2 [i_26 - 1]) <= (arr_58 [i_29] [i_28] [i_27] [i_26])))))));
                        arr_101 [i_26] [i_27] [i_28] [i_27] [i_29] = (594985455 << (1880943428 - 1880943403));
                        var_43 = (arr_10 [i_26] [i_26] [i_26]);
                        arr_102 [i_26] [i_26] [i_26] [7] = ((1 >> ((9065910182544286073 >> (!var_6)))));
                    }
                }
            }
        }
        var_44 = (min(var_44, 9065910182544286087));
    }
    #pragma endscop
}
