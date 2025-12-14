/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = 1;
            var_13 = 1;
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] [i_0] [i_2] = 1;
            var_14 = 192;
            var_15 = 1;
            arr_10 [i_0] [i_2] [i_0] = 1;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 = 1;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 = 1;
                            arr_22 [i_0] [i_0] [i_6] [i_6] [i_6] [i_6] [i_3] = 1;
                            var_18 ^= 1;
                        }
                        var_19 = (max(var_19, 195));
                        var_20 = (min(var_20, 1));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        var_21 = 197;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_31 [i_9] [i_9] = 1;
                            var_22 = 0;
                        }
                    }
                }
            }
            arr_32 [i_0] [i_3] [i_3] = 1;
        }
        arr_33 [1] = 212;

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_23 |= 80;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            var_24 = 1;
                            var_25 *= 1;
                            var_26 = (max(var_26, 1));
                        }
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            var_27 = 223;
                            var_28 = 1;
                            arr_47 [8] [i_11] [i_11] [i_11] = 172;
                        }
                        arr_48 [i_11] [i_11] [6] [i_11] = 1;
                        var_29 = 165;
                        arr_49 [i_11] [i_11] [i_11] [i_12] = 79;
                        var_30 ^= 1;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_56 [i_0] [i_10] [i_10] [i_15] [1] = 182;
                        var_31 *= 114;
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
    {
        var_32 ^= 32;
        var_33 = 16;
        var_34 -= 1;
    }
    var_35 = (max(var_35, 185));
    var_36 = 1;
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 1;i_19 += 1)
        {
            {

                for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
                {
                    var_37 *= 10;
                    arr_65 [1] |= 224;

                    for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
                    {
                        var_38 = 127;
                        arr_70 [1] [i_18] = 1;
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
                    {
                        var_39 = (max(var_39, 208));
                        arr_73 [i_18] [i_19] [i_20 - 1] [i_22] = 1;
                        arr_74 [i_19] [i_18] = 165;
                    }
                    for (int i_23 = 0; i_23 < 22;i_23 += 1) /* same iter space */
                    {
                        arr_78 [i_19 - 1] [i_18] [i_18] [i_23] = 13;
                        var_40 = (max(var_40, 219));
                    }
                    for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
                    {
                        arr_81 [i_18] [i_18] [i_18] = 53;
                        var_41 |= 9;
                        var_42 = 0;
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 1; i_25 < 1;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            {
                                var_43 = 1;
                                var_44 = 131;
                                var_45 = (max(var_45, 37));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 0;i_28 += 1)
                        {
                            {
                                var_46 *= 111;
                                var_47 ^= 141;
                            }
                        }
                    }
                }
                for (int i_29 = 1; i_29 < 21;i_29 += 1) /* same iter space */
                {
                    arr_95 [i_18] [i_18] = 1;

                    /* vectorizable */
                    for (int i_30 = 3; i_30 < 21;i_30 += 1)
                    {

                        for (int i_31 = 1; i_31 < 1;i_31 += 1)
                        {
                            var_48 = (min(var_48, 58));
                            arr_101 [17] [i_30] [i_18] [i_19 - 1] [19] = 1;
                            var_49 = 0;
                        }
                        for (int i_32 = 0; i_32 < 22;i_32 += 1)
                        {
                            arr_105 [i_30] [i_19] [i_29] [i_30] [i_18] [i_18] = 37;
                            var_50 = 219;
                            arr_106 [i_18] [i_18] [i_18] = 1;
                        }
                        for (int i_33 = 0; i_33 < 1;i_33 += 1) /* same iter space */
                        {
                            arr_110 [i_18] = 22;
                            var_51 = (max(var_51, 1));
                            var_52 = 1;
                            var_53 = 29;
                        }
                        for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
                        {
                            var_54 ^= 1;
                            arr_113 [13] [13] [i_18] [i_30] [i_30] = 53;
                            arr_114 [i_18] [i_18] [1] [i_29 - 1] [i_30] [18] [i_18] = 32;
                        }
                        var_55 = 3;
                    }
                    for (int i_35 = 0; i_35 < 22;i_35 += 1)
                    {
                        var_56 -= 51;
                        var_57 = 1;
                    }
                    var_58 ^= 1;
                }
                for (int i_36 = 1; i_36 < 21;i_36 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_37 = 0; i_37 < 22;i_37 += 1)
                    {
                        for (int i_38 = 0; i_38 < 22;i_38 += 1)
                        {
                            {
                                var_59 -= 1;
                                var_60 = (max(var_60, 1));
                                arr_129 [i_18] [i_19] [i_18] = 1;
                                var_61 = (max(var_61, 141));
                                var_62 = 1;
                            }
                        }
                    }
                    var_63 = 1;
                }
                for (int i_39 = 1; i_39 < 21;i_39 += 1) /* same iter space */
                {

                    for (int i_40 = 0; i_40 < 1;i_40 += 1)
                    {
                        arr_136 [i_18] [i_19 - 1] [0] [0] [i_18] [1] |= 154;
                        var_64 = 1;
                    }
                    for (int i_41 = 3; i_41 < 20;i_41 += 1)
                    {
                        var_65 = 1;
                        var_66 ^= 51;
                        arr_139 [i_18] = 1;
                    }
                    for (int i_42 = 1; i_42 < 21;i_42 += 1)
                    {
                        var_67 = 1;
                        var_68 = (max(var_68, 156));
                    }
                    for (int i_43 = 0; i_43 < 1;i_43 += 1)
                    {
                        arr_147 [i_43] [i_19] [i_18] [i_18] = 1;
                        var_69 = 242;

                        for (int i_44 = 0; i_44 < 1;i_44 += 1)
                        {
                            var_70 = 1;
                            var_71 = (max(var_71, 15));
                            var_72 = (max(var_72, 41));
                            var_73 |= 208;
                            var_74 = 241;
                        }
                    }
                    var_75 = (max(var_75, 232));
                }
                var_76 |= 23;
                var_77 = 0;
            }
        }
    }
    #pragma endscop
}
