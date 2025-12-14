/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105630
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 += (unsigned char)165;
                                arr_15 [i_1] [i_1] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    arr_16 [i_1] = var_1;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_17))), (((((/* implicit */_Bool) 911200692U)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_5]))))));
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [(unsigned short)10] [21LL] = ((/* implicit */signed char) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) : (12U)))) ? (((/* implicit */int) arr_14 [i_5] [i_6 + 1] [i_6 - 1] [i_6 + 2] [i_6 - 1])) : ((-(((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_5] [i_5] = arr_20 [20U] [i_5];
                        arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) arr_18 [i_5]);
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_20 += ((/* implicit */_Bool) min(((((~(arr_18 [i_5]))) * (arr_20 [i_5] [i_5]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_5])))) / (var_10))))));
                        arr_33 [i_5] [(short)17] [i_9] [i_9] = ((/* implicit */int) ((short) var_9));
                        arr_34 [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_14)))))));
                    }
                }
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_41 [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_10]))) ? (var_1) : (((/* implicit */int) var_0))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_10]), (var_5)))) ? (((int) 18U)) : ((~(var_1))))))));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 4; i_14 < 20; i_14 += 4) 
                    {
                        {
                            arr_49 [i_10] [i_10] [i_10] [i_10] [10U] &= ((/* implicit */short) var_15);
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_10] [i_11] [i_10] [2])) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46250))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)30002)), ((unsigned short)3143))))))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (var_12))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((4294967294U), (((/* implicit */unsigned int) 517445150))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (short)30199)) : (((/* implicit */int) (unsigned short)3128))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_54 [i_11] [i_11] [i_15] [i_16] [i_11] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */int) (short)-8420)) % (arr_9 [(_Bool)1] [i_11] [i_11] [i_11] [i_11] [i_11]))), (min((arr_48 [i_16] [i_15] [i_11] [i_10]), (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(min((545436048U), (((/* implicit */unsigned int) (signed char)-12)))))))));
                        var_24 = ((/* implicit */_Bool) max((max((12063259832158783992ULL), (((/* implicit */unsigned long long int) 3281700888U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) max(((short)8400), (((/* implicit */short) (unsigned char)47))))) : (((/* implicit */int) arr_21 [i_11] [i_11])))))));
                        arr_55 [i_11] [(short)16] [i_10] &= ((/* implicit */unsigned int) min((max((arr_6 [i_10]), (arr_6 [i_10]))), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_38 [i_10] [i_11] [i_11]))))))));
                        arr_56 [i_10] [i_11] [i_10] [i_10] = -475161147;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 2; i_17 < 20; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    {
                        arr_64 [i_11] [i_11] [i_17] = ((((/* implicit */_Bool) (signed char)125)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18203))));
                        arr_65 [i_11] [5U] [i_17] = ((/* implicit */_Bool) (short)18205);
                    }
                } 
            } 
            arr_66 [i_10] [15U] [i_11] = (((-(((18446744073709551602ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30184))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_10] [i_10] [i_10] [i_10]))));
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            arr_69 [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) -1)) : (arr_52 [i_19]))));
            arr_70 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (arr_48 [i_10] [i_19] [i_19] [i_10])))) ? (arr_52 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18223)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                var_25 += ((/* implicit */short) arr_31 [i_20] [i_20] [i_19] [i_20] [10ULL] [i_19]);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    for (unsigned short i_22 = 3; i_22 < 19; i_22 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_10] [i_20] [1U] [(unsigned short)11])) || (((/* implicit */_Bool) 3U))));
                            var_27 += ((/* implicit */short) arr_27 [(_Bool)1] [i_20]);
                            arr_77 [16ULL] [16ULL] [i_10] [i_10] [i_19] [(_Bool)1] [i_10] = ((/* implicit */short) var_7);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 2; i_24 < 18; i_24 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) ((signed char) arr_47 [i_24 + 1] [i_24 - 2] [i_24 + 1] [i_24 + 3] [i_24 - 1] [i_19] [17]));
                        arr_83 [i_19] [i_19] = ((/* implicit */unsigned int) (+(arr_32 [i_10] [i_10] [i_10] [(short)1] [i_10])));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_25 = 0; i_25 < 21; i_25 += 1) 
                    {
                        arr_86 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */int) arr_58 [(unsigned char)9] [i_19] [i_20] [i_23]);
                        arr_87 [i_10] [i_19] [(signed char)20] = ((((/* implicit */_Bool) arr_61 [i_10])) ? (((/* implicit */int) arr_61 [i_10])) : (((/* implicit */int) (signed char)124)));
                        var_29 = ((/* implicit */short) (_Bool)1);
                    }
                    for (short i_26 = 3; i_26 < 19; i_26 += 4) 
                    {
                        var_30 ^= 11426502216616023952ULL;
                        var_31 = 23U;
                        arr_90 [(short)4] [i_19] = ((/* implicit */unsigned char) (unsigned short)3146);
                        var_32 = ((/* implicit */short) ((unsigned short) arr_32 [i_10] [i_19] [i_10] [i_19] [i_19]));
                    }
                    for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [(unsigned short)21] [i_23] [i_27]) ? (682471534) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)54999))))))))));
                        arr_95 [i_10] [i_27] [i_20] [(unsigned char)1] [i_27] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_27] [i_23] [i_10]))));
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        var_35 ^= ((((/* implicit */_Bool) arr_89 [i_10] [i_10])) ? (6U) : (((/* implicit */unsigned int) arr_32 [i_27] [i_23] [i_10] [i_10] [i_10])));
                    }
                    for (short i_28 = 0; i_28 < 21; i_28 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_7)))));
                        arr_100 [i_10] [i_10] [i_23] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_51 [i_10] [9ULL] [i_20]) & (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_10] [i_10] [i_10] [i_10])))))));
                    }
                    arr_101 [i_19] [i_19] [i_19] = ((int) arr_2 [i_23] [i_23]);
                }
                for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 4) 
                {
                    var_37 &= ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-7612)) + (2147483647))) >> (((/* implicit */int) (unsigned short)11)))) + (((((/* implicit */int) arr_88 [i_10] [(_Bool)1] [i_19] [i_19] [(_Bool)1])) & (((/* implicit */int) (signed char)116))))));
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) & (((/* implicit */int) var_11)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_30 = 0; i_30 < 21; i_30 += 3) 
                    {
                        arr_107 [i_19] [i_19] [i_30] = ((/* implicit */signed char) ((int) ((short) (unsigned short)18807)));
                        var_39 = ((/* implicit */short) ((((/* implicit */int) arr_73 [i_20] [i_20] [i_19] [i_10])) ^ (((/* implicit */int) (_Bool)1))));
                        arr_108 [i_10] [i_10] [i_10] [i_10] [i_10] [i_19] = (((+(((/* implicit */int) var_5)))) >= (((/* implicit */int) var_9)));
                    }
                    var_40 = ((((/* implicit */_Bool) arr_98 [i_10] [i_19])) ? (((/* implicit */int) arr_98 [i_19] [i_20])) : (((/* implicit */int) arr_98 [i_10] [i_10])));
                }
                /* LoopNest 2 */
                for (signed char i_31 = 0; i_31 < 21; i_31 += 4) 
                {
                    for (short i_32 = 0; i_32 < 21; i_32 += 2) 
                    {
                        {
                            var_41 -= ((/* implicit */unsigned short) ((unsigned int) (unsigned char)243));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_88 [i_32] [i_31] [i_20] [8] [i_10])) && (((/* implicit */_Bool) (signed char)-33))))) >> (((/* implicit */int) arr_11 [i_10] [i_19] [19U] [i_19]))));
                            var_43 = ((/* implicit */int) ((arr_109 [i_10] [i_10] [i_10] [i_10] [18]) & (((/* implicit */unsigned long long int) var_14))));
                        }
                    } 
                } 
            }
            for (short i_33 = 0; i_33 < 21; i_33 += 2) 
            {
                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) arr_80 [(_Bool)1])) ? (((long long int) arr_68 [i_19] [i_10])) : (arr_1 [i_10]))))));
                arr_116 [i_19] [i_33] = ((/* implicit */signed char) ((arr_39 [i_19] [i_19]) - (arr_39 [i_10] [i_19])));
            }
        }
        arr_117 [17] = ((/* implicit */unsigned long long int) arr_27 [7] [i_10]);
        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (unsigned short)2412))));
    }
    var_46 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (short)27570)) ? (((/* implicit */int) (short)-2623)) : (var_16))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -2008624238))))))));
}
