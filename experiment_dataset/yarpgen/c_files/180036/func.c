/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180036
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
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) min((max((var_13), (var_13))), (((/* implicit */signed char) (!((_Bool)0))))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)151)) < (((/* implicit */int) (short)9738)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((arr_8 [i_1] [i_1] [i_0]) | (4262059074U))))) ? (((/* implicit */unsigned long long int) ((4294967295U) & ((((_Bool)0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) * (arr_7 [i_2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) var_2)), (var_11))))), (((((/* implicit */long long int) ((arr_8 [i_0] [i_3] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) & (arr_6 [i_0] [i_1] [i_0] [i_4])))));
                                arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))))) ? (((((/* implicit */_Bool) (short)26108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) : (arr_11 [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((max((var_15), (((/* implicit */unsigned int) var_5)))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3])) ? (-982861457) : (((/* implicit */int) var_9))))))))));
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (short)-26108)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((((15461629474389861674ULL) << ((((((_Bool)1) ? (1316821752) : (((/* implicit */int) (unsigned char)1)))) - (1316821746))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (2597128843U)))) ? (((2576731978961999376LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (arr_7 [i_0] [i_0] [i_0]))))))))));
        arr_15 [i_0] [i_0] = (((+((((_Bool)1) ? (17000368841589218095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)26108))) <= (arr_5 [i_0] [i_0] [i_0]))))) & (((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97)))))))));
        arr_16 [i_0] = ((/* implicit */unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)224))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), ((short)26082))))) & (min((((/* implicit */unsigned long long int) var_2)), (arr_20 [6ULL])))))) ? (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) 4212237717U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 7689214785046716192LL)) && (((/* implicit */_Bool) (short)30955))))) : (((/* implicit */int) (unsigned short)65535)))))))));
                    arr_22 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) max((-2576731978961999347LL), (((/* implicit */long long int) arr_9 [i_6] [i_0]))))))));
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) min((-1806853510), (((((/* implicit */int) (unsigned short)36534)) - (((/* implicit */int) (unsigned char)31))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 |= ((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_0] [i_6] [i_7]))))) | (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-30)) - (((/* implicit */int) (signed char)55)))))));
                            var_23 ^= ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) - (1806853495))), (((/* implicit */int) ((_Bool) ((1806853510) - (((/* implicit */int) var_2))))))));
                            var_24 = ((/* implicit */unsigned long long int) (!(((_Bool) max((var_4), (58836851U))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)55))))), (((((/* implicit */_Bool) (unsigned short)15441)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551608ULL)))));
                        arr_28 [i_5] [i_6] = ((/* implicit */signed char) ((short) (_Bool)1));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        arr_31 [i_9] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_0] [i_9] [i_9]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - ((+(9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max(((signed char)35), ((signed char)-108)))) : (((((/* implicit */int) (_Bool)0)) >> (((5655620875213283169ULL) - (5655620875213283162ULL))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -1806853510)) <= (arr_17 [i_5]))))))) ? (((int) arr_23 [i_5] [i_9] [i_9] [i_9] [i_9] [i_5])) : ((((+(2147483647))) ^ (((/* implicit */int) (signed char)127))))));
                            arr_34 [i_0] [i_5] [i_0] [i_6] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((arr_32 [i_0] [i_5] [i_6] [i_9] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_5] [i_10]))))) <= (((unsigned int) arr_29 [i_10] [i_5] [i_6] [i_9] [i_10]))))))));
                            var_26 -= ((/* implicit */int) ((unsigned short) ((((unsigned int) (_Bool)1)) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1308956643U))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_0] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((min((1087373852), (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) arr_3 [i_0] [i_5] [i_0])) : (((/* implicit */int) arr_25 [i_11] [i_0] [i_5] [i_5] [i_0] [i_0])))))), (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)25294)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4255698715275519728ULL)) || (((/* implicit */_Bool) 31ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) && (((/* implicit */_Bool) var_14)))))))));
                        arr_40 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((1034810026U) & (((/* implicit */unsigned int) 1567158163))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)153)))));
                        arr_45 [i_5] = ((((/* implicit */_Bool) ((signed char) (unsigned short)32767))) && (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_36 [i_6] [i_12])))) && ((!(((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_0])))))));
                        var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12680)) <= (((/* implicit */int) (unsigned short)52840))));
                        var_29 += ((/* implicit */_Bool) max((1936892082U), (((/* implicit */unsigned int) (short)-25295))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)97)) * (((/* implicit */int) (signed char)-97))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)12680))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (18055831143950156452ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((_Bool) arr_23 [(_Bool)1] [i_5] [i_6] [i_6] [i_0] [i_12]))) : (((/* implicit */int) (unsigned char)148))))))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 20; i_13 += 4) 
                    {
                        arr_48 [i_5] [i_5] [i_6] [i_13] = ((/* implicit */unsigned int) ((unsigned long long int) (~(18446744073709551615ULL))));
                        arr_49 [i_5] [i_13] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)13824))))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_10))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_47 [i_13] [i_13 + 1] [i_13] [i_13]))) : (((((/* implicit */long long int) var_15)) ^ (arr_42 [i_13] [i_13] [i_5] [i_13 + 1])))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967295U)) * (17310438282989626044ULL))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_14 = 2; i_14 < 12; i_14 += 4) 
    {
        arr_52 [i_14] [i_14 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) * (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_14] [i_14 + 1] [i_14] [i_14])) < (((/* implicit */int) arr_21 [i_14] [i_14] [i_14 - 1] [i_14 + 1])))))));
        arr_53 [i_14] [i_14] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23383)) & (((/* implicit */int) arr_9 [i_14] [i_14]))))) : (arr_17 [i_14 + 2]))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6))))))));
        var_32 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((581388506U) << (((13695475629938896661ULL) - (13695475629938896641ULL)))))), (max((((/* implicit */unsigned long long int) 150712553)), (min((((/* implicit */unsigned long long int) arr_46 [i_14] [i_14] [i_14] [i_14] [i_14 - 2])), (851327661853648969ULL)))))));
    }
    /* vectorizable */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_33 = ((/* implicit */_Bool) ((unsigned char) var_6));
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            for (unsigned short i_17 = 1; i_17 < 12; i_17 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        arr_67 [i_15] [i_16] [i_15] = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50094))) * (1342180828U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)120)) | (((/* implicit */int) (signed char)120))))) < (((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                        arr_68 [i_18] [i_18] [i_17] [i_16] [i_16] [i_15] = ((/* implicit */unsigned short) ((423911299U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83)))));
                        var_35 = ((/* implicit */unsigned long long int) ((signed char) var_7));
                    }
                    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_15] [i_16])) ? (31ULL) : (((/* implicit */unsigned long long int) var_12))));
                        var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15439)) | (((/* implicit */int) (signed char)-120))));
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_3) + (arr_64 [i_15] [i_16] [i_16] [i_16] [i_17] [i_20])))) + (18446744073709551615ULL)));
                        arr_75 [i_15] [i_15] [i_16] [i_17] [i_20] [i_20] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        var_39 = ((/* implicit */int) ((unsigned char) 1847676079942514437ULL));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        for (int i_22 = 0; i_22 < 14; i_22 += 3) 
                        {
                            {
                                var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3493716257U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)50119))));
                                arr_84 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (arr_6 [i_15] [i_16] [i_17 + 1] [i_21]))))) - (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15441)))))));
                            }
                        } 
                    } 
                    arr_85 [i_17] [i_16] [i_16] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) & (378586999U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        arr_88 [i_16] [i_23] [i_17 - 1] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_89 [i_15] [i_15] [i_17] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)82)) & (((/* implicit */int) (signed char)116))));
                        arr_90 [i_23] [i_16] [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50098)) ? (2905830626U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15417))) | (18293157552722309026ULL)))));
                    }
                    for (long long int i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50094)) / (((/* implicit */int) (_Bool)1))));
                        var_42 &= ((/* implicit */unsigned char) ((signed char) arr_61 [i_15] [i_16] [i_17 + 1] [i_24]));
                        var_43 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)82))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) 4086691736U)) ? (((/* implicit */int) (unsigned short)15416)) : (((/* implicit */int) (signed char)13))));
        arr_95 [i_15] = ((/* implicit */unsigned short) ((arr_59 [i_15 - 1] [i_15 - 1]) ? (((((/* implicit */_Bool) arr_2 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33178))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_92 [i_15] [i_15] [i_15] [i_15] [i_15]))))))));
    }
}
