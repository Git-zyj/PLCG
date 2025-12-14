/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -119;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (max(var_16, 1));
        var_17 = 1366922160;
        arr_2 [i_0] = 4294967295;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = 3659447842;
                        var_18 += 1366922167;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_5] [i_5] [i_5] = 4294967295;
            arr_19 [i_4] [i_5] [i_5] = 9223372036854775807;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_22 [i_4] [i_4] [i_5] [i_4] = 3772268343;
                arr_23 [i_4] [i_5] [i_5] [i_5] = -345646145;
            }
            var_19 = 1366922167;
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_26 [i_7] [i_4] = 4294967281;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_20 = 4294967292;
                        var_21 = 1;
                        arr_31 [i_9] = -1366922173;
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_35 [i_10] = 1877595448;
                var_22 = 18446744073709551615;
                arr_36 [i_4] [i_4] [i_10] = 1;
                arr_37 [i_10] [i_7] [i_10] = 127;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_23 = -345646127;
                var_24 |= -4767017676845036737;
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    arr_47 [i_13 - 2] [i_12] [i_7] [i_4] = -7576589780042535910;
                    arr_48 [i_4] [i_4] [i_4] [3] [i_4] [i_4] = 4294967295;

                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        arr_52 [i_4] [i_4] = -92;
                        arr_53 [i_4] [i_12] [i_14] = 45;
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_25 *= 2147483647;
                        var_26 ^= 7576589780042535909;
                    }
                    var_27 = 2047;
                }

                for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                {
                    var_28 = 63488;
                    var_29 = 1;
                }
                for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                {
                    arr_60 [i_12] [12] = 1926225125363006841;
                    arr_61 [i_17] = 1;
                    var_30 = 32767;
                }
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                var_31 = 18517085;
                arr_66 [0] [i_18] = 4294967279;
                var_32 = 32762;
            }

            for (int i_19 = 3; i_19 < 18;i_19 += 1)
            {
                var_33 = 4515517324390144916;
                var_34 = 47545;
                var_35 = -345646145;
                arr_69 [i_4] [i_7] [i_19] = 1;
            }
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        {
                            var_36 = 170;
                            var_37 = (max(var_37, 4515517324390144905));
                            arr_81 [i_4] [i_20] [i_20] [i_21] [i_20] [i_22] [i_23] = 1;
                            var_38 ^= 1;
                        }
                    }
                }
            }

            for (int i_24 = 1; i_24 < 15;i_24 += 1)
            {
                var_39 = 1482526686;

                for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                {
                    arr_86 [i_20] = -21385;
                    var_40 = (min(var_40, -21933));
                    arr_87 [i_4] [i_20] [i_20] [i_4] = 554658727;
                }
                for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
                {
                    var_41 = 345646144;
                    arr_91 [i_20] = 41563;
                }
            }
            for (int i_27 = 0; i_27 < 1;i_27 += 1)
            {
                arr_94 [i_20] [i_20] = 9223372036854775805;
                arr_95 [i_4] [i_20] [i_27] = 345646145;
                arr_96 [i_4] [i_20] = 345646154;
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 19;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        {
                            var_42 = (max(var_42, 0));
                            var_43 = 127;
                        }
                    }
                }
            }
            var_44 = (max(var_44, 894403695));
        }
        arr_101 [i_4] [i_4] = 2269246761;
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 19;i_30 += 1)
        {
            for (int i_31 = 4; i_31 < 16;i_31 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        arr_109 [i_31] [i_4] = 1;
                        var_45 = 4294967285;
                    }

                    for (int i_33 = 0; i_33 < 19;i_33 += 1)
                    {

                        for (int i_34 = 0; i_34 < 19;i_34 += 1) /* same iter space */
                        {
                            var_46 = 345646145;
                            var_47 = 1704432165;
                            var_48 = 65534;
                        }
                        for (int i_35 = 0; i_35 < 19;i_35 += 1) /* same iter space */
                        {
                            arr_117 [i_35] [i_30] [i_31 + 2] [i_30] [1] = 1;
                            var_49 = 1366922167;
                        }
                        arr_118 [i_4] [i_4] = -100;
                    }
                    for (int i_36 = 1; i_36 < 15;i_36 += 1)
                    {
                        var_50 = 345646140;
                        var_51 = (max(var_51, 1));
                    }
                    /* vectorizable */
                    for (int i_37 = 1; i_37 < 18;i_37 += 1)
                    {
                        var_52 *= 65534;
                        var_53 = (max(var_53, -345646145));
                        var_54 = -26;
                    }
                    arr_127 [i_4] [5] [5] &= -2721173476199108989;
                    var_55 = (min(var_55, 12));
                }
            }
        }
    }
    for (int i_38 = 4; i_38 < 22;i_38 += 1)
    {

        for (int i_39 = 0; i_39 < 23;i_39 += 1) /* same iter space */
        {
            var_56 = 39009;
            arr_133 [i_38] = 4767017676845036722;
            var_57 = -345646144;
        }
        for (int i_40 = 0; i_40 < 23;i_40 += 1) /* same iter space */
        {
            var_58 = (max(var_58, 30610));
            var_59 = 4767017676845036742;

            for (int i_41 = 1; i_41 < 22;i_41 += 1)
            {
                arr_139 [i_38] [i_38] [i_38] [i_38] = 94;
                arr_140 [i_38] [i_38] = 1;
            }
            arr_141 [i_40] = 1;
        }
        var_60 = -18;
        arr_142 [i_38] [i_38 - 2] = 127;
        arr_143 [i_38] [i_38 - 1] = 18446744073709551599;
    }
    #pragma endscop
}
