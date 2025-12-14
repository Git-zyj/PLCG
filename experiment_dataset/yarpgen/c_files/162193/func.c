/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162193
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned int) var_4)), (var_2))))) ^ (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_4 [i_0] [i_1])) ^ (((/* implicit */int) (unsigned char)64)))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 484161420))) && (((((/* implicit */_Bool) (unsigned char)200)) && (((/* implicit */_Bool) (unsigned char)53))))));
                                var_11 = ((/* implicit */short) ((((unsigned long long int) -160707460819158475LL)) >> (((7348310980239516236ULL) - (7348310980239516213ULL)))));
                            }
                        } 
                    } 
                    var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_8 [i_0] [i_2] [i_0] [i_0])))) ? (max((((/* implicit */unsigned long long int) ((short) 268304384U))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0])) : (var_8))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (0LL))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_19 [i_6] = ((/* implicit */short) ((unsigned int) ((((((/* implicit */int) (short)240)) + (((/* implicit */int) arr_7 [i_5])))) + (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_5])))));
                arr_20 [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9223372036854775807LL)))) + (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6])))))))) ? (((5U) / (((/* implicit */unsigned int) ((/* implicit */int) max(((short)240), (((/* implicit */short) (unsigned char)138)))))))) : (((/* implicit */unsigned int) (-(arr_8 [i_5] [i_6] [i_6] [i_5]))))));
                arr_21 [i_6] = ((/* implicit */long long int) (((+(arr_17 [i_5] [i_6] [i_5]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((2422519726U), (((/* implicit */unsigned int) (unsigned char)64))))) <= (((unsigned long long int) var_0))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    arr_25 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [(short)6])) && (((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_6] [i_5]))));
                    var_13 = ((/* implicit */unsigned char) ((arr_17 [1U] [i_6] [i_7]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)53)) << (((((/* implicit */int) (unsigned char)139)) - (115))))))));
                    var_14 = (((-(((/* implicit */int) var_5)))) & (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) (short)245);
                            arr_33 [i_5] [i_5] [i_7] [i_6] [(signed char)2] [i_9] = ((int) (+(arr_8 [i_5] [i_6] [i_7] [i_8])));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (-6535153284740337897LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5])))));
                            arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (short)240)))) ? (((/* implicit */int) arr_29 [i_5] [i_6])) : (((((/* implicit */int) (short)-1)) | (((/* implicit */int) var_0))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            arr_37 [i_6] [i_8] [i_5] [i_7] [(unsigned short)2] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_1);
                            arr_38 [i_5] [i_6] [i_7] [i_6] [i_10] = ((/* implicit */unsigned long long int) (~(1369713076)));
                        }
                        arr_39 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) arr_0 [9] [9]);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17953282808503845743ULL)) ? ((~(arr_15 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28096)) ? (arr_23 [i_8] [i_8]) : (arr_9 [i_5] [i_6] [i_5] [i_8])));
                        var_19 = ((/* implicit */unsigned short) ((short) 1782887359372152591LL));
                    }
                    for (short i_11 = 3; i_11 < 10; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_11 + 2] [i_11] [i_11 + 2] [i_11 - 1])) && (((/* implicit */_Bool) (signed char)69))));
                        var_21 = ((((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_7])) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_5 [i_5] [i_7] [i_6])))) * (((/* implicit */int) arr_26 [i_11 + 1] [i_11 + 2] [i_6] [i_6] [i_7] [i_5])));
                    }
                    var_22 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)));
                }
                for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_5]))));
                    arr_45 [i_6] = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_26 [i_12] [i_12] [i_6] [i_6] [i_5] [i_5])), (((var_2) | (3883767383U))))) & (((/* implicit */unsigned int) max((((/* implicit */int) arr_42 [i_5] [i_5] [i_12] [i_6] [i_12])), (((((/* implicit */int) (unsigned short)39641)) >> (((/* implicit */int) arr_4 [i_6] [i_5])))))))));
                    var_24 -= ((/* implicit */short) ((min((((/* implicit */unsigned int) var_5)), (arr_16 [i_12] [i_5]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_12] [i_12])))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        arr_49 [i_13] = ((/* implicit */int) (~(min((((unsigned int) (short)-23354)), (((/* implicit */unsigned int) (unsigned char)255))))));
        var_25 = (((!((_Bool)1))) && (((((/* implicit */_Bool) arr_5 [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) var_8)))));
        arr_50 [i_13] [i_13] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_48 [i_13] [i_13])) >= (((/* implicit */int) arr_48 [i_13] [i_13])))));
    }
    /* vectorizable */
    for (short i_14 = 4; i_14 < 16; i_14 += 4) 
    {
        var_26 = ((/* implicit */int) arr_46 [i_14] [i_14]);
        arr_54 [i_14 + 4] [i_14] &= ((/* implicit */unsigned short) ((unsigned int) arr_4 [i_14] [i_14 + 1]));
    }
    var_27 = ((/* implicit */short) var_8);
}
