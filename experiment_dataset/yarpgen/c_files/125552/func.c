/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125552
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) var_0)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (4294967295U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [(signed char)12] = ((/* implicit */_Bool) ((13U) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15170))) : (var_2)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */int) (((_Bool)0) ? (17442073458033816392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_3 - 1] [(short)11] [i_1] [10] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_1]);
                            var_13 = ((/* implicit */short) ((14766817771649525079ULL) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)104)))))));
                            arr_15 [i_1] [i_3 - 4] [i_2] [4LL] [i_1] [i_1] = ((/* implicit */short) ((signed char) arr_0 [i_0]));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((arr_6 [i_1] [i_3] [i_3] [i_3 - 2]) / (arr_6 [i_1] [i_3 - 1] [i_3 - 2] [i_3 - 2])));
                        }
                        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)22))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 2464031347227734365LL)) ? (((/* implicit */int) (short)-27423)) : (((/* implicit */int) (short)15214)))))));
                            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_3 - 3] [8LL] [i_1 - 1] [i_0])) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) var_9))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_3] [i_1] [i_2] [i_3] [(unsigned short)13] [i_2 + 1]))));
                            arr_23 [(short)7] [i_1] [i_1] [i_3 - 4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (short)30479)) : (((/* implicit */int) (short)27423)))))));
                            arr_24 [i_0] [i_1 - 1] [i_2] [i_2] [(unsigned short)6] [i_1] = (~(((/* implicit */int) (short)27423)));
                        }
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_8)))))));
                        var_20 = ((/* implicit */int) ((signed char) arr_22 [i_1]));
                    }
                } 
            } 
        }
        for (signed char i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) var_3);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        arr_34 [4] [6LL] [(short)10] |= ((short) (_Bool)1);
                        arr_35 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16376)) % (((/* implicit */int) arr_19 [i_0] [i_0] [i_9] [i_8] [i_0] [i_0]))));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_22 |= ((/* implicit */short) ((((/* implicit */int) (short)-31026)) != (((/* implicit */int) (signed char)-99))));
                            arr_38 [i_7] [(short)19] [i_8] [i_7] [0ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)27423)) : (((/* implicit */int) arr_27 [i_7 - 1] [i_7 - 1] [17U]))));
                            var_23 = ((/* implicit */unsigned int) ((arr_9 [i_7] [i_8] [i_7 + 2] [i_7]) / (((/* implicit */long long int) arr_6 [i_7] [i_7 - 1] [i_7 + 2] [i_9]))));
                            var_24 |= ((/* implicit */unsigned char) (!(arr_26 [i_7] [i_7] [(signed char)10])));
                        }
                        for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) 12675098438472261588ULL);
                            arr_41 [i_11] [i_9] [i_7] [i_7] [19ULL] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-15215))));
                            var_26 *= ((/* implicit */_Bool) var_2);
                            var_27 = ((/* implicit */signed char) (_Bool)1);
                            arr_42 [(signed char)2] [i_7] [i_7] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)2271)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1622900540U)));
                        }
                        arr_43 [i_8] [19] [i_8] [i_7] [i_8] = ((/* implicit */int) ((short) var_8));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_28 = ((/* implicit */int) (~(((unsigned long long int) (short)15212))));
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15226)) && (((/* implicit */_Bool) 0U))));
                    var_30 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))));
                    arr_49 [i_7] = ((/* implicit */short) 5771645635237290049ULL);
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_33 [i_14]))));
                    arr_52 [i_7] [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_7] [i_7])) || (((((/* implicit */int) (short)-15187)) == (((/* implicit */int) var_9))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8303))))) ? (((((/* implicit */int) (short)11130)) + (arr_10 [i_14] [i_7] [i_7] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-15196)) || (((/* implicit */_Bool) (short)20393)))))));
                    arr_53 [i_0] [i_7] [13U] = ((2677989672U) >> (((/* implicit */int) (short)0)));
                }
                arr_54 [i_7] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_7] [i_12]))));
                var_33 = (short)-24183;
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (-(arr_33 [i_0]))))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    for (long long int i_17 = 2; i_17 < 20; i_17 += 1) 
                    {
                        {
                            arr_62 [i_0] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_16] [(signed char)11] [i_16] [i_16])) ? (var_4) : (((/* implicit */int) arr_48 [i_0] [i_0] [i_7]))))));
                            arr_63 [i_7] [i_7] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_0] [(short)3] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_64 [2LL] [(signed char)6] [i_16] [i_7] = ((/* implicit */unsigned int) (+(arr_9 [i_7 + 2] [i_0] [i_15] [i_16])));
                            arr_65 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-15215)) % (((/* implicit */int) (unsigned short)2987))));
                            arr_66 [i_0] [i_7 + 1] [i_0] [(signed char)0] [i_15] [i_16] [(unsigned char)12] |= (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_7] [i_15] [i_7] [i_0] [i_17])));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_18 = 1; i_18 < 21; i_18 += 1) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4294967295U)) + (3541007845988776022ULL)));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_7 + 2] [i_7 - 1] [i_7] [i_7] [i_7 + 2] [i_18 + 1])) ? (arr_51 [i_7 + 2] [i_7 + 1] [i_7] [i_7] [i_7 + 2] [i_18 - 1]) : (arr_51 [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_18 - 1]))))));
                }
                for (short i_19 = 3; i_19 < 20; i_19 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_40 [i_7]))))));
                    arr_72 [i_7] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_19 + 1] [i_19] [i_19 - 2] [i_19 + 1] [i_19 - 1] [i_19] [i_19 - 2]))));
                }
                for (short i_20 = 3; i_20 < 20; i_20 += 1) /* same iter space */
                {
                    arr_77 [i_7] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_44 [i_7] [(unsigned short)10] [i_7] [i_7])));
                    var_38 = ((/* implicit */unsigned short) var_0);
                    arr_78 [8LL] [i_7] [i_15] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_20 + 2] [(_Bool)1] [i_0])) <= (((/* implicit */int) arr_19 [13] [i_20 + 1] [i_20 - 3] [i_20] [i_20 - 2] [i_20 + 2]))));
                }
            }
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                var_39 = ((/* implicit */long long int) ((short) var_4));
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 1) 
                {
                    arr_84 [i_7] [i_7] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) arr_80 [i_0] [i_7] [i_21]));
                    var_41 = ((899128385) >> (((/* implicit */int) (_Bool)0)));
                    arr_85 [20] [i_7] |= ((/* implicit */short) (~(3021882037U)));
                    var_42 = ((/* implicit */_Bool) 4294967295U);
                }
                for (long long int i_23 = 1; i_23 < 21; i_23 += 1) 
                {
                    var_43 *= ((/* implicit */short) ((3541007845988776022ULL) * (((/* implicit */unsigned long long int) 14U))));
                    arr_89 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] = ((/* implicit */short) arr_6 [i_7] [i_7 + 2] [i_23 - 1] [(unsigned char)1]);
                }
                arr_90 [i_7] [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [11ULL] [i_7] [7LL] [i_7 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_21]))));
            }
            var_44 = ((/* implicit */unsigned char) ((((1158964854) / (var_10))) / (((/* implicit */int) var_6))));
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                for (unsigned short i_25 = 2; i_25 < 21; i_25 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_26 = 0; i_26 < 22; i_26 += 1) /* same iter space */
                        {
                            arr_99 [i_7] = ((/* implicit */long long int) ((arr_44 [i_7] [i_25 + 1] [i_7 + 2] [i_7]) & (arr_44 [i_7] [7ULL] [i_7 + 2] [i_7])));
                            var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_57 [i_7] [i_25 + 1]))));
                            var_46 -= ((/* implicit */short) (~(arr_10 [i_7 + 2] [(short)16] [i_7 - 1] [i_7 + 2])));
                            var_47 -= ((/* implicit */unsigned short) arr_9 [i_26] [i_26] [i_26] [i_26]);
                        }
                        for (int i_27 = 0; i_27 < 22; i_27 += 1) /* same iter space */
                        {
                            arr_102 [i_7] = ((/* implicit */unsigned int) (short)15188);
                            var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_101 [i_7 - 1] [i_7] [(unsigned char)10] [21U] [i_0])) & (((/* implicit */int) arr_101 [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7]))));
                            var_49 *= ((((/* implicit */_Bool) var_4)) ? (arr_51 [i_0] [i_7 + 1] [1LL] [i_24] [i_25 + 1] [i_27]) : (arr_51 [i_27] [11LL] [i_25 - 1] [i_24] [i_7] [(unsigned char)6]));
                        }
                        for (unsigned short i_28 = 1; i_28 < 19; i_28 += 1) 
                        {
                            arr_107 [i_7] [i_7] [i_0] [i_7] [i_0] = ((/* implicit */short) ((arr_88 [i_7] [i_7 + 1] [i_24]) & ((~(((/* implicit */int) (short)4578))))));
                            var_50 = ((((/* implicit */int) arr_97 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 1])) | (((/* implicit */int) (short)15216)));
                        }
                        arr_108 [i_7] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_106 [12ULL] [12ULL])) <= (((/* implicit */int) (signed char)-125)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 1) 
                        {
                            arr_111 [(short)4] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_60 [i_29]);
                            arr_112 [i_0] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                            arr_113 [i_29] [i_25 - 2] [i_7] [i_7] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_61 [i_7 + 2] [i_7]))));
                            var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) arr_76 [i_7] [i_7] [i_7] [(short)15]))));
                        }
                        for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                        {
                            var_52 ^= (~(((/* implicit */int) arr_50 [i_30 + 1] [(signed char)0] [i_0] [i_7] [(signed char)0] [i_0])));
                            arr_117 [i_0] [i_0] [i_0] [2LL] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5264655725561666444LL)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (unsigned short)61000))))) ? (arr_11 [i_7] [i_7 + 2] [(unsigned short)4] [i_7 - 1] [i_7 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [(short)12] [18LL] [i_30 + 1] [i_30 + 1] [18LL] [(signed char)2])))));
                        }
                        for (unsigned char i_31 = 3; i_31 < 19; i_31 += 1) 
                        {
                            arr_121 [i_7] [i_7 + 2] = (~(arr_11 [i_25] [i_7 + 1] [i_7] [10] [i_7 + 1]));
                            var_53 -= ((/* implicit */short) ((((/* implicit */int) arr_7 [(short)10])) ^ (((/* implicit */int) var_9))));
                            var_54 = ((/* implicit */short) ((signed char) arr_92 [i_7] [i_7 + 1] [i_7]));
                            var_55 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-12))));
                        }
                    }
                } 
            } 
        }
        for (int i_32 = 0; i_32 < 22; i_32 += 1) 
        {
            var_56 = ((var_4) & (arr_30 [i_0] [i_0] [i_32]));
            arr_126 [i_32] [i_32] [i_32] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_70 [(short)17] [i_0] [i_0] [i_0]))));
            var_57 = ((/* implicit */signed char) min((var_57), (((signed char) (+(((/* implicit */int) var_9)))))));
        }
    }
    for (signed char i_33 = 0; i_33 < 18; i_33 += 1) 
    {
        var_58 = ((/* implicit */int) min((var_58), ((~(((int) ((short) (short)-15213)))))));
        var_59 = ((/* implicit */short) (~(((((/* implicit */_Bool) -6266566861866272807LL)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (short)15216))))));
        /* LoopSeq 3 */
        for (int i_34 = 0; i_34 < 18; i_34 += 1) /* same iter space */
        {
            var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) max((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_3))))))), (((((/* implicit */unsigned int) -1797232600)) / (26066570U))))))));
            var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((6740103831585578649LL), (((/* implicit */long long int) (short)23064))))) ? ((+(arr_87 [i_34] [i_34] [9ULL]))) : (((/* implicit */int) var_7)))))))));
            arr_132 [(unsigned short)8] = var_6;
        }
        for (int i_35 = 0; i_35 < 18; i_35 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_36 = 0; i_36 < 18; i_36 += 1) 
            {
                for (short i_37 = 0; i_37 < 18; i_37 += 1) 
                {
                    {
                        arr_143 [i_37] [i_36] [i_35] [i_33] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) >> (((((/* implicit */int) arr_48 [2] [2] [(short)16])) - (23782)))));
                        var_62 = min((((/* implicit */long long int) min((max((((/* implicit */int) arr_19 [i_36] [i_37] [i_36] [18LL] [i_33] [i_33])), (var_10))), ((+(((/* implicit */int) (short)1))))))), (max((((((/* implicit */_Bool) 2382137569U)) ? (6622771065290042351LL) : (-5703306828622034173LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
                        var_63 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) % (min((-6266566861866272811LL), (((/* implicit */long long int) (unsigned short)24123))))));
                        var_64 *= ((/* implicit */short) arr_70 [i_33] [i_33] [i_33] [i_33]);
                        arr_144 [i_37] = ((short) ((arr_135 [i_33] [i_35] [i_36]) >> (((2670373386537563940LL) - (2670373386537563919LL)))));
                    }
                } 
            } 
            var_65 ^= ((/* implicit */unsigned int) (((~(arr_69 [i_33] [i_33] [i_35] [i_35] [i_33] [i_35]))) | (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
        }
        for (int i_38 = 0; i_38 < 18; i_38 += 1) /* same iter space */
        {
            var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) var_1))));
            arr_147 [i_38] [12] = ((/* implicit */signed char) arr_96 [i_33] [i_33] [(short)18] [(short)12] [(signed char)14] [i_33]);
            var_67 = ((/* implicit */short) min((var_67), (((/* implicit */short) (~(((((((((/* implicit */long long int) ((/* implicit */int) (short)-19803))) | (6266566861866272810LL))) + (9223372036854775807LL))) >> (((arr_128 [i_38]) - (10826262109069234065ULL))))))))));
        }
    }
    /* vectorizable */
    for (short i_39 = 0; i_39 < 23; i_39 += 1) 
    {
        var_68 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_149 [i_39]))))) ? ((~(((/* implicit */int) (short)-30508)))) : ((+(((/* implicit */int) arr_149 [i_39])))));
        var_69 += ((/* implicit */short) (+(((/* implicit */int) arr_148 [i_39]))));
        var_70 = ((/* implicit */long long int) ((((/* implicit */int) arr_148 [i_39])) - (((/* implicit */int) arr_148 [i_39]))));
        var_71 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_148 [i_39])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_148 [i_39]))));
    }
}
