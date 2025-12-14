/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130134
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? ((+(2910139067U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned char)66)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (min((((/* implicit */unsigned int) (unsigned char)37)), (1595597307U)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (-111093818) : (var_13)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (signed char)-66))));
        var_21 = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] |= ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                var_22 ^= ((/* implicit */signed char) ((long long int) (_Bool)1));
                arr_10 [i_2] = ((/* implicit */unsigned short) ((9223372036854775807LL) - (((/* implicit */long long int) arr_4 [i_2 - 1] [i_2 + 1]))));
                arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 4039805486809871413ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (1595597307U)));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1])) ? ((+(13LL))) : (((/* implicit */long long int) 111093817))));
                    arr_16 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (2699369990U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178)))))) ? (arr_13 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) 3666551006U))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_2 + 2]) : (((/* implicit */unsigned int) var_7))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_3] [i_4] [i_4 - 1]))));
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_1])) : (var_2))) % (((((/* implicit */_Bool) 1615188663)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)26))))));
                        var_25 = ((/* implicit */_Bool) ((arr_15 [i_0] [i_1] [i_2 - 1] [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                    }
                }
                for (signed char i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_0] [i_7] [i_0] &= ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) ^ (-5460785025271548338LL));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (unsigned char)230)))))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_6 + 1] [i_6 - 1] [i_2 + 1] [i_2])) > (((/* implicit */int) var_5))));
                    }
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        var_28 *= ((/* implicit */unsigned long long int) ((arr_21 [i_2] [i_2] [i_2 + 1] [i_6] [i_8] [i_8 - 1] [i_8]) < (((/* implicit */unsigned long long int) ((arr_29 [i_0] [i_1] [i_2] [i_2] [i_6] [i_0] [i_8]) + (((/* implicit */int) (unsigned char)26)))))));
                        var_29 = ((/* implicit */unsigned short) ((arr_26 [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [i_2] [i_6] [i_6]))) : (arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 - 1])));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7722884291343499642LL)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned short)14775))));
                        arr_34 [i_0] [i_1] [i_2] [i_2] [i_6] [i_8] = ((/* implicit */unsigned char) ((arr_26 [i_0] [i_2] [i_8] [i_8 + 1]) ? (var_0) : (((/* implicit */unsigned int) (~(-2147483628))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        arr_37 [i_0] [i_2] = ((/* implicit */int) arr_19 [i_0] [i_1] [i_6] [i_6] [i_9] [i_2] [i_0]);
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3541563642U)))));
                        arr_38 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */signed char) var_11);
                        arr_39 [i_0] [i_1] [i_2] [i_6] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -111093818)) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_6] [i_6 + 2] [i_2])) : (var_2)));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((unsigned int) 13LL)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        arr_43 [i_10] [i_6] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 628416289U)) | (5798445419760506469LL)));
                        var_33 = ((/* implicit */long long int) (~(arr_0 [i_2 - 1])));
                        arr_44 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_6] [i_2 - 1]))));
                    }
                    for (long long int i_11 = 4; i_11 < 14; i_11 += 1) 
                    {
                        var_34 *= ((/* implicit */long long int) ((_Bool) arr_29 [i_0] [i_6] [i_0] [i_6] [i_11] [i_6] [i_6]));
                        var_35 = ((/* implicit */signed char) ((arr_30 [i_0] [i_1] [i_2 - 1] [i_6] [i_11 + 1]) ? (((/* implicit */unsigned long long int) ((var_14) ? (628416270U) : (((/* implicit */unsigned int) var_7))))) : (arr_32 [i_6 + 2] [i_2 + 1] [i_0] [i_0] [i_0])));
                        arr_47 [i_0] [i_2] [i_2] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) << (((((var_16) + (4802238270331530370LL))) - (8LL)))));
                        var_36 = ((/* implicit */unsigned long long int) 3666551009U);
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_50 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) 2699369986U);
                        var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_12] [i_6] [i_2] [i_1]) - (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) arr_36 [i_12] [i_12 + 1] [i_12] [i_6] [i_6])) : (((/* implicit */int) arr_45 [i_6] [i_6] [i_6] [i_6 - 2] [i_12 + 1]))));
                        var_38 = (~(((/* implicit */int) var_6)));
                        var_39 = ((/* implicit */unsigned short) var_8);
                        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned int) var_2)) : (3666550989U)))) ? (arr_15 [i_0] [i_6 + 1] [i_2 + 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_1]))));
                    }
                }
                var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2 + 2]))));
            }
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3275435323U), (((/* implicit */unsigned int) (signed char)85))))) ? (0ULL) : (((/* implicit */unsigned long long int) max((((int) (unsigned char)66)), (((/* implicit */int) (short)32767)))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3666550995U) / (628416286U)))) ? (min((((/* implicit */long long int) arr_48 [i_1] [i_13])), (arr_27 [i_0] [i_0] [i_1] [i_13] [i_14] [i_14]))) : (((/* implicit */long long int) (+(arr_5 [i_0]))))));
                        arr_55 [i_0] [i_1] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59386)) ^ (((/* implicit */int) (signed char)-86))));
                        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_14] [i_13] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_7))) * ((+(((/* implicit */int) (short)13457))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (((((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */unsigned long long int) 0U)) : (arr_21 [i_14] [i_14] [i_14] [i_13] [i_1] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) (~(628416290U)))))))))));
                    }
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            var_45 = ((/* implicit */_Bool) max((628416315U), (((/* implicit */unsigned int) var_3))));
            arr_58 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */unsigned long long int) var_2)) : (((20ULL) + (((/* implicit */unsigned long long int) arr_48 [i_0] [i_15]))))));
            /* LoopSeq 2 */
            for (long long int i_16 = 1; i_16 < 13; i_16 += 1) 
            {
                var_46 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3666550998U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (3666550998U)))));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_66 [i_16] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_29 [i_16] [i_16] [i_16] [i_16] [i_16] [i_15] [i_16 - 1])) ? (((/* implicit */int) (unsigned char)14)) : (arr_29 [i_16] [i_16] [i_16] [i_16] [i_16] [i_15] [i_16 + 2])))));
                            arr_67 [i_18] [i_17] [i_16] [i_15] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (((20ULL) & (((/* implicit */unsigned long long int) arr_53 [i_15] [i_16] [i_17] [i_18]))))))) ? (((((/* implicit */_Bool) min((3666550995U), (var_4)))) ? (((628416290U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_16]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-13465)))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */unsigned long long int) ((unsigned short) 3491637084441492021LL));
            }
            for (long long int i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 4) 
                    {
                        {
                            arr_77 [i_0] [i_0] [i_15] [i_19] [i_20] [i_19] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 628416290U)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_7)) == (8192U)))))))) : (((((((/* implicit */_Bool) 4294959084U)) ? (((/* implicit */long long int) 4294967295U)) : (arr_28 [i_0] [i_19] [i_20] [i_21]))) ^ (((/* implicit */long long int) (~(4081742054U))))))));
                            arr_78 [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) var_5)), ((short)13457))))));
                            arr_79 [i_0] [i_0] [i_0] [i_19] [i_19] [i_20] [i_21] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_17 [i_0] [i_15] [i_19] [i_20] [i_21])) + ((+(423662010))))), (((/* implicit */int) ((arr_30 [i_0] [i_15] [i_19] [i_20] [i_21]) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)19))))))))));
                        }
                    } 
                } 
                arr_80 [i_0] [i_0] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3362039826621789095LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10)))))) : (3666551009U)));
                var_48 = ((/* implicit */int) (short)13477);
            }
        }
        for (unsigned char i_22 = 0; i_22 < 15; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 15; i_23 += 1) 
            {
                for (unsigned char i_24 = 0; i_24 < 15; i_24 += 4) 
                {
                    {
                        var_49 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)13457)), (arr_27 [i_0] [i_0] [i_22] [i_22] [i_23] [i_24])))) ? (7892493757155552720ULL) : (min((((/* implicit */unsigned long long int) arr_85 [i_24] [i_23] [i_22] [i_0])), (arr_75 [i_0] [i_22] [i_23] [i_24] [i_23]))))), (((/* implicit */unsigned long long int) ((signed char) 5U)))));
                        arr_89 [i_0] [i_23] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (((unsigned long long int) arr_29 [i_24] [i_22] [i_23] [i_24] [i_0] [i_23] [i_22])) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (5U) : (var_15))), (((/* implicit */unsigned int) arr_26 [i_0] [i_22] [i_23] [i_24])))))));
                    }
                } 
            } 
            arr_90 [i_22] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)38)), ((unsigned short)65526)));
        }
        arr_91 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 4294967286U)) ? (3723762074U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) 4294959084U)) ? (arr_64 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 1) 
    {
        var_50 = ((/* implicit */int) var_15);
        arr_95 [i_25] = ((/* implicit */_Bool) min((65536), (((/* implicit */int) (signed char)94))));
        var_51 = ((/* implicit */unsigned short) arr_92 [i_25] [i_25]);
    }
    var_52 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ ((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) : (17591653953715214003ULL)))))));
}
