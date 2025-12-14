/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165375
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) && (((/* implicit */_Bool) var_4))))) > (var_3)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_15 = max((((((/* implicit */_Bool) 15403368U)) || (((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)))))), (((((735269824U) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (130))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18056)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)34612))))))));
        var_16 = ((/* implicit */unsigned long long int) max((4130297160U), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_0])))))))));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-20))));
        var_18 &= ((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)34612), (((/* implicit */unsigned short) min((var_9), (var_0)))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_19 = (~(((/* implicit */int) (short)18055)));
        var_20 += ((/* implicit */_Bool) var_0);
    }
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_10))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_2 - 3]))) & (arr_5 [i_2 + 2])))) || (((/* implicit */_Bool) (~(var_7)))))))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (+(var_10))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (var_0))))) | (((unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) & (max((var_13), (var_7)))))));
        var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_10 [i_3])))) ? (1968756102) : (((/* implicit */int) ((var_1) <= (((/* implicit */int) arr_10 [i_3])))))));
        var_26 *= ((/* implicit */unsigned int) 2LL);
    }
    var_27 = ((/* implicit */unsigned int) ((3U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
    /* LoopSeq 3 */
    for (long long int i_4 = 3; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_4 - 2] [i_4 - 3]), (((/* implicit */unsigned long long int) var_9))))) ? (max((arr_3 [i_4 - 1] [i_4 - 3]), (arr_3 [i_4 + 1] [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_4 - 2] [i_4 + 2]) <= (var_7)))))));
        var_29 += ((/* implicit */signed char) var_13);
        var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18056)) ? (-7794115151024482041LL) : (((((/* implicit */_Bool) 2LL)) ? (-3LL) : (((/* implicit */long long int) -967665696))))))), ((((+(arr_0 [i_4] [10U]))) >> (((((((/* implicit */_Bool) arr_10 [(unsigned char)7])) ? (((/* implicit */long long int) 4294967290U)) : (arr_9 [i_4] [i_4 - 3]))) - (4294967276LL)))))));
    }
    for (long long int i_5 = 3; i_5 < 20; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned long long int) (+((~(735269814U)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((int) ((var_3) >= (((/* implicit */int) (unsigned short)0)))));
                var_33 = ((/* implicit */unsigned int) var_7);
            }
            /* vectorizable */
            for (unsigned int i_8 = 4; i_8 < 19; i_8 += 3) 
            {
                var_34 = ((/* implicit */long long int) var_11);
                var_35 = (-(((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)28761))))));
                var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7U)) ? (657317991) : (((/* implicit */int) (unsigned char)96))))) ? (735269804U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49505)))));
            }
            for (int i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (-(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) 4294967278U)), (arr_3 [i_5] [i_10]))))))))));
                    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    var_39 = ((/* implicit */unsigned long long int) (unsigned char)49);
                    var_40 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5] [i_5 - 1] [i_9 - 1])) ? (arr_24 [i_5 + 1] [i_5] [i_5 + 2] [i_9 + 1]) : (var_10))), ((~(arr_20 [i_10])))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_23 [i_5 + 1] [i_5 - 1] [i_5 - 1]) && (arr_23 [i_5 - 3] [i_5 - 3] [i_5])))) >= ((~(((/* implicit */int) arr_23 [i_5 - 3] [i_5 - 3] [18]))))));
                }
                for (short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_42 = ((/* implicit */short) var_2);
                    var_43 = ((min((642459566), (((/* implicit */int) (signed char)111)))) < (((/* implicit */int) ((((/* implicit */int) arr_26 [i_5 - 2] [i_9 + 1])) < (max((((/* implicit */int) (short)-28761)), (var_12)))))));
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_44 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL)));
                        var_45 ^= ((/* implicit */unsigned long long int) (unsigned char)98);
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        var_46 += ((arr_29 [i_5] [i_13] [i_5 - 1] [i_11] [i_9 - 2] [i_9 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_6] [i_5 + 2] [i_11] [i_9 - 1] [i_5]))) : (18446744073709551615ULL));
                        var_47 += ((arr_25 [i_5 + 2] [i_9 + 1] [8U] [i_11] [i_13]) ? (((/* implicit */int) arr_25 [i_5 - 2] [i_9 - 2] [i_9 - 1] [i_11] [i_11])) : (((/* implicit */int) arr_25 [i_5 - 1] [i_9 + 1] [i_9] [i_13] [i_13])));
                    }
                    for (unsigned char i_14 = 1; i_14 < 20; i_14 += 2) 
                    {
                        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34612))) : (((((/* implicit */_Bool) 18U)) ? (arr_13 [i_11] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)11])))))));
                        var_49 ^= ((/* implicit */unsigned int) (~(var_10)));
                    }
                    for (long long int i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned short) var_6);
                        var_51 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((unsigned int) var_0)))) * (((/* implicit */int) ((((3946453659290701107ULL) * (14305382483079837231ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9133550568412942440LL)) ? (((/* implicit */unsigned int) var_12)) : (var_11)))))))));
                    }
                }
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-2023623128338358368LL) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_14 [i_5 + 2])) : (((/* implicit */int) var_9))))) : (max((var_10), (((/* implicit */unsigned long long int) arr_14 [i_5 - 3])))))))));
                var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5] [i_5])) ? (((((/* implicit */_Bool) 4294967290U)) ? (-2147483618) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((1026491598U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-18582)))))))))));
                var_54 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -2147483618)) ? (-4176785750698349513LL) : (min((((/* implicit */long long int) var_11)), (arr_12 [i_9 - 2]))))) * (((/* implicit */long long int) min((max((((/* implicit */int) (unsigned short)34612)), (2147483647))), (((((/* implicit */int) var_8)) << (((/* implicit */int) (unsigned char)7)))))))));
                var_55 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28761))) > (((((unsigned int) var_7)) - (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_11)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < ((+(4294967290U))))))));
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) ((((unsigned long long int) var_1)) << (((((long long int) var_13)) - (8859560342426630316LL))))))));
                            var_58 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (((arr_16 [i_5 - 3] [i_16]) & (((/* implicit */unsigned long long int) 4294967290U))))));
                            var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) arr_44 [i_5] [i_18] [i_5])))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned int i_20 = 2; i_20 < 19; i_20 += 3) /* same iter space */
            {
                var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_1 [i_5 - 1] [i_20 - 1])))))));
                var_61 = ((/* implicit */long long int) ((arr_29 [(unsigned short)1] [i_20] [i_20 + 1] [i_20 + 1] [i_5 + 1] [i_5 + 2]) ? (-781580611) : (((/* implicit */int) var_4))));
                var_62 = 33554176ULL;
                var_63 = ((/* implicit */unsigned int) arr_24 [i_20] [i_20 + 3] [i_16] [i_5]);
                /* LoopSeq 2 */
                for (int i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    var_64 ^= ((/* implicit */_Bool) (~(var_10)));
                    var_65 = ((/* implicit */int) ((unsigned long long int) (-(var_13))));
                }
                for (unsigned int i_22 = 0; i_22 < 22; i_22 += 3) 
                {
                    var_66 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_23 [i_5] [i_20 - 2] [i_20 - 2]))));
                    var_67 = ((/* implicit */unsigned char) max((var_67), (((/* implicit */unsigned char) (+(((/* implicit */int) var_0)))))));
                    var_68 = ((/* implicit */unsigned char) var_6);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 1; i_23 < 18; i_23 += 1) 
                    {
                        var_69 &= ((/* implicit */unsigned char) var_6);
                        var_70 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (-(var_5))))));
                        var_71 = var_5;
                        var_72 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8218079849695663112ULL)) ? (((/* implicit */int) var_4)) : (var_3)));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        var_73 &= ((/* implicit */int) (-(arr_32 [i_16] [i_5 + 2] [1U] [i_22] [i_24] [i_20 - 2] [i_24])));
                        var_74 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) arr_59 [i_5 - 3] [i_5] [i_5] [i_5])) > (arr_12 [i_16])))) > (((/* implicit */int) arr_10 [i_5 + 1]))));
                    }
                }
            }
            for (unsigned int i_25 = 2; i_25 < 19; i_25 += 3) /* same iter space */
            {
                var_75 = ((/* implicit */_Bool) var_13);
                var_76 = ((/* implicit */unsigned int) (((((((_Bool)1) ? (-2512677642853011116LL) : ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) << (((/* implicit */int) arr_45 [i_5 - 2] [i_25 - 1] [i_25]))));
            }
            for (unsigned int i_26 = 2; i_26 < 19; i_26 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 2; i_27 < 20; i_27 += 3) 
                {
                    for (long long int i_28 = 0; i_28 < 22; i_28 += 2) 
                    {
                        {
                            var_77 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)28))));
                            var_78 = ((/* implicit */unsigned long long int) arr_70 [i_5] [i_27 - 2]);
                            var_79 = ((/* implicit */unsigned char) ((_Bool) ((arr_42 [i_27] [i_5 - 2] [i_26]) << (((((/* implicit */int) (unsigned char)146)) - (144))))));
                            var_80 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_3)) : (arr_15 [i_5])));
                        }
                    } 
                } 
                var_81 -= ((/* implicit */unsigned int) var_6);
                var_82 = ((unsigned int) (signed char)30);
            }
            for (unsigned int i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                var_83 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                var_84 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16211776255685252257ULL))));
                /* LoopSeq 4 */
                for (int i_30 = 1; i_30 < 20; i_30 += 4) /* same iter space */
                {
                    var_85 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    var_86 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))) ? ((-(var_1))) : (((/* implicit */int) (_Bool)1))));
                    var_87 = ((/* implicit */long long int) var_11);
                    var_88 = ((/* implicit */signed char) (~(var_11)));
                }
                for (int i_31 = 1; i_31 < 20; i_31 += 4) /* same iter space */
                {
                    var_89 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 781580626)) ? (((/* implicit */unsigned long long int) arr_37 [i_5] [i_5] [i_16] [i_5] [i_31] [i_31])) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_8)))))) : (((arr_42 [i_29] [i_29] [i_16]) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    var_90 = ((/* implicit */unsigned int) min((var_90), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_60 [i_5 - 1] [i_31 - 1])))))));
                }
                for (int i_32 = 1; i_32 < 20; i_32 += 4) /* same iter space */
                {
                    var_91 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)234))));
                    var_92 = ((/* implicit */long long int) var_7);
                }
                for (unsigned long long int i_33 = 1; i_33 < 20; i_33 += 3) 
                {
                    var_93 &= ((/* implicit */unsigned short) ((_Bool) var_3));
                    var_94 = ((/* implicit */unsigned long long int) min((var_94), (((/* implicit */unsigned long long int) (~(var_3))))));
                }
            }
        }
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
        {
            var_95 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_5] [i_5]))))) % (((((/* implicit */int) arr_88 [i_5] [i_5])) * (((/* implicit */int) arr_88 [i_5] [i_5]))))));
            var_96 ^= ((/* implicit */unsigned long long int) (+(-513763084)));
            var_97 ^= ((/* implicit */unsigned int) (((+(arr_75 [i_5] [(signed char)18] [i_5]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((11141539108170729464ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
            var_98 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_12 [i_5 + 2])) ? (((/* implicit */int) arr_2 [9])) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) var_6)) - (7563))))));
            var_99 = ((((unsigned int) var_6)) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) <= (max((((/* implicit */unsigned long long int) arr_69 [i_34] [i_34] [i_5] [i_5])), (var_10))))))));
        }
        var_100 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 735269824U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (short)2010)) > (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) var_9))))) : (arr_85 [i_5] [i_5] [i_5 + 2])));
        /* LoopNest 3 */
        for (long long int i_35 = 0; i_35 < 22; i_35 += 4) 
        {
            for (unsigned long long int i_36 = 0; i_36 < 22; i_36 += 3) 
            {
                for (unsigned long long int i_37 = 0; i_37 < 22; i_37 += 4) 
                {
                    {
                        var_101 = ((/* implicit */_Bool) min((var_101), (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((unsigned int) var_9))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (arr_52 [i_5 + 1] [i_35] [i_37])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)30))))) : (((((arr_9 [i_5] [i_5]) + (9223372036854775807LL))) << (((/* implicit */int) var_8)))))))))));
                        var_102 = (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (max((3671731670U), (3133595155U))));
                        var_103 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 3]))) : (var_7))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_38 = 1; i_38 < 21; i_38 += 4) 
        {
            var_104 = ((/* implicit */short) max((var_104), (((/* implicit */short) arr_76 [i_38 + 1] [i_5 - 1] [10U] [10U] [i_5 - 1] [i_5]))));
            var_105 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) (~(1173059557U))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_38])) ? (-781580611) : (((/* implicit */int) (signed char)45))))) ? (((/* implicit */long long int) max((var_12), (((/* implicit */int) arr_43 [i_5] [i_38] [i_38 + 1]))))) : (max((-7182432149826000460LL), (((/* implicit */long long int) 735269833U))))))));
        }
    }
    for (long long int i_39 = 3; i_39 < 20; i_39 += 3) /* same iter space */
    {
        var_106 = ((/* implicit */unsigned long long int) var_9);
        var_107 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) var_12)) : (max((10974533230860158808ULL), (((/* implicit */unsigned long long int) 2147483647))))));
        var_108 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_100 [i_39] [i_39 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_32 [i_39 - 3] [i_39 - 1] [i_39 - 2] [i_39] [i_39 - 1] [i_39] [i_39 - 3])))))) : (min((var_11), (var_11)))));
    }
}
