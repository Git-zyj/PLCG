/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1860943450;
    var_19 = 656389283;
    var_20 = 0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_21 += 3;
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = -14872;
                        }
                    }
                }
            }
            arr_15 [i_0] = 16;
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = -13525;
            arr_20 [10] [i_0] = -8192;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    {
                        var_22 = (min(var_22, 74));
                        arr_26 [i_0] [i_0] [16] = 133;
                        arr_27 [i_0] [i_0] [i_6] = 8;
                        arr_28 [i_0] [i_6] [i_5] [i_0] = -13513;
                        var_23 = -33;
                    }
                }
            }
            var_24 = -28839;
        }
        arr_29 [i_0] [i_0] = 234;
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_0] = 905377289;
                                arr_41 [i_0] = 4294967295;
                            }
                        }
                    }
                    arr_42 [i_0] [i_0] [i_0] [4] = 123;

                    for (int i_12 = 4; i_12 < 22;i_12 += 1)
                    {
                        arr_46 [i_0] [i_8] [i_9] [i_9] [i_12] = -15590;
                        var_25 ^= 119;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                {
                    var_26 *= 25961;

                    for (int i_15 = 2; i_15 < 21;i_15 += 1) /* same iter space */
                    {
                        var_27 = 43;
                        arr_54 [i_0 - 2] [i_13] [12] [i_0] = 47565;
                    }
                    for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        arr_59 [i_0] [i_0] [22] = 47565;
                        var_28 = (max(var_28, 16));
                        arr_60 [i_0] [i_14] [i_0] = 17945;
                        arr_61 [i_0] [i_13] [i_14 + 2] [i_16] = 17461816334075440966;
                    }
                    for (int i_17 = 4; i_17 < 21;i_17 += 1)
                    {
                        arr_64 [i_14] [18] [18] [i_14] [i_0] [i_14] = 14336;
                        arr_65 [i_0] [i_0] = 22513;

                        for (int i_18 = 4; i_18 < 23;i_18 += 1)
                        {
                            var_29 = 1989899410;
                            arr_68 [i_0] [i_13] [3] [i_17 - 1] [i_18 - 3] = 0;
                            var_30 = 2305067892;
                            var_31 = -36;
                        }
                        for (int i_19 = 4; i_19 < 23;i_19 += 1)
                        {
                            var_32 += 14356;
                            arr_71 [i_14] [i_0] [i_0] = 211;
                        }
                        arr_72 [i_0 - 3] [10] [i_13] [i_0] [i_17] [i_17] = 11326988555613444978;
                    }
                    arr_73 [i_0] [i_0] [i_14] = 53363;
                    arr_74 [i_0] [i_13] [i_0] = 14364;
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 21;i_21 += 1)
                        {
                            {
                                arr_81 [i_0] [i_0] = 2305067886;
                                arr_82 [i_21] [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 3; i_22 < 22;i_22 += 1) /* same iter space */
    {
        var_33 = (max(var_33, 52658));
        arr_86 [i_22] [i_22] = -400157933;
        arr_87 [i_22] = 65526;
        arr_88 [i_22] = -4798615278837686186;
        arr_89 [i_22] = 1;
    }
    for (int i_23 = 3; i_23 < 22;i_23 += 1) /* same iter space */
    {
        var_34 -= 200;
        arr_92 [i_23] = -1465511911;
        arr_93 [i_23] = 46;

        /* vectorizable */
        for (int i_24 = 1; i_24 < 20;i_24 += 1)
        {

            for (int i_25 = 1; i_25 < 21;i_25 += 1)
            {
                /* LoopNest 2 */
                for (int i_26 = 3; i_26 < 22;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 1;i_27 += 1)
                    {
                        {
                            var_35 += 1;
                            arr_105 [i_27] [i_23] [20] [6] [i_25] [i_23] [i_23 - 2] = 213;
                            arr_106 [i_23] [i_26 - 1] [i_25] [i_24] [i_23] = 30;
                            arr_107 [i_27] [i_26] [i_23] [i_24] [i_23] [12] [i_23] = 3;
                        }
                    }
                }
                var_36 *= 8028381625448280252;
                arr_108 [4] [i_23] [i_23] [i_23 - 1] = -1653904880130194865;
            }
            for (int i_28 = 3; i_28 < 22;i_28 += 1)
            {
                arr_112 [i_23] [i_23] [i_28] = 11556;
                arr_113 [i_23] [16] [i_23] [4] = 4294952940;
                /* LoopNest 2 */
                for (int i_29 = 1; i_29 < 23;i_29 += 1)
                {
                    for (int i_30 = 2; i_30 < 23;i_30 += 1)
                    {
                        {
                            arr_118 [i_23] [3] [i_23] [i_28] [i_29] [18] [2] = 1;
                            arr_119 [i_23] [i_23] = 1306392119;
                        }
                    }
                }
            }
            var_37 = 46;
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                for (int i_32 = 4; i_32 < 22;i_32 += 1)
                {
                    {
                        var_38 *= 1;
                        arr_127 [i_23] [i_24] [i_31] [i_23] = -77;
                        arr_128 [i_23] [i_31] [i_23] = 4294952939;
                        arr_129 [i_23] [18] = -60;
                    }
                }
            }
        }
        for (int i_33 = 0; i_33 < 0;i_33 += 1)
        {
            arr_132 [i_23] [i_23] = 28672;
            var_39 = -41;
            arr_133 [21] [i_23] = -40;
        }
        for (int i_34 = 3; i_34 < 22;i_34 += 1)
        {
            arr_136 [i_23] [i_23] = 32;
            arr_137 [i_23] [i_23] = 0;
            /* LoopNest 2 */
            for (int i_35 = 1; i_35 < 21;i_35 += 1)
            {
                for (int i_36 = 2; i_36 < 23;i_36 += 1)
                {
                    {
                        var_40 = (min(var_40, 3573704750));
                        var_41 = -172498694;
                        var_42 -= 36;
                        arr_145 [i_23] [i_35] = 52658;

                        /* vectorizable */
                        for (int i_37 = 2; i_37 < 23;i_37 += 1)
                        {
                            arr_148 [i_34] [i_23] [i_35] [i_35] [i_34] [i_23] [i_23] = 3162846004711513549;
                            var_43 = (max(var_43, 303467196330464580));
                        }
                    }
                }
            }
            var_44 = 3758942936;
            arr_149 [i_23] = 9620123781318847667;
        }
        arr_150 [i_23] = 676504712;
    }
    /* LoopNest 3 */
    for (int i_38 = 3; i_38 < 12;i_38 += 1)
    {
        for (int i_39 = 1; i_39 < 11;i_39 += 1)
        {
            for (int i_40 = 1; i_40 < 12;i_40 += 1)
            {
                {

                    for (int i_41 = 3; i_41 < 10;i_41 += 1)
                    {

                        for (int i_42 = 1; i_42 < 10;i_42 += 1)
                        {
                            var_45 = 128;
                            var_46 = (max(var_46, 52650));
                        }
                        for (int i_43 = 4; i_43 < 12;i_43 += 1)
                        {
                            arr_169 [4] [4] [i_40 + 1] [i_38] [i_43] = 0;
                            arr_170 [i_38 - 3] [i_38] [1] [i_40] [1] [i_41] [i_38] = 26;
                        }
                        arr_171 [i_38] [i_38] [i_40] [i_41 - 1] = 19;
                    }

                    /* vectorizable */
                    for (int i_44 = 1; i_44 < 10;i_44 += 1) /* same iter space */
                    {
                        var_47 = 647039800;
                        arr_174 [0] [i_38] = 0;
                        arr_175 [i_38] [i_38] = -10668;
                        var_48 = 1;
                        var_49 = (min(var_49, 64));
                    }
                    /* vectorizable */
                    for (int i_45 = 1; i_45 < 10;i_45 += 1) /* same iter space */
                    {
                        var_50 = -27819;
                        var_51 = (min(var_51, 2147483631));
                    }
                }
            }
        }
    }
    #pragma endscop
}
