/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108023
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) arr_0 [19]);
                arr_5 [i_0] = ((/* implicit */unsigned char) var_7);
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) 1150851112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (13824156219667798227ULL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3718202629154191902LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_3)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_6 [i_2] [11])) ? (((/* implicit */int) (unsigned short)47012)) : (((/* implicit */int) arr_3 [i_2])))))) : (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_17 [(unsigned char)0] = ((/* implicit */_Bool) var_10);
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 2323117684U))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_25 [i_2] [i_5] [i_5] [i_6 - 1] = ((/* implicit */_Bool) arr_14 [14LL]);
                                arr_26 [i_2] [i_2] [i_2] [13ULL] [i_5] = ((/* implicit */_Bool) 13824156219667798231ULL);
                                arr_27 [i_5] [i_6] [i_5] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3])) ? (-1) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((((_Bool)1) ? (-819694312) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) -1)) ? (var_9) : (((/* implicit */int) var_2))))))));
                                arr_28 [12LL] [i_5] [(short)9] [i_5] [i_2] = ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (arr_23 [i_6 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) ? (4622587854041753388ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5880389127063736624LL)) ? (((/* implicit */long long int) 4294967295U)) : (-7771799999302792358LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11701)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) 7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_21 [i_5] [i_5] [i_4] [i_5])))))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_4] [(_Bool)1] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_3])))))));
                }
            } 
        } 
        arr_30 [i_2] = ((/* implicit */unsigned long long int) (signed char)37);
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    {
                        arr_37 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_7] [i_8] [i_9])) ? (var_3) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (_Bool)1)) : (arr_19 [i_2] [i_7] [i_9] [i_9]))));
                        arr_38 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_8])) ? (((((/* implicit */_Bool) (signed char)-13)) ? (((((/* implicit */_Bool) var_1)) ? (5880389127063736626LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8] [i_7] [i_7]))))) : (((/* implicit */long long int) arr_2 [i_2] [i_7])))) : (arr_12 [i_8] [i_2])));
                        arr_39 [i_2] [i_2] [i_2] [i_9] [i_9] [i_9] = ((/* implicit */signed char) var_0);
                        arr_40 [10] [10] [i_9] = ((/* implicit */long long int) var_10);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) arr_23 [i_2]);
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        arr_44 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)13527)) : (((/* implicit */int) var_2))));
        arr_45 [2LL] [(unsigned short)10] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */unsigned int) var_9)) : (var_7)))) ? (((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */long long int) -827057710)) : (-1249401416254233464LL))) : (1845679862621282352LL)));
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 16; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        for (signed char i_14 = 2; i_14 < 19; i_14 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 4294967286U)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))))));
                                arr_56 [i_11] [i_11] [i_13] [i_11] [i_10] = var_12;
                            }
                        } 
                    } 
                    arr_57 [i_10] = var_1;
                }
            } 
        } 
    }
}
