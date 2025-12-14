/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125342
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12220)) / (((/* implicit */int) (unsigned short)12234)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_7);
                    var_17 *= ((/* implicit */unsigned char) ((int) ((var_4) ^ (arr_4 [i_1 - 1] [i_1] [i_1 - 1]))));
                    var_18 = var_3;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 4; i_3 < 24; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            {
                arr_15 [i_3] = (+(((/* implicit */int) (unsigned short)12213)));
                arr_16 [i_4 - 1] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((int) (unsigned char)65))) & (((unsigned int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                            {
                                var_19 *= ((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_7]);
                                var_20 = ((/* implicit */signed char) ((arr_25 [i_3] [i_3 - 4] [i_4 + 1]) & (arr_25 [i_3] [i_3 - 2] [i_4 - 1])));
                                var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_13)) ? (arr_23 [(unsigned char)2] [i_6] [i_6]) : (var_4)))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */short) arr_17 [i_3 + 1] [i_3 - 3] [i_3 - 4] [i_4 + 1])), (arr_29 [i_3 - 4] [i_3 - 1] [i_4 - 1] [i_4 - 1] [(unsigned short)7]))))));
                                var_23 = ((unsigned int) arr_17 [1] [i_5] [i_4 - 1] [1]);
                                arr_30 [i_3] [i_3] [i_3] = ((/* implicit */short) (~(max((((((/* implicit */int) arr_19 [i_3] [i_3] [i_3])) ^ (((/* implicit */int) arr_26 [i_3] [i_4 + 1] [i_5] [i_3] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                            }
                            for (unsigned short i_9 = 4; i_9 < 22; i_9 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_25 [i_3] [(unsigned char)8] [i_5]))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (-1521808303)))))), ((+(arr_23 [i_3] [i_3] [i_3]))))))));
                                arr_34 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) arr_31 [i_4 - 1] [i_9 - 2] [i_3 - 1] [i_9 - 2] [i_9 + 2] [i_6])) ? (arr_31 [i_4 - 1] [i_9 - 4] [i_3 - 4] [(unsigned short)10] [i_9] [i_9]) : (arr_31 [i_4 - 1] [i_9 - 4] [i_3 - 2] [i_6] [i_9] [i_6])))));
                                arr_35 [i_6] [18U] [i_3] [i_6] [18U] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((arr_28 [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_4])))))), (((((/* implicit */_Bool) arr_12 [i_9 - 4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)7]))) : (arr_32 [18U] [i_4 + 1] [i_5] [i_6] [i_3])))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_10 = 4; i_10 < 22; i_10 += 2) /* same iter space */
                            {
                                arr_39 [22] [i_3] [i_3] [i_5] [7U] [i_6] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3 - 3])) ? (((/* implicit */int) arr_18 [i_3 - 2])) : (((/* implicit */int) arr_18 [i_3 - 1])))))));
                                var_27 += ((/* implicit */unsigned int) arr_33 [18] [i_5]);
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                            {
                                var_28 = ((/* implicit */unsigned char) ((unsigned int) 2516999503U));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_26 [i_3] [i_4] [i_5] [i_3] [i_11])) : (((/* implicit */int) var_2))));
                            }
                            for (int i_12 = 3; i_12 < 24; i_12 += 3) 
                            {
                                var_30 = ((/* implicit */int) arr_28 [i_6]);
                                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_24 [i_3] [14U] [i_3] [i_5] [i_3 - 3]), (arr_24 [i_3 - 3] [i_3 - 3] [i_5] [i_5] [i_12 + 1])))) ? ((+(((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3 - 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [1U] [i_12 + 1]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) (+(arr_11 [i_3 + 1] [i_4] [i_5]))))))))));
                                arr_46 [i_3] = ((/* implicit */unsigned char) min((((((var_12) > (((/* implicit */int) (unsigned short)41953)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_3] [i_4] [i_3] [i_6] [i_6]))))) : (-17))), (((/* implicit */int) var_2))));
                                var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)41954)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (short)-1)))) : ((((-(((/* implicit */int) (unsigned char)179)))) / (((((/* implicit */_Bool) arr_33 [i_3] [i_5])) ? (arr_12 [i_6] [i_4 + 1]) : (((/* implicit */int) arr_38 [(unsigned char)14] [i_4] [i_5] [0] [i_5]))))))));
                            }
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_12 [i_3] [i_3 - 1]))));
                            var_34 ^= ((/* implicit */signed char) (+(((((/* implicit */int) arr_19 [i_3] [i_5] [i_4 - 1])) + (((/* implicit */int) arr_19 [i_3 - 2] [i_5] [i_4 + 1]))))));
                        }
                    } 
                } 
                var_35 |= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_3 - 3])) && (((/* implicit */_Bool) arr_18 [i_4]))))) < (((/* implicit */int) var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3 + 1] [i_4] [i_4 - 1] [(unsigned short)22] [i_4]))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 + 1]))) - (18446744073709551611ULL)))))) : (((/* implicit */int) ((((/* implicit */int) ((short) 2147483644))) > (((/* implicit */int) ((arr_23 [i_3] [1U] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-17387)))))))))));
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    var_36 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)109)) ? (2516999486U) : (arr_13 [i_3 - 3] [i_3 - 4])))));
                    var_37 ^= ((/* implicit */short) (+((((_Bool)1) ? (((long long int) 16368U)) : (((/* implicit */long long int) -1))))));
                    var_38 *= ((/* implicit */short) (~(((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (2356034474U))) ? (arr_13 [i_3] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7252018904286748820LL)) ? (((/* implicit */int) (short)28061)) : (((/* implicit */int) arr_18 [(short)16])))))))));
                    arr_49 [i_3] [i_4] [(unsigned char)10] [i_13] |= ((/* implicit */long long int) arr_32 [i_3] [(unsigned char)8] [i_4 - 1] [i_4 - 1] [6]);
                }
            }
        } 
    } 
}
