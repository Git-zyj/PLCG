/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14093
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18999))) : (((((arr_2 [i_0 + 1] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_15)) - (44110)))))));
        arr_6 [i_0] = ((/* implicit */signed char) var_10);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                arr_11 [i_1] [i_2] = ((/* implicit */signed char) ((unsigned int) arr_9 [i_1] [i_1 - 1] [i_1]));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                {
                    arr_15 [i_3] [i_2] = ((/* implicit */_Bool) var_14);
                    arr_16 [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 23; i_4 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) arr_20 [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33924))))));
                        arr_21 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) var_5);
                        arr_22 [i_1] [(short)17] [i_3] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [(unsigned short)3] [i_3])) : (((/* implicit */int) arr_20 [(signed char)2] [i_3] [(unsigned char)16] [i_4] [i_3] [i_1]))))) ? (((((/* implicit */_Bool) 3606642757872235460LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((((((/* implicit */int) arr_7 [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) var_5)) - (34874)))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!((_Bool)1))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2))))))))));
                            var_19 = ((/* implicit */_Bool) arr_25 [i_2] [i_6]);
                        }
                        for (short i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            arr_36 [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_1 + 2]));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_34 [i_5] [i_2] [i_5] [i_6] [(_Bool)1] [i_2]) > (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)16294))))))))));
                            arr_37 [i_1] [i_2] [i_5] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3733)) ? (((/* implicit */int) (unsigned short)16294)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_21 ^= ((/* implicit */long long int) arr_27 [i_1 - 1] [i_1 + 2] [i_1 + 1]);
                    }
                    arr_38 [i_1] [(signed char)23] [10U] = ((/* implicit */signed char) var_13);
                    arr_39 [i_1 - 2] [(_Bool)1] [i_1] [8ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_1] [i_1 + 1] [(signed char)24] [i_1 + 2]))));
                    arr_40 [i_5] [i_2] [i_2] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2])) ^ (((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 1]))));
                }
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) min((min((((/* implicit */short) var_7)), (arr_33 [i_1 + 1]))), (arr_33 [i_1 - 1])));
                    arr_44 [(_Bool)1] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_14 [i_1]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_1] [i_2])), (var_0))))))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [(_Bool)1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_35 [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 2])))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            arr_50 [i_10] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)49242))));
                            arr_51 [i_10] [i_10] [i_2] [i_1] [i_10] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_2] [i_11])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2]))))));
                            arr_52 [i_1] [i_10] [i_11] = ((/* implicit */short) var_3);
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_11))))) == (min(((+(arr_9 [i_2] [i_2] [i_11]))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)16290)))))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_12 = 4; i_12 < 21; i_12 += 1) 
                            {
                                arr_56 [i_1] [i_10] [i_10] [i_1 + 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) arr_41 [i_12 + 2] [i_1 + 1] [i_10]))))) ? (((/* implicit */int) ((_Bool) arr_23 [i_1] [i_1] [i_1 + 1]))) : ((+(((/* implicit */int) arr_23 [(signed char)24] [i_1] [i_1 - 2]))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)2)) >= (((/* implicit */int) arr_48 [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_10]))))) <= ((-(((/* implicit */int) arr_47 [i_1 + 2] [i_10] [i_12 - 3] [i_12 - 4]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                            {
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */int) (short)14680)) >> (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) arr_53 [12ULL] [(unsigned char)20])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [i_10])))))))));
                                arr_60 [i_1] [i_2] [i_10] [i_11] [i_13 + 1] = ((/* implicit */long long int) ((_Bool) arr_14 [i_1 + 1]));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_6);
}
