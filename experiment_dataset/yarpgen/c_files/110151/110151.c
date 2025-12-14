/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -505970643;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = (!65535);
            arr_7 [i_0 + 1] [9] [0] = ((~((-505970643 ? 9223372036854775806 : var_2))));
            var_11 = ((arr_4 [i_0] [i_0 - 1]) ? (arr_4 [i_0] [i_0 - 1]) : (arr_4 [i_1] [i_0 - 1]));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] = var_9;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_12 *= (var_6 ? (max((((4100611627 ? 30392 : 255))), (arr_2 [i_0]))) : var_8);

                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_3] [i_2] [1] [i_2] [8] = ((min(32767, var_1)));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        var_13 |= 6616;
                        arr_21 [i_3] [i_2] [i_2] [i_2] [5] = (((arr_11 [i_5 + 1] [i_5] [4] [i_5 - 1]) ? (arr_11 [i_5 + 1] [i_5] [i_5] [i_5 + 1]) : (arr_11 [i_5] [i_5] [i_5] [i_5 - 2])));
                        var_14 = (((((-(arr_8 [i_5])))) ? (((55 ? -505970631 : var_5))) : (arr_1 [i_0 - 1])));
                        arr_22 [i_3] [i_3] [i_3] = var_7;
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_15 = ((((min(-var_4, (((arr_0 [i_2] [10]) ? var_4 : var_3))))) ? (((-1 ? var_5 : 14289586158927588705))) : ((((!(arr_15 [i_0 + 1])))))));
                        arr_25 [0] [i_3] [0] [0] [1] = ((max(0, 194355656)) | (arr_12 [i_3] [i_2] [i_3] [i_3]));
                        var_16 = (((((var_0 ? (arr_8 [i_2]) : (arr_8 [i_0 + 1])))) ? var_2 : (max(7207390278153134024, 2147483647))));
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_28 [9] [9] [3] [i_0] [i_3] = ((((min(2147483632, (arr_5 [i_0 + 1] [i_7 + 2])))) ? 6831 : (arr_0 [i_4] [i_7])));
                        var_17 &= (min(-6830, (min(var_7, (max(-6830, 4294967282))))));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_18 = (min(var_18, (var_8 > 1775977645)));
                        arr_31 [2] [i_4] [i_4] [i_3] [i_2] [i_4] [i_0] |= (min((max((~var_2), var_2)), (min((arr_23 [i_0] [3] [3] [i_3] [i_4] [i_8]), ((-(arr_9 [i_3])))))));
                        var_19 = (min(var_19, var_3));
                    }
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_20 = ((((min(((2901557773 ? -1920156967568290301 : 14077991086930973502)), (-32767 - 1)))) ? (((-(max(9733, 1775977645))))) : ((var_7 ? (arr_37 [i_0] [i_0] [i_0] [2] [i_0 + 1] [i_0 - 1] [i_0]) : 1))));
                        var_21 = ((var_1 ? var_9 : ((899 ? ((min(var_9, 9))) : ((110 ? var_5 : (arr_34 [i_0] [i_3] [i_3] [i_9] [i_9] [6])))))));
                        var_22 = ((((((min(-1, (arr_0 [i_0] [i_0])))) ? var_1 : (((var_9 ? (arr_14 [i_2]) : var_9)))))) ? var_8 : ((((min(var_3, var_2))) ? ((71 ? 1938243069 : var_3)) : var_8)));
                        arr_38 [5] [i_3] [i_3] [i_9] [i_10] [i_0] = (min((arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2]), ((max(-var_0, (arr_19 [i_0 + 1]))))));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_23 = ((-(((((127 ? var_7 : -1775977645))) ? ((var_5 ? var_8 : 0)) : (~var_5)))));
                        var_24 = ((var_6 ? ((~(~1))) : (((arr_32 [i_0 + 1] [i_0 - 1] [13] [i_0 - 1]) ? (~var_8) : ((min(94, var_6)))))));
                        arr_42 [i_3] [i_2] [11] [i_3] [i_2] = (arr_35 [7] [i_3] [7] [i_3] [i_11] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_25 = (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) ? var_5 : (arr_23 [i_0 + 1] [3] [i_0 + 1] [i_0] [i_0] [i_0 - 1])));
                        arr_46 [i_3] = (((arr_27 [i_0] [i_2] [1] [i_3] [i_3] [i_3] [i_3]) != var_1));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_26 = ((var_5 ? ((3 ? -125 : 55)) : var_3));
                        var_27 = (((((var_4 ? var_5 : (arr_34 [0] [i_3] [1] [4] [i_9] [i_9])))) ? (~var_9) : 975619506425629530));
                        var_28 = ((-9 ? -2 : -72));
                    }
                    var_29 = 37143;
                }
                arr_49 [i_3] [6] [i_3] [i_0 + 1] = ((((((((var_0 ? var_5 : var_1))) ? (var_1 / 4100611640) : (min(65525, var_0))))) ? ((var_1 ? var_4 : (arr_27 [i_3] [i_3] [i_0] [i_2] [9] [i_3] [i_0]))) : 0));
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_30 = -11;
                var_31 = 3529736903;
                var_32 = (max((min((arr_13 [i_0 - 1]), -var_4)), (((((((arr_5 [9] [9]) + 0))) ? (arr_5 [i_0] [i_0]) : var_3)))));

                /* vectorizable */
                for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_33 = ((-(arr_17 [i_0 + 1] [i_0 + 1] [i_16] [i_0 + 1] [i_15])));
                        arr_59 [i_0] [i_0] [i_0] [i_0 - 1] = ((1 ? 916774510 : 0));
                        var_34 &= ((!(arr_30 [i_16] [i_16])));
                    }

                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_35 = (max(var_35, ((((((65522 ? var_7 : var_8))) ? (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [5]) : var_9)))));
                        arr_63 [i_15] [i_15] [i_15] [i_15] [i_15] |= 1879229342;
                        var_36 = var_7;
                        var_37 = (((var_4 ? 1 : var_5)));
                    }
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                {
                    var_38 = var_5;
                    arr_67 [9] [i_18] [i_18] [0] [9] = 0;
                    var_39 *= ((205 < ((var_0 ? var_0 : 4100611633))));
                    var_40 = var_5;
                }
                for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                {
                    arr_72 [i_0] [i_2] [i_14] [i_19] [i_19] [i_2] = (max((min(var_6, 918104357)), ((((max(37262, 208))) ? 2147483628 : 32767))));
                    var_41 = (max(var_41, (((var_2 ? -1 : (((((6985307042844026052 ? 2147483628 : 4294967295))) ? ((var_5 ? (arr_8 [i_0]) : var_6)) : -var_2)))))));
                }
            }
            arr_73 [i_0] [1] = var_1;
        }
        for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
        {
            arr_77 [i_0] [i_20] [i_0] = (arr_37 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]);
            var_42 = (arr_12 [i_20] [i_20] [12] [i_20]);
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
        {
            var_43 = (max(var_43, var_9));
            var_44 = ((((((arr_78 [i_0] [6]) ? 1602996815 : 30392))) ? var_8 : ((var_9 << (var_9 - 32428)))));
            arr_80 [i_21] [3] = (!18446744073709551615);
            arr_81 [i_0] [i_0] = 0;
        }
        var_45 = (!var_6);
    }
    for (int i_22 = 1; i_22 < 13;i_22 += 1) /* same iter space */
    {
        var_46 = (((var_8 ? 32767 : (((var_5 ? -2147483641 : var_2))))));
        var_47 = (max((((((max(var_7, (-32767 - 1)))) ? (!var_4) : (var_6 / -32767)))), (min(1, 10165293242667596505))));
        var_48 = (((8281450831041955111 ? 980845581 : -110)));
    }
    for (int i_23 = 1; i_23 < 13;i_23 += 1) /* same iter space */
    {
        var_49 = ((-32760 ? 48 : (arr_83 [i_23 + 1] [i_23])));
        var_50 = arr_58 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23];
        var_51 &= 0;
    }
    for (int i_24 = 0; i_24 < 0;i_24 += 1)
    {
        arr_92 [i_24] = ((((((var_4 | (arr_90 [i_24] [i_24]))))) ? (min(var_1, var_1)) : (max(-9223372036854775794, 34460))));
        arr_93 [i_24] = (max((max(((max(60, (arr_91 [i_24])))), ((1 ? var_6 : (arr_90 [i_24] [i_24]))))), var_8));
    }
    #pragma endscop
}
