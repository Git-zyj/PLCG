/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156234
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
    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) 4294967295U));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_8)))) >= (((/* implicit */int) min((var_3), ((signed char)-127))))))), (min(((-(var_11))), (((/* implicit */unsigned long long int) ((var_1) > (-56587282))))))));
    var_20 ^= ((/* implicit */int) max((((/* implicit */long long int) min((var_2), (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) 4066455226U)) ? (((/* implicit */long long int) var_15)) : (((long long int) 4294967295U))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_4 [(unsigned short)10] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) / (4066455226U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : ((-(228512069U))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (unsigned char)3);
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((unsigned short) 4066455226U)), (((/* implicit */unsigned short) arr_9 [i_1])))))));
            var_22 = ((/* implicit */unsigned short) (-(228512069U)));
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            arr_17 [i_1] [(short)2] [i_1] = ((/* implicit */int) arr_15 [i_1]);
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_23 &= ((/* implicit */int) arr_3 [i_4]);
                var_24 = ((/* implicit */int) ((unsigned long long int) (signed char)-99));
                var_25 = ((((/* implicit */int) arr_1 [i_1 + 3])) & (((((/* implicit */_Bool) arr_16 [i_3])) ? (var_14) : (((/* implicit */int) var_5)))));
                var_26 -= ((short) arr_6 [i_1 + 2]);
            }
            for (int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_0 [i_1]);
                            var_28 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-39)) && (((/* implicit */_Bool) 4066455226U)))), (((_Bool) (signed char)-16))))) : ((~(((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_4))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    var_30 -= ((/* implicit */unsigned long long int) var_15);
                    var_31 = (i_5 % 2 == 0) ? (((/* implicit */unsigned short) ((min((4066455226U), (4066455227U))) << (((((/* implicit */int) arr_31 [i_3 - 1] [i_5])) + (88)))))) : (((/* implicit */unsigned short) ((min((4066455226U), (4066455227U))) << (((((((/* implicit */int) arr_31 [i_3 - 1] [i_5])) + (88))) - (31))))));
                }
                var_32 = ((/* implicit */unsigned int) ((int) 228512069U));
                arr_33 [i_5] [i_3 + 1] [i_3 + 1] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 - 1]))) & (arr_0 [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_17))))));
            }
            /* vectorizable */
            for (signed char i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                var_33 = (-(((((/* implicit */_Bool) arr_14 [i_1])) ? (4066455242U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                var_34 = ((/* implicit */unsigned long long int) var_6);
                var_35 -= ((/* implicit */unsigned short) 228512068U);
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    var_36 += ((/* implicit */unsigned char) 228512069U);
                    arr_39 [i_1 - 1] [i_3] [i_9] [i_10] = (-(arr_14 [i_9 + 1]));
                }
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        arr_47 [(signed char)4] [i_3] [i_3] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_12] [i_9 - 2] [i_3] [i_3 + 1])) ? (228512069U) : (((/* implicit */unsigned int) arr_41 [i_12] [i_9 - 2] [i_3 + 1] [i_3 + 1]))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_1] [(signed char)8])) ? (228512090U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_12] [14] [i_9 - 2] [i_3] [i_1 + 1] [i_1])))))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_50 [i_9] [14ULL] [i_11] [i_9 - 2] [i_3] [i_1 + 2] [i_9] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_43 [i_9] [i_9] [i_9])))) * (((/* implicit */int) arr_25 [i_1 + 2] [i_1 + 3] [i_3 - 1] [i_9 + 1]))));
                        var_38 = ((/* implicit */signed char) ((arr_6 [i_3 + 1]) * (((/* implicit */unsigned long long int) 950473924U))));
                    }
                    var_39 = ((/* implicit */signed char) var_11);
                    var_40 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_22 [14LL])) ? (5757283117319109788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)14]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_1] [i_1 + 1]))))));
                    var_41 ^= ((/* implicit */int) arr_3 [i_3]);
                }
                var_42 = ((/* implicit */unsigned int) max((var_42), (arr_10 [i_3 + 1])));
            }
            for (unsigned int i_14 = 4; i_14 < 14; i_14 += 4) 
            {
                var_43 = ((/* implicit */int) ((signed char) (signed char)-16));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 2; i_15 < 14; i_15 += 4) 
                {
                    arr_55 [i_1] [i_1] [i_3] [i_14 + 2] [i_3] [i_15] = ((/* implicit */short) 1683518770);
                    var_44 = ((/* implicit */unsigned int) min((max((((((/* implicit */int) (signed char)16)) + (((/* implicit */int) arr_31 [(unsigned short)2] [i_15])))), ((+(((/* implicit */int) arr_25 [i_15] [i_14] [15LL] [i_1])))))), ((-(((((/* implicit */_Bool) 228512074U)) ? (arr_32 [i_1 + 1] [2ULL] [3] [i_1] [i_14 + 2] [(signed char)8]) : (((/* implicit */int) (signed char)28))))))));
                    var_45 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_38 [i_15] [i_15 + 1] [i_14])), (var_13))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1626573365)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_40 [i_15] [i_14] [i_14] [14]) : (((/* implicit */int) var_6))))) : (max((4066455227U), (((/* implicit */unsigned int) arr_41 [i_1] [i_3] [i_14 - 1] [i_15])))))))));
                }
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    var_46 &= ((/* implicit */int) (unsigned short)0);
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        arr_60 [i_1 + 1] [i_3] = ((/* implicit */int) var_6);
                        var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)2)) / (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) (signed char)104)), (arr_56 [i_1 + 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (8U))))) : (((((/* implicit */_Bool) (~(228512068U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_3])) - (var_14)))) : (((var_0) >> (((((/* implicit */int) var_8)) - (41))))))));
                    }
                    for (int i_18 = 2; i_18 < 13; i_18 += 3) 
                    {
                        var_48 = ((/* implicit */short) var_4);
                        var_49 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_18 - 2] [i_16] [i_14] [i_3] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50)))))) ? (((/* implicit */int) ((short) (short)24))) : ((+(((/* implicit */int) (signed char)0)))))));
                    }
                    var_50 = ((/* implicit */short) min((((((/* implicit */_Bool) ((long long int) var_0))) ? (((unsigned long long int) (unsigned short)5)) : (((/* implicit */unsigned long long int) max((arr_56 [i_3 + 1]), (((/* implicit */unsigned int) var_14))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44209)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (0)))) && (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_46 [i_1 + 1] [i_14] [i_1] [(_Bool)1])))))))));
                    arr_65 [i_1] [3ULL] &= ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_46 [i_16] [i_16] [i_16] [i_1])), (max((4294967288U), (((/* implicit */unsigned int) (short)-20831))))))) : (((((((/* implicit */_Bool) (unsigned short)65533)) ? (5757283117319109779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_14 - 3] [i_3]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_1] [i_3] [i_14])) >> (((4294967285U) - (4294967284U)))))))));
                    arr_66 [(signed char)2] [(unsigned char)12] [i_14 - 2] [i_14] = ((/* implicit */short) (~(((var_5) ? (((/* implicit */int) ((arr_51 [i_1] [i_1] [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40342)))))) : (max((((/* implicit */int) (signed char)-16)), (2147483647)))))));
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                {
                    var_51 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_1] [i_3] [i_1 + 3] [i_19] [i_14] [i_1 + 2] [i_3 - 1])) ? (arr_41 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1]) : (arr_41 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                    arr_70 [i_19] [i_14] [i_3] [i_1 + 1] = ((/* implicit */signed char) max((min((((arr_54 [i_1] [i_3] [i_14 + 1] [i_3] [i_19]) < (((/* implicit */long long int) ((/* implicit */int) arr_58 [(signed char)5] [3U] [i_14] [i_19] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_15)))))), ((((+(5757283117319109767ULL))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_1] [i_1] [i_14])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
                    {
                        var_52 = (~((+(min((arr_30 [i_1] [i_3] [i_1] [i_3] [i_19]), (((/* implicit */unsigned long long int) var_5)))))));
                        var_53 -= ((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_14)) : (228512068U)))) & (((/* implicit */int) min((max((arr_57 [i_20] [i_19] [i_14] [5ULL]), (arr_57 [i_1] [i_3] [i_19] [i_20]))), (((/* implicit */signed char) ((((/* implicit */_Bool) 228512068U)) && (((/* implicit */_Bool) 12689460956390441849ULL))))))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
                    {
                        arr_76 [11ULL] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((arr_14 [i_3]), (((/* implicit */unsigned long long int) arr_44 [i_21] [i_21] [i_19] [i_19] [i_21]))));
                        var_54 = ((/* implicit */_Bool) arr_22 [i_3]);
                    }
                    var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) max(((unsigned short)57344), (((/* implicit */unsigned short) (short)-18093))))), ((+(((/* implicit */int) (signed char)-105))))))) ^ (((unsigned int) arr_71 [i_19] [i_3 + 1] [i_1]))));
                }
                for (signed char i_22 = 0; i_22 < 16; i_22 += 4) /* same iter space */
                {
                    var_56 = ((/* implicit */int) (short)-7198);
                    var_57 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (short)6206)), (arr_30 [i_1] [i_3] [i_3 + 1] [i_3] [2LL]))) | (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_17))))))));
                    var_58 = ((/* implicit */short) arr_1 [i_14]);
                }
                var_59 &= ((int) 1747628541U);
                arr_81 [i_1 + 1] [i_1 - 1] [i_14] = ((/* implicit */short) (~(min((min((((/* implicit */unsigned int) (signed char)-41)), (var_15))), (((((/* implicit */_Bool) arr_80 [i_14] [i_14] [(short)4] [(short)8])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_14] [i_3 - 1] [i_3] [i_1 - 1] [i_1] [i_1] [8])))))))));
            }
            var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_3 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65525)) && (((/* implicit */_Bool) arr_3 [i_3 + 1])))))) : (max((arr_3 [i_3 + 1]), (arr_3 [i_3 + 1])))));
        }
    }
    for (unsigned long long int i_23 = 1; i_23 < 13; i_23 += 4) /* same iter space */
    {
        arr_84 [i_23] = ((/* implicit */unsigned int) var_7);
        var_61 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-607104825), (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))) ? (((((arr_77 [i_23]) / (((/* implicit */long long int) 228512097U)))) * (((/* implicit */long long int) max((arr_41 [i_23 + 3] [i_23 + 1] [i_23] [i_23]), (((/* implicit */int) arr_26 [i_23] [i_23] [i_23] [i_23]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_10 [i_23 + 2]))))));
        arr_85 [0ULL] [i_23] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) var_13))), (var_11)));
    }
}
