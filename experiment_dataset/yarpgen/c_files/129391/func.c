/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129391
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), ((-(((((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))))) & (((/* implicit */int) var_12))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47657)) << (((((/* implicit */int) (unsigned short)5782)) - (5776)))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)5800)) << (((((-9013618303292721110LL) + (9013618303292721130LL))) - (18LL))))), (((/* implicit */int) ((arr_3 [i_1 + 1] [i_1 + 2] [i_1 - 3]) > (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 3]))))))))));
                                arr_12 [i_0 - 1] [i_1 - 3] [i_2] [i_3] [i_2] = ((/* implicit */long long int) arr_9 [i_2] [i_1 + 2] [i_2]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551611ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_8] [i_7] [i_6] [i_5])) + (((/* implicit */int) (_Bool)1))))))), (max(((_Bool)1), ((_Bool)0)))));
                            arr_24 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_11 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8]), (arr_11 [i_5] [i_6] [i_6] [i_7] [i_8] [i_8]))))));
                            arr_25 [i_7] [i_7] [i_8] [i_7] = (+(arr_16 [i_5] [i_6] [i_7]));
                            var_24 = ((/* implicit */int) max((arr_16 [i_5] [i_6] [i_7]), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */signed char) -9013618303292721098LL);
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_6] [i_6])))))) ? (((/* implicit */long long int) max((arr_3 [i_5] [i_6] [i_6]), (((/* implicit */int) arr_1 [i_5] [i_6]))))) : (9013618303292721110LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)9831)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (arr_7 [i_5] [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (max((1417285295U), (((/* implicit */unsigned int) arr_3 [i_5] [i_5] [i_6]))))))));
                arr_26 [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_16)), (var_3))))) + ((~(arr_9 [i_5] [i_6] [i_5])))))) ? (max((max((((/* implicit */long long int) 1U)), (-9013618303292721110LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_6] [i_6])) ? (((/* implicit */int) arr_5 [i_5] [i_6] [i_6])) : (((/* implicit */int) var_3))))))) : (0LL)));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((max((-9013618303292721110LL), (((/* implicit */long long int) max((var_8), (var_11)))))), (((/* implicit */long long int) max((max((4294967281U), (((/* implicit */unsigned int) var_7)))), (max((((/* implicit */unsigned int) (unsigned char)205)), (var_11)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_9 + 3] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)220)), (-3694552829176269997LL)))) ? (arr_2 [i_9 + 3]) : (((/* implicit */int) arr_11 [16] [i_9 + 3] [i_9 - 1] [i_9 + 1] [i_9 + 2] [16]))))) : ((((~(25ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_9 + 1])) < (((/* implicit */int) arr_0 [i_9 - 1]))))))))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) arr_28 [i_10] [i_9 + 3]);
            var_30 = ((/* implicit */unsigned short) max((arr_29 [i_10] [i_9 + 1]), (((/* implicit */int) arr_11 [(unsigned short)6] [i_10] [i_10] [i_9 + 2] [i_9 - 1] [(unsigned short)6]))));
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_9 [i_9 + 3] [i_9 + 2] [i_10]))));
            var_32 = ((/* implicit */int) (_Bool)1);
        }
        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */int) min((((/* implicit */long long int) (short)-1)), (min((((-4611686018427387904LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5782))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_12] [i_11])) || (((/* implicit */_Bool) arr_29 [i_9 - 1] [i_12])))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 3; i_14 < 16; i_14 += 3) 
                        {
                            arr_43 [i_11] [i_11] [i_13] [i_14 - 3] &= ((/* implicit */unsigned long long int) (!(var_2)));
                            var_34 ^= ((/* implicit */_Bool) var_12);
                            arr_44 [i_9 + 2] [i_11] [i_13] [i_12] [i_13] [i_14 + 2] = min((((((/* implicit */_Bool) arr_5 [i_9 - 1] [i_9 + 2] [i_14 - 1])) ? (arr_8 [i_14 - 1] [i_9 + 2] [i_13] [i_13] [i_14 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9 + 1] [i_9 - 1] [i_14 + 2]))))), (max((arr_40 [i_14 + 1] [i_14 - 2] [i_13] [i_14 - 2] [i_14 - 2]), (((/* implicit */unsigned long long int) min(((unsigned char)42), (var_7)))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-27934)) + (2147483647))) >> (((7793530507674722642LL) - (7793530507674722623LL)))));
                            arr_45 [i_9 + 2] [i_11] [i_12] [i_13] [i_14 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned long long int) (~(arr_29 [i_9 + 2] [i_13])))) : (0ULL)));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            var_36 -= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            arr_48 [i_13] [i_13] [i_11] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_9 + 3] [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_13] [i_15])) < (((/* implicit */int) arr_42 [i_9 + 3] [i_9 + 2] [i_9 + 3] [i_9 + 2] [i_9 + 3] [i_12] [i_12]))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_37 [i_11] [i_12])))))))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_9 + 3])) || (((/* implicit */_Bool) ((unsigned short) max((var_5), (((/* implicit */unsigned int) (short)9831)))))))))));
            var_39 = ((/* implicit */unsigned short) min((max((arr_28 [i_9 - 1] [i_9 + 3]), (arr_28 [i_9 + 3] [i_9 + 3]))), (((arr_4 [i_9 - 1] [i_9 + 2]) ? (((/* implicit */int) arr_4 [i_9 - 1] [i_9 - 1])) : (arr_2 [i_9 - 1])))));
        }
        var_40 = ((((((/* implicit */int) ((unsigned char) 3694552829176270017LL))) + (((/* implicit */int) (_Bool)1)))) >= (arr_33 [i_9 + 2] [i_9 - 1] [i_9 + 1]));
        var_41 = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(max((max((arr_46 [i_16 - 1] [i_16 + 1] [i_16 + 3] [i_16 + 1] [i_16 + 3]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_16 - 1] [i_16 + 1] [i_16 + 3])) * (((/* implicit */int) arr_42 [i_16 + 3] [i_16 - 1] [i_16 + 1] [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 2]))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            arr_53 [i_17] [i_17] = ((/* implicit */short) ((arr_34 [i_16 + 2]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59554)) ? (((/* implicit */int) arr_7 [i_16 - 1] [i_17] [i_17])) : (((/* implicit */int) var_1)))))));
            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_40 [i_16 - 1] [i_16 + 1] [2] [i_16 + 3] [i_17]) : (arr_40 [i_16 + 3] [i_17] [4] [i_16 + 2] [i_16 + 3]))))));
            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_31 [i_16 + 1] [i_17] [i_17])))))));
        }
        var_45 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [i_16 + 3] [i_16 + 1] [i_16 + 1] [i_16 + 3] [i_16 + 1] [0U])) * (((/* implicit */int) arr_11 [i_16 + 2] [i_16 + 3] [i_16 - 1] [i_16 + 1] [i_16 + 1] [(unsigned char)16]))))));
    }
    /* vectorizable */
    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 4) /* same iter space */
    {
        var_46 = ((/* implicit */short) ((18446744073709551614ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_18 + 2] [i_18 - 1] [i_18 - 1])))));
        /* LoopSeq 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((134217727) != (2147483647))))));
            arr_59 [i_18 + 3] [i_18] [i_19] = (-(((/* implicit */int) ((unsigned char) (unsigned short)9))));
            var_48 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_18 + 1] [i_18] [i_19]))) % (2709761867969420225LL)))));
            var_49 = ((/* implicit */unsigned short) arr_49 [i_18 + 1]);
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 839234658)) < (arr_63 [i_18 + 3] [i_18] [i_20])));
            /* LoopSeq 4 */
            for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) arr_52 [i_21]))));
                arr_67 [i_18] [i_20] [i_21] = ((/* implicit */unsigned int) arr_10 [i_18 + 2] [i_20] [i_21]);
                var_52 = ((/* implicit */_Bool) arr_33 [i_18 + 1] [i_18 + 2] [i_18 - 1]);
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_71 [i_18 - 1] [i_20] [i_18] [i_22] = ((/* implicit */unsigned short) 332597023);
                    var_54 = ((/* implicit */unsigned long long int) arr_38 [i_20] [i_21] [i_22]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 4) 
                    {
                        arr_75 [i_18 + 2] [i_18 + 2] [i_20] [i_21] [i_18] [i_23] = arr_61 [i_18 + 1] [i_20] [i_22];
                        var_55 = ((/* implicit */int) arr_65 [i_20] [i_21] [i_23]);
                        var_56 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_18 + 3])) ? (2907831108U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))));
                        var_57 ^= ((/* implicit */long long int) (short)9831);
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_58 ^= ((/* implicit */short) var_15);
                            var_59 = ((/* implicit */_Bool) arr_10 [i_18 - 1] [i_20] [i_21]);
                            var_60 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) arr_6 [i_20] [i_21] [i_24] [i_25])) - (60)))));
                        }
                    } 
                } 
            }
            for (short i_26 = 0; i_26 < 18; i_26 += 4) 
            {
                var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) ((var_13) >> (((arr_9 [i_18 + 2] [i_18 + 3] [i_18 + 3]) - (3112186163U))))))));
                var_62 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48676))));
                arr_84 [i_26] |= ((/* implicit */unsigned char) arr_29 [i_20] [i_18 + 1]);
            }
            for (unsigned char i_27 = 1; i_27 < 17; i_27 += 2) 
            {
                arr_88 [i_18] = ((/* implicit */int) arr_50 [i_18 + 2]);
                arr_89 [i_18 + 1] [i_20] [i_27 + 1] [i_18] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_27 - 1] [i_18] [i_27 - 1] [i_27 + 1]))) < (3694552829176270021LL)));
                arr_90 [(unsigned short)16] [i_20] [(unsigned short)16] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_18 + 1] [(unsigned char)10] [i_18 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_27 - 1] [i_27 - 1] [i_27 + 1]))) : (arr_63 [i_27 - 1] [4U] [i_27 - 1])));
                var_63 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_18 + 3] [i_27 + 1] [i_18 + 3] [i_18 + 1] [i_20] [i_18]))));
                var_64 = (-(((/* implicit */int) arr_50 [i_27 - 1])));
            }
            for (unsigned char i_28 = 0; i_28 < 18; i_28 += 4) 
            {
                var_65 &= ((/* implicit */unsigned short) arr_54 [i_18 - 1]);
                /* LoopSeq 1 */
                for (long long int i_29 = 0; i_29 < 18; i_29 += 4) 
                {
                    var_66 ^= arr_77 [i_18 + 2] [i_20] [i_20] [i_28] [i_29] [i_28];
                    var_67 -= ((/* implicit */unsigned short) arr_86 [i_18 + 1] [i_29] [i_18 + 2]);
                    var_68 = ((/* implicit */signed char) ((((((/* implicit */int) (short)21601)) << (((arr_30 [i_18 + 3]) - (12898906414434411515ULL))))) > (-1843130215)));
                    var_69 = ((/* implicit */unsigned char) ((arr_40 [i_18 - 1] [i_20] [i_18] [i_28] [i_29]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_28])))));
                }
            }
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_70 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)5782)) ^ (((/* implicit */int) arr_69 [i_18 + 2] [i_18] [i_30] [i_30]))));
            var_71 = ((/* implicit */_Bool) -9013618303292721110LL);
            /* LoopSeq 1 */
            for (short i_31 = 0; i_31 < 18; i_31 += 2) 
            {
                var_72 = ((((/* implicit */_Bool) (unsigned short)5782)) ? (arr_28 [i_18 + 2] [i_18 + 1]) : (((/* implicit */int) var_2)));
                var_73 = ((/* implicit */_Bool) max((var_73), (((/* implicit */_Bool) var_0))));
                arr_102 [i_18 + 1] [i_18] [i_18 + 3] = arr_40 [i_18 + 1] [i_30] [i_18] [i_18 + 3] [i_31];
            }
            /* LoopNest 2 */
            for (short i_32 = 1; i_32 < 14; i_32 += 3) 
            {
                for (unsigned int i_33 = 0; i_33 < 18; i_33 += 1) 
                {
                    {
                        var_74 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_33] [i_30]))) - (((arr_73 [i_33] [i_32 + 2] [i_32 + 1] [i_30] [i_18 - 1] [i_18 + 2] [i_18 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)9836)))))));
                        var_75 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_99 [i_18 + 1] [i_30] [i_32 + 2])) ? (28LL) : (((/* implicit */long long int) arr_74 [i_18 - 1] [i_30] [i_18] [i_33] [i_33] [i_18 + 3] [i_30]))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_103 [i_18 + 3] [i_30] [i_32 + 1] [i_33])));
                    }
                } 
            } 
        }
        var_76 = ((/* implicit */unsigned char) var_3);
        var_77 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_55 [i_18 + 1])) << (((/* implicit */int) var_16))));
    }
}
