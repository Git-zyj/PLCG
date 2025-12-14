/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159857
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
    var_10 = ((/* implicit */int) max((((unsigned short) var_0)), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (var_3))))) : (((((/* implicit */unsigned int) arr_2 [i_0])) - (((unsigned int) arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))) ? ((+(((var_3) & (((/* implicit */unsigned int) arr_2 [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52880)))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_2 [(_Bool)1]);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_11 &= ((/* implicit */unsigned int) arr_6 [i_0]);
            arr_9 [i_1 - 1] [i_1] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1]))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_1])), (arr_2 [i_0])))), (var_3))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) (unsigned short)52874)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1])))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((-(arr_2 [i_0]))) >> (((var_0) - (4178917690U))))))));
            arr_12 [i_0] [i_2] [(_Bool)1] &= arr_0 [i_2];
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_13 = ((/* implicit */_Bool) arr_10 [i_0] [i_3]);
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_14 = ((/* implicit */int) arr_14 [i_3] [i_3]);
                arr_17 [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_3] [(unsigned char)8])) ? (((/* implicit */int) arr_16 [i_0] [i_4])) : (((/* implicit */int) arr_8 [3U] [i_3 - 1] [i_3])))) & ((~(((/* implicit */int) arr_7 [(signed char)9] [i_4]))))));
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_15 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_6] [i_5] [i_3] [i_0] [i_0]))));
                    arr_25 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [(unsigned char)9] [i_3 - 1] [i_3 - 1] [i_3] [(unsigned char)9]))));
                    arr_26 [i_0] [i_3] [i_5] [2U] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_3 - 1]))));
                }
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_30 [i_3] = ((/* implicit */unsigned char) (((_Bool)1) ? (2094970272U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_16 = ((((/* implicit */int) ((signed char) arr_20 [(signed char)9] [5U] [i_5]))) >= (((/* implicit */int) arr_11 [i_5] [i_5] [i_3 - 1])));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_37 [i_0] [i_3] [i_5] [i_8 + 1] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_36 [i_0] [6] [6] [i_8] [i_9]))));
                        arr_38 [i_3] [i_3] [i_5] [9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_9] [i_5]))));
                        var_18 -= ((((/* implicit */_Bool) 2211948816U)) ? (2083018479U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12664))));
                        var_19 = ((/* implicit */short) max((var_19), ((short)6136)));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) arr_27 [i_10]);
                        var_20 *= ((/* implicit */_Bool) (((-(var_0))) >> (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [3U] [6U])))))));
                        var_21 = ((/* implicit */signed char) arr_21 [i_0] [i_0] [i_5]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        arr_46 [i_3] [i_5] = ((/* implicit */signed char) arr_7 [i_0] [i_3]);
                        arr_47 [i_8] [i_11] |= ((/* implicit */unsigned int) arr_44 [i_11] [i_8 + 1] [i_5] [i_3] [i_0]);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)243))))) ? (((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */int) arr_40 [i_8])) : (arr_15 [i_3]))) : ((-(((/* implicit */int) arr_6 [i_3]))))));
                    }
                    arr_48 [i_8] [i_5] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_8])))))));
                }
                for (unsigned short i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    arr_51 [i_3] [(signed char)7] [(short)8] [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_12 - 2] [i_5] [i_3 - 1] [i_3] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_31 [i_0] [i_0])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_14 [i_3] [i_3 - 1]))));
                    arr_52 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_3 - 1]))));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) 
                    {
                        {
                            arr_57 [i_0] [i_3 - 1] [i_5] [i_5] [i_5] [i_13] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_3] [i_3 - 1] [i_3 - 1] [i_14 - 1] [(unsigned char)3])) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_45 [i_0] [i_0] [(unsigned char)1] [(unsigned char)1] [i_0] [i_0] [i_0])) ? (arr_19 [i_0] [i_0] [(signed char)6]) : (((/* implicit */int) arr_23 [i_3] [i_5] [i_13] [i_14]))))));
                            arr_58 [i_3] [i_3] = ((/* implicit */signed char) arr_24 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_3 - 1] [i_3 - 1]);
                            arr_59 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) ((signed char) ((int) arr_2 [i_0])));
                            var_23 = ((/* implicit */_Bool) ((unsigned char) arr_31 [i_14 + 1] [i_3 - 1]));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_24 = ((/* implicit */int) arr_45 [i_0] [8U] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 4; i_16 < 7; i_16 += 1) 
                    {
                        var_25 *= ((/* implicit */_Bool) ((arr_62 [i_16] [i_16 - 4] [i_0] [i_0] [i_16 + 1] [i_3 - 1]) ? (arr_49 [i_16 - 4] [i_16] [i_16 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_16] [i_16] [i_5] [i_5] [i_16 + 1] [i_3 - 1])))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_16 - 2] [i_16 - 3])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (arr_45 [(unsigned char)3] [i_5] [i_5] [i_5] [i_5] [i_3 - 1] [(unsigned short)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12662)))));
                        arr_65 [i_0] [i_0] [i_3] [i_3 - 1] [i_5] [i_15] [i_16] = ((/* implicit */unsigned int) var_7);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_27 = arr_23 [i_17] [(unsigned char)8] [(signed char)8] [i_3];
                        arr_69 [i_3] [i_3] [i_5] [i_15] [i_15] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_0] [i_3] [i_0] [i_3 - 1] [i_17] [(signed char)5])) ? ((-(((/* implicit */int) arr_39 [i_15])))) : (((/* implicit */int) arr_29 [i_3] [i_3 - 1] [i_3]))));
                        var_28 = ((/* implicit */signed char) ((_Bool) arr_54 [i_17] [(unsigned char)8] [i_5] [i_3 - 1] [(_Bool)1]));
                    }
                    for (int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        arr_73 [i_0] [i_3] [i_3] [i_18] = ((/* implicit */signed char) arr_64 [i_3 - 1] [(unsigned short)1] [i_5]);
                        arr_74 [i_15] |= ((/* implicit */_Bool) arr_18 [(signed char)5] [i_5] [(signed char)5]);
                    }
                    arr_75 [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_70 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_31 [i_3 - 1] [i_3 - 1]))));
                }
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((signed char) 2199997029U)))));
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_68 [i_0] [i_3] [i_3] [i_3 - 1] [i_3]))));
            }
            for (int i_19 = 4; i_19 < 9; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 8; i_20 += 4) 
                {
                    for (signed char i_21 = 3; i_21 < 9; i_21 += 2) 
                    {
                        {
                            arr_84 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12637))))) ? (((((/* implicit */_Bool) arr_70 [i_0] [i_3] [i_21])) ? (((/* implicit */unsigned int) 0)) : (arr_22 [i_0] [i_3] [i_19 - 1] [i_20] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1])))));
                            var_31 = ((/* implicit */signed char) var_5);
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_60 [i_0] [i_20] [i_21 + 1]))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) ((int) var_5));
            }
            for (signed char i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_23 = 2; i_23 < 9; i_23 += 4) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (_Bool)1))))) ? (2294371484U) : (1710176241U)));
                    var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_0] [i_3] [i_22] [i_3] [i_0])) | (((/* implicit */int) (unsigned short)52871))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) arr_44 [i_0] [i_0] [i_3] [i_22] [i_23 - 1]))))));
                    var_36 += ((/* implicit */unsigned int) (!(var_1)));
                    arr_89 [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)93)) > (((/* implicit */int) arr_32 [i_3]))))));
                }
                for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_3] [i_22] [i_3]))))) % (arr_18 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                    arr_92 [i_3] [i_3] [i_3] [(signed char)0] [i_24] [i_24] = var_6;
                }
                for (unsigned int i_25 = 3; i_25 < 8; i_25 += 1) 
                {
                    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_25 - 3]))));
                    arr_95 [i_3 - 1] [i_3] = ((/* implicit */unsigned short) arr_72 [i_0] [i_3] [i_3] [i_25 + 2] [i_0] [i_25] [i_25 + 2]);
                    arr_96 [i_3] [i_22] [i_3] = arr_42 [(unsigned char)7];
                }
                arr_97 [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) + (33554431U)));
                arr_98 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_50 [5] [i_3 - 1] [i_0] [i_0]);
            }
            arr_99 [i_3] = ((/* implicit */unsigned int) arr_27 [i_0]);
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_90 [i_3] [i_0])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_3])) : (((/* implicit */int) arr_53 [i_3 - 1] [i_3] [i_3] [i_0] [i_0]))))));
        }
        for (unsigned short i_26 = 1; i_26 < 6; i_26 += 4) 
        {
            arr_104 [i_26] = ((/* implicit */unsigned int) 1845335450);
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) min(((+(arr_45 [i_0] [i_26] [i_0] [i_0] [i_0] [i_26 - 1] [i_26 + 3]))), (arr_45 [i_0] [9U] [i_26 - 1] [i_0] [i_0] [i_26 + 2] [i_26]))))));
            arr_105 [i_26 + 3] [(_Bool)1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_93 [i_26 + 4] [i_26] [i_0] [i_26]))))));
        }
        var_41 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_93 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) arr_93 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11394)) ? (((/* implicit */int) arr_103 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_83 [i_0]))))))))));
    }
    var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (((((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)113)))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    var_43 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (((var_9) ? (((/* implicit */int) (short)-11394)) : (((/* implicit */int) var_7))))))), (var_3)));
    var_44 = ((/* implicit */unsigned char) var_0);
}
