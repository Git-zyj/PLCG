/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146525
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 3] [i_3 - 1] [i_3 + 1])) + ((-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8191)) ? (-658370930) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-70)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_11 [i_3] [i_3 + 2] [i_0] [i_3]))))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31660))) & (2394186437U)))))));
                            var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) -548505646)) && (((/* implicit */_Bool) 8226898657588137812LL)))))));
                            var_14 = ((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_3 [i_1]))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */int) ((_Bool) min(((unsigned char)146), (((/* implicit */unsigned char) (signed char)-1)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) 268434944);
                    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))));
                    arr_18 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8226898657588137815LL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))) ? (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50347)))))) : (((/* implicit */int) (unsigned short)42958))));
                    var_16 = ((/* implicit */unsigned int) ((137438953471ULL) * (((/* implicit */unsigned long long int) 3685292780U))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)55459))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((((/* implicit */int) (short)10875)) | (((/* implicit */int) (signed char)42)))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 983741362)) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 3] [i_1])) : (((/* implicit */int) arr_10 [i_0 - 4] [i_0 - 3] [i_1]))));
                                arr_26 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_9 [i_0 - 2] [i_1] [i_1]))) ? (((unsigned long long int) 3670016)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 3] [i_1])))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    arr_29 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_3 [i_1]) + (((((/* implicit */int) arr_19 [i_8] [i_1] [i_0])) + (((/* implicit */int) (unsigned char)24)))))));
                    var_20 = ((/* implicit */short) min((max((487730242U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16136))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-31)) + (arr_25 [i_1] [i_1] [i_8] [5] [i_1] [5] [i_1])))) ? (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) (unsigned short)22577)))) : (((((/* implicit */_Bool) 2710094285U)) ? (536870912) : (-1))))))));
                    var_21 = ((/* implicit */int) min((0U), (((/* implicit */unsigned int) -2147483625))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned char) arr_25 [i_1] [i_0 - 4] [i_1] [i_8] [i_8] [i_9] [i_9 + 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)227)) << (((((/* implicit */int) (unsigned char)249)) - (231)))))) : (((0ULL) >> (((-268434960) + (268434983))))))), (((/* implicit */unsigned long long int) 31))));
                        arr_32 [i_1] [i_0] [i_9 + 3] &= ((/* implicit */short) arr_1 [i_0 + 1] [i_1]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_36 [i_0] [i_1] [i_8] [i_8] [i_1] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_10] [i_1] [i_1])) ? (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_8] [i_1])), (var_11)))) : (((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_8] [i_8] [i_10] [i_10])) ^ (var_8))))))));
                        arr_37 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((((/* implicit */_Bool) (short)-24730)) || (((/* implicit */_Bool) var_8))))))), (((((/* implicit */_Bool) min((3770216974U), (((/* implicit */unsigned int) 795341995))))) ? (945691832) : (((((/* implicit */_Bool) 1900780858U)) ? (826686995) : (-475977638)))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_12] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12] [i_1] [i_8] [i_1] [i_1] [i_0]))) : (arr_21 [i_0] [i_1] [i_0] [i_12])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_40 [1LL] [i_1] [i_8] [i_1] [i_0])) == (var_10)))) : (((-795341979) / (var_3))))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_4) && (((/* implicit */_Bool) (unsigned short)48397)))) || (((/* implicit */_Bool) arr_3 [i_1])))))) ^ (3075516454U)));
                            arr_42 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_27 [i_0] [i_0])) - (61))))) & (((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)44287)) : (-1)))))), (5230203087480400401LL)));
                        }
                        for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            arr_45 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-127);
                            arr_46 [i_0] [i_0] [i_0] [i_11] [i_1] = ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_27 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (2286902073U))) + (((/* implicit */unsigned int) arr_24 [15] [10U] [i_8] [i_1] [i_0]))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)171)) + (arr_14 [i_0] [i_0] [i_1] [i_13])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_13]))))) : ((+(arr_34 [i_0] [i_1] [i_8] [i_11]))))));
                        }
                        for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
                        {
                            var_25 = ((/* implicit */int) ((((((/* implicit */int) (!(var_4)))) > (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_13 [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_5 [i_0]))) == (arr_1 [i_1] [i_1]))))) : (arr_21 [i_1] [i_8] [i_11] [i_14 + 1])));
                            var_26 = ((/* implicit */unsigned short) arr_48 [i_0] [i_1] [i_1] [i_8] [i_11] [i_11] [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                        {
                            var_27 = min((((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_8] [i_1] [i_0 - 3] [i_1] [i_0]))) * (601661010U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))));
                            arr_51 [i_0 - 4] [i_1] [i_8] [i_11] [(unsigned char)10] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_14 [i_0] [i_1] [i_1] [i_11])))), ((~(((((/* implicit */_Bool) 7836191841096446176LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10875)))))))));
                            var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned short)48397)), (3264951777631827247LL))) >> (((min((-1), (597213572))) + (51)))))) ? ((-(arr_31 [i_0 + 1] [i_1] [i_0] [i_11]))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_44 [i_15] [i_0] [i_8] [i_0] [i_0])))) ^ ((~(((/* implicit */int) (unsigned short)22585)))))))));
                        }
                        for (int i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                        {
                            arr_54 [i_0] [i_0] |= ((/* implicit */unsigned short) ((unsigned char) ((((-2099967388) & (((/* implicit */int) (short)21609)))) > (((/* implicit */int) arr_50 [i_0] [i_0] [i_8])))));
                            arr_55 [i_0] [i_1] [i_1] [i_8] [i_16] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) 785681246))), ((+(min((((/* implicit */unsigned int) arr_9 [i_1] [i_8] [i_11])), (4294967283U)))))));
                            arr_56 [i_0] [i_11] |= ((/* implicit */int) max((((/* implicit */long long int) (signed char)-1)), (max((((/* implicit */long long int) (~(2123533263)))), (-2402352801476387342LL)))));
                            var_29 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_20 [i_0 - 4] [i_8] [i_8])))));
                        }
                    }
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_59 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((max((((2147483636) - (245760))), (((/* implicit */int) (signed char)-1)))), (min((-1134490183), (((((var_3) + (2147483647))) >> (((((/* implicit */int) (unsigned short)30987)) - (30975)))))))));
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 18; i_19 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)22573))))), (((unsigned int) 753571029))))));
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_19] [i_1] [i_17])) << (((var_5) - (1781123728)))))) ? (((/* implicit */int) max(((unsigned short)22576), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))) : (((/* implicit */int) (!((_Bool)1)))))) < ((((~(((/* implicit */int) (unsigned short)42928)))) - (max((arr_25 [i_0] [i_18] [i_17] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */int) var_4)))))))))));
                                var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) | (arr_43 [(unsigned char)12] [(unsigned char)12] [i_18] [i_18] [2] [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_0 - 1] [i_1] [i_17] [i_18])) << (((((/* implicit */int) (unsigned char)69)) - (58)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [i_0 - 4] [i_17] [i_1])))))));
                                var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -1193388355))))))));
                            }
                        } 
                    } 
                    arr_64 [i_0] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1215048184)) ? (1193388354) : (((/* implicit */int) (short)10))))));
                }
                var_34 ^= ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_35 ^= ((/* implicit */unsigned char) max((14117852588814823319ULL), (((/* implicit */unsigned long long int) (unsigned char)134))));
    /* LoopSeq 3 */
    for (int i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) 588378672)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) arr_20 [i_20] [i_20] [16ULL])) : (-1303172446)))))))))));
        arr_68 [i_20] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)88)) ? (((((/* implicit */int) (signed char)-72)) / (((/* implicit */int) (_Bool)1)))) : (1747143268))));
        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((arr_3 [i_20]), (((/* implicit */int) (short)6765)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_20] [i_20] [i_20] [i_20])) && (((/* implicit */_Bool) arr_2 [i_20]))))))))));
        arr_69 [i_20] = ((/* implicit */signed char) var_11);
    }
    for (int i_21 = 0; i_21 < 16; i_21 += 2) /* same iter space */
    {
        arr_72 [i_21] = ((/* implicit */unsigned long long int) max((arr_28 [i_21] [i_21] [i_21]), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)13)), (arr_50 [i_21] [i_21] [i_21]))))));
        var_38 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-245756719), (-1630962867)))) || (((((/* implicit */_Bool) (short)19392)) && (((/* implicit */_Bool) (short)-13509))))))), (((unsigned long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 16; i_22 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 4) 
        {
            var_39 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_22] [i_23] [i_23] [i_23] [(unsigned char)16] [i_23] [i_23]))));
            arr_80 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)69)) - (4193280)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)249)) ? (201326592) : (4193280)))) : (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_22] [i_23])))))));
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_2)))) ? (((1412164145) + (((/* implicit */int) arr_71 [i_22] [i_23])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) == (((/* implicit */int) (short)8488)))))));
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_23])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_23] [i_22] [i_22] [i_22] [i_22])))))) ? (((((/* implicit */_Bool) arr_60 [i_22] [i_22] [i_22] [i_23] [i_22] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_22] [i_23] [i_23]))) : (3176640533U))) : (((/* implicit */unsigned int) (-(201326592))))));
            arr_81 [i_22] [i_23] = ((/* implicit */short) ((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned int) -4193280)) : (var_7))));
        }
        /* LoopSeq 1 */
        for (long long int i_24 = 0; i_24 < 16; i_24 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 112130343)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_35 [i_22] [i_24] [i_24] [i_22]))))));
            var_43 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_5 [i_22])) ? (((/* implicit */int) var_0)) : (-918920525))));
        }
        arr_84 [i_22] = ((/* implicit */short) ((-4193280) % (((/* implicit */int) arr_23 [i_22] [i_22] [i_22] [i_22] [i_22] [10] [i_22]))));
        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_22] [(_Bool)1] [i_22] [i_22] [i_22] [i_22])) ? (-112130330) : (((/* implicit */int) (short)31832))))) || (((/* implicit */_Bool) 226297542305540212ULL))));
        var_45 = ((arr_1 [i_22] [i_22]) / (arr_1 [i_22] [i_22]));
    }
    var_46 = ((/* implicit */signed char) min((918920531), ((-2147483647 - 1))));
}
