/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151736
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
    var_20 ^= ((/* implicit */unsigned short) var_11);
    var_21 += ((/* implicit */int) var_9);
    var_22 = var_10;
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) * (((((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) arr_0 [i_0]))))) * (((/* implicit */int) ((unsigned char) (unsigned short)23279)))))));
        var_24 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_0 - 1])))), ((+(((/* implicit */int) arr_3 [i_0 + 1]))))));
        arr_4 [i_0] = ((/* implicit */short) max((((((/* implicit */int) arr_3 [i_0 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) 140737488355327LL))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && ((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? ((~(((/* implicit */int) var_10)))) : ((~((~(((/* implicit */int) arr_2 [i_1])))))))))));
                    var_26 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_3] [i_2] [i_1 + 1])))) : (((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) 2295562939469268098ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3477078185U)) || (((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_1 + 1])))))) : (max((140737488355327LL), (((/* implicit */long long int) arr_2 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */long long int) (short)-22827);
                                var_27 = ((/* implicit */int) var_17);
                                var_28 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_5)))));
                                var_29 = ((/* implicit */unsigned short) 16777215U);
                                arr_18 [i_3] [i_5] = ((/* implicit */unsigned char) (short)16383);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned int) (short)-1);
    }
    for (signed char i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_3 [i_6 + 1])) | (((/* implicit */int) (unsigned char)6)))));
        arr_23 [i_6] = ((/* implicit */short) arr_7 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                {
                    arr_32 [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned int) 3)) : (2810491701U))));
                    arr_33 [i_6 - 1] [i_6] [i_8] [i_8] = ((((/* implicit */_Bool) (unsigned char)127)) ? (2147483647U) : (((/* implicit */unsigned int) -1958696554)));
                    var_31 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (unsigned char)101)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 2295562939469268098ULL)) && (((/* implicit */_Bool) ((unsigned int) arr_21 [i_6 - 1])))))) - (1)))));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        arr_37 [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) arr_26 [i_9] [i_9] [i_9]));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 10; i_10 += 1) 
        {
            for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 7; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 10; i_13 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_46 [i_9] [i_10 + 1]))));
                                arr_50 [i_9] [i_12] [i_11] [i_12] [i_13 - 1] = ((/* implicit */unsigned short) ((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9] [i_11 + 1] [i_12]))) : (((((/* implicit */_Bool) 36518794)) ? (arr_7 [i_9] [i_11] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_13 - 1])))))));
                                var_33 = ((((/* implicit */_Bool) arr_30 [i_9])) ? (arr_5 [i_12 + 3]) : (((/* implicit */long long int) -320804756)));
                                var_34 *= (!(((/* implicit */_Bool) 11993750873868148423ULL)));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */int) arr_38 [i_11] [i_10] [i_9]);
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) 472136198);
    }
    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                {
                    var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 520190779)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (16151181134240283518ULL) : (((/* implicit */unsigned long long int) -1236041753))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5017))) ^ (-140737488355327LL))))))) : (((((/* implicit */_Bool) arr_54 [i_16] [i_16])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)36))) >= (arr_43 [i_14] [i_15] [i_16] [i_14])))) : (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_16] [i_15] [i_14]))))))))));
                    arr_58 [i_15] [i_16] = ((/* implicit */long long int) arr_6 [i_16]);
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) var_18))));
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                {
                    var_39 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_14])) & (979788406)))) >= (min((((/* implicit */unsigned int) var_5)), (630407551U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 2; i_19 < 9; i_19 += 1) 
                    {
                        for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            {
                                var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)94)) ? (arr_48 [i_14] [i_17] [i_18] [i_19] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141)))));
                                arr_70 [i_20] [i_19] [i_18] [i_17] [i_14] = ((/* implicit */int) arr_40 [i_14] [i_17]);
                                var_41 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (arr_65 [i_14] [i_17] [i_19 - 1] [i_20])));
                                var_42 *= ((/* implicit */short) ((2295562939469268098ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_18] [i_19] [i_20])))));
                            }
                        } 
                    } 
                    arr_71 [i_18] [i_17] [i_14] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_41 [i_14] [i_18] [i_18] [i_18])))) : (((/* implicit */int) ((short) arr_65 [i_14] [i_17] [i_18] [i_18]))));
                    var_43 = ((/* implicit */short) 3261146972U);
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned short) var_2);
    }
    /* vectorizable */
    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned short) arr_73 [i_21]);
        var_46 = ((/* implicit */int) ((arr_73 [i_21]) + (arr_73 [i_21])));
        arr_76 [i_21] = ((/* implicit */short) ((unsigned int) (unsigned char)101));
    }
    for (unsigned int i_22 = 0; i_22 < 23; i_22 += 4) /* same iter space */
    {
        arr_81 [i_22] [i_22] = ((/* implicit */signed char) 6805523265706451115ULL);
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                {
                    arr_88 [i_24] [i_23] [i_22] = 140737488355327LL;
                    arr_89 [i_22] [i_22] [i_23] [i_23] = ((/* implicit */long long int) var_16);
                }
            } 
        } 
    }
}
