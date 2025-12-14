/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_10 = ((unsigned short) arr_0 [i_0 - 1]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((short) arr_1 [i_0 + 1]));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_11 [i_0 + 1] [i_2] [i_0 + 1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2 - 2] [i_3])) ? (((/* implicit */int) (unsigned short)56203)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2 + 1]))))) ? (((long long int) 623220455942241623ULL)) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3 + 1] [i_3] [i_3] [i_3])))));
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_1))));
                        arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) 2619689620U)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            arr_18 [i_4 + 3] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((long long int) (unsigned char)7)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-11804))))))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) ((_Bool) var_6))) : (var_5)));
                    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? ((~(var_5))) : (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [6LL] [i_4]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 1) 
                    {
                        {
                            arr_28 [i_4] [i_6] [i_4] [i_6] [i_6] [i_8] [i_9 + 4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_9] [i_6] [i_6] [i_4 - 1]))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(var_5)))) <= (((long long int) 4294967283U)))))));
                        }
                    } 
                } 
                arr_29 [i_6] [i_6] = ((/* implicit */int) ((unsigned short) ((short) arr_14 [i_4])));
            }
            var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
        }
        for (unsigned char i_10 = 2; i_10 < 9; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 11; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (11161079808582025207ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) ((var_4) >= (18446744073709551615ULL)))) : (((var_0) ? (((/* implicit */int) arr_9 [i_4] [i_4 - 1] [i_11 + 1] [i_12] [i_4] [i_11])) : (((/* implicit */int) var_3))))));
                        var_17 |= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_35 [i_4 + 3] [i_4 + 1] [(unsigned short)0] [i_4 + 3]))))));
                        var_18 = ((/* implicit */unsigned short) (short)32762);
                        arr_39 [i_4] [i_10 + 3] [i_10 + 1] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (32028637U)))) ? (arr_30 [i_12] [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_19 = (((+(((/* implicit */int) var_2)))) >> ((((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (11877631485730171700ULL))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 3) 
                {
                    for (unsigned short i_15 = 4; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((unsigned int) arr_25 [i_14 + 1] [i_10 + 2] [i_4] [i_4 + 1] [10ULL] [i_4]));
                            var_21 -= var_3;
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_10 + 1] [i_10 + 2])) | (((/* implicit */int) arr_33 [i_14 + 3] [i_15 - 1] [i_13])))))));
                            var_23 *= ((/* implicit */_Bool) -3027985510436299808LL);
                            arr_48 [i_4] [i_4 + 1] [i_13] [i_14] [i_15 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (2251799813683200ULL)));
                        }
                    } 
                } 
            } 
            arr_49 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_4] [i_10 - 2] [i_10]))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                arr_53 [i_16] [i_4] [i_16 - 1] [i_10 + 2] = ((/* implicit */signed char) var_1);
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_26 [i_4 + 2] [i_10] [i_16 - 1] [i_4 + 2] [i_16])) == (var_4)));
                var_25 = ((/* implicit */unsigned char) ((long long int) arr_22 [i_10] [i_10 + 2]));
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_57 [i_10] [i_10 + 2] [i_16] [i_10 - 2] = ((/* implicit */long long int) ((var_6) == (((/* implicit */long long int) ((unsigned int) (short)12498)))));
                    var_26 = ((/* implicit */short) -53094896531191569LL);
                }
            }
            var_27 = ((/* implicit */_Bool) ((long long int) arr_4 [i_10] [i_10 + 3] [i_10]));
        }
        for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            arr_60 [i_18] [i_18] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2543525456362166398LL)) ? (arr_59 [i_4 + 1] [i_4] [i_18]) : (((/* implicit */unsigned long long int) 4294705152U))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)45511))))) : (((((/* implicit */_Bool) 2973771030135523201LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_59 [i_4 + 1] [i_18] [i_18])))));
            arr_61 [i_4 - 1] [i_18] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_18] [i_4])) ? (((var_2) ? (var_5) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned short)65154))))));
        }
        var_28 = ((/* implicit */long long int) arr_56 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4] [i_4]);
        /* LoopSeq 4 */
        for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            arr_64 [i_4] [i_19] = ((/* implicit */long long int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned int i_20 = 1; i_20 < 9; i_20 += 2) 
            {
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    {
                        arr_71 [i_4 + 2] [4LL] [i_20] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) : (var_7)));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 7055478032706229157LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_19]))))) / (((/* implicit */int) (unsigned short)24219)))))));
                        /* LoopSeq 2 */
                        for (short i_22 = 2; i_22 < 8; i_22 += 1) 
                        {
                            var_31 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)211))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (4685223672742065465ULL))))) ^ (19U)));
                        }
                        for (long long int i_23 = 1; i_23 < 11; i_23 += 3) 
                        {
                            arr_76 [i_23] [i_19] [i_20] [i_21] = ((((/* implicit */_Bool) ((long long int) arr_21 [i_4] [i_4] [i_21] [i_23 - 1]))) ? (((/* implicit */unsigned long long int) ((var_7) / ((-9223372036854775807LL - 1LL))))) : (((arr_51 [i_21] [i_20] [i_19] [i_4]) & (arr_43 [i_23]))));
                            arr_77 [i_23] = ((/* implicit */unsigned short) (((+(14687213663586760803ULL))) - (((/* implicit */unsigned long long int) ((int) (signed char)-30)))));
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_42 [(_Bool)0] [i_4 + 3] [i_20 - 1] [i_20 + 3] [i_23 - 1]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_4 + 1] [i_4] [i_4 + 1] [i_24])) ? ((~(arr_65 [i_24] [i_4 + 1] [i_4 + 2] [i_4 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))))))));
            arr_81 [i_24] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)59596)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 12; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 3) 
                {
                    {
                        arr_88 [i_4 + 3] [i_24] [i_25] [i_26] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_10 [i_4] [i_26] [(short)10] [i_26] [i_26] [i_26]))))) ? (((/* implicit */unsigned long long int) arr_54 [i_4] [i_4 + 1] [i_4 + 3] [i_4])) : (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_4 - 1])))))));
                        var_35 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_26] [i_26]))))) : (((((/* implicit */_Bool) 10328736709109668198ULL)) ? (((/* implicit */long long int) 2057911095)) : (3392082514202432152LL)))));
                        var_36 = ((/* implicit */long long int) arr_80 [(signed char)5]);
                    }
                } 
            } 
            arr_89 [i_4 - 1] [i_4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)17557)))) || (((/* implicit */_Bool) (unsigned char)61))));
            arr_90 [i_4] [i_4 + 3] [i_4] = ((/* implicit */_Bool) (((~(var_4))) >> (((var_7) - (8440428953098348382LL)))));
        }
        for (long long int i_27 = 2; i_27 < 9; i_27 += 2) 
        {
            var_37 &= ((/* implicit */long long int) (((-(14278532127883295265ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_2)))))));
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)25))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_17 [i_27 + 3] [i_4 + 3])));
            var_39 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 1146433108091835440ULL)) ? (arr_40 [i_4] [i_27] [(_Bool)1]) : (arr_54 [i_4] [i_4] [i_4 + 2] [i_27]))));
        }
        for (long long int i_28 = 0; i_28 < 12; i_28 += 2) 
        {
            arr_96 [i_4 - 1] [i_28] = ((/* implicit */long long int) 8ULL);
            /* LoopSeq 2 */
            for (unsigned int i_29 = 1; i_29 < 11; i_29 += 4) 
            {
                arr_100 [i_4] [i_28] [i_4] = ((/* implicit */short) ((long long int) arr_95 [i_4 + 1] [i_4 + 2]));
                /* LoopSeq 3 */
                for (unsigned short i_30 = 0; i_30 < 12; i_30 += 1) 
                {
                    arr_104 [i_28] [i_29] [i_30] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5228479331300629493LL))));
                    arr_105 [i_4 + 1] [i_30] [i_29] = ((/* implicit */long long int) (short)-8192);
                    arr_106 [i_4] [i_28] [i_29] [i_30] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)41097))))) & (((((/* implicit */_Bool) arr_56 [i_30] [i_29] [i_28] [i_4] [i_4])) ? (arr_93 [i_4 + 1] [i_30] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206)))))));
                }
                for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                {
                    var_40 = (+((+(((/* implicit */int) (unsigned char)36)))));
                    arr_110 [i_4 + 2] [i_28] [i_4] [i_28] &= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_4] [(signed char)2] [i_29 + 1]))))) ^ ((+(arr_93 [i_4 + 1] [i_4 + 1] [i_31 + 1]))));
                    var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7284687944670020019LL))));
                    var_42 += ((/* implicit */unsigned long long int) arr_82 [i_4 + 2] [i_28] [11LL] [i_31 + 1]);
                }
                for (long long int i_32 = 0; i_32 < 12; i_32 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_33 = 0; i_33 < 12; i_33 += 2) 
                    {
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) ^ (arr_1 [i_4 - 1]))))));
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) 8334432531373177992LL))));
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0)))) : (((var_5) & (((/* implicit */int) (signed char)-58))))));
                    }
                    var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) arr_80 [i_4 + 2]))));
                    arr_116 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_58 [i_28] [(signed char)4]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [4ULL] [i_28] [i_29 - 1]))))))) : (arr_26 [i_4] [i_28] [i_29] [i_29] [i_28])));
                    var_47 = var_9;
                }
                var_48 = ((/* implicit */unsigned char) ((arr_10 [i_29 - 1] [i_28] [i_29 + 1] [i_29 - 1] [i_29 + 1] [i_29 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_29] [i_28] [i_29 - 1] [i_29] [i_29 - 1] [i_29 - 1]))) : (arr_98 [i_29 + 1] [i_29] [i_29] [(short)2])));
                arr_117 [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_74 [i_4] [i_28] [i_29] [i_4] [i_28])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36226))) < (2411352411U)))) : (arr_97 [i_4 + 2] [i_4 + 2])));
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                arr_121 [i_4] [i_34] [i_34] = ((/* implicit */long long int) ((unsigned long long int) var_1));
                var_49 -= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */unsigned long long int) 6449535054936279038LL)) : (18446744073709551615ULL)));
            }
            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_3))))));
            arr_122 [i_4 + 1] [i_28] = ((/* implicit */unsigned short) (-((~(arr_30 [i_28] [i_4])))));
            arr_123 [i_28] [i_4] [i_4] = ((/* implicit */short) arr_114 [i_4 - 1] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4] [i_4 - 1]);
        }
        arr_124 [i_4] = ((/* implicit */unsigned long long int) var_2);
        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) arr_78 [i_4] [i_4 + 2] [i_4 + 1]))));
    }
    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((4294967295U) ^ (2976810003U)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(var_2)))))))));
    var_53 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) max((var_5), (((/* implicit */int) var_8))))) : (var_6)))));
    var_54 = ((/* implicit */unsigned short) (_Bool)1);
}
