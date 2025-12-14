/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118626
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                            var_10 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) > (14629591150184391658ULL)));
                            var_11 = ((/* implicit */short) ((long long int) ((unsigned int) arr_13 [i_3] [i_3] [i_1] [i_3] [i_3 - 2])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned char) ((long long int) (short)-32759));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) | (-271982280))) : (((/* implicit */int) arr_6 [i_3] [i_5]))));
                            var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [i_3 - 1] [i_5]) : (9223372036854775807LL)));
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] [17U] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)35702)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((10105215322133392455ULL) >= (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3] [i_1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_3])), (9223372036854775807LL)))) : (arr_15 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3] [i_3 - 1])))));
                            var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 3590251485U)))) < (((((/* implicit */long long int) ((/* implicit */int) (short)-31907))) - (1199432110358405797LL))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((1732157799), (((/* implicit */int) (short)-32758))))) ? (((((/* implicit */_Bool) arr_8 [14U] [i_1] [0] [i_6])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_2] [i_1] [i_1] [i_1] [i_6])) ^ (((/* implicit */int) arr_16 [0] [i_1] [i_2] [i_3] [i_6]))))) : (((((/* implicit */_Bool) 704715815U)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_2] [i_1]))) ? (((/* implicit */int) ((signed char) (short)32760))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0])) < (((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))))))))));
                            arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (~(((((/* implicit */_Bool) 573427340)) ? (((/* implicit */unsigned long long int) 573427326)) : (arr_17 [i_0] [i_0] [i_2] [i_0] [i_6]))))));
                        }
                        var_17 += ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5452653408045309669LL))))) ? (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3 - 1]))))) : (max((-5374671171941680353LL), (((/* implicit */long long int) 704715830U)))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_0] = (+(((/* implicit */int) ((unsigned short) arr_0 [i_0]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) 573427317))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_23 [i_8]))));
                            arr_28 [i_1] = ((/* implicit */short) (signed char)(-127 - 1));
                            var_20 = ((/* implicit */signed char) ((int) arr_1 [i_7] [i_0]));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)25865)), (arr_11 [i_0] [i_1] [i_1] [i_9])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1] [i_1])), ((unsigned short)43817)))) : (((/* implicit */int) ((short) arr_29 [i_0] [i_1] [i_0] [i_7] [i_9])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_7] [i_9]))) : (((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned short)2047)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-125)))) : (((((/* implicit */_Bool) (short)-31899)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25867))) : (arr_2 [16U] [i_2]))))));
                            var_22 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)25850)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9378))) : (8746485274116919872ULL))));
                            var_23 = ((/* implicit */signed char) ((short) (short)25850));
                            var_24 ^= ((/* implicit */unsigned long long int) min((((short) (short)-25868)), (((short) (signed char)(-127 - 1)))));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                    {
                        var_25 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -9001153702843332571LL))))) / (arr_31 [i_10] [i_1] [i_10] [i_10]))));
                        var_26 = ((/* implicit */long long int) ((max((8878913680679575983LL), (((/* implicit */long long int) (unsigned short)49089)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((arr_29 [i_0] [i_1] [i_1] [i_0] [i_10]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1])))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_6 [i_1] [i_10])) : (((/* implicit */int) (short)-1)))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_27 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_27 [i_12] [i_11] [i_2] [i_2] [i_1] [i_12])) * (((/* implicit */int) arr_27 [(short)2] [i_1] [i_2] [i_11] [i_11] [i_12])))) / (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)56167)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_2] [i_12] [i_12] [i_12]))))));
                            var_28 = ((/* implicit */unsigned char) arr_32 [i_0] [i_0] [i_2] [i_12]);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_29 += ((/* implicit */long long int) ((int) 573427326));
                            var_30 = ((_Bool) (_Bool)1);
                            arr_42 [i_1] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) (short)25866)) ? (((/* implicit */unsigned long long int) arr_30 [8] [i_11] [i_2] [i_1] [i_1] [i_0])) : (arr_15 [i_0] [i_1] [i_2] [i_2] [i_11] [i_13] [i_13])))) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)-25867))) ? (((/* implicit */int) (short)-5988)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23166))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24611)))))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_27 [i_0] [i_13] [i_13 - 1] [i_13] [i_13 - 1] [(short)20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_13] [i_13 - 1] [i_13] [i_13] [(unsigned char)8]))) : (-3936878145335747222LL))))))));
                        }
                        arr_43 [i_1] = ((2688190336907915938ULL) * (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_26 [i_2] [i_2])) ? (((/* implicit */int) arr_39 [i_0] [i_1] [i_1] [i_2] [i_11])) : (((/* implicit */int) arr_4 [i_11] [i_1] [i_0]))))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30573)) ? (-1LL) : (((/* implicit */long long int) 4294967285U))))) || (((((/* implicit */_Bool) 13193006235864126251ULL)) || (arr_16 [i_11] [i_2] [i_2] [i_1] [i_0])))));
                    }
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)907)) >> (((1221753256U) - (1221753249U)))));
                    arr_44 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_34 += ((/* implicit */long long int) ((unsigned short) 5191131028076624793LL));
                    var_35 ^= ((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)-1)), (((unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) ((_Bool) ((signed char) 4252280171325712587ULL))))));
                }
            } 
        } 
        arr_45 [i_0] [i_0] = (+((+(min((-5653485585055112199LL), ((-9223372036854775807LL - 1LL)))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_36 = (~(((/* implicit */int) (short)25867)));
        arr_48 [i_14] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [i_14] [i_14])))));
        var_37 = (((!(((/* implicit */_Bool) (-(arr_11 [i_14] [i_14] [(short)6] [i_14])))))) ? (((/* implicit */int) ((signed char) 4294967286U))) : (((/* implicit */int) (short)-1)));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)73))));
        arr_51 [i_15] = ((/* implicit */signed char) (short)-25866);
        var_39 = ((/* implicit */unsigned long long int) arr_10 [10U] [i_15] [10] [i_15]);
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) arr_4 [i_17] [8U] [i_16]))));
            /* LoopSeq 2 */
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 640485911955473704ULL))) ? ((~(((/* implicit */int) (signed char)111)))) : (((((/* implicit */int) arr_1 [i_17] [i_16])) * (((/* implicit */int) (short)31))))));
                arr_63 [i_16] [i_18] [i_17] [i_16] = ((/* implicit */signed char) (unsigned short)50881);
                var_42 = arr_55 [(_Bool)1];
                arr_64 [i_16] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40925)))))));
            }
            for (unsigned short i_19 = 0; i_19 < 15; i_19 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_20 = 3; i_20 < 14; i_20 += 4) /* same iter space */
                {
                    arr_72 [i_16] [i_16] [i_16] [i_19] [i_20] = ((/* implicit */unsigned short) (~(262143)));
                    var_43 = (_Bool)1;
                }
                for (unsigned int i_21 = 3; i_21 < 14; i_21 += 4) /* same iter space */
                {
                    arr_75 [i_16] [i_17] [i_16] [i_21 - 2] = ((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_15 [i_16] [i_16] [i_17] [i_19] [i_19] [i_21] [i_21 - 3])));
                    var_44 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_25 [i_16] [i_16] [i_17] [i_17] [i_19] [i_16] [i_21]) > (((/* implicit */unsigned int) arr_55 [i_16])))))));
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 15; i_22 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_16] [i_21 + 1] [i_21 - 1] [i_21 + 1])) ? (((unsigned int) arr_33 [i_17] [i_19])) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (-98574135))))));
                        arr_78 [i_19] [i_19] [i_19] [i_21] [i_19] &= ((/* implicit */long long int) (unsigned short)11070);
                    }
                    for (short i_23 = 0; i_23 < 15; i_23 += 1) /* same iter space */
                    {
                        arr_81 [i_16] = ((/* implicit */_Bool) ((short) arr_80 [i_23] [i_21 - 2] [i_19] [i_19] [(_Bool)1] [i_16]));
                        arr_82 [i_16] [i_23] [i_21] [i_19] [i_17] [i_16] [i_16] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_17] [i_17]));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_91 [i_16] [i_16] [i_19] [i_24] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25848)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11070))))) / (arr_79 [i_16] [i_17] [i_25])));
                            arr_92 [i_16] [i_16] [i_16] [i_24] [i_25 - 1] = ((/* implicit */short) ((arr_49 [i_25 - 1] [i_25 - 1]) > (((/* implicit */unsigned long long int) -6510844076323404331LL))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (int i_26 = 0; i_26 < 15; i_26 += 3) 
            {
                var_46 = ((/* implicit */unsigned int) (unsigned short)0);
                var_47 = ((unsigned int) (!(((/* implicit */_Bool) 789944807U))));
            }
            for (long long int i_27 = 2; i_27 < 13; i_27 += 4) 
            {
                arr_101 [i_16] [4] [i_17] [i_16] = ((/* implicit */unsigned short) (!((!((_Bool)0)))));
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 15; i_29 += 2) 
                    {
                        {
                            var_48 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) arr_66 [i_27] [i_17] [(unsigned char)10])) : (((/* implicit */int) (short)11185)))));
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((unsigned char) arr_84 [i_16])))));
                            arr_108 [i_16] [i_16] [i_16] [i_28] [i_29] = ((((/* implicit */_Bool) 8868414131106644293ULL)) ? (((/* implicit */int) arr_86 [i_29] [i_16] [i_27 + 2] [i_16] [i_16])) : (((/* implicit */int) (short)-25873)));
                        }
                    } 
                } 
                arr_109 [i_16] [i_17] [i_16] = ((/* implicit */_Bool) (+(((int) arr_12 [i_27 + 1] [(signed char)21] [i_17] [i_16] [i_16]))));
                /* LoopSeq 2 */
                for (int i_30 = 0; i_30 < 15; i_30 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 0; i_31 < 15; i_31 += 2) 
                    {
                        var_50 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_16] [i_31] [i_27 - 1] [i_31] [(_Bool)0]))));
                        arr_115 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((arr_87 [i_16] [i_17] [i_27 + 2] [i_30] [i_16]) / (arr_87 [i_16] [i_17] [i_27 + 2] [i_30] [i_16])));
                    }
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) -5028380574708540193LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_54 [i_16] [i_17]))));
                }
                for (int i_32 = 0; i_32 < 15; i_32 += 1) /* same iter space */
                {
                    arr_118 [i_16] [i_17] [i_17] [i_32] [i_16] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 9578329942602907322ULL)))));
                    arr_119 [i_16] [i_16] [i_27 + 2] [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_16] [i_17]))))) : (((/* implicit */int) ((signed char) arr_116 [i_16] [i_16])))));
                    arr_120 [i_16] [i_16] [i_27] [i_16] [(short)10] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)40127)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                    arr_121 [i_16] [i_17] [i_27] [i_27] = ((/* implicit */_Bool) ((long long int) arr_47 [i_27 + 2]));
                }
            }
            arr_122 [i_16] = ((/* implicit */signed char) ((int) 4127901454U));
            /* LoopSeq 1 */
            for (int i_33 = 0; i_33 < 15; i_33 += 2) 
            {
                var_52 += ((/* implicit */unsigned char) ((((_Bool) (short)3933)) ? (1346955904U) : (((((/* implicit */_Bool) (unsigned short)21630)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_105 [i_33] [i_17] [i_33]))) : (arr_56 [i_33] [i_16])))));
                arr_125 [i_16] [i_17] [i_33] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 256668164125666177LL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL))));
            }
        }
        arr_126 [i_16] = ((/* implicit */_Bool) ((arr_117 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) ? (((/* implicit */int) arr_117 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_117 [i_16] [i_16] [i_16] [i_16] [i_16] [(short)0]))));
        var_53 = ((/* implicit */signed char) arr_11 [i_16] [(short)2] [i_16] [i_16]);
    }
    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) 10726655713799968478ULL)) ? ((~(((((/* implicit */_Bool) var_4)) ? (10726655713799968464ULL) : (6ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0))))));
    var_55 = ((/* implicit */int) var_3);
    var_56 = ((/* implicit */short) (+(10230762014697053054ULL)));
}
