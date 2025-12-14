/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_11 [i_2] [i_2] [i_1] [i_0] = (max((min((arr_9 [i_0] [i_1]), -20300)), (((!(arr_6 [i_1]))))));
                    var_20 = (min(var_20, (((((max(var_16, (((var_3 ? var_12 : var_6)))))) ? ((22911 ? (1526426266 / var_12) : 1)) : (arr_8 [i_0] [i_2]))))));
                }
                var_21 = (arr_9 [i_0] [i_1]);
                arr_12 [i_0] [i_1] = ((var_1 - (max((arr_2 [i_0]), var_14))));
                var_22 = 0;
                var_23 = var_17;
            }
        }
    }
    var_24 ^= var_0;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_20 [i_4] [i_4] [i_4] [i_5] = (((((-794264161 ? 1858897372 : -1858897379))) ? 10664 : 184));
                    var_25 ^= 0;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_24 [i_6] [i_4] [i_4] [i_3] = (max((((((max((arr_22 [i_6]), (arr_18 [i_6] [i_4] [i_3])))) ? 29957 : (!var_7)))), (((var_1 / var_16) ? (arr_17 [i_3]) : var_14))));
                    var_26 |= ((((((arr_15 [i_3] [i_6]) ? (arr_15 [i_3] [i_4]) : (arr_15 [i_3] [i_4])))) ? ((((arr_15 [i_4] [i_6]) & var_10))) : (((arr_15 [i_3] [i_4]) ? (arr_15 [i_3] [i_3]) : var_16))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_29 [i_4] [i_4] [i_4] = (((max(-1858897387, var_14))) != (arr_13 [i_3]));
                    arr_30 [i_7] |= (arr_22 [i_7]);
                    var_27 = (((arr_18 [i_7] [i_4] [i_7]) << 0));
                    var_28 += var_10;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_33 [i_4] = ((var_18 ? (arr_32 [i_3] [i_4] [i_8] [i_8]) : 2234207627640832));
                    var_29 = (min(var_29, ((((arr_18 [i_3] [i_4] [i_8]) ? (arr_21 [i_8] [i_4] [i_3] [i_8]) : (arr_28 [i_3] [i_4]))))));
                    arr_34 [i_3] [i_3] [i_4] [i_3] = arr_27 [i_3] [i_3] [i_3] [i_3];
                    var_30 = var_10;
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_42 [i_10] [i_4] = (((max((arr_28 [i_3] [i_4]), var_16)) / (max((arr_13 [i_3]), (arr_21 [i_4] [i_4] [i_9] [i_10])))));
                                var_31 &= var_5;
                                arr_43 [i_3] [i_4] [i_9] [i_9] [i_10] [i_10] [i_4] = (max((arr_23 [i_4]), 28468538));
                                var_32 = ((~(arr_37 [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
        {
            arr_49 [i_12] [i_12] [i_13] = -1;
            var_33 = var_1;
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 2; i_15 < 24;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    var_34 ^= var_1;

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_35 = (max(var_35, (((((-29 + (arr_53 [i_17] [i_15])))) ? var_10 : (arr_50 [i_14] [i_15])))));
                        var_36 = (min(var_36, (arr_45 [i_15 - 1])));
                        var_37 = (max(var_37, ((((0 ? var_9 : var_3))))));
                        var_38 = ((!(((var_3 ? var_1 : 5200510964959067305)))));
                        var_39 = ((var_0 << ((((~(arr_59 [i_12] [i_14] [i_15] [i_16] [i_16] [i_17]))) + 39))));
                    }
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        arr_62 [i_12] [i_14] [i_15] [i_16] [i_12] = ((var_8 + (0 > var_16)));
                        var_40 ^= var_10;
                        var_41 = 134217728;
                    }
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        arr_65 [i_12] [i_14] [i_15] [i_16] [i_19] = (!var_14);
                        arr_66 [i_19] [i_19] [i_16] [i_12] [i_15] [i_14] [i_12] = (arr_52 [i_12] [i_16]);
                    }
                    var_42 = (((28752 > 1) ? var_10 : (((arr_51 [i_12] [i_12]) * var_8))));
                }
                for (int i_20 = 3; i_20 < 23;i_20 += 1)
                {
                    arr_70 [i_20] [i_12] [i_15] [i_14] [i_12] [i_12] = (((arr_61 [i_20 - 3] [i_20] [i_20] [i_20] [i_20]) % (arr_55 [i_20 - 3] [i_20] [i_20] [i_20])));

                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        arr_73 [i_12] [i_14] [i_15] [i_20] [i_21] = (((arr_55 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 2]) - var_16));
                        var_43 = ((var_8 ? ((3072 ? (arr_60 [i_21] [i_20] [i_14] [i_12]) : 2917713415355996848)) : var_5));
                        var_44 = (max(var_44, (((-((var_4 ? var_16 : var_1)))))));
                    }
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        var_45 = (min(var_45, (((var_1 ? (arr_59 [i_12] [i_15] [i_15] [i_15 - 1] [i_20 - 2] [i_20]) : var_15)))));
                        var_46 = (var_4 <= var_6);
                    }
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        var_47 = ((-1858897379 + (arr_64 [i_20 + 1] [i_20 - 3] [i_15] [i_15 + 1] [i_14])));
                        arr_79 [i_12] [i_14] [i_12] [i_20] [i_23] = ((((((arr_64 [i_20] [i_20] [i_20] [i_20] [i_20]) ? var_15 : (arr_44 [i_20])))) >= var_16));
                    }
                    for (int i_24 = 0; i_24 < 25;i_24 += 1)
                    {
                        arr_84 [i_12] [i_14] [i_12] [i_15] [i_24] [i_20] = (arr_74 [i_12] [i_15] [i_14] [i_12]);
                        arr_85 [i_12] [i_14] = (arr_57 [i_15 - 2] [i_15 - 1] [i_20 + 2] [i_24]);
                        var_48 = (((((var_1 + 2147483647) >> (((arr_67 [i_14] [i_20]) - 1225330752)))) != (~var_10)));
                        arr_86 [i_12] [i_15] [i_12] [i_24] = var_15;
                    }

                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        arr_89 [i_12] [i_20] = ((var_14 / (arr_58 [i_12] [i_25] [i_15 - 1])));
                        var_49 = var_7;
                        var_50 = (max(var_50, ((((arr_67 [i_15 + 1] [i_15 + 1]) ? var_14 : (arr_67 [i_15 - 1] [i_15 + 1]))))));
                        arr_90 [i_12] [i_12] = ((-35 ? ((((var_12 < (arr_71 [i_12] [i_14] [i_15] [i_20] [i_15] [i_20] [i_12]))))) : (arr_75 [i_12] [i_14] [i_15] [i_15] [i_25] [i_25])));
                    }
                    var_51 = ((!(arr_56 [i_12] [i_14])));
                }

                for (int i_26 = 0; i_26 < 25;i_26 += 1)
                {
                    var_52 = ((var_12 ? (arr_71 [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15 - 2] [i_15]) : (arr_71 [i_26] [i_15 + 1] [i_15 - 2] [i_15] [i_15] [i_15 + 1] [i_15])));
                    arr_93 [i_12] [i_12] [i_15] [i_26] = (arr_64 [i_12] [i_12] [i_14] [i_15] [i_26]);
                }
                var_53 = (max(var_53, 217));
            }
            for (int i_27 = 2; i_27 < 24;i_27 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 25;i_29 += 1)
                    {
                        {
                            var_54 = ((-((-(arr_51 [i_12] [i_29])))));
                            var_55 = (arr_46 [i_12]);
                            arr_100 [i_12] [i_14] [i_27] [i_27] &= ((var_6 ? var_4 : (arr_46 [i_27 + 1])));
                            arr_101 [i_12] = (((var_17 * var_10) ? (arr_91 [i_12]) : var_8));
                        }
                    }
                }
                arr_102 [i_12] [i_12] = (arr_92 [i_12] [i_14] [i_27 - 2] [i_12]);
            }
            for (int i_30 = 2; i_30 < 24;i_30 += 1) /* same iter space */
            {
                var_56 = (min(var_56, (((-19878 ? -26837 : 61)))));
                var_57 = (1 != 5200510964959067305);
                arr_105 [i_12] [i_14] [i_14] [i_12] = var_16;
                var_58 = var_3;
                var_59 ^= 1;
            }
            var_60 = ((var_15 ? var_5 : (arr_53 [i_12] [i_14])));
            var_61 = (max(var_61, ((((arr_52 [4] [i_14]) ? (arr_55 [i_14] [i_14] [i_14] [i_12]) : (arr_82 [i_12] [i_12] [i_14]))))));
        }
        for (int i_31 = 0; i_31 < 25;i_31 += 1) /* same iter space */
        {
            arr_108 [i_12] = (var_14 != (arr_54 [i_12] [i_31]));
            var_62 = -31353;
            var_63 |= var_0;
        }
        var_64 = (max(var_64, (arr_97 [i_12] [16] [i_12] [i_12] [i_12] [i_12])));
    }
    #pragma endscop
}
