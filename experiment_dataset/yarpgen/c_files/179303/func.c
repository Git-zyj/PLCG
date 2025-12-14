/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179303
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_4 [(unsigned short)12] [i_0] [(unsigned short)12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)31)))) != (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_8))))));
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) (unsigned char)107)) : (((((/* implicit */int) (short)-24)) + (((/* implicit */int) (_Bool)1))))));
            arr_6 [(short)16] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) arr_3 [(unsigned short)10] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_7 [i_0] [i_0])))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */signed char) (unsigned char)255);
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_22 [i_5] [i_4] [i_3] [i_5] = arr_1 [i_0] [i_3];
                    arr_23 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [17U] [i_5]))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    arr_28 [i_6] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_6] [i_0])) < (((/* implicit */int) arr_25 [i_6] [(short)1] [(short)1] [i_3] [i_6]))))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_13))))));
                    arr_29 [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned short) var_3);
                }
                arr_30 [i_0] [(short)9] [(short)9] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [(_Bool)1] [i_0]);
                arr_31 [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)42)) : ((~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)10]))))));
                arr_32 [i_4] [i_3] [(short)10] [(short)10] = var_13;
            }
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                arr_37 [i_0] [(signed char)4] [i_7] [i_0] = ((/* implicit */unsigned char) arr_33 [i_0] [i_0] [(unsigned short)9] [(unsigned short)9]);
                arr_38 [i_3] [i_0] [i_7] = ((/* implicit */unsigned int) arr_16 [i_7]);
                arr_39 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)107)) != (((/* implicit */int) (unsigned char)47))))) : (((/* implicit */int) arr_17 [i_0]))));
            }
            arr_40 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (signed char)-14);
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        arr_47 [i_3] [(short)9] [i_9] [i_8] [i_3] [(unsigned short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_10] [(unsigned short)14] [i_3] [i_0])) ? (((((/* implicit */int) arr_15 [i_3] [i_3] [i_9])) * (((/* implicit */int) arr_20 [i_0])))) : (((/* implicit */int) arr_16 [i_10]))));
                        arr_48 [i_0] [(signed char)12] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_7) ? (((/* implicit */int) (short)-15219)) : (((/* implicit */int) var_10))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_51 [(_Bool)1] [i_0] [i_3] [i_8] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)-79))));
                        arr_52 [i_0] [i_0] [(unsigned char)7] [(signed char)5] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) arr_36 [i_8] [i_3])) : ((~(((/* implicit */int) (signed char)-101))))));
                        arr_53 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) var_3);
                    }
                    for (signed char i_12 = 2; i_12 < 16; i_12 += 3) 
                    {
                        arr_56 [i_0] [i_0] [i_0] [i_9] [i_12] [i_12] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)193)) >= (((/* implicit */int) (unsigned short)42859))))) * (((((/* implicit */_Bool) arr_12 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                        arr_57 [(unsigned short)4] [i_0] [i_12] [i_12] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9572))))) ? (((((/* implicit */int) arr_20 [i_0])) - (((/* implicit */int) arr_49 [i_0] [i_0] [(signed char)8] [i_9] [i_9])))) : (((((/* implicit */int) arr_1 [i_3] [i_12])) + (((/* implicit */int) (unsigned short)20111))))));
                    }
                    arr_58 [i_9] [i_9] [(signed char)4] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_8] [0U])) - (((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 3) 
                    {
                        arr_61 [i_0] [i_3] [(short)12] [(signed char)14] = ((/* implicit */signed char) var_2);
                        arr_62 [i_0] [i_0] [i_13] [i_0] [i_13] [i_0] [i_0] = (unsigned short)56171;
                        arr_63 [i_13] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_12)) - (154)))))));
                        arr_64 [i_0] [i_3] [i_0] [i_9] [i_13] = ((/* implicit */_Bool) (((_Bool)0) ? (arr_54 [i_13] [i_13] [i_0] [i_13] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_8] [i_9])) ^ (((/* implicit */int) arr_27 [i_3] [i_3])))))));
                    }
                    arr_65 [i_0] [i_0] [0U] [i_9] = ((/* implicit */unsigned short) var_4);
                }
                arr_66 [(unsigned char)16] = arr_59 [i_0] [(unsigned char)1] [i_8] [i_0] [i_3];
                arr_67 [(unsigned short)1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_3]);
                arr_68 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_8])) > (((/* implicit */int) ((short) arr_45 [i_3] [i_3] [(signed char)9] [(signed char)0] [i_3])))));
                arr_69 [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)17343);
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_73 [i_0] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))) + (arr_19 [(_Bool)1] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_3] [i_14])) >= (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_71 [i_0] [i_3] [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)12027)) : (((/* implicit */int) (_Bool)0))))));
                arr_74 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        {
                            arr_80 [i_0] [i_16] [i_14] [i_15] = ((/* implicit */unsigned int) var_2);
                            arr_81 [i_0] [i_14] = ((/* implicit */unsigned short) (unsigned char)30);
                        }
                    } 
                } 
                arr_82 [i_14] = ((/* implicit */signed char) arr_8 [i_14] [i_14 - 1] [i_14 - 1]);
                arr_83 [i_3] [i_14] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_79 [(signed char)15] [i_3] [i_3] [(signed char)15] [(signed char)10])) ^ (((/* implicit */int) var_8)))))));
            }
        }
        arr_84 [i_0] = ((/* implicit */signed char) arr_11 [(short)7] [i_0] [(_Bool)1]);
        arr_85 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))));
        arr_86 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_79 [i_0] [i_0] [i_0] [(signed char)11] [i_0]))))) && (((/* implicit */_Bool) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)10]))));
    }
    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
    {
        arr_90 [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_71 [i_17] [i_17] [i_17] [i_17]))));
        arr_91 [i_17] = ((/* implicit */_Bool) var_9);
        arr_92 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)14381), (((/* implicit */unsigned short) arr_50 [i_17] [(_Bool)1] [(_Bool)1] [i_17] [i_17] [i_17]))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_11))))));
        arr_93 [(unsigned char)3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9801)) ? (((/* implicit */int) ((((/* implicit */int) min((var_13), ((signed char)-103)))) < (((/* implicit */int) var_9))))) : ((+(((/* implicit */int) max(((signed char)98), (var_8))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        arr_96 [i_18] [i_18] = ((/* implicit */short) min((max((min((4294967291U), (((/* implicit */unsigned int) (signed char)28)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) (unsigned short)36028)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned short)45426)) : (((/* implicit */int) (unsigned short)45434))))) : (((unsigned int) arr_7 [i_18] [i_18]))))));
        arr_97 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_20 [i_18])) : (((/* implicit */int) min((((/* implicit */unsigned char) max((arr_60 [i_18] [i_18] [(signed char)8] [i_18] [i_18] [(signed char)8]), (((/* implicit */signed char) var_7))))), ((unsigned char)0))))));
        arr_98 [(signed char)6] [(signed char)6] &= ((/* implicit */short) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)120))))))))));
        arr_99 [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned short)48192), (((/* implicit */unsigned short) var_7)))))));
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        arr_109 [i_19] [2U] [2U] [i_19] = ((/* implicit */short) arr_106 [i_20] [i_20] [i_21] [(unsigned short)19]);
                        arr_110 [i_19] [i_20] [(signed char)7] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        arr_111 [(unsigned short)15] [(unsigned short)15] [i_21] [i_19] = ((/* implicit */unsigned char) var_3);
                        arr_112 [i_22] [i_21] [i_19] [i_19] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)45449)) ? (((/* implicit */int) (short)-2357)) : (((/* implicit */int) (unsigned short)54564))))));
                        arr_113 [i_21] [(_Bool)1] [(_Bool)1] [i_22] [i_20] = ((/* implicit */unsigned char) arr_103 [8U] [8U]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_23 = 1; i_23 < 23; i_23 += 1) 
            {
                for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 24; i_25 += 2) 
                    {
                        {
                            arr_123 [i_20] [(signed char)21] [i_24] [i_24] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32744))))));
                            arr_124 [i_24] = ((/* implicit */unsigned int) (unsigned short)20105);
                        }
                    } 
                } 
            } 
            arr_125 [8U] [i_20] [i_20] = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_115 [i_20] [(short)5])))) & ((-(((/* implicit */int) (unsigned short)48201))))));
            arr_126 [i_19] = ((/* implicit */signed char) var_6);
        }
        for (unsigned char i_26 = 0; i_26 < 24; i_26 += 1) 
        {
            arr_130 [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) (signed char)35);
            arr_131 [i_19] [i_26] = ((/* implicit */unsigned char) ((arr_107 [i_26] [i_26] [5U] [i_19]) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)17349))))) : (((((/* implicit */_Bool) arr_101 [(signed char)14] [i_26])) ? (((/* implicit */int) arr_104 [i_19] [i_19] [i_26])) : (((/* implicit */int) var_10))))));
        }
        for (unsigned short i_27 = 0; i_27 < 24; i_27 += 3) 
        {
            arr_134 [(short)6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)17334))));
            arr_135 [(short)22] [(short)22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_133 [16U] [i_19]))));
            arr_136 [(signed char)14] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1235664522U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20105))) : (3059302783U)))));
            arr_137 [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)184)) >> ((((-(((/* implicit */int) (_Bool)1)))) + (17)))));
        }
        arr_138 [i_19] &= ((/* implicit */signed char) ((arr_106 [i_19] [i_19] [(unsigned char)9] [(unsigned char)9]) >= (arr_114 [i_19])));
        arr_139 [(short)8] = ((/* implicit */unsigned int) (short)2364);
    }
    var_14 = ((/* implicit */signed char) (-(max((((/* implicit */int) var_8)), (((((/* implicit */int) var_11)) / (((/* implicit */int) var_13))))))));
}
