/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = -40794;
                                var_12 = (i_0 % 2 == 0) ? ((min(((((arr_5 [i_3] [i_0] [i_3 - 1]) << (((arr_5 [17] [i_0] [i_1]) - 253))))), (max((arr_1 [i_0]), ((39 ? var_5 : 54444))))))) : ((min(((((arr_5 [i_3] [i_0] [i_3 - 1]) << (((((arr_5 [17] [i_0] [i_1]) - 253)) + 234))))), (max((arr_1 [i_0]), ((39 ? var_5 : 54444)))))));
                                var_13 = (max(var_13, ((max((((arr_7 [i_1] [2] [i_3 + 4] [i_4]) | (arr_10 [i_3] [i_4] [i_3] [8] [i_3 + 2]))), (((var_8 < (arr_6 [i_4 + 1] [i_3 + 3] [7] [i_0])))))))));
                                arr_12 [i_4] [21] [i_0] [i_3] [i_0] = var_3;
                            }
                        }
                    }
                    var_14 = (max(var_14, var_4));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 3; i_9 < 21;i_9 += 1)
                            {
                                var_15 = (((11092 + var_10) + (var_9 | 11074)));
                                var_16 |= (((arr_2 [i_5]) ^ (arr_2 [i_8])));
                            }
                            var_17 = (arr_3 [i_6]);

                            for (int i_10 = 0; i_10 < 22;i_10 += 1)
                            {
                                arr_31 [i_5] [6] [i_7] [i_8] = 168;
                                arr_32 [i_10] [i_8] [i_7 + 4] [21] [i_5] = (((var_3 ? (arr_21 [i_5] [i_6] [i_7 - 1] [i_8]) : (arr_21 [i_5] [17] [i_7 + 1] [i_8]))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 22;i_11 += 1)
                            {
                                arr_35 [i_11] [i_8] [i_7 + 4] [i_7] [17] [21] [i_5] = ((-((-(arr_30 [i_5] [i_5] [2] [8] [i_5] [i_5])))));
                                arr_36 [i_5] [10] [10] [i_5] [2] [0] [12] = 10307107938384120688;
                                arr_37 [i_5] [i_5] [i_5] [15] [i_5] = (((24729 ^ 2111849999) > (((~(arr_8 [i_6] [i_6]))))));
                                arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 31277;
                                var_18 = arr_15 [13] [i_7];
                            }
                            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                            {
                                arr_41 [i_7 + 3] [i_7] = (-2147483647 - 1);
                                var_19 ^= var_7;
                                arr_42 [19] [19] [i_7] [19] [i_12] |= ((!(31500 != 18446744073709551609)));
                            }
                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                            {
                                var_20 = ((((~(arr_8 [i_6] [i_6]))) | (arr_21 [i_13] [i_8] [i_6] [i_5])));
                                var_21 = ((var_5 & (arr_3 [i_6])));
                                var_22 = (!18799);
                            }
                            var_23 ^= var_2;
                        }
                    }
                }
                arr_46 [i_5] [i_6] [i_5] = var_9;
                var_24 = (arr_2 [i_5]);

                for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    arr_49 [17] [i_6] [i_14 + 1] |= (max(((max(2111850003, (arr_43 [i_5] [i_5] [i_5] [i_5] [i_14 + 1] [i_14 - 1] [i_5])))), (arr_33 [i_5] [i_6] [i_5] [i_14] [i_14 + 1])));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((max((((~11080) ? 18446744073709551615 : 22176)), (~var_9))))));
                                var_26 += (((arr_43 [i_16 - 2] [i_15 - 1] [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_14]) << (((min(var_9, var_10)) - 7535))));
                            }
                        }
                    }
                    var_27 = (max((((((((arr_44 [i_5]) != var_10))) < var_10))), (arr_48 [5] [i_14 + 1] [16] [16])));
                    arr_55 [i_6] [i_6] [2] = ((((var_8 == (arr_20 [i_14 - 1]))) ? var_6 : (((max((arr_24 [i_14] [i_5]), var_2)) << ((((12435068951910733892 + (arr_2 [i_6]))) - 5726329404975848385))))));
                }
                for (int i_17 = 1; i_17 < 21;i_17 += 1) /* same iter space */
                {
                    var_28 = (min(var_28, ((min(var_3, ((max((arr_0 [i_6] [i_17]), var_10))))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_29 = (min(var_29, -530612288938098837));
                                var_30 = (((var_0 % (arr_58 [i_17 - 1] [i_17] [21] [i_6]))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        var_31 += (max((min((arr_65 [i_20] [i_20]), (min(-30964, 18446744073709551615)))), ((((((var_5 ? var_5 : var_0))) || var_9)))));
        /* LoopNest 3 */
        for (int i_21 = 2; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {
                    {
                        arr_74 [i_20] |= (max((arr_69 [i_21] [i_22 - 2] [i_22 + 2] [i_22 + 2]), (max(var_3, var_5))));
                        var_32 ^= (((arr_70 [i_21 + 1] [i_21] [i_23]) / (min(-530612288938098837, 2111849999))));
                    }
                }
            }
        }
        var_33 = (((var_9 >> (var_9 - 2245392602030447775))) < (arr_70 [i_20] [11] [5]));
        /* LoopNest 3 */
        for (int i_24 = 3; i_24 < 22;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    {
                        var_34 = (!11092);
                        var_35 = 1;
                        arr_83 [i_25] = var_10;
                        var_36 |= (arr_80 [i_20] [i_24 - 3] [12] [i_26]);
                    }
                }
            }
        }
        var_37 = (max(var_37, (((!((max((arr_66 [i_20] [i_20] [i_20]), (arr_66 [i_20] [3] [i_20])))))))));
    }
    for (int i_27 = 0; i_27 < 21;i_27 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_28 = 1; i_28 < 19;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 21;i_29 += 1)
            {
                {
                    var_38 = var_5;
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 21;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 21;i_31 += 1)
                        {
                            {
                                var_39 = (max(var_39, (arr_44 [i_27])));
                                var_40 = ((max(549, 2111850003)));
                                arr_98 [i_27] [i_28] [i_27] = (max((((min(11074, -80523726)))), (min(65519, (arr_80 [i_29] [i_28 + 1] [i_29] [i_27])))));
                            }
                        }
                    }
                    var_41 -= (arr_66 [i_28 - 1] [i_28] [i_28]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 21;i_32 += 1)
        {
            for (int i_33 = 2; i_33 < 19;i_33 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_34 = 1; i_34 < 17;i_34 += 1)
                    {
                        var_42 = (var_6 || var_2);
                        var_43 += var_0;
                        arr_105 [i_27] [i_27] [i_33] [i_33] [i_33] = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_35 = 1; i_35 < 19;i_35 += 1)
                    {
                        for (int i_36 = 0; i_36 < 21;i_36 += 1)
                        {
                            {
                                var_44 -= (max(((((max((arr_91 [i_36]), var_5))) ? (((var_0 == (arr_103 [i_27] [i_32])))) : ((min(var_6, (arr_68 [i_27] [i_32])))))), ((((arr_106 [i_33]) == ((~(arr_90 [i_32] [2] [17]))))))));
                                var_45 = ((-((var_4 ? (arr_96 [i_32] [i_32] [i_33 + 2] [i_33 + 2] [i_33 + 2] [i_27] [i_35 + 2]) : (((-(arr_11 [i_27] [i_27]))))))));
                            }
                        }
                    }

                    for (int i_37 = 3; i_37 < 20;i_37 += 1)
                    {
                        arr_114 [i_27] [12] [i_27] [i_37] = (var_9 ^ var_1);
                        var_46 = (max(930410288, 0));
                        var_47 = ((~((max((((var_1 || (arr_89 [i_27] [14] [i_27])))), var_9)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_38 = 0; i_38 < 21;i_38 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_39 = 1; i_39 < 1;i_39 += 1)
        {
            for (int i_40 = 1; i_40 < 19;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 21;i_41 += 1)
                {
                    {
                        var_48 = (arr_54 [i_40 - 1] [16] [i_41] [i_41] [i_38] [10]);
                        arr_127 [i_38] [1] [i_38] [i_41] = var_5;
                    }
                }
            }
        }
        var_49 = (min(var_49, var_1));
        var_50 = (max(var_50, (arr_110 [i_38] [i_38] [i_38])));
    }
    #pragma endscop
}
