/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134319
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 += ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2 + 2])) || (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2 - 1])));
                                var_20 = ((/* implicit */_Bool) arr_6 [i_2]);
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */long long int) arr_10 [i_0 + 3] [i_1] [i_1] [i_2] [i_1] [i_2]);
                    var_22 += ((/* implicit */unsigned int) ((arr_3 [i_0 + 2] [i_1]) != (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0])))));
                    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3])) || (((/* implicit */_Bool) var_1))))) != (((/* implicit */int) var_16))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-2540485422517703885LL)))) ? (arr_8 [i_0 - 1] [i_0] [i_0] [i_0]) : (arr_11 [i_0 + 2] [i_0 + 3] [i_0 + 3] [6] [i_0] [i_0] [i_0])));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (signed char)-49))))) != (arr_9 [(signed char)8] [i_0 + 3] [i_0 - 1] [i_0] [10] [i_0 + 3])));
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (arr_16 [16ULL] [i_5])))))))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((((/* implicit */unsigned long long int) -2540485422517703885LL)), (((unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_15 [i_5] [(short)21]))))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_20 [i_7] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)11968)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : (-2540485422517703885LL))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (6442248856421123650ULL)));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_18 [i_8] [i_7]))))))));
            arr_23 [i_7] [i_7] [15LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_7] [i_8]))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_26 [i_9] = ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)53570)))) << (((/* implicit */int) ((18446744073709551612ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)1]))))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_25 [i_7])));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_9] [i_7]))))) / (((/* implicit */int) (unsigned short)65535))));
            var_33 = ((/* implicit */unsigned long long int) (((+(arr_25 [i_7]))) - (9223372036854775787LL)));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_22 [i_7]))));
                            arr_36 [i_7] [i_12] [i_7] [i_13] [i_13] [i_12] [i_13] &= ((/* implicit */unsigned int) arr_31 [i_13] [i_11] [i_10] [i_7]);
                            var_35 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_12 [i_7])), (arr_17 [i_11] [i_7])));
                        }
                    } 
                } 
            } 
            var_36 *= ((/* implicit */unsigned short) ((int) ((short) ((((/* implicit */_Bool) (short)27762)) ? (((/* implicit */int) arr_27 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))));
            var_37 = ((/* implicit */int) max((var_37), ((+(min((arr_24 [(signed char)8] [(signed char)8]), (-1)))))));
            var_38 += ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) (short)-750))))) + (max((-2147483626), (639376297))))), (((((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [12ULL])) : (((/* implicit */int) arr_33 [i_10] [i_10] [(unsigned char)4] [(unsigned char)4])))) - (((/* implicit */int) arr_14 [i_7]))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)(-127 - 1))))), ((+(((/* implicit */int) arr_30 [i_7])))))))));
            /* LoopSeq 4 */
            for (long long int i_15 = 2; i_15 < 16; i_15 += 2) 
            {
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned short)53570)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    arr_46 [i_14] [i_14] = ((/* implicit */unsigned char) ((_Bool) var_5));
                    var_41 = ((/* implicit */int) ((long long int) var_5));
                    var_42 -= ((/* implicit */int) ((((/* implicit */long long int) 3263454242U)) > (-2540485422517703885LL)));
                }
                var_43 = ((/* implicit */unsigned int) max((var_43), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-16625))) + (1238287015U)))));
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_9))));
            }
            for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_18 = 2; i_18 < 17; i_18 += 3) 
                {
                    arr_52 [i_7] [i_14] [i_17] [i_14] [i_18] [i_7] = ((/* implicit */long long int) ((arr_33 [i_18 + 1] [i_18 - 1] [i_18] [i_18 - 2]) ? (((/* implicit */int) arr_47 [i_18 - 1] [i_18 - 1] [i_18] [i_18 + 1])) : (((/* implicit */int) arr_33 [i_18 + 1] [i_18 - 1] [i_18 - 2] [i_18 - 2]))));
                    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((long long int) arr_33 [i_18 + 1] [i_18 - 1] [i_18 - 2] [i_18 - 2])))));
                    arr_53 [i_14] [i_14] [i_17] [i_18 + 1] = ((/* implicit */unsigned int) arr_43 [i_7] [i_7] [i_14] [i_7]);
                    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) var_11))));
                }
                for (short i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        var_47 = ((/* implicit */_Bool) min((var_47), (((((((/* implicit */_Bool) arr_50 [i_17] [i_14] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)748))) : (arr_50 [i_7] [8U] [i_19]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_20] [i_19] [i_17] [i_14])))))));
                        var_48 = ((/* implicit */int) var_12);
                        arr_58 [(unsigned char)3] [i_14] [i_17] [i_19] [i_20] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)11968)) : (((/* implicit */int) arr_45 [i_7] [i_7] [i_14]))))) ? (((/* implicit */int) arr_47 [i_14] [i_14] [i_7] [i_14])) : (((/* implicit */int) arr_43 [i_7] [i_19] [i_14] [i_19]))))), (((((/* implicit */unsigned long long int) (+(-2147483639)))) & (2103574213622602357ULL)))));
                        var_49 = ((/* implicit */int) (~(((long long int) 15668464725262099580ULL))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_50 = ((/* implicit */_Bool) ((int) -1029720017));
                        var_51 &= ((/* implicit */unsigned int) ((_Bool) (unsigned char)104));
                    }
                    var_52 = ((/* implicit */unsigned short) arr_47 [i_7] [i_14] [i_17] [i_19]);
                    arr_61 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (var_10)));
                    var_53 |= ((/* implicit */int) var_16);
                }
                var_54 = ((((/* implicit */unsigned long long int) ((long long int) (+(arr_25 [i_7]))))) >= (4212873505275921268ULL));
                var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((unsigned int) arr_33 [i_7] [i_7] [i_7] [i_7])))));
                var_56 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_49 [i_7] [i_14]))))))) == (((((/* implicit */_Bool) ((arr_56 [i_17] [i_17] [i_14] [i_7] [i_7]) / (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_7] [i_7] [i_17] [i_7]))) : ((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) 1100368739))))))));
            }
            for (short i_22 = 0; i_22 < 18; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) arr_17 [i_22] [i_24]))));
                            var_58 = ((/* implicit */unsigned char) -1015172631);
                            var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((unsigned int) (short)16380)))));
                            var_60 -= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_25 = 2; i_25 < 17; i_25 += 1) 
                {
                    for (short i_26 = 0; i_26 < 18; i_26 += 3) 
                    {
                        {
                            arr_77 [i_14] [i_14] [i_25] [i_26] = ((/* implicit */long long int) arr_71 [i_7] [i_7] [i_7] [i_7]);
                            var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_27 [i_25 + 1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_27 [i_25 - 1])) > (((/* implicit */int) arr_27 [i_25 + 1])))))) : (((((/* implicit */_Bool) arr_27 [i_25 + 1])) ? (1288208300870800492LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_25 - 1]))))))))));
                            var_62 &= ((/* implicit */signed char) ((((arr_28 [i_25 + 1]) << (((arr_28 [i_25 - 2]) - (1903899775))))) & (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)3))))) <= (((long long int) 2147483626)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_27 = 0; i_27 < 18; i_27 += 2) 
            {
                var_63 = ((/* implicit */unsigned char) var_3);
                arr_80 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)208)), (71916856549572608LL)));
            }
        }
        var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((unsigned long long int) arr_56 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */unsigned long long int) arr_56 [i_7] [i_7] [i_7] [6LL] [i_7]))));
    }
    /* vectorizable */
    for (signed char i_28 = 4; i_28 < 9; i_28 += 3) 
    {
        arr_84 [i_28] = ((/* implicit */long long int) ((var_6) ? (arr_67 [i_28] [i_28 - 4] [i_28 - 2] [i_28] [i_28 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121))))))));
        /* LoopSeq 1 */
        for (signed char i_29 = 1; i_29 < 7; i_29 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_30 = 0; i_30 < 10; i_30 += 4) 
            {
                var_65 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_28 - 1] [i_29] [i_28]))));
                arr_91 [i_28] [(short)6] [i_28] = ((/* implicit */short) arr_44 [i_29 + 3] [i_29] [i_28 - 1] [i_30]);
                arr_92 [i_28] [i_28] [(short)8] [i_28] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_29 + 3])) % (((/* implicit */int) var_2))));
            }
            for (int i_31 = 0; i_31 < 10; i_31 += 2) 
            {
                arr_96 [i_28] [i_29 - 1] = (_Bool)1;
                var_66 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_14)) : ((~(arr_42 [i_28] [i_28] [i_29] [i_29] [i_31] [i_31])))));
            }
            for (signed char i_32 = 0; i_32 < 10; i_32 += 3) 
            {
                arr_100 [i_28] [i_32] = ((((/* implicit */int) arr_1 [i_29])) < (((/* implicit */int) (unsigned char)143)));
                /* LoopNest 2 */
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (signed char i_34 = 2; i_34 < 8; i_34 += 2) 
                    {
                        {
                            var_67 = ((/* implicit */_Bool) min((var_67), (((/* implicit */_Bool) arr_1 [i_33]))));
                            arr_105 [i_28] [i_28] [i_32] [i_33] [i_34] [i_28] [i_28] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (!(arr_70 [i_28] [(unsigned char)16] [i_33] [(unsigned char)16] [i_34] [i_28] [i_28])))) : (((/* implicit */int) (signed char)-24))));
                            var_68 = ((/* implicit */int) min((var_68), ((-(((/* implicit */int) ((unsigned short) var_11)))))));
                            arr_106 [i_28] [0] [i_33] [(_Bool)1] [i_28 - 2] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [1ULL] [i_28] [i_28] [i_28 - 1])) ? (((/* implicit */int) arr_7 [i_34] [i_28] [i_34] [i_28] [i_33])) : (((/* implicit */int) (unsigned char)1))));
                        }
                    } 
                } 
            }
            arr_107 [i_28] = ((/* implicit */_Bool) 6322942939451053517ULL);
            var_69 |= ((/* implicit */unsigned int) ((int) var_12));
            /* LoopNest 2 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (unsigned char i_36 = 3; i_36 < 6; i_36 += 2) 
                {
                    {
                        var_70 = ((/* implicit */long long int) min((var_70), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23542)) ? (-1100368727) : (((/* implicit */int) (_Bool)1)))))));
                        var_71 = ((/* implicit */signed char) ((_Bool) ((1668769948U) - (arr_87 [i_28]))));
                        var_72 &= ((/* implicit */short) ((arr_29 [i_35] [i_29] [i_28]) == (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_28] [(_Bool)1] [i_35] [i_35] [i_35] [i_28])))));
                    }
                } 
            } 
            arr_113 [i_28] [i_28 - 1] [i_29] = ((/* implicit */short) var_8);
        }
    }
}
