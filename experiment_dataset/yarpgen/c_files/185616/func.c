/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185616
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((11539956123755374297ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (short)-17359)) ? (14170702615399347487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) 10337458475737605763ULL);
    }
    var_19 = ((/* implicit */_Bool) ((9097371473976105367ULL) ^ (((/* implicit */unsigned long long int) 3610400086U))));
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) 4276041458310204128ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (9005000231485440ULL));
                            var_21 = ((/* implicit */unsigned short) arr_17 [i_1] [i_1] [i_1] [i_4] [i_1]);
                        }
                    } 
                } 
                arr_18 [(unsigned short)10] [i_2] [i_2] [12ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (14170702615399347487ULL))) + (var_12)))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_2 [i_2 - 1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 4294967295U))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) (short)17362)) ? (18446744073709551615ULL) : (12960625415899591619ULL)))));
                        var_24 = ((13271116189596036133ULL) >> (((((((/* implicit */_Bool) var_5)) ? (arr_9 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))))) - (16357088838804045435ULL))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_25 ^= ((/* implicit */_Bool) (((_Bool)1) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))));
                        arr_26 [i_8] = ((/* implicit */short) var_9);
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((_Bool)1) ? (arr_9 [i_1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_27 [i_1] [i_1] [i_3] [i_3] [i_2] |= ((/* implicit */_Bool) arr_23 [i_6] [i_1] [i_1]);
                    }
                }
            }
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (18446744073709551608ULL)));
                arr_31 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9341332679804604967ULL))))), (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [(unsigned short)6]))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_11 = 3; i_11 < 17; i_11 += 1) 
                {
                    var_28 = ((arr_34 [16U] [16U] [i_10] [i_11] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11 + 1] [i_10] [i_2 - 2] [i_2 + 2] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)15780)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    var_29 ^= ((/* implicit */unsigned long long int) ((arr_17 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2]) ? (((/* implicit */int) arr_28 [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) (unsigned char)234))));
                    arr_37 [i_1] [i_1] [i_1] [i_1] [i_2] |= ((2705947364U) == (arr_22 [i_2] [i_2] [i_2] [i_2]));
                }
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 16; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_44 [i_13] [i_13] [i_13] |= ((/* implicit */unsigned short) arr_36 [i_1] [i_2] [i_10] [i_12] [i_13]);
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_16) / (2705947364U)))) != ((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19874))) : (var_13)))))));
                            arr_45 [i_1] [i_1] [i_1] [(unsigned short)16] [i_1] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((arr_42 [1ULL] [i_2] [i_12 - 1] [i_12]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))) != ((-(9896742944082169133ULL))))))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) 645525734U)))))));
        }
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [(unsigned char)1] [i_1] [i_1])) ? (min((18446744073709551615ULL), (4465537186527306142ULL))) : (13489891744400074760ULL)))));
    }
    var_33 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned long long int) (unsigned char)59))));
}
