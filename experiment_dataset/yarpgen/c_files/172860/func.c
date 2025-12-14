/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172860
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)97))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_7 [i_2 + 1] [i_0] [i_1] [i_0])))) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_2 + 1]))))), (((long long int) arr_6 [i_1 + 1] [(signed char)6] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_9 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */int) var_13))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [16LL] [i_1 + 1] [i_2] [i_3]))))), (((/* implicit */unsigned int) arr_3 [i_1] [i_4]))));
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) (_Bool)0))))) : ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        for (int i_6 = 3; i_6 < 13; i_6 += 4) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_6] [i_5])), ((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned int) var_2)))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 7955733335979519493ULL)) ? (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (arr_5 [i_5 - 1] [i_6] [i_7])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_5 - 2] [i_7] [i_8] [i_5])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)7] [i_6]))))))));
                                arr_29 [i_5] [i_6] [i_5] [i_6] [i_9 - 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_9] [i_9 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6] [i_9 - 1]))))) : (((/* implicit */int) min((arr_28 [(signed char)13] [i_6] [i_6 + 2] [i_6 + 1] [i_9]), (arr_28 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 2]))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_5] [i_6] [i_10] [i_6] [i_10]))));
                    arr_32 [i_10] [i_6 + 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_4 [i_5])))) ? (((((/* implicit */_Bool) arr_4 [i_5])) ? (arr_4 [i_5]) : (arr_4 [(unsigned char)9]))) : (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)111))))));
                    var_20 = ((/* implicit */unsigned char) arr_19 [i_5 - 3]);
                }
                for (unsigned int i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_17 [i_5 - 2] [i_6 - 3]);
                                var_22 = max((arr_5 [i_5] [(unsigned char)16] [(unsigned char)16]), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_13] [i_12] [i_11] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_6] [i_11] [i_12] [i_13]))) : (var_10))))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_11 + 1] [i_11])) ? (((/* implicit */int) ((unsigned char) ((long long int) arr_18 [i_11 + 1] [i_12 - 1] [5LL])))) : (((/* implicit */int) min(((signed char)-53), (((/* implicit */signed char) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    arr_41 [i_11] [i_6] [i_6] [i_5 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_34 [i_5] [(signed char)2] [9LL]))))) ? (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */int) arr_28 [i_11 + 3] [i_6] [i_11 + 3] [i_6 + 1] [i_11 + 2])) : (((/* implicit */int) arr_23 [i_5 - 1] [i_6] [i_6] [i_11])))) : (((/* implicit */int) arr_26 [i_11] [i_6] [i_6] [i_6] [i_5]))))) ? (((((/* implicit */_Bool) 160496420U)) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_11))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            {
                var_24 ^= ((/* implicit */int) max((((((/* implicit */_Bool) arr_48 [i_15] [i_14] [i_14])) ? (arr_48 [i_14] [i_15] [i_14]) : (arr_48 [i_14] [i_14] [i_15]))), (arr_48 [i_14] [(unsigned char)10] [i_14])));
                var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_44 [i_15]), (arr_47 [i_15]))))) : (var_11)));
            }
        } 
    } 
}
