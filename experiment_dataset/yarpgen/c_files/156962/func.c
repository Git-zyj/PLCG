/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156962
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned int) ((signed char) arr_1 [i_0] [i_0]));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_2 [i_0])) - (27301)))));
        var_22 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (var_0)))) || (((/* implicit */_Bool) (unsigned char)222)));
        var_23 *= ((/* implicit */unsigned int) ((int) (signed char)-71));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10228932488937789883ULL)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (1241641887902142099ULL) : (((/* implicit */unsigned long long int) arr_5 [i_2 - 1]))))) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)104)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                arr_11 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || ((!(((/* implicit */_Bool) (unsigned short)65168))))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_3 - 2] [i_2] [i_2 - 1])))))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) (_Bool)0))));
            }
            var_28 = ((/* implicit */int) (signed char)-71);
        }
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1] [i_4] [i_4]), (((/* implicit */short) (signed char)76))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_4] [(short)9])) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [6LL])))))));
            var_30 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(var_17)))) + (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_12)))));
            arr_14 [i_1] [13ULL] = ((/* implicit */signed char) var_1);
        }
        for (short i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                arr_23 [i_5] [i_5] [i_5] = (+((+(var_0))));
                var_31 = ((/* implicit */int) ((short) (-(((((/* implicit */_Bool) 4930453666852873907ULL)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (short)27600)))))));
                arr_24 [i_1] [i_1] [i_5 - 2] [i_5] = ((/* implicit */unsigned char) max((31U), (((/* implicit */unsigned int) var_2))));
                var_32 ^= ((/* implicit */signed char) ((unsigned char) arr_10 [i_1] [i_1] [i_1]));
            }
            for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        {
                            arr_33 [i_5] [i_5] [i_7 + 1] [(unsigned char)6] [(short)3] = ((/* implicit */short) max((((/* implicit */int) var_4)), (((arr_32 [i_1] [i_1] [i_7 - 4] [i_1] [i_9 + 1]) ? (((/* implicit */int) arr_32 [i_1] [i_1] [i_7 - 3] [i_9 + 1] [i_1])) : (((/* implicit */int) arr_32 [i_7 - 4] [i_7] [i_7 + 1] [i_7] [i_7]))))));
                            var_33 = ((/* implicit */int) arr_13 [i_1] [i_8] [i_9]);
                            var_34 = ((/* implicit */long long int) ((3072834868620686210ULL) << (4ULL)));
                            var_35 += ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    arr_36 [i_5] [i_5 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)211))));
                    arr_37 [i_1] [i_5] [i_7 - 3] [i_5] = ((/* implicit */unsigned char) max((1982740121U), (((/* implicit */unsigned int) (unsigned short)1251))));
                    arr_38 [i_10] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_30 [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 1])) ? (((int) arr_27 [i_5] [i_5] [i_10])) : (min((((/* implicit */int) (_Bool)1)), (1716687263))))) - (((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-11512))))));
                }
                arr_39 [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)31))))), (var_0)));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        var_36 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_43 [i_1] [2ULL] [i_12 - 1])) ? (arr_42 [i_12] [i_12 + 1] [i_12 - 2] [i_12] [i_12 - 2] [i_12] [(signed char)7]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7 + 3] [i_1]))) : (3328913445U)))))), (((/* implicit */long long int) ((short) ((unsigned long long int) 3708191599U))))));
                        arr_45 [16] [i_5 - 2] [i_5] [i_5] [i_5 - 2] [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)11] [i_5] [5ULL]))) | (max((((/* implicit */unsigned long long int) (unsigned short)51704)), (12849990317792442507ULL)))));
                        arr_46 [i_12] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) arr_16 [i_5 - 1] [i_7 + 2]);
                    }
                    /* LoopSeq 3 */
                    for (signed char i_13 = 3; i_13 < 15; i_13 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */long long int) -1716687271)) > (-3387646230954732474LL)));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_16 [i_1] [i_5 - 1]))));
                    }
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        arr_53 [i_14] [i_5] [i_14] [i_5] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_19))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3830806141U)) ? (var_7) : (((/* implicit */unsigned long long int) arr_34 [i_11] [i_7] [i_5 - 1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_14])))))))) : ((-(((long long int) arr_29 [i_1] [i_7]))))));
                        arr_54 [i_1] [i_1] [i_1] [(short)9] [i_1] [i_1] [i_5] = ((/* implicit */signed char) max((((arr_40 [i_5 - 2]) || (((/* implicit */_Bool) var_3)))), ((_Bool)1)));
                        var_39 = ((/* implicit */long long int) 456095376732152963ULL);
                        var_40 = ((((/* implicit */_Bool) ((arr_29 [(short)2] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_29 [i_7 - 1] [i_5])) ? (((/* implicit */unsigned long long int) 1889437475)) : (arr_29 [i_1] [i_5]))));
                        var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-7687)) && (((((/* implicit */_Bool) 1982740131U)) || (((/* implicit */_Bool) arr_19 [i_14] [i_7] [i_1] [i_1]))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_58 [i_11] [i_5] [i_11] [i_11] [i_11] = ((/* implicit */short) min((6668527819610817353LL), (((/* implicit */long long int) 126955410U))));
                        var_42 = ((/* implicit */short) (+(arr_41 [i_1] [i_1] [i_5 + 1] [i_1])));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1982740131U)) ? (((/* implicit */int) (short)-11586)) : (((/* implicit */int) (unsigned short)3129))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? ((-(1644679673))) : (((/* implicit */int) arr_43 [i_5 - 1] [i_7 - 4] [i_16]))));
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_7] [i_1] [i_16])) ? (((/* implicit */int) arr_55 [i_5 - 1] [i_7] [i_16])) : (((/* implicit */int) var_1)))))));
                        var_46 = ((/* implicit */int) arr_55 [i_1] [i_5] [i_7 - 2]);
                        var_47 = ((/* implicit */long long int) ((5810895654345798042ULL) - (arr_26 [i_1] [i_7 - 4] [i_16])));
                    }
                    /* LoopSeq 4 */
                    for (short i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                    {
                        arr_65 [(short)7] [i_11] [i_5] [i_5 - 1] [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_3)) == (arr_48 [i_11] [i_5] [i_5 - 2]))));
                        arr_66 [i_5] [i_5 + 1] [i_7] [i_11] [i_5] = ((/* implicit */short) (-(((unsigned long long int) ((long long int) (_Bool)1)))));
                        var_48 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_48 [i_17] [i_17] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_1] [i_1]), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_60 [i_7] [i_17])) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551615ULL))))));
                    }
                    for (short i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_48 [i_1] [i_5] [i_11]), (((/* implicit */int) arr_40 [(signed char)13]))))) | (max((-6040016853265112411LL), (((/* implicit */long long int) (unsigned short)21147))))));
                        var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((_Bool) 22411878U)) ? (((((/* implicit */_Bool) 13516290406856677700ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) : (1243671300403204765ULL))) : (((/* implicit */unsigned long long int) var_0)))))));
                    }
                    for (short i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((((_Bool)1) ? (2474526774964264177LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7816)))))))) ? ((-(((/* implicit */int) ((short) var_4))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (5ULL)))))));
                        var_52 |= ((((/* implicit */_Bool) -208755047)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_5 - 1] [i_5] [5] [i_5 - 1] [i_5 + 1] [i_5])) && (((/* implicit */_Bool) arr_44 [i_5 + 1] [i_5 + 1] [1ULL] [i_5 + 1] [i_5 - 1] [i_5 - 1]))))) : ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_70 [i_1] [i_1] [i_7] [i_7 - 4] [i_11] [i_11] [i_7]))) < (var_16)))))));
                        var_53 *= (+(((/* implicit */int) arr_32 [i_19] [i_11] [i_5] [i_5] [i_1])));
                        arr_73 [i_5] [i_5 - 1] [i_11] [i_19] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_12 [(unsigned char)6])) > (var_7)));
                        var_54 ^= ((/* implicit */unsigned int) ((unsigned long long int) min(((~(((/* implicit */int) (short)-20204)))), (((((/* implicit */_Bool) 377690759U)) ? (((/* implicit */int) (unsigned short)44397)) : (((/* implicit */int) var_2)))))));
                    }
                    for (short i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2585334505U)))) ? (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)26527)))) / ((-(((/* implicit */int) (signed char)-85)))))) : (((((/* implicit */int) arr_25 [i_7 - 2])) - (((/* implicit */int) arr_25 [i_7 - 3]))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 4) 
                    {
                        var_57 *= ((/* implicit */unsigned short) 1982740131U);
                        arr_81 [i_5] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_1] [i_1] [i_1] [i_5] [i_1])))))));
                    }
                }
                for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_22] [i_22])) ? ((((!(((/* implicit */_Bool) var_4)))) ? (arr_35 [i_1] [i_1] [6] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(signed char)3] [(_Bool)1] [i_7] [(_Bool)1] [i_7] [i_7 + 2]))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((short) (signed char)63))) : (((/* implicit */int) (signed char)109)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 1) /* same iter space */
                    {
                        var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-44)))))));
                        var_60 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_35 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 1])) ? (2282858985983943940ULL) : (((/* implicit */unsigned long long int) var_17))))));
                        var_61 = ((/* implicit */short) (+(((4294967280U) & (arr_77 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 1] [i_5] [i_5 - 2])))));
                        var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) (-(var_17))))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) /* same iter space */
                    {
                        var_63 = ((/* implicit */signed char) (short)31838);
                        arr_88 [i_1] [(signed char)16] [i_7 - 2] [i_22] [i_5] [i_24] = (i_5 % 2 == zero) ? (((/* implicit */_Bool) min(((~(arr_5 [i_1]))), (((((/* implicit */int) arr_20 [i_5] [i_5 - 1] [i_5] [i_5 - 2])) << (((((/* implicit */int) arr_20 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1])) - (230)))))))) : (((/* implicit */_Bool) min(((~(arr_5 [i_1]))), (((((/* implicit */int) arr_20 [i_5] [i_5 - 1] [i_5] [i_5 - 2])) << (((((((/* implicit */int) arr_20 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1])) - (230))) + (181))))))));
                        var_64 *= ((/* implicit */short) max((-3402032051362133386LL), (min((((/* implicit */long long int) (signed char)-100)), (2474526774964264177LL)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 1) /* same iter space */
                    {
                        var_65 = ((/* implicit */int) ((-6668527819610817371LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-19726)))));
                        var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) (-(10005220603212105339ULL))))));
                        arr_92 [i_1] [i_1] [i_5] [i_1] [i_22] [i_25] = ((/* implicit */short) arr_64 [i_7 - 1] [i_7] [i_7 - 4]);
                    }
                    /* LoopSeq 2 */
                    for (int i_26 = 0; i_26 < 18; i_26 += 1) /* same iter space */
                    {
                        arr_95 [i_5] [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned char) 182916207243799580LL);
                        var_67 ^= ((/* implicit */unsigned char) var_10);
                        var_68 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)98))));
                    }
                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 18; i_27 += 1) /* same iter space */
                    {
                        var_69 = ((/* implicit */short) ((((/* implicit */_Bool) arr_97 [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1])) ? (arr_97 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1]) : (arr_97 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1])));
                        arr_98 [0LL] [i_5 - 2] [13U] [i_5] [13U] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                    }
                }
            }
            arr_99 [i_5] = ((/* implicit */unsigned int) var_8);
        }
        arr_100 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_42 [(short)8] [(short)8] [(short)8] [9LL] [i_1] [i_1] [i_1])))) ? (3402032051362133388LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
        var_70 = 2147483647;
    }
    var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (signed char)100))))) ? ((+(((/* implicit */int) (signed char)56)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((_Bool) var_1)), ((!(((/* implicit */_Bool) 1263460505)))))))) : (max((18446744073709551615ULL), (8867974812504707095ULL)))));
    var_72 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 492073960)) ? (10418646510767516216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_4)))))) : (max((var_0), (((/* implicit */unsigned int) (signed char)120))))))) ? (8023282581848461212ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
    var_73 = ((/* implicit */long long int) var_3);
}
