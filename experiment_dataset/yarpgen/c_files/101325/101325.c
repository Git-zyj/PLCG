/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!1868063055518790634);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 *= (arr_3 [i_0]);
        var_19 = ((((min((max(16578681018190760986, var_2)), (arr_0 [i_0])))) ? ((var_13 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : 0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_20 *= (((arr_4 [i_3 + 1]) || 20));
                var_21 = (((arr_8 [0] [i_3 + 1] [i_3 + 1]) ? (arr_8 [i_1] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_1] [i_3 - 1] [i_1])));
            }
            arr_13 [i_1] = var_7;
            var_22 *= 19542;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_23 ^= 2929738020278815284;
            var_24 = var_10;
        }
        arr_16 [i_1] = ((!(arr_14 [i_1] [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_23 [12] [i_5] [i_6] [8] &= (!var_10);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] [i_6] [i_8] |= (((-var_8 + 9223372036854775807) >> (-15267 + 15280)));
                                var_25 &= (arr_27 [10] [i_5] [i_6] [i_7]);
                                var_26 = (max(var_26, 8033181509137044849));
                            }
                        }
                    }
                    var_27 += (((((var_7 ? var_5 : (arr_6 [i_1])))) ? ((15255 ^ (arr_5 [0]))) : (arr_4 [i_6])));
                    arr_29 [i_1] = 15244;
                    var_28 ^= 2929738020278815284;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            arr_34 [i_9] [i_10] = var_5;

            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                arr_37 [1] [i_10] [i_10] |= ((((((arr_36 [i_9]) ? ((-(arr_30 [i_9]))) : (((var_3 ? (arr_31 [i_9]) : var_13)))))) ? (arr_30 [i_9 + 1]) : (((-(~65530))))));
                arr_38 [i_11] = 13976616884145536169;
                arr_39 [i_11] [i_11] [i_9] = ((1147100057 ? ((-((8033181509137044844 ? var_16 : var_15)))) : ((((arr_36 [i_11 - 2]) > (arr_35 [i_9] [i_9 + 1] [i_9 + 1] [i_9]))))));
            }
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                var_29 = var_5;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        {
                            arr_47 [i_14 - 1] [14] [i_9] [14] [i_9] &= (arr_40 [i_14]);
                            var_30 -= ((((((((199 ? var_6 : var_4))) ? (arr_41 [i_9] [i_10]) : 9223372036854775807))) ? 15244 : (arr_43 [i_9] [i_9] [i_12 - 1] [20] [i_14])));
                            arr_48 [i_9] [i_12] [i_12] [i_13] [i_14] = (arr_43 [i_9] [i_9] [i_9 + 1] [i_9] [20]);
                            var_31 = ((((max(var_10, var_5))) || ((max((max((arr_46 [i_9] [i_14] [1] [i_13] [i_14]), (arr_35 [i_9 + 1] [i_10] [i_12] [i_14]))), (arr_46 [i_9] [0] [i_12] [i_13] [i_9 + 1]))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_56 [i_9] [i_15] [i_15] [i_15] [i_9] = (((-9223372036854775807 - 1) / (arr_45 [i_9 + 1] [i_9 + 1])));
                        arr_57 [i_15] = var_3;
                        arr_58 [i_15] [i_15] [i_9] = ((var_4 ? 7587279533805481430 : var_10));
                        var_32 = (arr_31 [i_16]);
                        var_33 = (min(var_33, (((-4318890299687987185 ? var_15 : var_12)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 22;i_19 += 1)
                {
                    {
                        var_34 -= ((!(arr_40 [i_9])));
                        arr_64 [i_9] [i_15] [i_18] [i_15] = (arr_45 [i_15] [i_9 + 1]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
        {
            var_35 *= (((((arr_40 [i_9]) ? 65513 : (arr_63 [i_9] [i_9] [i_9 + 1] [i_20]))) >> ((var_14 ? var_12 : (arr_63 [1] [3] [i_20] [i_20])))));
            arr_67 [2] &= (!(arr_60 [i_9 + 1] [22] [i_9 + 1] [i_9 + 1]));

            for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
            {
                var_36 -= ((~var_0) ? var_9 : 57344);
                var_37 |= ((((((arr_30 [i_9]) / var_0))) ? (((arr_60 [i_21] [i_21] [i_21] [i_9]) ^ (arr_42 [i_9] [i_9] [i_21]))) : (var_4 > var_13)));
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_38 *= var_5;
                            arr_74 [15] [i_20] [i_20] [i_22 - 1] [i_23] [i_20] [i_23] = -15254;
                            arr_75 [i_9] [i_20] [i_21] [i_22] [i_22] = (((arr_72 [i_9 + 1]) ? 17485904280228150571 : 255));
                            arr_76 [i_9] [i_20] = (arr_53 [i_9 + 1] [i_9 + 1]);
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
            {

                for (int i_25 = 4; i_25 < 22;i_25 += 1)
                {
                    var_39 = (arr_54 [i_9 + 1] [i_9 + 1] [i_20] [i_20] [i_25] [i_25 - 3]);
                    arr_85 [i_20] = (((arr_31 [i_9 + 1]) ? (arr_72 [i_25 - 1]) : (arr_72 [i_25 + 1])));
                    arr_86 [i_9] [i_9] [i_9 + 1] [i_9] [i_20] = (arr_63 [i_25 - 4] [i_25] [i_25 - 3] [i_25 - 4]);
                    arr_87 [i_9] [i_20] [i_25 + 1] [i_20] = (((arr_72 [i_24]) || var_1));
                }
                for (int i_26 = 4; i_26 < 22;i_26 += 1) /* same iter space */
                {
                    var_40 = (max(var_40, ((((arr_68 [i_9] [22] [i_26]) ? (arr_45 [i_26 - 4] [i_9 + 1]) : (((arr_33 [1]) ? var_0 : var_10)))))));
                    var_41 = (arr_83 [i_9 + 1]);
                }
                for (int i_27 = 4; i_27 < 22;i_27 += 1) /* same iter space */
                {
                    var_42 = (arr_41 [i_9 + 1] [i_27]);
                    arr_94 [i_27] [i_20] [i_24] [i_20] [13] = (((arr_63 [i_9 + 1] [i_20] [i_24] [i_27]) ? 34 : 1152921504338411520));
                    var_43 = (max(var_43, -15279));
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 23;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 23;i_29 += 1)
                    {
                        {
                            arr_101 [i_9] [i_20] [i_9 + 1] [i_9 + 1] = (((~10) ? (((var_2 << (((arr_31 [i_9]) - 158))))) : 16578681018190760981));
                            arr_102 [i_9] [i_20] = var_0;
                            arr_103 [i_9 + 1] [i_20] [i_20] [i_20] [i_29] [i_20] [i_28] |= ((!(arr_69 [i_9] [i_9] [i_9 + 1])));
                            var_44 += var_15;
                            var_45 = 32767;
                        }
                    }
                }
                var_46 = (min(var_46, 4318890299687987193));
            }
            for (int i_30 = 0; i_30 < 23;i_30 += 1) /* same iter space */
            {
                var_47 *= ((-(((arr_49 [i_9]) ? 6811565267099644877 : var_14))));
                var_48 = (((arr_80 [i_9 + 1] [i_20]) + (arr_80 [i_9 + 1] [i_20])));
                var_49 = ((-(((arr_36 [i_9 + 1]) / (arr_73 [i_20] [i_20] [i_20] [i_9] [i_20])))));

                for (int i_31 = 1; i_31 < 20;i_31 += 1) /* same iter space */
                {
                    var_50 *= var_2;
                    var_51 = (arr_53 [i_31 + 3] [i_9 + 1]);
                    var_52 = (arr_35 [i_9] [i_20] [i_30] [1]);
                    arr_108 [11] [i_30] [i_20] [i_20] [i_9] [i_9] = (((arr_51 [i_9 + 1]) ? (arr_51 [i_9 + 1]) : var_0));
                }
                for (int i_32 = 1; i_32 < 20;i_32 += 1) /* same iter space */
                {
                    var_53 = (min(var_53, (((!(arr_95 [i_32 + 1] [i_32] [i_32] [i_32]))))));
                    var_54 += var_0;
                    var_55 = (arr_93 [i_9] [i_20] [i_30] [i_9 + 1] [i_32 + 1]);
                    var_56 = 8961;
                    arr_111 [i_20] = var_14;
                }
            }
        }
        /* vectorizable */
        for (int i_33 = 0; i_33 < 23;i_33 += 1) /* same iter space */
        {
            var_57 = ((((arr_46 [i_33] [i_33] [i_33] [21] [9]) | (arr_100 [6] [i_33] [i_33]))));
            arr_114 [i_9] [i_9] = ((var_0 ? var_12 : (arr_52 [i_9])));
            var_58 = (min(var_58, ((((((var_16 + (arr_98 [i_9] [i_9] [9] [1] [i_9])))) ? (((arr_69 [1] [i_9] [i_9]) ? (arr_91 [i_9] [i_9] [i_9] [i_9] [i_33] [i_33]) : var_3)) : (arr_32 [i_9 + 1]))))));
            arr_115 [i_9 + 1] [i_33] [i_33] = (var_8 ^ var_10);
            var_59 = var_9;
        }
        for (int i_34 = 0; i_34 < 23;i_34 += 1) /* same iter space */
        {
            var_60 = (((((0 ? ((((arr_112 [i_9] [i_34]) ? 0 : var_10))) : ((var_3 ? var_11 : var_9))))) ? (arr_49 [i_9]) : (((!(arr_113 [i_9]))))));
            var_61 -= (max((max(var_5, (~1))), (arr_113 [i_9])));
        }
        var_62 *= ((~(arr_40 [i_9])));
    }
    var_63 = ((!(((var_1 ? var_5 : var_7)))));
    #pragma endscop
}
