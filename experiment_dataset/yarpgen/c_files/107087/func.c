/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107087
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_15)))) + (((/* implicit */int) var_9))))) - (var_4)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) <= (arr_1 [i_0]))));
        var_19 ^= ((/* implicit */int) var_3);
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (~(max(((-(var_10))), (((/* implicit */int) ((unsigned short) (unsigned char)171)))))));
                    arr_7 [10] [i_1 + 3] [i_2 + 2] [i_2 - 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_2])), (arr_2 [i_2] [i_1 - 1])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (1472204002)))) : (arr_0 [i_0] [11LL])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-3772534391522571940LL) : (((/* implicit */long long int) -1004046004))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)7] [i_1 + 3] [i_2 + 1]))) : (max((((/* implicit */unsigned long long int) (signed char)14)), (13001134508755410503ULL)))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */long long int) max((var_7), ((-(((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3])))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_20 = ((/* implicit */short) arr_5 [i_3] [i_4] [i_5]);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_22 [i_4] [i_4] [(short)11] [i_6] [i_6] [1U] = 1509914370U;
                            var_21 *= ((/* implicit */unsigned long long int) arr_13 [i_6]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 3] [i_4] [i_4])) ? (((/* implicit */long long int) arr_21 [i_4 + 1] [i_4] [i_5] [i_5] [(unsigned short)19])) : (arr_18 [i_4 + 3] [i_4] [i_5] [i_5])));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) var_15);
                arr_25 [i_3] [(unsigned short)16] [i_4] = ((/* implicit */unsigned long long int) ((signed char) arr_18 [14U] [i_4] [i_4 + 3] [i_8]));
            }
            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-18414))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
            arr_26 [i_4] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned long long int) var_5);
        }
        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_9] [i_9] [i_9] [(signed char)8] [i_9])) ? (((/* implicit */int) arr_24 [i_3] [8U] [i_9] [i_9])) : (((/* implicit */int) var_9)))))) ? (min((((var_3) ? (((/* implicit */unsigned long long int) var_12)) : (arr_1 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_9] [i_3] [i_3] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) (~((+(arr_12 [7U] [i_9]))))))));
            arr_29 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_3 [i_3] [i_3])), (max((((/* implicit */long long int) (unsigned short)25)), (max((var_16), (((/* implicit */long long int) var_2))))))));
        }
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((signed char) arr_28 [i_3] [i_10])))));
            var_27 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10] [i_3] [16LL] [i_3])) ? (var_0) : (var_8)))) + ((+(4ULL))))), (((/* implicit */unsigned long long int) max(((~(9223372036854775807LL))), (((/* implicit */long long int) 2785052925U)))))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (-117437086789876007LL)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 12441198096978431851ULL)))))));
            arr_34 [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_13 [11LL])) << (((((/* implicit */int) arr_3 [i_3] [(unsigned short)7])) - (31301))))), (((/* implicit */int) arr_32 [i_3] [i_10] [8U])))))));
            var_29 = ((/* implicit */unsigned long long int) ((int) (~(max((var_12), (((/* implicit */long long int) (unsigned short)60566)))))));
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
        {
            arr_37 [i_3] [(_Bool)1] [i_11] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_36 [i_3] [i_11] [i_11])))));
            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)50459)))), (((((/* implicit */_Bool) arr_36 [i_3] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_11]))) : (var_16)))));
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                arr_42 [i_3] [(_Bool)1] [i_11] [i_12] |= arr_4 [i_3];
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) 1583320246U))));
                    var_32 = ((/* implicit */int) (signed char)-63);
                    arr_45 [i_12] [i_12] [i_13] [i_13] [(signed char)16] [i_3] = ((/* implicit */_Bool) arr_28 [i_3] [i_11]);
                }
                arr_46 [i_3] [i_11] [i_12] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_20 [i_3])), (var_4))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_11])) > (((/* implicit */int) var_14))))))));
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_33 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [12U] [i_11])) : (((/* implicit */int) var_5))))));
                arr_49 [i_11] [i_14] = ((/* implicit */unsigned int) ((arr_18 [i_3] [i_11] [i_14] [i_11]) + (arr_18 [i_3] [i_3] [i_3] [i_3])));
                var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (arr_43 [i_14] [i_11])));
                arr_50 [i_3] = ((/* implicit */unsigned char) ((long long int) -9223372036854775807LL));
            }
        }
        arr_51 [i_3] [i_3] = ((/* implicit */short) 117437086789876007LL);
        arr_52 [i_3] [i_3] = ((/* implicit */unsigned short) 17909026879335999160ULL);
    }
    for (long long int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
    {
        arr_55 [i_15] [i_15] = ((/* implicit */short) arr_5 [i_15] [17U] [i_15]);
        arr_56 [16] &= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_5 [i_15] [i_15] [i_15])))) | (((/* implicit */int) var_14))));
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_16] [i_16])))))));
        var_36 = ((((/* implicit */int) arr_53 [i_16] [i_16])) ^ (((/* implicit */int) arr_53 [i_16] [i_16])));
    }
    var_37 = var_16;
    var_38 &= ((/* implicit */unsigned long long int) min((var_15), (max((((/* implicit */unsigned short) var_1)), (var_15)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_18 = 2; i_18 < 21; i_18 += 1) /* same iter space */
        {
            arr_64 [i_17] = ((/* implicit */long long int) (-(arr_62 [i_17])));
            arr_65 [i_17] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_18 + 1] [i_17]))) ^ (arr_62 [i_17])));
            arr_66 [i_17] = (+(((/* implicit */int) arr_61 [i_18 + 1] [i_18 + 1])));
            /* LoopNest 2 */
            for (short i_19 = 4; i_19 < 20; i_19 += 3) 
            {
                for (unsigned short i_20 = 1; i_20 < 20; i_20 += 1) 
                {
                    {
                        arr_71 [i_17] [i_18] [i_19] [i_20] [i_18] [i_17] = ((/* implicit */unsigned int) (signed char)126);
                        arr_72 [i_17] [i_20] = ((/* implicit */unsigned short) arr_68 [i_17] [i_19 + 2] [2U]);
                    }
                } 
            } 
            arr_73 [i_17] [i_18] [i_18 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_18 + 1] [(signed char)7])) ^ (((/* implicit */int) (signed char)-91))));
        }
        for (short i_21 = 2; i_21 < 21; i_21 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (var_0) : (((/* implicit */long long int) arr_60 [i_17] [i_21 - 1]))))) ? (((((/* implicit */long long int) 297930912U)) + (var_12))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_74 [19LL])))))));
            /* LoopNest 3 */
            for (unsigned short i_22 = 1; i_22 < 21; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 4) 
                    {
                        {
                            arr_85 [i_21] [i_21 - 1] [i_17] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((short) var_14));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15044)) ? (17909026879335999160ULL) : (((/* implicit */unsigned long long int) var_12))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 3) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_41 |= ((/* implicit */long long int) arr_81 [i_17] [i_21 - 2]);
                        arr_91 [i_26] [i_21] [i_25] [i_17] [i_21] [i_17] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_77 [i_17] [i_21] [i_25] [i_26]))))));
                    }
                } 
            } 
        }
        for (short i_27 = 2; i_27 < 21; i_27 += 1) /* same iter space */
        {
            arr_96 [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) (signed char)-54);
            var_42 = ((/* implicit */unsigned char) (unsigned short)46455);
            /* LoopSeq 1 */
            for (signed char i_28 = 0; i_28 < 22; i_28 += 1) 
            {
                var_43 = ((/* implicit */int) (~(arr_83 [i_27 - 1] [i_27 - 2] [i_27 - 1] [i_27 + 1] [i_27 - 2] [i_27 + 1] [i_27 - 2])));
                var_44 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_76 [i_27 + 1] [i_27 + 1]))));
            }
            arr_100 [i_17] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) arr_81 [i_17] [i_27])))));
        }
        for (short i_29 = 2; i_29 < 21; i_29 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)232))));
            /* LoopSeq 3 */
            for (short i_30 = 0; i_30 < 22; i_30 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_31 = 0; i_31 < 22; i_31 += 1) 
                {
                    arr_108 [i_17] [i_29] [i_30] [i_31] [i_30] [i_31] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-39))));
                    arr_109 [i_17] = arr_87 [i_29] [i_30] [i_30] [i_31];
                }
                /* LoopSeq 2 */
                for (long long int i_32 = 0; i_32 < 22; i_32 += 3) 
                {
                    arr_112 [i_17] = ((/* implicit */signed char) -1075304689675893055LL);
                    arr_113 [2ULL] |= ((/* implicit */int) 9223372036854775807LL);
                    var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_80 [i_17])) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) var_9)))))))));
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_102 [i_29] [(signed char)21])) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_89 [i_30] [i_17] [i_17])))));
                }
                for (int i_33 = 1; i_33 < 20; i_33 += 4) 
                {
                    var_48 *= ((/* implicit */short) (~((~(((/* implicit */int) arr_70 [i_17] [i_29]))))));
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_104 [i_17] [i_30])) ? (arr_104 [i_17] [i_30]) : (((/* implicit */int) var_6))));
                }
            }
            for (unsigned int i_34 = 0; i_34 < 22; i_34 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_35 = 2; i_35 < 21; i_35 += 1) 
                {
                    for (int i_36 = 3; i_36 < 20; i_36 += 1) 
                    {
                        {
                            var_50 -= ((/* implicit */unsigned long long int) ((((-5004983809946723974LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_77 [i_29 - 1] [i_29 - 2] [i_34] [i_35 + 1])) - (86)))));
                            arr_125 [i_17] [i_34] [i_35] [i_17] = (+((((_Bool)0) ? (arr_120 [i_17] [(_Bool)1] [i_17] [i_17]) : (((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */_Bool) ((int) -1979577688));
                var_52 = ((/* implicit */int) arr_119 [i_17] [i_29] [i_17] [i_34]);
            }
            for (unsigned char i_37 = 0; i_37 < 22; i_37 += 3) 
            {
                var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_76 [i_17] [i_37])) ? ((-(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_5))));
                var_54 += ((/* implicit */unsigned char) var_4);
                arr_130 [i_17] [i_29] [i_37] [(signed char)19] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_103 [i_17] [i_29] [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_93 [i_17]))) : (var_4))));
                /* LoopSeq 1 */
                for (signed char i_38 = 3; i_38 < 19; i_38 += 1) 
                {
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-18415)) & (((/* implicit */int) (unsigned char)187))));
                    var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_111 [i_17] [i_17] [i_38 - 3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_111 [i_17] [i_17] [i_38 - 1])))));
                    arr_134 [(short)8] [16] [i_37] |= ((/* implicit */unsigned int) (-(var_8)));
                }
            }
        }
        var_57 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((501293183) + (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_11))))));
        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_99 [i_17] [i_17])) ? (arr_99 [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3231)))))) ? (1449780017U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        arr_135 [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_93 [i_17])) ^ (1918955426)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2845187278U)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) (short)-19420))))))));
        var_59 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_126 [(unsigned char)6] [i_17] [i_17] [i_17]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_83 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))) : (16LL)));
    }
}
