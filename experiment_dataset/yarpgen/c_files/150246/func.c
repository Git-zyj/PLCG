/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150246
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_11 [i_0] [(unsigned short)17] [(short)1] [11ULL] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_3] [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-27744)), (273804165120ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), ((unsigned short)65535))))) : (((((((/* implicit */_Bool) 16U)) && (((/* implicit */_Bool) 3537138798U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_3]))) : (((((/* implicit */_Bool) arr_6 [(unsigned short)11] [(unsigned char)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19528))) : (arr_13 [i_3])))))));
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((9797884287573225101ULL) - (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [20U])))))) && (arr_2 [i_0])));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned long long int) (~(arr_10 [i_0] [i_1] [i_2])))))));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) arr_22 [6ULL] [i_1 - 1] [6ULL] [i_1 - 1] [i_6]);
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(273804165120ULL))))));
                                arr_25 [i_0] [11ULL] [i_5] [i_6] [i_5] |= arr_1 [(_Bool)1];
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((5U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-19557))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18289461206894332338ULL)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_1 - 4] [i_1 - 4] [i_1 - 4] [13ULL] = ((/* implicit */signed char) ((unsigned int) ((((arr_7 [17U] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned short)19] [(short)13] [i_5] [(unsigned short)19] [i_8] [i_9 + 3]))))) / (((/* implicit */long long int) ((((/* implicit */int) (short)-3204)) - (-1216398421)))))));
                                var_18 = ((/* implicit */signed char) arr_15 [i_0] [4ULL] [i_5] [i_0] [i_8] [i_9]);
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_13 [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27756)))))) ? ((~(arr_9 [i_0] [i_0] [i_0] [22ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212)))))))) != (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-1)) | (arr_20 [i_0] [i_1] [i_1] [i_1] [i_9]))))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (short)3204)), (273804165120ULL))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (signed char)-29)), (4503599627354112ULL))))))))));
                                arr_32 [i_0] [12] [12] [(signed char)0] [i_9 + 2] |= ((/* implicit */int) (short)-3189);
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)12914)))) < (((int) arr_30 [i_0] [i_0] [i_0] [i_11]))));
                        var_22 ^= ((/* implicit */unsigned short) ((arr_28 [i_0] [i_11] [i_10] [i_11] [i_11]) % (arr_7 [i_0] [9ULL] [i_11])));
                    }
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                    {
                        arr_41 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
                        arr_42 [i_0] [i_0] [(short)8] [i_10] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) != (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_12] [1] [i_10] [i_10] [i_1] [i_1 - 3] [4LL])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) ^ (((unsigned int) 10295903233950406818ULL))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                        {
                            var_23 = arr_8 [i_0];
                            var_24 ^= ((/* implicit */unsigned char) -1216398419);
                            arr_47 [i_10] [(short)1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [22ULL] [0ULL])) <= (22ULL))))) * (((arr_35 [20U] [i_14] [i_14] [i_14] [i_14] [(signed char)12]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [16ULL])))))));
                            var_25 = ((/* implicit */unsigned long long int) arr_34 [16ULL] [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned char)70))));
                            arr_51 [i_0] [i_10] [i_10] [(signed char)11] [i_0] |= ((((unsigned long long int) arr_12 [i_13] [i_1 - 3] [2ULL] [i_13])) - (((/* implicit */unsigned long long int) 1821955944)));
                            arr_52 [i_0] |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)6] [i_10] [i_13] [i_15])))));
                        }
                        var_27 = max((((/* implicit */unsigned long long int) ((short) (+(arr_28 [i_0] [i_0] [i_0] [i_13] [i_0]))))), (((arr_9 [i_0] [i_0] [i_10] [i_13]) << (((/* implicit */int) ((12329516501826784932ULL) >= (((/* implicit */unsigned long long int) 1437133128))))))));
                    }
                    var_28 = ((/* implicit */unsigned int) ((unsigned long long int) (((-(((/* implicit */int) (unsigned short)10)))) | (((((/* implicit */int) (unsigned short)16758)) / (((/* implicit */int) (signed char)-96)))))));
                }
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) arr_36 [7] [i_1]);
                            var_30 -= ((/* implicit */long long int) 3737842166U);
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54670))) & (1342316037U)))) / (arr_27 [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 23; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        {
                            var_32 |= ((/* implicit */_Bool) (-(arr_18 [i_0])));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((14673276281876686531ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48421)))))) ? ((+((~(16U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                            var_34 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_0] [i_1 - 1]))))) ? (arr_39 [i_18] [i_19]) : (((unsigned long long int) arr_66 [i_19] [i_18] [i_0] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_9))));
    var_36 = ((/* implicit */signed char) ((((10860422750017609758ULL) * (((((/* implicit */unsigned long long int) -1231159062351823758LL)) / (18446744073709551610ULL))))) | (((/* implicit */unsigned long long int) var_3))));
    var_37 = ((/* implicit */short) -3610617175194505949LL);
}
