/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188259
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [15U]) : (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((arr_2 [i_0]), (arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_2 [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) var_14))))), (((((/* implicit */_Bool) 0U)) ? (-1412108701848790512LL) : (-1412108701848790518LL)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((352338736U), (((/* implicit */unsigned int) ((3541615194U) >= (3707462848U))))))) ? (arr_5 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_1 [i_0] [i_1])), (arr_4 [i_0] [i_0] [i_0]))))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 9514317613590141644ULL)) ? (587504444U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_16)) == (var_4)))))));
            var_23 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))))) > ((+(arr_2 [i_1 + 1])))));
        }
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((2977373251U), (((/* implicit */unsigned int) (short)13760))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))))), ((-((+(((/* implicit */int) (short)-13741)))))))))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((3707462860U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27615)))))))) ? (((((/* implicit */_Bool) ((350188935U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) arr_9 [i_2 + 1] [i_2 - 1])) : (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0]) : (((/* implicit */long long int) var_4)))))) : (((long long int) max((var_6), (arr_4 [i_0] [i_0] [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((var_16), (var_16))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))))))));
                    var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((10848291556523482922ULL) <= (((/* implicit */unsigned long long int) 1412108701848790498LL))))), (((2977373274U) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 14254514120815911720ULL)) && (((/* implicit */_Bool) arr_7 [i_4] [i_4]))))))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    arr_18 [i_0] [(unsigned char)16] [8LL] [i_5] &= ((/* implicit */unsigned long long int) (-(arr_8 [i_2 + 2])));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2 + 2] [i_2 + 2])))))));
                }
                var_29 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) < (arr_4 [i_0] [i_2] [i_2 + 1])))), (var_6)));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_30 &= min(((~(753352100U))), (((/* implicit */unsigned int) -1440574900)));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((3707462854U) >> ((((~(((((/* implicit */_Bool) 1412108701848790501LL)) ? (-1412108701848790518LL) : (-1412108701848790529LL))))) - (1412108701848790486LL))))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 753352102U)) + (-8875044992672167882LL)));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) var_6);
                    arr_24 [(unsigned char)3] [(unsigned char)3] [i_3] = ((((/* implicit */int) var_11)) ^ (-134217728));
                }
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned long long int) ((unsigned int) ((min((var_18), (arr_30 [i_8]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 4])) ? (((/* implicit */int) arr_10 [i_2 - 1] [10U])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_9]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (arr_4 [i_3] [i_3] [i_3])))) ? (arr_4 [i_2 + 2] [i_2] [i_2 + 4]) : (((/* implicit */long long int) arr_13 [i_0] [i_2 + 4] [i_3] [i_8] [i_8])))) : (((/* implicit */long long int) ((var_16) / (((/* implicit */int) arr_14 [i_2 + 2] [i_2] [0U] [i_2])))))));
                            var_36 = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) <= (var_2)))))) % (((/* implicit */int) var_0))));
                            var_37 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) -2147483642)) < (753352106U)))) : (((/* implicit */int) ((var_5) < (arr_13 [i_2 + 2] [i_2 + 2] [i_2] [(unsigned char)8] [(unsigned char)3]))))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (short i_12 = 3; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((arr_35 [i_12] [i_12] [i_12 - 1] [i_2 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_2 + 3] [i_2 + 2]))))));
                            arr_39 [i_0] [i_0] [i_0] [(unsigned char)18] [6U] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) * ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_10] [i_11] [i_12]))) / (14254514120815911733ULL)))))));
                        }
                    } 
                } 
                arr_40 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) <= (((var_2) & (((/* implicit */unsigned long long int) arr_35 [i_2 + 3] [i_2] [i_2] [i_2 + 1]))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            var_39 = (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)126)), (121687870U)))) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) arr_33 [i_0]))))) : (((/* implicit */int) arr_1 [i_2 + 2] [i_13 + 2])))));
                            var_40 += ((((((/* implicit */_Bool) (-(arr_22 [i_15] [12LL] [i_13] [i_2] [i_0])))) || (((/* implicit */_Bool) var_14)))) ? (max((min((var_7), (var_9))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_13 [i_13] [i_14] [i_13] [i_2] [i_0])) : (var_7))))) : (max((((/* implicit */unsigned int) (unsigned char)108)), (3714857077U))));
                        }
                        for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_41 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))), (arr_8 [i_2 + 4])));
                            arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) max((((arr_4 [i_16] [i_13 - 2] [i_2 + 1]) - (arr_4 [i_16] [i_13 + 2] [i_2 + 4]))), (max((arr_4 [i_16] [i_13 + 1] [i_2 + 3]), (arr_4 [i_14] [i_13 + 3] [i_2 + 3])))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_55 [i_17] [i_14] [(unsigned char)17] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_12)))));
                            var_42 ^= ((((/* implicit */long long int) ((/* implicit */int) var_15))) | (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_13 + 3] [i_14] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))));
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_46 [i_2] [i_2] [i_2 - 1] [i_2 + 4] [i_2 + 2] [i_2 + 1] [i_2 + 1])) : (((long long int) 4169431399U))));
                            var_44 = ((/* implicit */unsigned int) arr_36 [i_0] [15] [i_0] [i_0] [i_0]);
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((var_5) % (((/* implicit */int) var_10))))));
                        }
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) 14254514120815911720ULL)))) || (((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_14] [(unsigned short)3] [i_2] [i_0])))))))))) : (min((arr_30 [i_2 - 1]), (arr_17 [0U] [i_2 - 1] [i_13] [i_0]))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            arr_58 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_18] [i_18] [i_0]))))) ? (min((min((((/* implicit */unsigned int) var_14)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_18])) ^ (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)118), (((/* implicit */unsigned char) (_Bool)1))))))));
            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (-((+(0U))))))));
            var_48 = ((unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_0]))) != (arr_12 [i_0]))), (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_15))))));
            var_49 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_28 [i_18] [i_18] [i_0]) : (arr_28 [14U] [i_18] [i_18]))) * (((/* implicit */unsigned long long int) arr_42 [i_0] [i_18]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_19 = 2; i_19 < 20; i_19 += 4) 
    {
        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_19 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_17)))) : (((((/* implicit */_Bool) arr_61 [i_19])) ? (var_18) : (arr_62 [i_19 + 1]))))))));
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)0))))));
    }
    /* LoopNest 2 */
    for (long long int i_20 = 0; i_20 < 15; i_20 += 4) 
    {
        for (unsigned short i_21 = 2; i_21 < 14; i_21 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 14; i_22 += 1) 
                {
                    for (long long int i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned int) arr_26 [i_23] [i_22 + 1] [i_22] [i_21] [i_21 - 2] [i_20]);
                            var_53 = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
                var_54 = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_12 [i_21 - 2]) + (var_9))));
            }
        } 
    } 
    var_55 &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_15))))) - (var_7))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_11)))))) < (min((((/* implicit */unsigned int) var_3)), (var_9)))))))));
}
