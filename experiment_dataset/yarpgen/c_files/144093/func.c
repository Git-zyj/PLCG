/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144093
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
    var_17 = ((/* implicit */unsigned long long int) min((max((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19109))) : (2548915180137056052LL))), (((/* implicit */long long int) ((_Bool) var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_11)) : (var_16))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_12)) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)247)))))), (((/* implicit */int) ((short) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_6 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0 + 2] [i_0 + 2] [(_Bool)1] [i_0 - 2] [i_0] [i_3] [6U] = ((((((long long int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_4])) + (9223372036854775807LL))) << ((((-(arr_16 [i_4] [i_4 + 2] [i_4] [i_4 + 2] [i_4]))) - (171705338U))));
                                arr_18 [i_3] [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))))) & (((unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_6)))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)7)) ? (arr_12 [i_3] [i_3] [i_3] [i_4 - 2] [i_4]) : (arr_12 [i_3] [i_3] [i_4 + 1] [i_4 - 2] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_11)))))));
                                arr_20 [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) (short)-19110)) : (var_4))), ((~(((/* implicit */int) (_Bool)1))))))) ? (min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) min((arr_0 [i_0] [i_2]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))))) : (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_3] [i_3] [i_0])) ? (((/* implicit */int) ((signed char) arr_10 [i_4] [i_0] [i_2] [2] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                                arr_21 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */_Bool) 9320915237306265793ULL)) ? (144115188075724800LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(signed char)6] [i_2] [i_1] [(signed char)6] [i_0]))))), (((/* implicit */long long int) ((unsigned int) (_Bool)0))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] = ((/* implicit */unsigned int) var_0);
                    arr_23 [i_2] = ((/* implicit */signed char) arr_7 [i_0 + 2] [i_0] [i_0]);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        arr_27 [i_5] [i_5] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_15)))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                {
                    arr_34 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5] [i_6] [i_5] [i_6] [(signed char)8]))));
                    arr_35 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_24 [i_5] [i_6]) < (((/* implicit */long long int) ((arr_15 [i_5] [i_6] [i_6] [i_7]) ? (arr_28 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
                    arr_36 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_5] [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_31 [i_5] [i_6] [i_6] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (var_5) : (((/* implicit */unsigned long long int) 0U))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_44 [i_5] [i_6] [(short)10] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_6] [i_9] [(unsigned char)0] [i_8] [i_8 + 2])) || (((/* implicit */_Bool) arr_30 [i_7 + 1] [i_8 + 3] [i_8]))))), ((-(((/* implicit */int) var_6))))));
                                arr_45 [i_6] [i_6] [i_7 + 2] [6U] [i_5] [i_7 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_39 [i_9] [i_9] [8ULL] [i_9] [i_5])), (var_15)))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_7] [i_7]))) : (((/* implicit */int) ((_Bool) -1)))));
                            }
                        } 
                    } 
                    arr_46 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-93))) ? (min((arr_6 [0ULL]), ((~(((/* implicit */int) arr_14 [i_5] [i_5] [i_6] [i_6] [i_6])))))) : (var_10)));
                }
            } 
        } 
        arr_47 [i_5] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_5])) : (var_2)))) ? (((/* implicit */int) (short)-20484)) : (((/* implicit */int) (short)-28611)))));
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        arr_52 [i_10] = (_Bool)1;
        arr_53 [i_10] [i_10] = ((/* implicit */_Bool) (((~(((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [i_10])))))) - (((/* implicit */int) var_9))));
        arr_54 [i_10] = ((/* implicit */unsigned char) ((var_1) >= (((((/* implicit */unsigned int) -20)) - (max((177317217U), (var_1)))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 4; i_12 < 8; i_12 += 2) 
            {
                {
                    arr_60 [i_10] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) var_2);
                    arr_61 [i_10] [i_10] [i_12] = ((/* implicit */signed char) ((max(((-2147483647 - 1)), (((/* implicit */int) arr_14 [i_12] [i_11] [i_12] [i_12 - 2] [i_12])))) ^ (((((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_12] [i_12 - 2] [i_12 - 2])) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) arr_42 [i_10] [i_10] [i_11] [i_12 - 2] [i_11]))))));
                    arr_62 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) var_13);
                    arr_63 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(arr_25 [i_12])))), (max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)62)))))) ? ((~(((/* implicit */int) var_12)))) : (((((((/* implicit */int) arr_1 [i_11])) | (0))) << (((((((/* implicit */_Bool) arr_4 [i_10] [i_10])) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_6)))) + (16)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_66 [i_11] [i_12] [i_12] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_13] [i_12 - 4] [i_12 - 4]);
                        arr_67 [i_10] [i_11] [i_10] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) arr_32 [i_12] [i_12])) ? (arr_58 [i_10] [i_11]) : (((/* implicit */unsigned int) arr_7 [i_13] [i_10] [i_12]))))))) ? (((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)-66)))) : (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_59 [i_10] [i_11] [i_11] [i_13])) >> (((9223372036854775786LL) - (9223372036854775780LL))))) : (min((((/* implicit */int) (unsigned short)37098)), (var_2)))))));
                        arr_68 [i_10] [i_11] [i_12] [i_13] [i_12 - 3] [i_11] = (signed char)76;
                    }
                }
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                {
                    arr_78 [i_16] [i_15] [i_14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)45)) == (((/* implicit */int) var_15))))), (arr_6 [i_16])))), (min((((unsigned long long int) arr_33 [i_16])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_65 [i_14] [i_14])) : (((/* implicit */int) (unsigned short)37062)))))))));
                    /* LoopSeq 2 */
                    for (short i_17 = 3; i_17 < 7; i_17 += 1) 
                    {
                        arr_81 [i_14] [i_14] [i_16] [i_17] [i_17 + 2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned char) var_16))) ? (max((1153708855011464788ULL), (((/* implicit */unsigned long long int) (unsigned short)4947)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_14] [i_15] [i_16] [i_16])) ? (var_3) : (((/* implicit */int) (short)-19109)))))))));
                        arr_82 [i_14] [(unsigned short)3] [i_16] [i_17] = ((/* implicit */unsigned char) 1153708855011464780ULL);
                        arr_83 [i_14] [i_15] [i_16] [i_17] &= ((/* implicit */unsigned char) arr_71 [i_16] [i_16]);
                    }
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
                    {
                        arr_86 [i_14] |= ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-35)) ? (arr_58 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((arr_33 [i_16]) ? (((/* implicit */int) ((3264216287835632501ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))) : (arr_49 [i_14] [i_14])))));
                        arr_87 [i_14] [i_14] [i_16] [i_18] = ((/* implicit */signed char) ((_Bool) (~(var_3))));
                        arr_88 [i_14] [i_15] [(signed char)0] [i_14] [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_84 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (arr_24 [(unsigned short)8] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        arr_89 [i_14] [i_18] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_14] [i_15] [i_16] [(signed char)0] [(signed char)0])) ? (((/* implicit */long long int) 822854695)) : (-2422891745634832864LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19108)) ? (((/* implicit */int) arr_1 [i_14])) : (((/* implicit */int) (unsigned char)126))))) : (min((16833473135796814343ULL), (((/* implicit */unsigned long long int) 1265294081U)))))));
                        arr_90 [i_14] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_14 [i_18] [i_16] [i_15] [i_14] [i_14])))) > (((/* implicit */int) ((unsigned short) var_1)))));
                    }
                    arr_91 [i_16] [i_14] [i_14] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1353560865)) ? (arr_13 [(unsigned short)0] [4ULL] [i_14] [(unsigned short)0] [i_16]) : (((/* implicit */unsigned long long int) 20)))) << (((((/* implicit */int) arr_30 [i_14] [i_14] [i_14])) + (130)))))) ? (((15182527785873919114ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9242691197431998152ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_80 [1] [(_Bool)0] [(unsigned short)10] [i_15]))))))) : (((/* implicit */unsigned long long int) ((var_1) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_1)))))));
                    arr_92 [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned short) 2890386687598946267ULL);
                    arr_93 [i_14] = ((/* implicit */signed char) (-(((unsigned long long int) -957890320))));
                }
            } 
        } 
        arr_94 [i_14] = ((/* implicit */unsigned short) var_2);
        arr_95 [i_14] = ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) ^ (3774469499U)))) < (((arr_38 [i_14] [i_14] [i_14] [i_14]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    }
}
