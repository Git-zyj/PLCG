/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148879
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
    var_16 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_8 [i_0] [i_1 - 4] [i_2 + 1] [i_3]))))) ? (max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 - 2] [i_1 - 2]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_3 [i_2] [i_3])))) * (((int) (signed char)45)))))));
                            arr_10 [i_0] [i_1] [13LL] [i_2] [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((arr_7 [i_1] [i_0]), (arr_1 [i_0]))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_2 + 1]), (arr_4 [i_2 - 2]))))) < (max((((/* implicit */long long int) arr_4 [i_2 + 1])), (arr_1 [i_2 + 1])))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)206))))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(unsigned short)7] [i_0])) ? (-5211987517728527857LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))))) ? ((-(arr_7 [i_0] [i_1 + 1]))) : (-8097035760413830254LL)));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_4] = ((/* implicit */unsigned short) arr_7 [i_1 - 3] [i_1 - 2]);
                            arr_21 [16U] [i_1] [i_1] [(unsigned short)16] [3U] [i_1 - 2] = ((/* implicit */unsigned int) ((long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 - 2] [i_1] [i_4 + 2] [i_1]))) : ((+(arr_5 [i_0] [i_1 - 2] [i_0] [i_1 - 2]))))));
                            arr_22 [i_0] [i_1 + 1] [i_4 - 2] [i_5] = ((/* implicit */long long int) arr_6 [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_6 = 4; i_6 < 15; i_6 += 3) 
                {
                    arr_27 [i_0] [i_1 + 1] [i_1 - 4] [i_6] = ((/* implicit */unsigned char) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 2) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) ((unsigned char) arr_19 [i_8] [i_7] [i_6] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)70))) : ((+((-9223372036854775807LL - 1LL))))))));
                                arr_33 [i_8] [i_1] [(_Bool)1] [i_1] [i_8 - 1] = ((/* implicit */unsigned int) (signed char)11);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_38 [i_0] [i_6 - 1] [i_9] = ((/* implicit */long long int) (short)0);
                                arr_39 [i_0] [i_1] [i_9] [i_10] = max((((/* implicit */unsigned int) ((signed char) var_5))), (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_9)))));
                                arr_40 [i_0] [i_0] [i_6 + 1] [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((unsigned int) var_14))) % (arr_15 [i_0] [i_0] [i_6]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_29 [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 2])))));
                            }
                        } 
                    } 
                    arr_41 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_7 [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) min((141753311018374388LL), (((/* implicit */long long int) (signed char)60))))) ? (((/* implicit */int) ((signed char) arr_35 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6]))) : (((((/* implicit */int) var_6)) / (((/* implicit */int) var_2)))))) : (min((((/* implicit */int) arr_23 [i_0] [i_0])), (((((/* implicit */int) arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_6 - 3])) | (((/* implicit */int) var_11))))))));
                }
                for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
                    {
                        for (short i_13 = 4; i_13 < 15; i_13 += 4) 
                        {
                            {
                                arr_49 [i_0] [i_1 - 1] [i_11] [i_11] [i_12] [i_13 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 118635763U))) ? (((/* implicit */long long int) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12] [i_13])))))) : ((-(5211987517728527855LL)))))) ? (min((var_15), (((((/* implicit */_Bool) var_8)) ? (var_15) : (4176331533U))))) : ((+(3517166787U))));
                                arr_50 [i_13 - 3] [i_13 - 3] [i_13] [i_13] [i_13] &= ((/* implicit */long long int) 4294967295U);
                                arr_51 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned char)62))));
                            }
                        } 
                    } 
                    arr_52 [i_11] [i_11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> ((((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_1 + 1] [i_1 + 1])))))) + (11)))));
                }
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        arr_57 [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)-85))))));
                        arr_58 [i_0] [i_0] [i_0] [i_0] = arr_3 [i_15] [i_1];
                    }
                    arr_59 [i_14] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) max((max((arr_46 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_1)))), (((unsigned int) arr_29 [i_0] [i_0] [i_14] [i_0])))));
                    arr_60 [i_0] [i_1 - 4] = ((/* implicit */int) ((((/* implicit */_Bool) 68448603U)) ? (563316403U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    arr_64 [i_1] [i_1] [i_16] [i_1 - 3] = ((/* implicit */unsigned char) (!(((_Bool) 131008U))));
                    arr_65 [i_0] [i_0] [i_16] [i_16] = ((unsigned int) arr_3 [i_1 + 1] [i_1 - 4]);
                    arr_66 [i_0] [(unsigned short)15] [i_1 + 1] [i_16] = ((/* implicit */long long int) (unsigned char)128);
                }
            }
        } 
    } 
}
