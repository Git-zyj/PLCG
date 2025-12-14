/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18761
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0 + 1])), (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)21))))))), (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (var_0)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [5U]))) / (var_9)))) ? (((/* implicit */int) (signed char)-48)) : (((((((/* implicit */int) arr_2 [i_1])) + (2147483647))) >> (((var_13) - (269740638U)))))))), (arr_6 [i_0])));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_7))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min(((signed char)-1), ((signed char)-12)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) var_14))))) : (((/* implicit */int) (signed char)69)))), (((/* implicit */int) ((((/* implicit */int) (signed char)59)) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (signed char)120))))))))));
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                arr_12 [(unsigned short)9] [i_3] [(signed char)10] [i_2] = ((/* implicit */signed char) max((var_13), (((unsigned int) var_10))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned short) ((unsigned int) (-(max((var_9), (((/* implicit */unsigned int) arr_9 [i_0])))))));
                    var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_20 = ((/* implicit */unsigned int) ((signed char) (signed char)122));
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-113)), (((unsigned int) (unsigned short)15459))));
                }
                for (unsigned short i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) (signed char)90))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)122))))) : (var_13))) >= (min((((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_3] [i_3] [i_0] [i_0])), (arr_5 [i_2] [i_2])))));
                    var_23 = ((/* implicit */signed char) var_3);
                    arr_18 [i_5] [i_5] [i_3] [i_3] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) min(((signed char)12), (arr_1 [i_0 + 1]))))));
                    arr_19 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32154)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_6 [i_3])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)50923)) : (((/* implicit */int) (unsigned short)9791)))) : (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_9 [i_3]))))))) ? (((/* implicit */int) ((signed char) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_13) - (269740633U))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) && (((/* implicit */_Bool) (signed char)120)))))));
                }
            }
            var_24 = min((25473102U), (((max((((/* implicit */unsigned int) (unsigned short)52971)), (3U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)33412)) : (((/* implicit */int) arr_1 [i_2]))))))));
            var_25 = ((/* implicit */signed char) ((unsigned short) 25473102U));
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)111)) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_5 [(signed char)0] [(signed char)0]))), (((/* implicit */unsigned int) var_14))))) ? ((-(((unsigned int) arr_17 [(signed char)8] [(signed char)8] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-121)))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) ((unsigned short) arr_13 [i_0 - 1]))))))));
        var_27 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 - 1])), (var_0))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1] [i_0 - 1]))))));
    }
    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)120))));
        var_28 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((2U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))))) ? ((-(((/* implicit */int) arr_11 [(unsigned short)2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) >= (2146433940U)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >> (((/* implicit */int) min(((unsigned short)50923), (((/* implicit */unsigned short) (signed char)6)))))))));
        arr_23 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_6] [i_6 - 1] [(unsigned short)12] [i_6 - 1]))))), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (min((var_9), (((/* implicit */unsigned int) (unsigned short)42733))))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) min(((((-(((/* implicit */int) var_4)))) + (((/* implicit */int) (signed char)15)))), (((/* implicit */int) ((unsigned short) (signed char)15)))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_30 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)16)) * (((/* implicit */int) (signed char)70)))), (((/* implicit */int) (signed char)126))));
                arr_29 [i_6 + 1] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_15 [i_7] [i_7 + 4] [i_7 + 3] [i_7] [i_7 - 2] [i_7]), ((signed char)28)))) / (((/* implicit */int) min((var_15), ((signed char)-125))))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_9 = 2; i_9 < 9; i_9 += 4) 
            {
                arr_32 [i_6] [8U] [i_9 + 3] = ((/* implicit */unsigned short) ((signed char) arr_8 [i_6] [i_6] [i_6]));
                arr_33 [i_6] [i_6] [i_9] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)0)))));
                arr_34 [i_7] = ((/* implicit */unsigned short) var_0);
                arr_35 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 4; i_11 < 11; i_11 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1847391004U)) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) (signed char)-55))))) < (var_1)));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_30 [i_6 + 1] [i_11 + 2] [i_6 - 1] [i_7 + 2])) : (((/* implicit */int) arr_30 [i_6] [i_11 + 2] [i_6 - 1] [i_7 + 2]))));
                    arr_42 [i_6 + 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) arr_2 [i_10]));
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-16))));
                }
                arr_43 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_10])))))));
                var_34 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_38 [i_6] [(signed char)1])) == (((/* implicit */int) var_12)))) ? (((/* implicit */int) arr_30 [i_7 + 1] [i_7 + 4] [i_6] [i_6 + 1])) : (((((/* implicit */int) (signed char)122)) & (((/* implicit */int) arr_11 [i_7]))))));
            }
            for (signed char i_12 = 2; i_12 < 11; i_12 += 1) 
            {
                arr_46 [i_6] [i_7] = ((/* implicit */signed char) ((unsigned short) 4294967291U));
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        {
                            arr_51 [i_6 - 1] [6U] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((var_15), ((signed char)-1)))))) ? (((/* implicit */int) (signed char)49)) : (((((/* implicit */_Bool) arr_48 [i_6 + 1] [i_7 - 2] [(signed char)2] [i_14])) ? (((/* implicit */int) arr_48 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_15 [i_6] [i_13] [i_12] [i_7] [i_13] [i_6 + 1]))))));
                            arr_52 [i_14] [i_13 - 1] [(signed char)4] [i_7] [i_7] [i_6 + 1] = arr_50 [i_6 - 1] [i_7];
                            arr_53 [(signed char)6] = (signed char)17;
                            arr_54 [i_6] [i_7 + 1] [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)126), ((signed char)12)))) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) min(((signed char)-127), ((signed char)49))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)124)) >> (((/* implicit */int) (signed char)26))));
                    var_36 *= ((/* implicit */unsigned int) ((signed char) (signed char)-125));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_15])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)35)))) : (((/* implicit */int) arr_40 [i_15] [i_15] [i_6] [i_15]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_15]))))) ? (((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) (unsigned short)38432)) : (((/* implicit */int) (signed char)32)))) : (((/* implicit */int) ((signed char) var_13))))) : (min((((/* implicit */int) arr_17 [i_7] [i_7 + 1] [i_7 + 3] [i_7 - 1] [i_7 - 2])), ((-(((/* implicit */int) (signed char)124))))))));
                }
                var_38 = ((/* implicit */signed char) (-(arr_4 [i_6] [i_6] [i_6])));
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    {
                        arr_64 [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-89)), (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_21 [i_16]))))))) ? (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) (signed char)-17)))) : (((arr_4 [i_6] [(unsigned short)0] [i_6 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)65))))))));
                        var_39 = ((((((/* implicit */_Bool) (signed char)-54)) ? (2387819599U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))))) & (((1413688182U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_6 - 1] [i_6 + 1]))))));
                        var_40 &= ((/* implicit */signed char) arr_44 [(signed char)10] [i_16] [(unsigned short)0] [(unsigned short)0]);
                        arr_65 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_41 [i_6] [i_6 - 1] [i_17] [i_17])) : (((/* implicit */int) arr_39 [i_6])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_19 = 2; i_19 < 15; i_19 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            arr_72 [i_19] [i_19] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) + (((/* implicit */int) (signed char)-102))))), (3427318351U)));
            arr_73 [i_19] [i_19] = ((/* implicit */signed char) ((unsigned int) ((signed char) min(((signed char)-8), (var_14)))));
        }
        for (unsigned short i_21 = 2; i_21 < 16; i_21 += 2) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-71))));
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)111)), ((unsigned short)17289)))) & (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)0))))));
        }
        arr_77 [i_19] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) * (1554166317U))));
        var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)96)) && (((/* implicit */_Bool) arr_69 [i_19] [i_19] [i_19]))))), (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_76 [i_19] [i_19])) : (((/* implicit */int) (signed char)120))))))), (((min((arr_68 [i_19]), (((/* implicit */unsigned int) arr_71 [i_19] [i_19] [i_19 + 2])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_19 + 2])))))));
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
            {
                {
                    arr_82 [i_22] [i_19] [i_19] = var_13;
                    var_44 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) (signed char)-75)))))));
                }
            } 
        } 
    }
    for (unsigned short i_24 = 2; i_24 < 15; i_24 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_25 = 1; i_25 < 16; i_25 += 1) 
        {
            for (unsigned int i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                {
                    arr_91 [i_26] [6U] [i_24] &= ((/* implicit */unsigned short) max((((signed char) var_2)), ((signed char)11)));
                    var_45 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)22))));
                }
            } 
        } 
        var_46 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_87 [i_24])) ? (arr_84 [i_24 - 1] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [(signed char)13] [i_24] [i_24]))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)49836)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned short)45996)))), (((((/* implicit */int) (signed char)-23)) + (((/* implicit */int) var_4)))))))));
        arr_92 [i_24] = (signed char)-56;
    }
    var_47 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2740800979U)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (var_13))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-67))))), (max((var_7), (((/* implicit */unsigned short) (signed char)16)))))))));
}
