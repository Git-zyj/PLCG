/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111262
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) arr_7 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_3]);
                        var_18 = ((/* implicit */int) arr_1 [i_2] [i_0]);
                        arr_9 [i_0] [i_3] [i_2] [6ULL] [i_2] &= ((/* implicit */long long int) arr_0 [i_3]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [2LL] [13ULL] [(unsigned char)12] [(_Bool)1]))) : (17587891077120LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))), (((/* implicit */long long int) (((-(((/* implicit */int) var_0)))) * (((/* implicit */int) arr_7 [i_0] [i_4] [i_4] [i_4])))))));
            var_20 -= ((/* implicit */unsigned long long int) (unsigned char)16);
            var_21 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) var_0)))));
            var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_7 [i_4] [i_4] [i_0] [i_0]), ((unsigned char)13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [13LL]))) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 3]))), (((/* implicit */unsigned long long int) ((((var_1) >> (((((/* implicit */int) arr_3 [i_0] [5LL] [i_4])) - (26225))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_4] [i_0]))))))))));
            var_23 ^= ((/* implicit */long long int) arr_3 [(unsigned char)15] [i_4] [i_0]);
        }
        for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_5 + 1] [i_5 + 2] [8ULL] [(short)16] [i_5]))) : (7870775811231022077LL)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) ((short) 1793347362247992118LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5 - 2])) - (((/* implicit */int) var_15))))) : (((arr_0 [i_5]) ? (-2221681000265429585LL) : (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_0] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_5]))) : (-2221681000265429584LL))))));
            arr_15 [i_5] = ((/* implicit */short) arr_4 [i_5 + 1] [i_5 - 2] [i_0] [i_0]);
        }
    }
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) -2221681000265429591LL)) ? (((/* implicit */int) arr_1 [i_6] [i_6])) : (((/* implicit */int) var_16))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_7))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 3; i_7 < 13; i_7 += 2) 
        {
            arr_21 [i_6] [i_7] [3LL] = ((/* implicit */long long int) (((((-(((/* implicit */int) arr_1 [i_7 + 1] [i_7 - 1])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [i_7 + 1] [i_7 - 2])) ? (((/* implicit */int) arr_1 [i_7 - 1] [i_7 - 2])) : (((/* implicit */int) arr_1 [i_7 - 3] [i_7 - 3])))) - (23344)))));
            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_14 [6LL])) - (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_16 [(unsigned short)11])) ? (((2221681000265429595LL) ^ (-2501800823465487LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) (unsigned short)28493)) : (((/* implicit */int) (short)-12802)))))))));
            var_28 = max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_17 [i_6])), (arr_12 [i_6] [i_7])))), (max((((var_11) ? (var_8) : (var_8))), (max((-2221681000265429570LL), (((/* implicit */long long int) var_13)))))));
            var_29 = ((/* implicit */short) arr_1 [i_7 - 3] [i_6]);
        }
        for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 2221681000265429582LL))));
                var_31 ^= ((/* implicit */short) (+(((((/* implicit */int) arr_7 [(unsigned char)6] [(unsigned char)6] [5LL] [11LL])) << (((((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])) - (165)))))));
            }
            for (long long int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((_Bool) -2221681000265429579LL)) ? (((/* implicit */unsigned long long int) var_13)) : (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) != (arr_25 [(short)11]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (-2221681000265429574LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8])))))) : (((((/* implicit */_Bool) (short)1842)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) 7686310829428624345LL)))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    var_33 = (short)12804;
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 13; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */_Bool) arr_1 [(short)15] [(short)15]);
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */short) arr_28 [i_6])), (arr_3 [i_10] [i_8] [i_10]))), (((/* implicit */short) var_0))))) ? (((/* implicit */unsigned long long int) (~(((long long int) -3239112549681317864LL))))) : (var_1)));
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((((/* implicit */int) arr_34 [i_6])), (256154867))), (((/* implicit */int) arr_35 [i_6] [i_8] [i_10] [i_11] [(short)10])))))));
                    }
                    arr_36 [i_6] [i_8] = arr_5 [i_6] [i_8];
                    var_37 &= ((/* implicit */short) ((unsigned char) arr_24 [1ULL] [i_6]));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 13; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32758)) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)12794)) && (((/* implicit */_Bool) arr_40 [i_6] [i_8] [i_10] [i_13] [i_14]))))), (var_10)))))))));
                            var_39 = ((/* implicit */short) arr_25 [i_13]);
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) max((-6445938406104407282LL), (((/* implicit */long long int) arr_24 [i_6] [i_8])))))) & (((/* implicit */int) arr_23 [(short)2]))));
                            arr_41 [i_6] [(signed char)5] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)35)) && (((/* implicit */_Bool) 4536323620236759676LL))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned short i_15 = 2; i_15 < 13; i_15 += 4) 
            {
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (min((((/* implicit */int) (short)-31027)), (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_26 [i_8] [i_8])))))))))));
                var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_39 [i_15 - 2] [i_15] [i_15] [i_15 + 1] [i_15])) ? (((/* implicit */int) arr_39 [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 2] [i_15])) : (((/* implicit */int) arr_39 [i_15 - 1] [5LL] [11LL] [i_15 + 1] [11LL])))) + (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned short)13665)) : (((/* implicit */int) (short)-32761))))))));
                var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) arr_20 [i_6] [i_6]))));
                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_11 [i_15] [i_8] [i_6])), (max((arr_10 [i_6] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_8 [5ULL] [i_15] [5ULL] [5ULL] [i_6] [i_6])))))))));
                var_45 += ((/* implicit */long long int) arr_45 [i_15]);
            }
            for (unsigned long long int i_16 = 4; i_16 < 13; i_16 += 4) 
            {
                arr_48 [i_6] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 13)) ? (((/* implicit */int) arr_27 [i_16 - 3] [i_16 + 1] [i_16 + 1])) : ((+(((/* implicit */int) var_11))))))));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) arr_13 [i_6] [1ULL] [(unsigned short)11]);
                            var_47 = ((/* implicit */unsigned long long int) ((unsigned char) (short)-32758));
                            arr_54 [11] [i_8] [i_16] [i_17] [i_18] [i_16] = ((/* implicit */unsigned char) arr_17 [i_6]);
                            var_48 = arr_25 [i_6];
                            var_49 = ((/* implicit */long long int) arr_8 [i_6] [i_8] [i_16] [i_16 - 3] [i_8] [i_16 - 1]);
                        }
                    } 
                } 
            }
            var_50 = ((/* implicit */long long int) (unsigned char)39);
            arr_55 [i_8] = var_5;
            var_51 += ((/* implicit */long long int) (-(((((/* implicit */int) (short)12805)) * (((/* implicit */int) arr_16 [i_8]))))));
        }
        arr_56 [i_6] = ((short) arr_29 [i_6] [i_6] [i_6] [(unsigned char)13]);
    }
    for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
    {
        var_52 = ((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_19] [i_19] [i_19] [2LL] [i_19] [i_19])), (((((/* implicit */int) arr_5 [i_19] [i_19])) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (var_13)))))));
        var_53 = ((/* implicit */int) min((min((arr_1 [i_19] [16LL]), (((/* implicit */unsigned short) arr_4 [i_19] [i_19] [i_19] [(short)8])))), (((/* implicit */unsigned short) ((var_14) <= (max((var_14), (((/* implicit */long long int) arr_8 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))))));
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 15; i_20 += 2) 
        {
            var_54 &= ((/* implicit */_Bool) arr_12 [i_19] [i_20]);
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 15; i_21 += 4) 
            {
                var_55 |= ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 14; i_22 += 4) 
                {
                    for (unsigned char i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */short) ((arr_71 [i_22]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))));
                            var_57 = ((/* implicit */long long int) (short)-1);
                            var_58 = ((((/* implicit */_Bool) (unsigned char)28)) ? (17587891077118LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21404))));
                            var_59 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_61 [i_22 - 2])) << (((/* implicit */int) arr_61 [i_22 - 1]))))), (max((((((/* implicit */_Bool) (signed char)118)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_19]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_21])) ? (6212684528559491718LL) : (arr_67 [i_23] [i_19] [i_19] [i_19]))))))));
                        }
                    } 
                } 
                var_60 = ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_16), (var_5)))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) -8769068521441949403LL))))))));
                var_61 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) arr_5 [i_21] [i_19]))), (-3864598493827248176LL)));
                var_62 = arr_11 [i_19] [i_20] [i_21];
            }
            var_63 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */int) arr_57 [i_20])), (((((/* implicit */int) arr_60 [i_19] [i_19] [i_19])) * (((/* implicit */int) arr_12 [i_19] [i_20]))))))), (max((-3864598493827248155LL), (((/* implicit */long long int) (unsigned char)207))))));
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 15; i_24 += 4) 
            {
                var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_3 [i_19] [i_20] [(short)16]))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_24] [i_20] [i_19]))) : (((((/* implicit */_Bool) arr_3 [i_19] [i_19] [i_24])) ? (((/* implicit */int) arr_3 [i_19] [i_20] [i_19])) : (((/* implicit */int) (short)-32754)))))))));
                var_65 = ((/* implicit */_Bool) arr_58 [i_20]);
            }
        }
        arr_75 [i_19] = ((/* implicit */unsigned char) var_16);
    }
    /* vectorizable */
    for (unsigned char i_25 = 0; i_25 < 16; i_25 += 4) 
    {
        var_66 = ((/* implicit */long long int) ((int) arr_14 [i_25]));
        var_67 *= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_11))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_26 = 0; i_26 < 13; i_26 += 4) 
    {
        arr_80 [i_26] [i_26] = ((((/* implicit */long long int) (((+(((/* implicit */int) (signed char)71)))) / ((+(arr_38 [(unsigned char)3] [i_26] [i_26] [i_26] [i_26])))))) * (((max((((/* implicit */long long int) var_7)), (var_8))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_26] [14LL] [(short)8]))))));
        /* LoopNest 2 */
        for (signed char i_27 = 3; i_27 < 11; i_27 += 4) 
        {
            for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_29 = 2; i_29 < 11; i_29 += 2) 
                    {
                        for (short i_30 = 1; i_30 < 12; i_30 += 2) 
                        {
                            {
                                var_68 -= min((((/* implicit */long long int) ((((/* implicit */_Bool) -2049163716)) ? (((/* implicit */int) max(((short)-16384), (((/* implicit */short) arr_7 [i_26] [i_27] [i_28] [i_30]))))) : (((/* implicit */int) (unsigned char)197))))), (max((var_4), (((/* implicit */long long int) (unsigned char)217)))));
                                var_69 ^= ((/* implicit */unsigned char) min((((arr_32 [i_29 + 2] [i_30 + 1] [i_30 + 1]) ? (((/* implicit */int) arr_32 [i_29 + 2] [i_30 + 1] [i_29 + 2])) : (((/* implicit */int) arr_32 [i_29 + 2] [i_30 + 1] [i_28])))), (((/* implicit */int) arr_91 [i_29 + 2] [i_30 + 1] [i_28] [i_27 - 3]))));
                                var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) ((arr_77 [i_30 - 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3864598493827248179LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_59 [(short)11]))))) : (var_14))))));
                                var_71 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_43 [i_26] [8LL] [7ULL] [i_26])), (arr_47 [i_26] [i_26] [i_29] [i_30]))), (((/* implicit */unsigned long long int) ((3864598493827248166LL) & (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_27] [i_29 - 2] [i_28] [i_27] [i_26]))))))))) ? (max((((((/* implicit */_Bool) 7426595690922029394LL)) ? (((/* implicit */int) (short)31554)) : (((/* implicit */int) (short)16341)))), (((/* implicit */int) arr_50 [i_27 - 3] [i_30 - 1] [i_29 + 1])))) : ((+(((/* implicit */int) ((unsigned char) (short)-15648)))))));
                            }
                        } 
                    } 
                    var_72 += min((((unsigned long long int) ((arr_67 [8LL] [i_27] [i_27 + 2] [i_27]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-12818)))))), (((/* implicit */unsigned long long int) arr_38 [i_26] [i_26] [i_26] [i_26] [(unsigned short)0])));
                }
            } 
        } 
        arr_94 [i_26] = ((/* implicit */short) ((signed char) max((((/* implicit */short) var_15)), (var_16))));
        var_73 ^= ((/* implicit */_Bool) var_6);
    }
    var_74 = ((((/* implicit */_Bool) ((var_13) + (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_15))))))));
    var_75 = ((/* implicit */unsigned long long int) ((((12417631876015776294ULL) > (((/* implicit */unsigned long long int) -8769068521441949411LL)))) ? (((((((/* implicit */int) var_3)) > (((/* implicit */int) var_2)))) ? (max((var_8), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15659)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
}
