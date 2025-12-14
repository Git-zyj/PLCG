/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_14 = ((((((((arr_5 [i_0] [i_0 + 1] [i_0]) ? var_1 : var_11))) ? var_5 : 0)) << (((((arr_4 [i_0]) ? var_11 : ((~(arr_5 [i_0] [i_1] [i_2]))))) - 585335865))));
                    var_15 *= (((0 ? -1715200850 : 11)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 ^= 6;
                                var_17 |= (((arr_7 [i_1 - 1] [i_1] [i_2]) * (max((arr_12 [i_0 - 1] [i_1 - 1] [i_4] [i_4] [i_4]), ((min(var_5, 11)))))));
                                var_18 += (arr_5 [i_0 + 2] [i_2] [i_2]);
                                var_19 = ((1137012815 ? (min(8145732656965182101, -113)) : (((((min((arr_0 [i_0 + 1]), var_12))) ? (arr_2 [i_0] [i_3] [i_0 + 2]) : var_13)))));
                                var_20 *= (((max(var_9, var_9)) ? (arr_3 [1] [1] [i_1]) : (((((var_13 << (((((arr_2 [i_2] [i_3] [i_3]) + 354233031)) - 16))))) ? (((arr_12 [i_0 + 3] [i_1 + 1] [i_2] [i_2] [i_2]) ? var_12 : (arr_6 [i_0 + 1] [i_2] [i_2] [i_0 + 1]))) : var_8))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_21 ^= (-((-2098034055 ? (min(0, (arr_11 [i_0] [i_0] [i_0 - 2]))) : -249)));
                                var_22 *= var_3;
                                var_23 = ((((((-113 / var_6) ? -var_8 : ((var_2 ? var_8 : var_8))))) ? (((arr_11 [i_1 + 2] [i_5 + 1] [i_7 + 1]) ? ((var_1 << (((var_3 + 258574900) - 31)))) : var_12)) : ((((arr_10 [i_0] [i_0 + 1] [i_1 - 1] [i_6] [i_7 - 1]) && (arr_6 [i_1] [i_0] [i_0] [i_7 - 1]))))));
                                var_24 = ((((max((arr_3 [i_0 + 1] [i_1 - 1] [i_7 + 1]), -1868871334))) ? ((~(arr_19 [1] [i_5 - 2] [i_0 - 2] [i_0 + 2]))) : (((((arr_6 [i_0 - 2] [10] [i_5 - 2] [i_1]) > (arr_3 [i_0 + 2] [i_1 + 1] [i_7 + 1])))))));
                                var_25 = (((((arr_16 [i_0] [i_5 + 1] [i_7 - 1]) ^ var_0))) ? ((((1958734023 || (arr_2 [i_0] [i_0] [i_7]))) ? (arr_16 [i_0] [i_1] [i_5]) : var_0)) : ((var_9 ? (~var_5) : var_10)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_26 = var_13;
        var_27 = (max(var_2, (((var_6 | -897427677) ? ((min(var_7, 121))) : (arr_20 [i_8] [i_8] [i_8])))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_28 = var_6;
            var_29 = -var_1;
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            arr_31 [i_8] [i_8] = 249;
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    {
                        var_30 = var_7;
                        var_31 = ((var_5 << (arr_14 [i_10 - 1] [i_10 - 1] [i_10 + 1])));
                        var_32 = ((var_13 ? -4015 : -2098034049));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        var_33 = ((-907790926 ? (-127 - 1) : -122));
                        var_34 = (arr_12 [i_10 + 2] [i_10] [i_13 - 1] [i_13 - 1] [i_14]);
                        var_35 ^= (arr_19 [i_8] [i_10 - 2] [12] [12]);
                        var_36 = var_9;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_37 = ((-((var_1 ? var_10 : var_9))));
            var_38 = (((var_5 ? var_8 : 17887590307919424473)));
            var_39 = (arr_18 [i_8] [1] [i_15]);
        }

        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            var_40 = (~var_10);
            var_41 = 3;
            var_42 = (max(((min(559153765790127147, (arr_23 [i_8])))), (min(var_8, 500886267892839216))));
            var_43 = (min((min((arr_4 [i_8]), (arr_30 [i_16 - 2] [i_16 - 1] [i_16 - 2]))), 32));
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_44 = (min(17945857805816712399, var_10));
                        var_45 = (min(var_7, (max((((arr_10 [i_16 - 2] [i_17] [i_16 - 2] [i_16] [i_8]) / var_12)), var_12))));
                        var_46 = var_13;
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_47 = ((!-121) ? (var_2 | var_11) : 6359746152238075692);
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 10;i_22 += 1)
                    {
                        {
                            var_48 = ((var_6 && (((var_10 ? -120 : 1623495722)))));
                            var_49 = var_6;
                            arr_68 [i_8] [i_21 - 1] [i_20] [6] [i_8] [i_8] [i_8] = ((var_10 ? (arr_49 [i_21 + 2] [12] [i_22 - 2]) : (arr_49 [i_21 - 1] [i_21 - 1] [i_22 - 2])));
                            var_50 = (arr_14 [i_8] [i_8] [i_8]);
                        }
                    }
                }
            }

            for (int i_23 = 2; i_23 < 13;i_23 += 1)
            {
                var_51 = (~65535);
                var_52 = ((((48 - (((var_7 ? var_9 : var_11)))))) ? (((~2229517832) ? (((arr_32 [i_8]) ? (arr_58 [i_8] [i_8] [i_23 - 1]) : var_13)) : var_13)) : (arr_36 [i_23] [i_19] [i_19] [i_8]));
                var_53 = (arr_69 [i_23 - 1] [i_23] [i_23 + 1] [i_23]);
            }
            arr_71 [i_8] = ((~((var_12 ? var_0 : var_13))));
        }
        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {
            var_54 = -907790926;
            var_55 = var_2;
        }
    }
    var_56 = (max((!var_13), (min(((10248817203949055005 ? var_7 : var_1)), ((min(var_9, 0)))))));
    var_57 |= ((((((818496542 ? var_2 : var_8)))) ? (68 / 559153765790127163) : ((min(var_0, (min(68, 1015808)))))));
    #pragma endscop
}
