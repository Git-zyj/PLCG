/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (max(var_2, ((min(1, 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (max((min(var_3, var_7)), (var_0 - var_5)));
                    var_12 = (var_5 > 4294967295);
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_17 [i_5] [i_3] [i_3] [i_3] = (min((max((min(4294967294, var_3)), ((max(var_9, 0))))), (((var_5 <= var_3) - (max(var_3, var_3))))));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_13 = var_9;
                            var_14 = ((227 / ((453222474 ? ((max(184, var_9))) : (min(var_2, 962809787))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 4; i_8 < 16;i_8 += 1)
                        {
                            var_15 = 2306815764;
                            var_16 = -1137791203;
                            arr_27 [i_3] [i_3] = var_2;
                            var_17 = 101;
                            var_18 = var_4;
                        }
                        var_19 = ((((((var_3 ? var_2 : var_5)) * (var_1 / var_5))) - 931193620));
                        var_20 -= (((((-6921 ? 1012408641 : 32))) ? ((((min(var_6, var_2))) ? (min(1, 1137791203)) : var_7)) : (min(((var_3 ? var_8 : var_5)), -var_9))));
                        var_21 = (min(((34 ? 8761733283840 : 8761733283840)), ((min((var_8 == var_5), ((var_4 ? 244 : var_5)))))));
                    }
                    var_22 = ((var_3 ? ((((max(1, 32))) ? var_2 : var_3)) : (min(var_0, var_3))));
                    var_23 = (max(var_23, ((((min(1404142041, ((1 ? 0 : 9815265042571053261))))) ? ((var_9 - (var_9 + 4095))) : (~var_9)))));
                }
            }
        }

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_24 = (-(((min(var_7, var_8)) - var_8)));
                arr_32 [i_3] = (((min(var_1, var_7))) ? (max(2147483647, 18446744073709551615)) : ((min(var_7, var_6))));
                var_25 = ((((0 ? ((var_2 ? -11 : 64)) : var_5)) + (var_9 != var_4)));
            }
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                arr_35 [i_9] [i_9] [i_3] = ((((max(3581085243, var_9))) ? (var_9 / var_0) : (var_8 > var_2)));
                var_26 = ((((min(var_4, var_5))) ? (18446744073709551604 & 36) : (((min(var_4, var_1))))));
                arr_36 [i_3] [i_3] [i_3] = (449774297 > 14300358197749180738);
                var_27 = 29;
                var_28 = ((((max((var_7 == -8761733283841), (!var_9)))) != var_1));
            }
            var_29 *= ((-(((var_1 * var_9) ? ((min(1, var_7))) : (min(var_9, var_2))))));
            arr_37 [i_3] [i_9] = ((-var_3 ? (11969889109717360182 & var_0) : (((1137791197 << (((-421390006 + 421390031) - 25)))))));
            var_30 = ((14222209414051751639 != (min(12568780825875878280, var_8))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
            {
                var_31 = (8 && 360574885);
                arr_44 [i_13] [i_13] &= var_1;
                var_32 = (63513 > var_2);
                var_33 = (min(var_33, ((((13121386596361295083 * var_1) <= var_8)))));
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {
                var_34 = (((35885 < 29655) > var_3));
                arr_47 [i_3] [i_3] [i_3] = ((!(var_6 / var_6)));
                var_35 = (var_9 / 268369920);
            }
            arr_48 [i_3] [i_3] [i_3] = ((631307489 ? var_4 : -1317111140));
            var_36 = (0 * var_9);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 13;i_16 += 1)
                {
                    {
                        var_37 = (29650 / var_5);

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_57 [i_16] [i_3] [5] = 13925809167245180928;
                            arr_58 [i_16] [i_3] = (var_6 & 21421);
                        }
                        for (int i_18 = 3; i_18 < 15;i_18 += 1)
                        {
                            var_38 = ((var_5 ? var_5 : var_9));
                            arr_61 [i_16] [i_3] [i_16 + 2] [i_3] [3] = 224;
                            var_39 = (8761733283825 / var_8);
                            var_40 = 0;
                        }

                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            arr_64 [i_3] [i_3] [i_3] [i_12] [i_15] [i_16] [i_15] = (((-694251362 ^ var_5) ? var_9 : -63));
                            var_41 = 13;
                            arr_65 [i_3] = (var_0 <= var_4);
                            var_42 = var_5;
                        }
                        for (int i_20 = 1; i_20 < 15;i_20 += 1) /* same iter space */
                        {
                            var_43 += ((var_7 ? var_9 : 32767));
                            arr_70 [i_16] [i_3] [i_20] [i_16] [i_20 + 2] [i_16] = var_2;
                            var_44 = var_4;
                        }
                        for (int i_21 = 1; i_21 < 15;i_21 += 1) /* same iter space */
                        {
                            var_45 = 65534;
                            arr_75 [i_3] [1] [i_15] [i_3] [i_21] = (!var_5);
                            arr_76 [i_3] [i_3] [i_12] [i_15] [i_16] [i_16] [i_21] = ((var_5 ? var_8 : ((1921748296 ? 32766 : var_0))));
                        }
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            var_46 += var_2;
                            var_47 = ((((var_4 ? 2040 : 67)) | ((var_5 ? var_4 : 49418))));
                        }
                    }
                }
            }
            var_48 = var_4;
        }
    }
    for (int i_23 = 1; i_23 < 1;i_23 += 1)
    {

        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            var_49 = (((245 < var_0) < (min(((min(8339, 102547034))), -9104665494249554881))));
            var_50 = var_7;
            var_51 = ((140 ? var_1 : ((var_5 & (65532 / var_3)))));
            var_52 = (min((!var_2), -1787473004));
        }
        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            var_53 *= (!var_0);
            arr_89 [i_23] [i_23] = 65534;
            var_54 = (min(var_54, ((((((min(var_3, 133)) - (((var_5 ? 1023769479 : 15))))) * -var_7)))));
            arr_90 [16] [16] &= ((((min(32766, 102547034))) ? ((((115 == 63) == var_7))) : (var_1 != var_6)));
            arr_91 [i_23] = 65532;
        }
        /* vectorizable */
        for (int i_26 = 4; i_26 < 20;i_26 += 1)
        {
            var_55 = (56 - -52);
            arr_96 [i_23] [i_23] [i_23] = (var_6 | var_6);
            arr_97 [i_23] [i_23] [i_26] = 2251799276814336;
            var_56 = var_5;
            var_57 = (var_3 != var_4);
        }
        for (int i_27 = 0; i_27 < 21;i_27 += 1)
        {
            arr_101 [i_23] [i_23] [i_23] = -var_3;
            var_58 = (((((11 ? (var_1 & -740818328) : (var_0 / 10019396737522090821)))) ? var_9 : (((((min(45, var_8))) > (min(var_7, 12262541720106914894)))))));
        }
        arr_102 [i_23] = var_6;
        var_59 = (max(var_59, ((min(var_0, ((((min(16965, -11336577)) / ((min(59699, 12)))))))))));
    }
    #pragma endscop
}
