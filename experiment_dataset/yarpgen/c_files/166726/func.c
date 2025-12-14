/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166726
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)1)));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (-1LL))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (+(arr_4 [i_1 - 3])));
    }
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_14 [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-70))));
                                var_22 *= ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_15 [i_2] [i_2] [i_7] [i_7])), (arr_11 [i_2] [i_2] [i_2]))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (arr_4 [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> ((((~(var_6))) - (7280792715010806752LL))))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6)))) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (+(9063224168033659233LL)))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_11 [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))))) : ((-(((/* implicit */int) arr_8 [i_2 - 2] [i_2 + 1])))))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_2])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))));
            /* LoopSeq 4 */
            for (long long int i_9 = 3; i_9 < 12; i_9 += 1) 
            {
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)59))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_9] [i_9] [i_9]))))) : (arr_4 [i_2])));
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        arr_35 [i_2] [i_10] [i_10] [i_10] [i_2] = ((/* implicit */unsigned short) ((signed char) (-(arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) (unsigned short)41122))));
                        var_30 *= ((/* implicit */unsigned short) ((arr_31 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]) & (var_6)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        arr_40 [i_9] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_12] [i_10] [i_10] [i_12] [i_8 - 2] [i_12 + 1]))));
                        var_31 *= ((_Bool) (_Bool)1);
                    }
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_44 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_10] [i_10])) - (((/* implicit */int) var_12))))))))));
                        arr_45 [i_8] [i_2] [i_2] [i_2] [i_2] [i_2] [i_8] &= ((_Bool) var_15);
                        arr_46 [i_2] [i_2] [i_10] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_8 - 2] [i_8 - 2] [i_10])) & (((/* implicit */int) (signed char)-57))));
                        var_33 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8]))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (2060228691U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned short)11451)) : (((/* implicit */int) var_3))))) : (arr_37 [i_2] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                    }
                }
                for (int i_14 = 2; i_14 < 11; i_14 += 1) 
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (1833910523937572169LL)));
                    arr_49 [i_2] [i_2] [i_14] [i_14] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_8] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (var_2)))));
                    var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)0))))));
                }
                /* LoopSeq 3 */
                for (int i_15 = 4; i_15 < 12; i_15 += 3) 
                {
                    arr_52 [i_2] [i_2] [i_2] [i_2] [i_15] = ((/* implicit */int) arr_10 [i_2] [i_2]);
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (unsigned short)42547))));
                    arr_53 [i_2] [i_2] [i_15] = ((/* implicit */unsigned char) var_10);
                }
                for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_33 [i_2] [i_8] [i_8] [i_8] [i_8] [i_2])) ? (((/* implicit */long long int) arr_47 [i_8] [i_8] [i_8] [i_8] [i_8])) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    arr_56 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 2; i_17 < 13; i_17 += 3) 
                    {
                        arr_61 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-8257570083534750894LL)));
                        arr_62 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                        var_39 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)64))));
                        var_40 = ((/* implicit */unsigned int) arr_47 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        arr_63 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (unsigned char)241);
                    }
                    for (unsigned short i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        var_41 = ((/* implicit */int) max((var_41), ((+(((/* implicit */int) arr_24 [i_2] [i_18] [i_2] [i_2] [i_2 + 1] [i_2]))))));
                        var_42 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_2] [i_8] [i_9 - 3] [i_8] [i_2] [i_8]))) & (var_13)));
                    }
                    for (signed char i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        arr_68 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (-(var_9)));
                        var_43 -= ((/* implicit */_Bool) ((long long int) var_5));
                    }
                    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_9 - 1])) ? (((((/* implicit */_Bool) arr_51 [i_8])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9]))))) : (arr_58 [i_2 - 1] [i_9 - 1] [i_9 + 2] [i_8 + 3] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 2; i_20 < 13; i_20 += 3) 
                    {
                        var_45 = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 1])) <= (((/* implicit */int) (_Bool)0))));
                        arr_72 [i_9] [i_9] [i_9] [i_9] [i_9] |= ((var_10) ? (((/* implicit */unsigned int) var_5)) : (3575919675U));
                        arr_73 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (_Bool)1);
                        var_46 *= ((/* implicit */unsigned int) (+((-(-8257570083534750894LL)))));
                    }
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
                    {
                        var_47 = (~((+(var_9))));
                        var_48 &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)27))));
                        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-45)))))));
                        var_50 += ((/* implicit */unsigned short) (signed char)123);
                    }
                    for (signed char i_22 = 0; i_22 < 14; i_22 += 3) /* same iter space */
                    {
                        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6351243588061956265LL))))));
                        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((255U) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
                        arr_79 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                    }
                }
                for (unsigned short i_23 = 1; i_23 < 12; i_23 += 3) 
                {
                    var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) <= ((+(((/* implicit */int) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                    var_54 = ((/* implicit */signed char) ((((/* implicit */int) arr_50 [i_9 + 1])) & (((/* implicit */int) (unsigned char)161))));
                    var_55 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15562)) >> (((/* implicit */int) arr_16 [i_9] [i_2 - 2] [i_9]))));
                }
                var_56 -= ((/* implicit */unsigned short) ((int) var_5));
            }
            for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    var_57 *= ((/* implicit */long long int) arr_83 [i_2]);
                    var_58 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                {
                    var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) (-(arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                    var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) (+((~(9223372036854775807LL))))))));
                    var_61 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_39 [i_26] [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) : (var_6)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 2) 
                    {
                        var_62 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        var_63 = ((/* implicit */unsigned long long int) (-(arr_66 [i_2])));
                        var_64 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        var_65 = var_9;
                    }
                    for (int i_28 = 2; i_28 < 11; i_28 += 1) 
                    {
                        var_66 = ((/* implicit */unsigned char) min((var_66), (((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)1)))))))));
                        arr_94 [i_2] [i_2] [i_26] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-27))));
                        var_67 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-101)) ? (var_9) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-27))) & (-1LL)))));
                    }
                    arr_95 [i_2] [i_2] [i_2] [i_2] [i_26] [i_26] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224))));
                }
                for (unsigned short i_29 = 0; i_29 < 14; i_29 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_30 = 1; i_30 < 13; i_30 += 2) /* same iter space */
                    {
                        var_68 += ((/* implicit */long long int) var_5);
                        var_69 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -545975462)) : (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned long long int) 4294967053U)) : (4467570830351532032ULL)))));
                    }
                    for (signed char i_31 = 1; i_31 < 13; i_31 += 2) /* same iter space */
                    {
                        arr_103 [i_24] &= ((/* implicit */long long int) (~(((unsigned int) (signed char)70))));
                        arr_104 [i_2] [i_2] [i_29] [i_2] [i_2] = ((((/* implicit */_Bool) (+(2585012730U)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2881281812U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned char i_32 = 2; i_32 < 13; i_32 += 1) 
                    {
                        var_70 = ((/* implicit */unsigned int) (-(0ULL)));
                        var_71 = ((/* implicit */_Bool) max((var_71), (((/* implicit */_Bool) ((signed char) arr_50 [i_32 + 1])))));
                        var_72 = ((/* implicit */long long int) max((var_72), (((/* implicit */long long int) (((+(((/* implicit */int) var_12)))) >> (((((var_8) >> (((/* implicit */int) (unsigned char)0)))) - (2314936229998609468LL))))))));
                    }
                    for (unsigned short i_33 = 3; i_33 < 13; i_33 += 2) 
                    {
                        arr_109 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_24]) ? (var_9) : (((/* implicit */long long int) 2147483647))))) ? (arr_12 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_73 = ((/* implicit */int) min((var_73), (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_29] [i_8 - 2] [i_24] [i_29] [i_33 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 + 2] [i_2 - 1] [i_8] [i_8]))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_34 = 0; i_34 < 14; i_34 += 3) 
                    {
                        arr_114 [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_80 [i_29] [i_29]))) ? (-2147483647) : (((((/* implicit */_Bool) arr_106 [i_2] [i_2] [i_29] [i_29] [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
                        var_74 = ((/* implicit */int) arr_23 [i_8] [i_8]);
                        arr_115 [i_8] [i_29] = (_Bool)1;
                    }
                    for (int i_35 = 0; i_35 < 14; i_35 += 1) 
                    {
                        arr_120 [i_2] [i_29] = ((/* implicit */unsigned long long int) (-(var_14)));
                        var_75 = ((/* implicit */unsigned char) arr_75 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    /* LoopSeq 3 */
                    for (int i_36 = 3; i_36 < 12; i_36 += 1) 
                    {
                        var_76 = ((/* implicit */long long int) ((signed char) var_7));
                        arr_124 [i_2] [i_29] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (int i_37 = 3; i_37 < 12; i_37 += 2) 
                    {
                        arr_127 [i_2] [i_29] [i_29] [i_29] [i_29] = var_15;
                        var_77 -= ((/* implicit */long long int) var_3);
                        var_78 += ((/* implicit */long long int) (+(((/* implicit */int) arr_100 [i_2] [i_2] [i_2] [i_8] [i_2] [i_2] [i_2]))));
                        arr_128 [i_2] [i_2] [i_2] [i_29] [i_2] [i_2] = (~((+(var_9))));
                        arr_129 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */int) (~(arr_98 [i_29])));
                    }
                    for (unsigned long long int i_38 = 2; i_38 < 12; i_38 += 1) 
                    {
                        arr_132 [i_29] [i_29] = ((/* implicit */unsigned char) (((-(arr_80 [i_2] [i_2]))) <= (((/* implicit */int) (unsigned char)189))));
                        var_79 = ((/* implicit */int) var_7);
                        var_80 = ((/* implicit */int) var_1);
                        var_81 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_38] [i_38] [i_38] [i_38 - 1] [i_38 - 1] [i_38] [i_38])) ? (1665693190869637963ULL) : (((/* implicit */unsigned long long int) ((-3107696435782489347LL) & (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    }
                }
                var_82 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
            }
            for (int i_39 = 0; i_39 < 14; i_39 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_40 = 0; i_40 < 14; i_40 += 1) 
                {
                    for (int i_41 = 1; i_41 < 13; i_41 += 4) 
                    {
                        {
                            var_83 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [i_2 - 2] [i_2 - 2] [i_8 + 3] [i_41 - 1] [i_2 - 2]))));
                            arr_139 [i_40] [i_40] [i_40] [i_40] = ((/* implicit */signed char) arr_10 [i_2 - 1] [i_2 - 1]);
                        }
                    } 
                } 
                var_84 = ((/* implicit */long long int) min((var_84), (((/* implicit */long long int) ((unsigned short) arr_4 [i_8 + 1])))));
                var_85 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)241))));
            }
            for (unsigned int i_42 = 0; i_42 < 14; i_42 += 1) 
            {
                var_86 += ((/* implicit */signed char) (+(2142213039U)));
                /* LoopSeq 2 */
                for (int i_43 = 0; i_43 < 14; i_43 += 3) 
                {
                    var_87 = ((/* implicit */unsigned char) min((var_87), (((/* implicit */unsigned char) var_9))));
                    arr_146 [i_43] [i_43] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8 - 2])))));
                    var_88 = ((/* implicit */signed char) (-(4294967295U)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_44 = 0; i_44 < 14; i_44 += 4) /* same iter space */
                    {
                        var_89 = ((/* implicit */unsigned long long int) min((var_89), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_44] [i_44] [i_44] [i_44] [i_44] [i_44]))))))))));
                        var_90 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_102 [i_2 + 1] [i_2 + 1] [i_2 + 1])) & (var_2)));
                        var_91 = (-((~(2147483634))));
                        var_92 *= ((/* implicit */unsigned long long int) arr_3 [i_8]);
                        arr_151 [i_43] [i_8] [i_43] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_119 [i_42] [i_42] [i_42] [i_42] [i_42] [i_42] [i_42]))))) ? ((+(2428229311133950699LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_43] [i_43] [i_43]))) : (2114653945U))))));
                    }
                    for (unsigned long long int i_45 = 0; i_45 < 14; i_45 += 4) /* same iter space */
                    {
                        var_93 ^= ((/* implicit */signed char) ((var_10) ? ((+(var_5))) : (arr_84 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2])));
                        var_94 = ((/* implicit */unsigned char) max((var_94), (((/* implicit */unsigned char) (-(((/* implicit */int) var_0)))))));
                        var_95 = ((/* implicit */unsigned char) max((var_95), (((/* implicit */unsigned char) (-((-(var_13))))))));
                        var_96 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_43] [i_43] [i_43])) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) var_2)))));
                        var_97 = arr_136 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2];
                    }
                    for (int i_46 = 0; i_46 < 14; i_46 += 1) 
                    {
                        var_98 = ((/* implicit */long long int) min((var_98), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((var_13) - (12823856149412080181ULL)))))))))));
                        arr_158 [i_8] [i_8] [i_8] |= (+(((((/* implicit */_Bool) arr_112 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_27 [i_2] [i_2])) : (((/* implicit */int) var_15)))));
                        var_99 = ((/* implicit */unsigned char) min((var_99), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_113 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) >> (((((/* implicit */int) var_0)) - (114)))))) : (arr_145 [i_2] [i_2] [i_42] [i_2]))))));
                    }
                    for (unsigned short i_47 = 2; i_47 < 11; i_47 += 3) 
                    {
                        var_100 += ((/* implicit */_Bool) (-(arr_66 [i_8])));
                        var_101 = ((/* implicit */int) min((var_101), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (-1LL)))))))));
                        var_102 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2 + 2] [i_8] [i_8] [i_8 + 3] [i_8] [i_8]))) : (arr_86 [i_2] [i_42] [i_42] [i_2])));
                    }
                    var_103 = ((/* implicit */long long int) min((var_103), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65534)) : (2118058446))) : (arr_69 [i_2]))))));
                }
                for (unsigned char i_48 = 0; i_48 < 14; i_48 += 1) 
                {
                    var_104 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_8) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (var_9))));
                    arr_166 [i_48] [i_2] [i_48] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (8031636044955687564LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2 + 1] [i_8 + 3] [i_42] [i_8 + 3] [i_42])))));
                    var_105 += ((/* implicit */unsigned long long int) var_15);
                    var_106 += ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) ((signed char) 13979173243358019583ULL))) + (14))));
                }
                arr_167 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) (_Bool)1));
            }
            arr_168 [i_2] [i_2] |= ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_15)) : (725475038))) & (((/* implicit */int) (unsigned char)181)));
        }
    }
    var_107 = ((/* implicit */int) min((var_107), (((/* implicit */int) var_2))));
    var_108 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_1))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))))) : (max((((/* implicit */long long int) var_15)), (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (1LL)))))));
}
