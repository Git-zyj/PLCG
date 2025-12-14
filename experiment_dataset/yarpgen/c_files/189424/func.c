/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189424
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_8))));
    var_20 |= ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)46627)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_0))))) : (-5528746730110003501LL))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])) & (((/* implicit */int) (_Bool)1))));
        var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14923))) : (arr_1 [8]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2]))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_24 = ((/* implicit */short) max((var_24), ((short)-1)));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_25 = ((((/* implicit */_Bool) var_4)) ? (arr_11 [(unsigned char)0] [i_1] [(unsigned char)0] [i_0 + 2] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))));
                            var_26 += ((/* implicit */short) (((-2147483647 - 1)) > (((/* implicit */int) (unsigned char)15))));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-5)) + (2147483647))) << (((arr_1 [i_0]) - (2389292722U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_2])))))) : ((-(-5528746730110003501LL)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_28 += ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                            var_29 *= ((/* implicit */long long int) arr_14 [i_0 + 1] [i_3] [i_3]);
                            var_30 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_7))) * (((/* implicit */int) var_4))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            var_31 *= ((/* implicit */unsigned short) 5528746730110003500LL);
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_0] [i_6] [i_1]))) : (var_9))))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_15))));
                            var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_3]))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0 - 2]))));
                        }
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned int) 1191836340)) : (arr_1 [i_0 - 1]))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((4194303LL) >= (2767032550998664331LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [i_0] [i_0] [i_0 + 2] [i_0] [i_0])))) : (arr_1 [i_0 - 2])));
        /* LoopNest 3 */
        for (unsigned char i_8 = 4; i_8 < 11; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    {
                        var_37 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_10] [i_9])) + (2147483647))) << (((arr_1 [i_0]) - (2389292722U)))));
                        /* LoopSeq 2 */
                        for (short i_11 = 4; i_11 < 13; i_11 += 3) 
                        {
                            var_38 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_23 [i_9] [i_8]))))) * (((/* implicit */int) var_5))));
                            arr_33 [i_10] [i_10] [i_9] [i_8 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_12))) & (((/* implicit */int) arr_0 [i_0] [i_8 + 1]))));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            var_39 += ((/* implicit */long long int) (unsigned short)65528);
                            var_40 += ((/* implicit */signed char) arr_5 [i_0] [i_8] [i_9]);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_13 = 2; i_13 < 12; i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_41 = ((/* implicit */short) arr_8 [i_13] [i_13] [i_13] [10LL]);
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 2767032550998664334LL)) || (((/* implicit */_Bool) arr_44 [i_13]))))), ((unsigned short)18908))))));
                        }
                        for (int i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) max((min((arr_9 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16]), (((/* implicit */long long int) arr_19 [i_16 + 1] [i_14] [i_14] [i_16 + 1] [i_18])))), (((/* implicit */long long int) var_16)))))));
                            arr_54 [(signed char)0] [(signed char)0] [i_15] [i_15] [i_15] [(short)10] [i_18] = ((/* implicit */unsigned short) arr_24 [i_13 - 2] [i_13 - 2] [i_16 + 1]);
                        }
                        var_44 = (~(((((/* implicit */_Bool) arr_25 [i_13 + 1] [i_16 + 1] [i_15] [i_15])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [12U] [12U] [12U] [i_16] [(_Bool)1] [i_16])) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(signed char)9] [i_14] [4LL] [i_14]))) != (14846285079601237625ULL)))))));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_16 + 1] [i_16] [i_13] [i_13 + 2] [i_13])) ? (((/* implicit */int) arr_19 [i_13 + 1] [(unsigned short)5] [i_14] [i_13 + 1] [i_13])) : (((/* implicit */int) (unsigned short)32910))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_16] [i_14] [i_14] [i_16 + 1] [i_13 - 2] [i_13]))) : (((((/* implicit */_Bool) (~(arr_46 [i_13 - 2] [i_13 - 2] [i_15])))) ? (((((/* implicit */_Bool) 2767032550998664338LL)) ? (arr_15 [(short)0] [i_14] [i_15] [i_16 + 1] [(unsigned char)9] [i_16 + 1] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_13] [i_13] [i_15] [i_13] [i_15]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_51 [i_13] [i_13] [i_13] [i_13] [i_14])) : (var_8))))))));
                    }
                } 
            } 
        } 
        var_46 += ((/* implicit */_Bool) -8464549988506496525LL);
    }
    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
    {
        var_47 = ((/* implicit */_Bool) arr_57 [i_19]);
        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) arr_56 [i_19] [i_19]))));
        var_49 -= ((/* implicit */short) 17515618190226004744ULL);
        var_50 ^= ((/* implicit */unsigned short) var_14);
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_51 = ((/* implicit */short) (+(((/* implicit */int) ((288229276640083968ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)8] [i_20] [i_20]))))))));
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) 18446744073709551615ULL))));
            var_53 = ((/* implicit */unsigned char) ((arr_13 [i_20] [i_20] [i_21]) && (((((/* implicit */_Bool) arr_17 [i_21] [i_21] [i_20] [i_20] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) ((((var_9) + (9223372036854775807LL))) << (((arr_11 [i_20] [i_20] [i_20] [i_20] [i_21]) - (454417171147963827LL))))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_22 = 0; i_22 < 13; i_22 += 4) 
            {
                var_54 += ((/* implicit */unsigned char) var_11);
                var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) 2767032550998664340LL))));
                var_56 ^= var_5;
                var_57 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46626)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)-103))))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_56 [i_20] [i_22])) + (((/* implicit */int) (unsigned char)138))))));
                var_58 = ((/* implicit */short) arr_47 [i_22] [i_21] [i_20]);
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 13; i_24 += 3) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_73 [i_20] [i_21] [i_23] [i_25] [i_25] [i_20] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5528746730110003526LL)) ? (((((/* implicit */int) (unsigned short)18908)) % (((/* implicit */int) arr_23 [i_23] [i_21])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)54019)) : (((/* implicit */int) arr_18 [(short)1] [i_24] [i_20] [i_21] [i_20] [i_20]))))) ? (((/* implicit */int) (unsigned short)18908)) : (((/* implicit */int) var_10))))));
                            var_59 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_67 [i_20] [i_20] [i_20] [i_24] [i_25])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_20] [i_21]))) <= (15U)))) : (1073741823))) > (((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_20] [i_23] [i_23]))))) ? (((/* implicit */int) (unsigned short)46627)) : (((/* implicit */int) (unsigned short)18))))));
                            var_60 = ((/* implicit */unsigned long long int) min((var_60), (((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -2767032550998664332LL)) : (((((/* implicit */_Bool) arr_29 [i_25] [i_24] [i_23] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44386))) : (arr_64 [i_20]))))) : (arr_67 [i_20] [i_21] [i_20] [i_20] [i_23])))));
                            var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_38 [i_25])), ((unsigned short)65535)))), (((((/* implicit */int) (unsigned char)10)) + (((/* implicit */int) (signed char)-120))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65515))))) - (((((/* implicit */int) arr_26 [i_20] [i_20])) ^ (((/* implicit */int) (_Bool)0)))))) : ((+(((/* implicit */int) ((18446744073709551604ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 3) 
                {
                    var_62 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_20] [i_21] [i_23] [1U])) ? (((/* implicit */int) arr_49 [i_20] [i_21] [i_23] [i_26])) : (((/* implicit */int) (_Bool)1))));
                    arr_78 [i_20] [i_21] [i_20] [i_20] = ((/* implicit */unsigned char) arr_61 [i_20] [i_23]);
                    arr_79 [10LL] [10LL] [i_23] [i_21] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_20])) ? (((/* implicit */int) arr_70 [i_20] [i_20] [i_20] [i_20] [i_21])) : (((/* implicit */int) arr_16 [i_20] [i_20] [0U] [i_20] [i_20]))))) ? (((/* implicit */int) arr_42 [i_26] [i_23])) : (((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (short i_27 = 4; i_27 < 12; i_27 += 4) 
                    {
                        var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) ((unsigned long long int) (unsigned short)23)))));
                        var_64 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_20])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)13))))) ^ (arr_72 [i_20] [i_20] [i_23] [i_26] [i_20] [i_27 - 3])));
                    }
                    for (short i_28 = 3; i_28 < 12; i_28 += 4) 
                    {
                        var_65 = ((/* implicit */long long int) min((var_65), (2767032550998664331LL)));
                        var_66 = ((/* implicit */signed char) ((short) -1LL));
                        var_67 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_85 [i_20] [i_28] [i_23] [i_21] [i_28 - 1] [i_23])) ? (arr_64 [i_28 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_20] [i_20] [i_28] [i_20] [i_28 - 3] [i_23])))));
                    }
                    var_68 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_21] [i_21] [i_20])) ? (((/* implicit */int) arr_45 [i_20] [i_21] [i_23] [i_26])) : (((((/* implicit */_Bool) arr_26 [i_20] [i_20])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)18907))))));
                }
            }
            /* vectorizable */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
            {
                var_69 *= (((((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_35 [(signed char)10] [i_21] [i_29] [i_20] [(unsigned char)2])))) * (((/* implicit */int) (_Bool)1)));
                var_70 += ((/* implicit */int) ((((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)-30694)) + (30722))))) < (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-18))))));
                var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_20] [i_20] [i_29] [i_20] [i_20])) ? (((/* implicit */int) ((short) arr_83 [i_29] [i_21] [i_21]))) : (((/* implicit */int) arr_2 [i_20] [i_29] [i_29]))));
                var_72 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (8411075028778294916ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_20]))) : (arr_67 [6U] [i_21] [i_29] [i_21] [i_21])));
            }
            for (signed char i_30 = 0; i_30 < 13; i_30 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_31 = 1; i_31 < 12; i_31 += 2) 
                {
                    var_73 -= ((/* implicit */_Bool) 4398044413952LL);
                    /* LoopSeq 1 */
                    for (unsigned int i_32 = 2; i_32 < 12; i_32 += 2) 
                    {
                        var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) (_Bool)1))));
                        arr_97 [i_20] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_21] [i_21] [i_30] [i_30]))) | (arr_64 [i_20])));
                    }
                }
                for (unsigned char i_33 = 3; i_33 < 11; i_33 += 3) /* same iter space */
                {
                    var_75 = ((/* implicit */unsigned char) max((var_75), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */int) min((var_2), (((/* implicit */short) arr_12 [i_20] [i_20] [i_20] [i_30] [i_33] [i_33]))))), ((+(((/* implicit */int) arr_38 [i_20]))))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18907))) : (min((arr_82 [i_20] [(short)8] [i_20] [i_33]), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                    var_76 = (unsigned short)52873;
                }
                for (unsigned char i_34 = 3; i_34 < 11; i_34 += 3) /* same iter space */
                {
                    var_77 &= ((/* implicit */short) ((((((/* implicit */_Bool) min((var_14), (var_4)))) && (((/* implicit */_Bool) ((long long int) var_13))))) || ((((((_Bool)0) && (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) arr_69 [i_30]))))));
                    var_78 += var_18;
                    var_79 += ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_2 [i_20] [i_20] [7U])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_101 [12] [i_34 - 2] [12] [i_34 + 1])) || (((/* implicit */_Bool) arr_101 [(signed char)12] [i_34 + 2] [i_34] [i_34 + 1])))))));
                    var_80 = arr_71 [(_Bool)1] [(_Bool)1] [i_21] [i_21] [i_20];
                }
                for (unsigned char i_35 = 3; i_35 < 11; i_35 += 3) /* same iter space */
                {
                    var_81 -= ((/* implicit */unsigned char) (short)11359);
                    var_82 = ((/* implicit */_Bool) max((var_82), (((/* implicit */_Bool) (~(arr_67 [i_20] [i_21] [i_20] [i_35] [i_35]))))));
                    var_83 = ((/* implicit */short) var_8);
                }
                /* LoopNest 2 */
                for (short i_36 = 0; i_36 < 13; i_36 += 3) 
                {
                    for (signed char i_37 = 0; i_37 < 13; i_37 += 3) 
                    {
                        {
                            arr_110 [i_36] [i_21] [i_30] [(_Bool)0] [i_30] |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_30] [i_21] [i_36])) || (((/* implicit */_Bool) min((arr_90 [i_20] [i_21]), ((signed char)-24)))))))));
                            var_84 *= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_58 [i_20])) ? (((/* implicit */int) arr_41 [i_20])) : (((/* implicit */int) arr_29 [i_21] [i_21] [i_37] [i_36])))) + (2147483647))) >> (((((((/* implicit */int) var_0)) - (((/* implicit */int) arr_12 [i_20] [i_20] [i_21] [i_30] [i_36] [i_36])))) + (87)))));
                            var_85 ^= ((/* implicit */signed char) (_Bool)0);
                            arr_111 [i_20] [i_21] [12LL] [(unsigned char)0] [12LL] [(unsigned short)10] [i_30] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((arr_98 [i_20] [i_21] [i_30]) > (((/* implicit */long long int) ((/* implicit */int) (short)-11359))))) ? ((+(((/* implicit */int) arr_56 [i_37] [i_37])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_21])) || (((/* implicit */_Bool) arr_83 [i_20] [i_20] [i_20])))))))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_20] [i_20] [i_37]))) ^ (arr_65 [i_20]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0)))))))));
                        }
                    } 
                } 
                var_86 = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && ((_Bool)1)))) + (((/* implicit */int) arr_107 [i_20])))), ((-(((/* implicit */int) (short)-141))))));
                var_87 &= (short)157;
            }
        }
        var_88 = ((/* implicit */unsigned short) max((var_88), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) && ((_Bool)1)))))))));
    }
}
