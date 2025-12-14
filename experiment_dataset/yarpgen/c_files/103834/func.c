/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103834
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [(unsigned char)16] = ((/* implicit */signed char) ((-3177929076262746270LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 3])))));
            var_16 = ((/* implicit */int) min((var_16), ((+((-2147483647 - 1))))));
            arr_7 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
        }
        arr_8 [i_0 - 3] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))), (min((((/* implicit */long long int) arr_4 [i_0] [i_0])), (arr_5 [11LL] [8U]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_20 [(unsigned short)6] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) 5911298540897853749LL);
                                var_17 -= ((/* implicit */signed char) var_8);
                                arr_21 [i_0] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) 3059428571910830118ULL);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) max((var_5), (arr_9 [i_3] [(unsigned char)7])))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                arr_29 [i_0 - 3] [i_2] [i_2] [i_3] [i_7] [i_7] = (+(15387315501798721498ULL));
                                var_19 |= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                                var_20 -= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                                var_21 -= ((/* implicit */signed char) arr_1 [i_3] [24LL]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min(((~(max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (15387315501798721497ULL))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_15 [i_3] [i_2] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) (unsigned short)6477)))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) arr_4 [(unsigned char)23] [i_0]);
    }
    for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                {
                    arr_38 [i_8] [i_8] = ((/* implicit */int) var_2);
                    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8] [i_9] [i_9] [i_10 - 1] [i_8])) | (((/* implicit */int) arr_12 [i_8 - 2]))))) ? (((/* implicit */unsigned long long int) var_10)) : (15387315501798721497ULL)))));
                    /* LoopSeq 2 */
                    for (int i_11 = 3; i_11 < 14; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) (+(((arr_16 [i_10 - 1] [i_9] [i_8 - 2] [i_8 - 2]) ^ (((/* implicit */unsigned long long int) var_12))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (unsigned short)59059))));
                        /* LoopSeq 2 */
                        for (int i_12 = 4; i_12 < 13; i_12 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) 3059428571910830111ULL);
                            arr_43 [i_8] [i_9] [i_10] [i_11] [i_8] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 3059428571910830119ULL)) ? (((((/* implicit */_Bool) max((10126688891531277028ULL), (((/* implicit */unsigned long long int) -2147483637))))) ? (13002855879438700584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))) : (8320055182178274598ULL)));
                            var_28 = ((/* implicit */int) min((var_28), ((~(((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)(-127 - 1)))))))));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8320055182178274598ULL))));
                            var_30 |= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_9] [i_12])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-1))))), (max((3059428571910830123ULL), (((/* implicit */unsigned long long int) 1023)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)59058)))))));
                        }
                        for (long long int i_13 = 2; i_13 < 13; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-412558837825380405LL) : (arr_45 [i_11 + 1] [(_Bool)1] [4] [i_11 - 2] [i_11 + 1] [4])))) ? ((-(((/* implicit */int) arr_1 [i_10 + 3] [i_11 - 2])))) : ((-(arr_22 [i_11 - 2] [(unsigned short)3]))))))));
                            var_32 = ((/* implicit */unsigned int) 10126688891531277017ULL);
                        }
                        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) 2147483636)) ? (4264456044920449450ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))));
                        arr_48 [i_8] [13LL] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)59052)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_26 [i_9] [(signed char)1])) : (var_0)))), (((((/* implicit */_Bool) 60887311)) ? (((/* implicit */long long int) -383005560)) : (7280288503750613347LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        arr_51 [i_8] [(unsigned char)5] [i_9] [i_8] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 60887313)))) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) ((((/* implicit */_Bool) -1046)) || (((/* implicit */_Bool) (signed char)110)))))));
                        arr_52 [(unsigned char)14] [i_9] [i_9] [i_8] [i_10 - 1] [i_9] = var_9;
                    }
                }
            } 
        } 
        arr_53 [i_8] = ((/* implicit */short) max((arr_3 [(unsigned short)13] [0LL]), (3401295459U)));
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            for (int i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                for (long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) min((min((arr_31 [i_15]), (arr_31 [i_15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)47))))))))));
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_36 [(_Bool)1] [(signed char)6] [(signed char)6])) ? (((/* implicit */unsigned long long int) -1LL)) : (15387315501798721497ULL))), (((/* implicit */unsigned long long int) -9223372036854775792LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)47))))) + ((+(var_3)))))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            arr_69 [i_19] [i_19] = ((/* implicit */unsigned short) max(((~(324232185173269604ULL))), (((/* implicit */unsigned long long int) arr_28 [i_19] [i_18] [i_19] [i_19] [i_19] [i_19]))));
            var_36 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)52690)))) ? (((/* implicit */int) (unsigned short)33400)) : (((/* implicit */int) min((((/* implicit */short) (signed char)-101)), ((short)-18885))))))), (min((((var_9) / (var_11))), (((/* implicit */long long int) arr_2 [i_18] [6LL] [i_19]))))));
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-1)), (((((/* implicit */int) (signed char)-104)) & (((/* implicit */int) (unsigned char)224))))))), (max((((/* implicit */unsigned long long int) (unsigned short)32116)), (var_1)))));
                            var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */_Bool) (signed char)111)) ? ((~(((((/* implicit */_Bool) arr_41 [(unsigned short)6] [i_20] [i_20] [i_19] [(unsigned short)6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_64 [i_18])))))) : ((-(((/* implicit */int) max(((unsigned char)208), ((unsigned char)28))))))))));
                            var_39 = ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) arr_54 [i_18]))))) ? (-4017998561142218486LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                        }
                    } 
                } 
            } 
            var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -6943882192561261247LL)) ? (63LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208)))));
        }
        /* vectorizable */
        for (long long int i_23 = 0; i_23 < 12; i_23 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_24 = 0; i_24 < 12; i_24 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_25 = 1; i_25 < 8; i_25 += 4) 
                {
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (!(((-5117343095458843561LL) > (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_18] [(_Bool)0] [i_23] [i_24] [(_Bool)1] [i_25 - 1] [11U]))))))))));
                    var_42 = ((/* implicit */long long int) (signed char)-106);
                }
                arr_89 [i_18] [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_24 [i_18] [i_18] [3ULL] [i_18] [i_23] [13])) != (var_1)));
                var_43 = ((/* implicit */unsigned long long int) ((unsigned int) 36028797018963967ULL));
            }
            for (unsigned int i_26 = 4; i_26 < 10; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (long long int i_28 = 0; i_28 < 12; i_28 += 3) 
                    {
                        {
                            arr_101 [i_18] [9LL] [9LL] [i_27] [0U] = ((/* implicit */long long int) (~(var_1)));
                            var_44 *= ((/* implicit */short) (unsigned short)33410);
                            arr_102 [i_27] [i_18] [i_26] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_81 [i_18] [i_23] [i_26]))))) ? (-1LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)35)))))));
                            var_45 = ((((/* implicit */_Bool) (-(arr_76 [i_23] [i_23])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (3006032857080116481LL));
                        }
                    } 
                } 
                arr_103 [i_18] [i_23] [i_23] [i_26] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
            }
            var_46 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_23] [(unsigned short)3]))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_18]))) % (var_11)))));
            /* LoopSeq 2 */
            for (long long int i_29 = 1; i_29 < 9; i_29 += 2) 
            {
                var_47 = ((((/* implicit */int) arr_11 [i_18] [i_18])) + (((((/* implicit */_Bool) 18122511888536282000ULL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (_Bool)1)))));
                var_48 = var_3;
                arr_108 [i_29] [i_23] [i_23] = ((/* implicit */unsigned short) (~(arr_82 [i_29 - 1])));
                /* LoopSeq 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    arr_111 [i_18] [i_18] [i_29] [(_Bool)1] [i_29] [i_30] = ((/* implicit */long long int) ((unsigned int) (short)3));
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 12; i_31 += 1) 
                    {
                        var_49 = ((/* implicit */short) ((((/* implicit */int) var_2)) | (((/* implicit */int) ((unsigned short) var_7)))));
                        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_23] [i_29 + 1] [i_23])))))));
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33417)) / (((1602414645) / (((/* implicit */int) (short)-3)))))))));
                        arr_114 [i_23] [i_29] [i_23] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */signed char) (unsigned short)41372);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_32 = 0; i_32 < 12; i_32 += 4) 
                    {
                        arr_118 [(signed char)9] [i_29] = ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)255))))));
                        var_52 = ((/* implicit */long long int) ((-1828791049) ^ (((/* implicit */int) (unsigned char)51))));
                        arr_119 [i_18] [i_23] [i_29 + 2] [i_29 + 1] [i_29] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33420)) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32153)))));
                        var_53 = ((/* implicit */long long int) ((((18122511888536282012ULL) >> (((/* implicit */int) (short)3)))) ^ (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    }
                    arr_120 [i_29] [i_29] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
                }
                for (unsigned short i_33 = 3; i_33 < 11; i_33 += 2) 
                {
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8320055182178274598ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12832))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (signed char)-125))));
                    var_55 = ((/* implicit */unsigned int) arr_81 [i_18] [i_23] [i_33]);
                    arr_124 [i_18] [i_18] [i_18] [i_18] [i_18] [i_29] = ((/* implicit */int) (signed char)-1);
                }
            }
            for (unsigned long long int i_34 = 0; i_34 < 12; i_34 += 2) 
            {
                var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [(signed char)10] [i_23] [(signed char)10] [i_23])) ? (((/* implicit */int) (unsigned short)32153)) : (((/* implicit */int) (unsigned short)33386))));
                var_57 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34010)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12843))) : (arr_37 [i_18] [i_18] [i_23] [i_34])))) && (((/* implicit */_Bool) var_15))));
                var_58 += ((/* implicit */signed char) -1LL);
            }
            var_59 = ((/* implicit */signed char) (unsigned short)47891);
            var_60 *= ((/* implicit */short) arr_107 [i_18]);
        }
        arr_129 [(unsigned short)5] = -1LL;
    }
    var_61 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((short) (unsigned short)12843))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 6056714189806682790ULL)))) : (var_9))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
}
