/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186355
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 &= arr_0 [13LL] [i_0];
        var_12 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65526))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))) & (min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_0 [i_0] [i_1]))))), (4294967295U))));
            var_13 = (signed char)17;
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_14 = ((/* implicit */unsigned char) (~(((4U) << (((((/* implicit */int) var_3)) % (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    arr_14 [(unsigned char)3] [(unsigned char)3] = ((/* implicit */int) 10293345022427937097ULL);
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (~(((min((0U), (((/* implicit */unsigned int) (unsigned char)88)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 3] [i_5 - 1] [(signed char)3] [(unsigned char)11] [i_4 - 2] [i_3] [i_2])))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(min((20U), (4294967295U))))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_3] [i_4 - 1])), (18446744073709551615ULL)))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (0U) : (((/* implicit */unsigned int) arr_12 [i_2])))), ((+(0U))))))));
                        arr_23 [i_0] [i_0] [i_6] [i_4] [i_3] |= ((/* implicit */unsigned long long int) (unsigned char)64);
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((_Bool) var_0));
                        var_18 = ((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_2] [i_3] [i_4 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967275U)) || (((/* implicit */_Bool) (unsigned short)16419)))))));
                        arr_28 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    var_19 = ((/* implicit */unsigned long long int) max((((((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) * ((-(4294967275U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 0ULL))) && (((/* implicit */_Bool) (signed char)46)))))));
                }
                var_20 = ((/* implicit */unsigned short) arr_24 [i_0]);
            }
            for (unsigned short i_8 = 3; i_8 < 20; i_8 += 3) 
            {
                arr_32 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [(short)17])) : (((/* implicit */int) (signed char)17))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((3714395168U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
                var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((18014398508957696LL), (((/* implicit */long long int) 4294967279U))))))) ? (((((/* implicit */int) (unsigned char)167)) >> (((((((-4460053646704476050LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-1)) + (45))))) - (270763LL))))) : (((/* implicit */int) var_6))));
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) (short)-7303);
                var_23 += ((/* implicit */long long int) var_2);
                var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967276U)) || (((/* implicit */_Bool) arr_12 [i_9]))));
                var_25 = ((/* implicit */int) max((((/* implicit */long long int) (!(max((var_9), ((_Bool)0)))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_17 [i_0])), (12U)))), (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))))));
            }
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                arr_38 [i_0] [(short)4] = ((/* implicit */short) (+(min((var_10), (((/* implicit */long long int) min(((short)-8), (((/* implicit */short) var_3)))))))));
                arr_39 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_10 - 1]);
                arr_40 [i_2] [i_2] [(signed char)22] = ((/* implicit */unsigned char) (signed char)15);
            }
            var_26 = ((/* implicit */unsigned short) ((unsigned char) arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]));
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_44 [i_0] = ((/* implicit */unsigned short) ((min((28U), (((/* implicit */unsigned int) (unsigned char)208)))) | (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_31 [i_0])), ((signed char)45))))) | (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))))));
                var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(4294967295U)))) ? (min((((/* implicit */long long int) var_9)), (var_7))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)71))) & (-2406586453419090127LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19607))) : (1596536899414673581LL)))) && (((((/* implicit */long long int) 4294967281U)) == (var_7))))))));
            }
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 3; i_13 < 23; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (signed char)0)) >> (((1596536899414673588LL) - (1596536899414673561LL)))));
                            var_29 = ((/* implicit */_Bool) (signed char)0);
                            arr_53 [i_0] [i_2] [i_12] [i_12] [(signed char)20] = ((/* implicit */signed char) -1039679094);
                        }
                    } 
                } 
                arr_54 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (short)2044);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned short i_16 = 3; i_16 < 23; i_16 += 3) 
                    {
                        {
                            var_30 = ((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_6))));
                            arr_61 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)45)) != (((/* implicit */int) ((signed char) (unsigned short)55341))))))));
                            var_31 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_6))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        arr_67 [i_17] [i_18] = ((/* implicit */unsigned long long int) ((arr_33 [i_18]) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)2044)) : (((/* implicit */int) (short)2044))));
                    }
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) (_Bool)1);
                        var_34 = max((-2406586453419090127LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (arr_49 [i_0] [i_12] [(signed char)9] [i_2] [i_12])))) ? (((/* implicit */int) (unsigned short)44086)) : (((/* implicit */int) ((signed char) (signed char)-3)))))));
                        var_35 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= ((+(1596536899414673607LL))))) ? (((/* implicit */int) (unsigned char)0)) : (((((1301456249) - (((/* implicit */int) var_2)))) - (4194303)))));
                        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)45579))));
                    }
                    arr_70 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)8191))) / (-741373067584416706LL)));
                    var_37 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) + ((+((-(var_1))))));
                }
                for (long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                {
                    var_38 = ((/* implicit */short) var_5);
                    arr_74 [i_0] [(_Bool)1] [(unsigned short)13] [i_20] [i_20] [i_20] = ((/* implicit */signed char) var_5);
                    var_39 = ((/* implicit */short) 799777686042930676LL);
                    arr_75 [i_12] [i_12] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-46))))) < (((/* implicit */int) (unsigned char)168))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0] [i_20])) ? (-6963211524368460806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_20] [i_12] [i_2] [i_0])))))));
                }
                for (long long int i_21 = 2; i_21 < 23; i_21 += 1) 
                {
                    var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1281065689U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) -180126911)) < (1023U))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_2] [i_21] [i_12])) << (((/* implicit */int) arr_37 [i_21 - 2] [13] [(short)1]))))), (((((/* implicit */_Bool) 4294966272U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1281065689U)))))));
                    /* LoopSeq 1 */
                    for (int i_22 = 2; i_22 < 23; i_22 += 3) 
                    {
                        var_41 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32756))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)13877))) : (((((/* implicit */long long int) 283228838)) ^ ((-9223372036854775807LL - 1LL))))));
                        arr_81 [i_0] [i_0] [(signed char)19] [i_0] [i_12] [(signed char)19] [i_22] = ((/* implicit */short) var_10);
                        arr_82 [i_0] [i_2] [i_21] [i_0] [17LL] = ((/* implicit */unsigned int) ((unsigned char) (~(-283228827))));
                        arr_83 [i_0] [i_21 - 2] [i_12] [i_2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)2942))));
                    }
                    arr_84 [8] [8] [i_12] [15U] = ((/* implicit */int) arr_72 [(unsigned char)9] [i_2] [(unsigned char)9] [i_21] [i_0] [(unsigned char)9]);
                }
                for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
                {
                    arr_88 [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) 6963211524368460805LL)) ? (arr_80 [i_0] [(unsigned char)14] [i_12] [i_23] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) : ((+(arr_80 [i_0] [i_2] [i_12] [i_2] [i_2])))));
                    arr_89 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44316))))) | (((/* implicit */int) ((((/* implicit */int) (short)-17445)) == (((/* implicit */int) var_8)))))));
                    var_42 ^= (unsigned char)20;
                }
            }
        }
        for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 3) 
        {
            var_43 = ((/* implicit */unsigned int) var_4);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 15586482029940332124ULL))) & (((/* implicit */int) (short)-2049))));
                /* LoopSeq 4 */
                for (short i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((_Bool) ((int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 2) 
                    {
                        arr_99 [i_0] [i_24] [i_24] [i_25] [19] [i_27] = ((/* implicit */signed char) ((arr_2 [i_27] [i_24] [i_0]) < (arr_2 [i_0] [i_0] [i_0])));
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)61)))))));
                    }
                    for (unsigned char i_28 = 2; i_28 < 23; i_28 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-118)) != (((/* implicit */int) (signed char)96))));
                        arr_103 [i_28] [i_26] [14ULL] [i_24] [i_24] [i_26] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2868815282164199174LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-126))));
                    }
                }
                for (signed char i_29 = 0; i_29 < 24; i_29 += 4) 
                {
                    arr_107 [i_25] [(_Bool)1] [i_25] [i_24] = ((/* implicit */unsigned int) ((unsigned char) arr_72 [i_29] [i_29] [i_25] [i_25] [i_24] [i_0]));
                    arr_108 [i_0] [i_0] [i_0] [i_24] [i_29] [i_29] = ((/* implicit */int) var_1);
                    var_48 = ((/* implicit */unsigned short) (-(arr_21 [i_0] [i_0] [(unsigned char)21] [i_0] [i_0])));
                    var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 172094857U))));
                    arr_109 [i_0] [(signed char)2] [i_0] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_105 [i_0])) < (((/* implicit */int) (_Bool)1))));
                }
                for (int i_30 = 0; i_30 < 24; i_30 += 4) 
                {
                    var_50 = ((/* implicit */unsigned char) -2147483619);
                    /* LoopSeq 3 */
                    for (signed char i_31 = 0; i_31 < 24; i_31 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) ((((((((/* implicit */int) var_8)) + (2147483647))) >> (((4503599627354112ULL) - (4503599627354091ULL))))) == (((/* implicit */int) var_6)))))));
                        arr_118 [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(-2147483606))))));
                        var_52 = ((/* implicit */unsigned short) var_10);
                    }
                    for (signed char i_32 = 0; i_32 < 24; i_32 += 1) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3674380869U)) + (-2868815282164199164LL)))) ? (((1048575U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64512))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_30] [i_30] [9]))))))));
                        arr_121 [i_32] [i_30] [i_24] [i_24] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 4294967295U))) >= (((/* implicit */int) var_3))));
                        arr_122 [i_24] [i_24] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) var_5)))));
                        var_54 = ((/* implicit */signed char) max((var_54), (arr_71 [i_0] [7LL] [i_0] [i_0])));
                    }
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        arr_125 [i_0] [i_24] [i_0] [11] [i_33] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1568933775)) ? (((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned short)43447))))));
                        arr_126 [i_33] [i_24] [i_24] [(signed char)22] = ((/* implicit */_Bool) (+(arr_79 [i_0] [i_30] [i_24])));
                        var_55 = ((/* implicit */long long int) var_5);
                    }
                    var_56 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                }
                for (signed char i_34 = 0; i_34 < 24; i_34 += 1) 
                {
                    arr_130 [(_Bool)1] [i_24] [i_34] [20LL] [i_24] [i_0] = ((/* implicit */unsigned char) var_10);
                    var_57 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_76 [(unsigned char)12] [i_24] [i_25] [i_34])))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43450)) && (((/* implicit */_Bool) 4258492221U)))))));
                    arr_131 [i_24] [i_24] [i_24] [i_34] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 682347988092687674LL)) && (((/* implicit */_Bool) (signed char)29))))));
                    var_58 = ((/* implicit */unsigned short) (~(2097151U)));
                }
                arr_132 [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-23)) >= (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)37544)) - (37517)))))));
                arr_133 [22ULL] [i_24] [8U] &= ((/* implicit */unsigned short) ((long long int) var_7));
            }
        }
        var_59 = ((/* implicit */_Bool) (short)-6171);
    }
    for (long long int i_35 = 0; i_35 < 19; i_35 += 3) 
    {
        var_60 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)21)) + (((/* implicit */int) (unsigned char)190))))), ((+(268003475U))))), (((/* implicit */unsigned int) 1501800962))));
        arr_136 [i_35] [i_35] = ((/* implicit */_Bool) (~((((+(5259768125943152659LL))) << (((((/* implicit */int) (unsigned short)43436)) - (43436)))))));
        arr_137 [5U] [i_35] = ((/* implicit */_Bool) var_10);
        var_61 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 944401223)) || (((/* implicit */_Bool) var_10)))) ? (arr_123 [i_35] [i_35]) : (((/* implicit */int) ((var_9) && ((!(((/* implicit */_Bool) (short)0)))))))));
    }
    var_62 += ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) -944401223))))))));
}
