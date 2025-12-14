/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148054
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 1])) ? (-1) : (-1)))) ? (689255290U) : (((var_9) & (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_12))))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) min((arr_1 [i_0 + 3]), (((/* implicit */int) min(((unsigned char)32), ((unsigned char)80))))));
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147482624U)))))) & (min((((/* implicit */unsigned int) var_7)), (arr_4 [i_3] [i_3])))))) ? (var_0) : (arr_4 [i_3] [i_3])));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_3] [i_3]);
        arr_15 [i_3] = ((/* implicit */int) (unsigned short)7);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (unsigned int i_5 = 4; i_5 < 14; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        arr_26 [0] [0] [i_4] [i_4] = 0U;
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_29 [i_3] [i_4] [12U] [i_4] [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) 0U)) ? (arr_16 [8U] [i_4] [i_3]) : ((-(min((var_1), (var_2))))));
                            arr_30 [i_3] [i_4] [i_4] [i_5] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned int) var_7);
                        }
                        for (int i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            arr_35 [i_4] [i_3] [i_3] [i_6] [i_6] = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) >= (((unsigned int) 475483816U)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_28 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [(unsigned char)13]) : (var_12))) : (arr_17 [4U] [i_3] [i_6 - 2]));
                            arr_36 [i_3] [i_4] [i_5] [i_4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_2 [i_3]) + (2147483647))) >> (((((/* implicit */int) var_4)) - (194)))))) ? (min((arr_22 [i_3] [i_3] [i_3] [i_3]), (arr_34 [(unsigned short)8] [i_4] [i_5]))) : (3496332469U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (var_12)))) ? (1052002464U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5 - 2] [i_5 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_8 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((13U) < (163794855U))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            arr_39 [i_3] [i_4] [i_5] [i_5] [i_9 + 3] = ((/* implicit */unsigned int) ((arr_12 [i_3]) < (var_0)));
                            arr_40 [i_9] [i_9 + 1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned int) arr_25 [i_3] [i_9 - 1]));
                        }
                        arr_41 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_38 [i_5 - 2] [13U] [i_5 + 1] [3U] [i_5] [6U]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 1) 
                    {
                        arr_45 [i_4] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) 145812732)), (arr_16 [i_5 - 1] [i_5 - 1] [i_4]))) == (((((1032316665) < (-740786363))) ? (var_0) : (min((536870911U), (((/* implicit */unsigned int) -2049908577))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 2; i_11 < 13; i_11 += 2) 
                        {
                            arr_49 [i_3] = ((/* implicit */int) 1136872259U);
                            arr_50 [i_3] [i_4] [i_5 - 4] [i_10 - 1] [i_11] = min((var_13), (((arr_43 [i_3] [i_10]) / ((+(((/* implicit */int) arr_21 [6U] [i_4] [i_4] [i_4])))))));
                            arr_51 [i_3] [2U] [i_11] [i_3] [i_3] [6U] = ((((/* implicit */_Bool) ((max((var_14), (((/* implicit */unsigned int) (unsigned short)14415)))) >> (((((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_5] [i_10 + 2] [i_11])) ? (arr_12 [i_11]) : (arr_5 [i_3] [i_3] [i_3]))) - (2848873988U)))))) ? (arr_16 [i_3] [i_4] [i_11]) : (((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) < (arr_28 [i_10] [i_10 + 1] [i_4] [i_10] [i_11]))))))));
                            arr_52 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) arr_5 [i_11 - 2] [i_10] [i_10 + 2]);
                            arr_53 [i_3] [i_3] [i_5] [13U] [i_11] = ((unsigned int) ((unsigned int) arr_33 [i_3] [i_3] [(unsigned short)1] [i_5] [3U]));
                        }
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            arr_56 [i_3] [(unsigned short)3] [11] [(unsigned short)3] [i_5] [(unsigned short)3] [i_3] = ((((arr_22 [i_10 - 1] [i_10 + 2] [i_5 - 4] [i_5 - 1]) < (((/* implicit */unsigned int) -1)))) ? ((-(max((arr_17 [i_5 - 1] [i_3] [i_12]), (arr_38 [i_3] [i_5] [i_5] [8U] [i_12] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_21 [11] [i_3] [i_3] [i_3]), (arr_21 [i_3] [i_3] [i_3] [i_3]))))));
                            arr_57 [i_3] [i_10] [i_5] [i_5] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (arr_43 [i_3] [(unsigned char)6]) : (arr_43 [i_4] [i_5]))))))));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_61 [i_3] [i_3] [i_5 + 1] [i_5] [i_5] [i_13] = ((/* implicit */int) ((unsigned int) (unsigned char)62));
                        arr_62 [i_3] [i_4] [i_3] [i_3] = ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12861)) >> (((((/* implicit */int) (unsigned char)219)) - (205)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_5]))) : (((((/* implicit */_Bool) arr_22 [i_4] [i_5 + 1] [i_5 - 3] [i_5 - 4])) ? (var_5) : (arr_22 [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 4]))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 13; i_15 += 1) 
                        {
                            {
                                arr_68 [i_15 - 2] [i_3] [i_5 + 1] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) 2499087612U))) ? (((((/* implicit */_Bool) 1279998865U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55621))) : (3123604851U))) : (min((((/* implicit */unsigned int) (unsigned char)255)), (1011095407U))))) & (20163365U)));
                                arr_69 [i_4] [i_5] [i_5] [i_5] [i_4] [i_14] = ((/* implicit */unsigned int) arr_64 [i_3] [i_4] [i_5 - 2] [i_14] [i_15]);
                                arr_70 [i_15 + 2] [i_14] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
