/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = 96;
            var_13 = var_10;
        }

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_2] [i_2] [i_4] = var_10;
                    var_14 = var_9;
                    var_15 = var_1;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_16 = var_0;
                        arr_20 [i_5] [i_4] [i_2] [i_2] [i_2] [i_0] = var_5;
                        arr_21 [i_0] [i_2] [i_3] [i_4] [i_5] [i_5] [16] &= var_7;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_17 = -1488258100;
                        var_18 = var_6;
                        arr_25 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4] [i_6] = var_2;
                    }
                    var_19 = 42050;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, -16576));
                    var_21 = -8746120867567434334;

                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_22 = var_5;
                        var_23 = 8504603979399494402;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_2] [i_9] [i_9] [i_9] = var_0;
                        var_24 = var_9;
                        var_25 += -21765;
                        var_26 = (-127 - 1);
                    }
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_2] [i_3] [i_10] [i_2] [i_0] = var_7;

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, var_10));
                        var_28 = 34;
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_2] [i_0] = 63;
                        var_29 = (min(var_29, var_9));
                    }
                    arr_45 [i_0] [i_2] [i_0] [i_0] [i_0] = var_1;
                }
                var_30 = var_0;

                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    arr_48 [i_2] [i_3] [i_2] [i_2] = 9942140094310057239;

                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_31 = (max(var_31, -1386321301));
                        var_32 = 18936;
                        var_33 = (min(var_33, var_7));
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_34 += 4;
                        var_35 += var_3;
                        var_36 = 224;
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_37 = var_1;
                        var_38 = var_3;
                    }
                    for (int i_17 = 1; i_17 < 19;i_17 += 1)
                    {
                        var_39 = (max(var_39, var_11));
                        var_40 = 199;
                    }

                    for (int i_18 = 2; i_18 < 18;i_18 += 1)
                    {
                        var_41 = var_8;
                        var_42 = 2087541334;
                        var_43 = -21765;
                    }
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    arr_66 [i_2] [i_2] = 2207425961;
                    var_44 = var_9;
                }

                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    var_45 |= var_8;
                    var_46 = var_9;
                }
                for (int i_21 = 1; i_21 < 20;i_21 += 1)
                {
                    arr_71 [i_2] [i_2] [i_3] [i_21] = var_0;

                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        arr_74 [i_2] [i_2] = 2087541336;
                        arr_75 [i_2] = var_6;
                        arr_76 [i_2] [i_21] [i_3] [i_2] [i_2] = var_7;
                    }
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        var_47 = 36028797018963964;
                        var_48 = var_3;
                    }

                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        arr_81 [i_0] [i_2] [i_3] [i_24] = var_3;
                        var_49 -= var_7;
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_50 = (min(var_50, 24856));
                        var_51 = var_6;
                        var_52 = var_9;
                    }
                }
                for (int i_26 = 1; i_26 < 1;i_26 += 1)
                {
                    var_53 = -41;
                    arr_88 [i_0] [i_3] [i_3] [i_2] = var_4;
                    var_54 = var_8;
                    arr_89 [i_0] [i_2] [i_0] [i_26] = var_7;
                }
                arr_90 [i_0] [i_0] [i_2] = var_7;
            }
            for (int i_27 = 2; i_27 < 20;i_27 += 1) /* same iter space */
            {
                arr_93 [i_2] = 2147483628;
                arr_94 [i_0] [i_0] [i_2] [i_27] = var_2;

                for (int i_28 = 0; i_28 < 22;i_28 += 1)
                {
                    var_55 = -32750;
                    var_56 &= -39;

                    for (int i_29 = 1; i_29 < 21;i_29 += 1)
                    {
                        var_57 = var_8;
                        arr_100 [i_2] = var_9;
                        var_58 *= var_9;
                        var_59 = var_10;
                    }
                    for (int i_30 = 0; i_30 < 22;i_30 += 1)
                    {
                        var_60 = var_9;
                        var_61 = 25815;
                    }
                }
            }
            for (int i_31 = 2; i_31 < 20;i_31 += 1) /* same iter space */
            {
                var_62 -= var_4;
                var_63 = 1;
            }
            for (int i_32 = 0; i_32 < 22;i_32 += 1)
            {
                arr_109 [i_32] [i_2] [i_0] = var_5;
                var_64 = var_9;

                for (int i_33 = 1; i_33 < 21;i_33 += 1)
                {
                    var_65 = 31;

                    for (int i_34 = 1; i_34 < 20;i_34 += 1)
                    {
                        var_66 &= var_1;
                        var_67 = 89;
                        var_68 *= var_10;
                    }
                    for (int i_35 = 3; i_35 < 21;i_35 += 1)
                    {
                        var_69 = 199;
                        arr_118 [i_0] [i_2] [i_35] [i_2] [i_35] = 1;
                    }
                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_70 = var_0;
                        arr_122 [i_2] = var_8;
                        var_71 += var_12;
                        var_72 = var_7;
                    }
                }
                for (int i_37 = 0; i_37 < 22;i_37 += 1)
                {
                    var_73 = var_12;
                    var_74 = var_4;
                    var_75 = var_2;
                    var_76 &= var_1;
                    var_77 = var_2;
                }
            }
            var_78 = (min(var_78, var_12));
        }
    }
    var_79 = var_0;
    var_80 = (min(var_80, 25815));

    for (int i_38 = 0; i_38 < 17;i_38 += 1)
    {

        for (int i_39 = 0; i_39 < 17;i_39 += 1)
        {

            for (int i_40 = 0; i_40 < 17;i_40 += 1)
            {
                arr_132 [i_38] [i_38] [i_38] = 1;
                var_81 &= 47864;
                var_82 &= (-32767 - 1);
                var_83 = var_10;
            }
            var_84 -= var_1;
        }
        for (int i_41 = 0; i_41 < 17;i_41 += 1)
        {

            for (int i_42 = 0; i_42 < 17;i_42 += 1)
            {
                var_85 -= 1;

                for (int i_43 = 0; i_43 < 17;i_43 += 1)
                {
                    var_86 *= var_0;
                    var_87 = 9527;
                }
            }
            for (int i_44 = 1; i_44 < 16;i_44 += 1)
            {
                arr_145 [i_38] [i_41] [i_41] [i_38] = var_5;
                var_88 &= 1;
            }
            arr_146 [i_38] [i_38] [i_38] = 18446744073709551615;

            for (int i_45 = 2; i_45 < 15;i_45 += 1)
            {

                for (int i_46 = 0; i_46 < 17;i_46 += 1)
                {
                    var_89 = -421630761;
                    var_90 = var_8;
                }
                arr_152 [i_38] = var_1;
            }

            /* vectorizable */
            for (int i_47 = 2; i_47 < 13;i_47 += 1)
            {
                arr_156 [i_47] [i_38] [i_38] = 32212;
                var_91 = var_12;
                arr_157 [i_38] [i_41] [i_47] [i_38] = var_10;
            }
        }
        var_92 = (min(var_92, 837142032));
    }
    var_93 *= -20;
    #pragma endscop
}
