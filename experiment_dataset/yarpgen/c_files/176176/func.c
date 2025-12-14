/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176176
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) 10996693473262733847ULL);
                    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) (signed char)-73))))) ? ((-(((/* implicit */int) arr_0 [i_0] [(unsigned short)18])))) : ((-(((/* implicit */int) var_7)))))) > (max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)71)))))))));
                    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)202)) - (((/* implicit */int) (signed char)73)))) * (((/* implicit */int) (unsigned short)54231)))) <= (((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) (+(max((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_10)))), (((/* implicit */int) var_4))))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_9)))) ? (((/* implicit */int) var_2)) : (max((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (signed char)73)))), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_6))))))));
                        var_16 = ((/* implicit */signed char) max((arr_7 [i_0] [i_0] [i_2 + 2] [i_0]), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) <= (((((/* implicit */_Bool) arr_4 [(unsigned char)18])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)54226)))))))));
                    }
                    for (int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        var_17 += ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_4 [i_1 - 4])) : (var_1))))))) ? (((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_0] [i_2 - 1] [i_0])))) : (min((((((/* implicit */_Bool) (unsigned char)15)) ? (7450050600446817768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_3)))));
                        var_18 ^= (((+(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 2] [i_4 + 1])) ? (arr_9 [i_2] [i_2 - 1] [(unsigned short)8] [(unsigned short)8] [i_2 - 1]) : (((/* implicit */int) var_4)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_4]))))) ? (((/* implicit */int) (unsigned char)153)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) - (146))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2] [(unsigned char)15] [i_2 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (max((arr_2 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)54231)))) : (((/* implicit */unsigned long long int) (~(var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_4)) + (12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) var_4)), (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870848U)) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_2] [i_4 + 1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0] [i_1] [i_2] [i_1]) == (((/* implicit */int) (unsigned char)58)))))) : (((((/* implicit */_Bool) var_4)) ? (6319585322479903462LL) : (((/* implicit */long long int) arr_10 [i_4] [i_2] [21LL] [i_4]))))))));
                        var_20 = ((/* implicit */unsigned char) ((short) 8324574614807831252ULL));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_21 ^= ((/* implicit */int) ((((/* implicit */int) var_8)) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))));
                        var_22 = var_1;
                    }
                }
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 22; i_8 += 3) /* same iter space */
                        {
                            var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 3758630814U))));
                            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) var_8)) : (var_1)))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_6] [(unsigned short)12] [i_7] [(signed char)17] [i_8])) : (((/* implicit */int) var_10)))))))));
                        }
                        for (short i_9 = 1; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            var_27 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))));
                            arr_27 [i_0] [i_1] [i_7] [i_7] [i_1] = ((((/* implicit */_Bool) 2251799813423104LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (var_1));
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_1) - (((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? ((+(var_1))) : (((((/* implicit */int) (signed char)95)) | (((/* implicit */int) arr_21 [6ULL])))));
                            arr_30 [i_10] [i_1] [i_1] [i_7] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned char)24))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                    }
                    var_31 |= ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                var_32 = arr_17 [i_0] [i_0] [i_0];
                                var_33 = ((/* implicit */unsigned long long int) (((+(max((((/* implicit */int) (signed char)-45)), (-1147592942))))) * (((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_4)))) * (((/* implicit */int) ((arr_3 [i_6] [11ULL]) <= (((/* implicit */int) var_2)))))))));
                                var_34 &= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32)))))) | (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((arr_22 [i_12] [i_11] [i_6] [i_1] [(unsigned char)2] [(signed char)5]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [12] [i_0] [i_0])) >= (((/* implicit */int) arr_12 [i_6] [i_11] [i_6] [i_1 - 4] [i_0]))))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1]))) * (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [7U] [i_0] [i_0])) | (arr_26 [i_0] [i_1 + 1] [i_1] [i_1] [i_6])))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_6]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_6)))))) - (65500)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 3; i_13 < 22; i_13 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */signed char) arr_9 [18ULL] [i_13] [i_6] [i_1] [i_0]);
                            var_37 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_5)) - (223)))))))) ? (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)32767)))) > (((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [i_6] [i_13] [i_14])))))));
                        }
                        for (unsigned char i_15 = 3; i_15 < 21; i_15 += 3) 
                        {
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((signed char) ((unsigned short) ((((/* implicit */int) (unsigned char)224)) - (((/* implicit */int) var_0)))))))));
                            var_39 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (2494383256U)))) : (min((4658699460691467622ULL), (arr_18 [i_6] [(_Bool)1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [(unsigned char)3] [i_0] [i_0])) + (((/* implicit */int) var_5)))))));
                            var_40 = var_0;
                        }
                        var_41 &= ((/* implicit */int) var_6);
                    }
                    for (int i_16 = 3; i_16 < 20; i_16 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned short) arr_39 [i_0] [i_0] [i_0] [i_6] [i_6] [i_16] [(unsigned short)21]);
                        var_43 = ((/* implicit */unsigned char) ((unsigned long long int) 7450050600446817759ULL));
                    }
                    for (short i_17 = 3; i_17 < 22; i_17 += 3) 
                    {
                        arr_48 [i_6] [(short)6] [i_1] [(unsigned char)9] &= max((((((var_9) + (arr_15 [i_17] [i_6] [13ULL] [8U]))) + (((/* implicit */unsigned long long int) (+(arr_28 [(unsigned char)9] [i_1] [i_1] [i_6] [i_6] [i_17 - 3])))))), (((((/* implicit */_Bool) arr_18 [i_1] [i_6] [i_17])) ? (7450050600446817768ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_6])) | (((/* implicit */int) arr_5 [i_0] [(unsigned short)5] [i_0] [i_0]))))))));
                        var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_6] [i_17 - 2])) ? (arr_28 [i_17] [(signed char)19] [(signed char)19] [i_1] [(signed char)19] [(signed char)19]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))) ? (((/* implicit */int) ((var_1) != (((/* implicit */int) var_2))))) : (((var_1) + (((/* implicit */int) arr_12 [14] [(signed char)10] [i_6] [i_1 - 3] [i_0]))))))) ? (min((((((/* implicit */int) (signed char)0)) >> (((10996693473262733847ULL) - (10996693473262733845ULL))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-117)) < (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-117)))) > (((((/* implicit */_Bool) arr_22 [(signed char)10] [i_0] [i_1] [i_6] [i_6] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))));
                    }
                }
                for (unsigned long long int i_18 = 2; i_18 < 23; i_18 += 1) 
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        arr_53 [i_0] [i_0] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_40 [1U] [i_1] [1U] [i_19] [i_19] [(unsigned short)5]))));
                        var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                    }
                    for (unsigned int i_20 = 3; i_20 < 23; i_20 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) (+(max(((+(var_1))), (((/* implicit */int) (unsigned char)0))))));
                        /* LoopSeq 2 */
                        for (int i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            var_48 = var_1;
                            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_20] [i_1] [i_18] [i_21])) ? (((/* implicit */unsigned long long int) min((((arr_10 [i_20] [i_1] [(unsigned short)15] [i_21]) / (((/* implicit */unsigned int) 791676680)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [i_0] [i_1] [i_0] [i_20] [i_21] [(unsigned char)0])))))))) : ((-(var_9)))));
                            var_50 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : ((~(var_1)))))));
                            var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [4U])) ? ((-(((/* implicit */int) ((unsigned char) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_8))));
                        }
                        /* vectorizable */
                        for (signed char i_22 = 1; i_22 < 23; i_22 += 2) 
                        {
                            var_52 = (+(((/* implicit */int) var_2)));
                            var_53 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)116))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_23 = 3; i_23 < 23; i_23 += 1) 
                        {
                            var_54 = ((/* implicit */short) var_10);
                            var_55 = ((/* implicit */int) var_2);
                            var_56 ^= ((/* implicit */unsigned int) var_8);
                        }
                        for (unsigned long long int i_24 = 1; i_24 < 23; i_24 += 4) 
                        {
                            var_57 = ((/* implicit */unsigned int) (-(max(((-(var_9))), (((/* implicit */unsigned long long int) var_0))))));
                            var_58 = ((/* implicit */int) ((unsigned int) var_6));
                            var_59 = var_4;
                            var_60 = ((/* implicit */unsigned char) var_1);
                        }
                        var_61 = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(((/* implicit */int) var_6)))) <= (((/* implicit */int) var_3))))) + (((var_1) - (((/* implicit */int) arr_40 [i_0] [i_0] [(unsigned short)7] [i_0] [i_20] [i_20]))))));
                    }
                    var_62 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min(((unsigned char)52), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 17592186044415ULL))))))) % ((-(((/* implicit */int) min(((signed char)-42), ((signed char)-11))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 1; i_25 < 20; i_25 += 3) 
                    {
                        for (unsigned char i_26 = 2; i_26 < 23; i_26 += 4) 
                        {
                            {
                                var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (max((((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_18])) >= (((/* implicit */int) arr_13 [i_26] [(signed char)14] [i_18] [(signed char)14]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [(signed char)20] [i_0] [i_0] [i_0])), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_10)))))))));
                                var_64 = ((var_1) - (max((((/* implicit */int) var_5)), ((~(var_1))))));
                            }
                        } 
                    } 
                    var_65 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((arr_28 [i_0] [(unsigned char)7] [1] [i_1] [i_1] [i_18]), (((/* implicit */long long int) var_6))))))) ? (((((/* implicit */_Bool) max(((unsigned short)54870), (((/* implicit */unsigned short) (signed char)47))))) ? (((((/* implicit */int) (short)23389)) * (((/* implicit */int) (signed char)81)))) : (var_1))) : ((((-(((/* implicit */int) var_4)))) & (((((/* implicit */int) var_0)) % (((/* implicit */int) var_2))))))));
                }
                var_66 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)116)) - (((/* implicit */int) ((1418149619164490530ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (signed char)-119))))))))));
            }
        } 
    } 
    var_67 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
    var_68 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)236)) - (((/* implicit */int) (unsigned char)143)))) / (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (unsigned char)32)) : (-1410445858))))))));
    var_69 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3471430495684139206ULL))))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (unsigned char)53)))))))) & (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (var_9)))));
    var_70 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-103)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_0)))))) > (((/* implicit */int) (signed char)7))));
}
