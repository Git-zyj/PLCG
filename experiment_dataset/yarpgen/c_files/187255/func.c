/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187255
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
    var_18 |= ((/* implicit */signed char) var_12);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (var_16)))) ? (((/* implicit */unsigned long long int) 2254422285U)) : (arr_0 [i_2] [i_1])))));
                        arr_8 [i_0] [1U] [0LL] [i_2] [0LL] = 4294967295U;
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))) : (arr_5 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4))));
        arr_13 [i_4] = arr_6 [i_4] [i_4] [i_4];
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_16 [i_5] = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4092))) | (var_0))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 4129618170U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_5] [i_5]))))));
        var_21 ^= ((/* implicit */signed char) arr_11 [5LL] [3U]);
    }
    /* LoopSeq 2 */
    for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) (unsigned short)62129)))));
        arr_19 [14U] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (2040545010U) : (4294967295U)));
    }
    for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        var_23 = ((/* implicit */_Bool) ((signed char) min((((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7]))))), (((/* implicit */long long int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_30 [i_11] [i_10] [i_9] [i_8] [i_11] = ((/* implicit */unsigned short) 733861122U);
                            var_24 = ((/* implicit */signed char) arr_21 [(signed char)22]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_22 [i_7 - 1]))) ? (((/* implicit */long long int) (+(58720256U)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36454))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 367485163U)) == (arr_31 [i_7] [i_8] [i_8] [(signed char)1] [i_12]))))) : (arr_29 [i_7] [i_7] [16ULL] [16ULL] [i_12])))));
                    var_26 += ((/* implicit */unsigned short) ((unsigned int) ((294194990U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 + 3]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        arr_36 [i_7] [i_8] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13] [i_12] [i_9] [(unsigned short)16])))))))) ? (((((/* implicit */_Bool) (unsigned char)162)) ? (15507497486906459520ULL) : (((/* implicit */unsigned long long int) arr_34 [i_13] [i_12] [23LL] [i_9] [i_9] [9LL] [i_7])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) arr_34 [i_7 + 1] [i_7] [i_7] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 3])) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_13]))) : (18446744073709551593ULL)))))));
                        arr_37 [i_7] [i_8] [i_9] [i_9] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) min((((/* implicit */int) arr_24 [i_7 + 1] [i_9])), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)-26952))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7] [i_7])) ? (arr_29 [i_7] [(unsigned short)16] [i_12] [i_12] [i_7]) : (var_13)))) ? (3732820474046861814LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_13])))))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_12]))));
                        var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)19423), (((/* implicit */unsigned short) (short)-19320))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : (var_10)))));
                    }
                }
                for (unsigned short i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_9] [i_15])) ? (arr_31 [i_7] [i_8] [i_7] [i_15 + 2] [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29125)) & (((/* implicit */int) arr_40 [i_9] [i_7 - 1] [i_9] [i_8] [i_7 + 3] [i_7 - 1] [i_7 + 3]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7 + 2])) || (((/* implicit */_Bool) arr_20 [i_7 + 2]))))))));
                    var_30 = ((/* implicit */long long int) arr_39 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 1]);
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 1611327530U))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_8]))))) : (((((/* implicit */_Bool) arr_21 [i_7])) ? (1531232387U) : (0U)))));
                    var_32 = ((/* implicit */short) ((arr_46 [(unsigned char)22] [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 3]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65504)))))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_8] [11] [i_16])))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 1; i_18 < 23; i_18 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((max((arr_28 [i_18 - 1]), (((/* implicit */unsigned long long int) 1U)))) < (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)83)))));
                            arr_53 [5LL] [i_18 + 1] [i_18] [13] [i_18] [i_8] [i_7 - 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [22] [i_8] [i_9] [i_9] [i_17] [i_18]))) : (arr_45 [i_7] [i_8] [i_9] [i_17] [i_9] [i_9])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7 + 2] [i_7] [i_7 + 2] [18LL])) >> (((((/* implicit */int) (signed char)-3)) + (22)))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) | (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_8])) ? (((/* implicit */long long int) 7680U)) : (arr_44 [i_17]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    for (unsigned char i_20 = 3; i_20 < 23; i_20 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) arr_52 [i_7] [i_8] [i_9] [i_9] [i_7] [i_9] [i_19])) ? ((~(arr_29 [i_8] [i_19] [i_19] [i_19] [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                            var_35 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_40 [11LL] [11LL] [17U] [i_9] [i_19] [22LL] [17U])), ((unsigned char)99))))) <= (arr_28 [i_20 - 3]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_7))))) : (901937299U)));
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (~(((/* implicit */int) (signed char)-27)))))));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 979000262U))) ? (var_0) : ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4352))) : (var_10)))))));
                            arr_61 [i_7] [i_7] [i_7] [i_7 + 2] [i_8] [i_7] [6U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_23 [i_9] [i_8] [i_7]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_7] [i_7] [i_19] [i_19] [i_20 + 1] [i_9]))))) : (min((((/* implicit */unsigned int) var_12)), (2198253623U)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_21 = 2; i_21 < 23; i_21 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_23 = 1; i_23 < 23; i_23 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned int) (unsigned short)0);
                        var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [i_7] [i_7] [i_21 + 1] [i_22]))));
                    }
                    var_40 = (!(((/* implicit */_Bool) arr_67 [i_21 + 1] [i_8] [i_7 + 1])));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24741))) : (var_13)))) ? (9772036907090732827ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
                for (long long int i_24 = 2; i_24 < 22; i_24 += 3) 
                {
                    var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_40 [i_24 - 2] [i_21 + 1] [i_21 - 2] [i_21 - 1] [i_21 + 1] [i_7 + 1] [i_7 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        arr_76 [i_21] = ((/* implicit */unsigned short) (short)-15289);
                        var_43 = ((/* implicit */long long int) arr_23 [i_7] [i_7] [i_7]);
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_44 = ((/* implicit */short) (-(var_0)));
                        var_45 = ((/* implicit */int) arr_21 [i_7]);
                        var_46 = var_5;
                        var_47 = ((/* implicit */long long int) (!(arr_73 [i_7] [i_7] [i_7 + 3] [i_7 - 1] [i_21 + 1] [i_24 + 2])));
                    }
                }
                var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((unsigned int) arr_60 [i_8] [i_8])) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                /* LoopNest 2 */
                for (long long int i_27 = 4; i_27 < 22; i_27 += 1) 
                {
                    for (long long int i_28 = 0; i_28 < 24; i_28 += 4) 
                    {
                        {
                            var_49 = ((((/* implicit */_Bool) arr_74 [i_27 - 2] [i_8] [i_21 - 2] [(short)0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_74 [i_27 - 3] [i_7] [i_21] [i_28])));
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2925213490695198523ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_27 - 1] [i_27] [(signed char)6] [i_27] [i_27 + 2] [i_28]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (var_9)))));
                            var_51 = ((long long int) arr_62 [i_7 + 3] [i_21 - 1] [i_27 - 3] [i_27 - 2]);
                        }
                    } 
                } 
            }
            for (long long int i_29 = 2; i_29 < 23; i_29 += 4) 
            {
                var_52 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_70 [i_7] [i_7] [i_7] [(unsigned char)10] [i_7]))));
                var_53 = ((/* implicit */_Bool) var_14);
                /* LoopNest 2 */
                for (unsigned short i_30 = 1; i_30 < 21; i_30 += 3) 
                {
                    for (long long int i_31 = 2; i_31 < 23; i_31 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) (-(((unsigned int) 8108102312954015677LL)))))));
                            var_55 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)115)), (var_12)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_7))))))));
                        }
                    } 
                } 
            }
            var_56 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_60 [i_7 + 3] [i_8])) ? (((/* implicit */int) (unsigned short)124)) : (((/* implicit */int) arr_39 [i_7 + 1] [i_7 + 3] [i_7 - 1] [i_7 + 3]))))));
            /* LoopNest 2 */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    {
                        arr_99 [i_32] [i_8] [i_33] [i_33] = ((((((/* implicit */_Bool) arr_69 [i_8] [i_8] [(unsigned short)17] [i_8] [i_32] [i_7 + 1])) ? (arr_65 [i_7] [i_7] [i_32] [i_7 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_7] [i_32] [i_32] [i_7 + 1])) ? (var_1) : (var_9)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_34 = 0; i_34 < 24; i_34 += 4) 
                        {
                            var_57 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */short) arr_55 [i_7 + 2] [i_7])), ((short)15559)))), (((long long int) max((((/* implicit */long long int) (signed char)-91)), (arr_43 [i_7] [i_8] [(short)13]))))));
                            var_58 |= ((/* implicit */long long int) var_8);
                        }
                        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                        {
                            var_59 &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47132))))), (((/* implicit */long long int) ((short) (short)16296)))))) ? (min((((/* implicit */long long int) var_8)), (((arr_75 [i_7] [(unsigned short)21] [i_32] [(signed char)3] [i_35]) / (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_7] [i_8] [i_32] [i_33] [i_8] [i_35]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                            var_60 = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8])) ? (arr_54 [21LL] [i_35] [i_32]) : (arr_92 [i_7 + 2] [i_8] [(unsigned short)20] [(unsigned short)20] [i_33] [i_33] [(unsigned short)20])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_80 [i_35] [14U] [i_8] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) (unsigned short)124)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))));
                            var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3736155189195530810LL) | (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_7 - 1] [i_35])))))) ? (min(((-(var_15))), (((/* implicit */unsigned int) (signed char)-91)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)240))))) ? (var_11) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)16907)) : (((/* implicit */int) (unsigned short)8426)))))))));
                        }
                        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) min((((arr_73 [(short)1] [i_8] [i_32] [1] [i_7] [i_7 - 1]) ? (((/* implicit */int) arr_39 [i_7] [i_7] [i_7] [i_7])) : (((int) arr_32 [i_7] [i_8] [i_32] [i_33])))), (((/* implicit */int) var_6)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_36 = 0; i_36 < 24; i_36 += 4) 
        {
            var_63 = (~(-2515882538437001940LL));
            arr_109 [i_7 + 2] &= ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (arr_21 [i_7]))) ? (4129618170U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7 - 1] [i_36] [i_36]))));
            var_64 = ((/* implicit */unsigned int) ((var_10) != (-8029405776999188716LL)));
            /* LoopNest 2 */
            for (unsigned int i_37 = 0; i_37 < 24; i_37 += 4) 
            {
                for (int i_38 = 0; i_38 < 24; i_38 += 3) 
                {
                    {
                        var_65 = ((/* implicit */int) ((short) arr_54 [i_7 + 3] [i_7 - 1] [i_7]));
                        arr_115 [i_38] [i_38] [i_36] [i_36] [i_37] [i_38] = ((/* implicit */signed char) (~(-4573209514380990051LL)));
                    }
                } 
            } 
            var_66 = ((arr_78 [i_7 + 3] [i_7 + 2] [i_7 - 1] [i_7 + 1] [15ULL]) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_57 [i_36] [i_7] [i_36] [i_36]))))));
        }
    }
    var_67 = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (var_12)))), ((-(((((/* implicit */int) (unsigned char)64)) | (((/* implicit */int) (unsigned short)57344))))))));
    var_68 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)47132))));
}
