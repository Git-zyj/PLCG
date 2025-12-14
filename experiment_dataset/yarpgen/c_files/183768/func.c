/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183768
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
    var_10 |= ((/* implicit */long long int) var_4);
    var_11 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) (~((((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_1]))) > (var_9)))) - (1)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) min(((~(((/* implicit */int) arr_5 [i_0])))), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 2])) | (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = (+(max((max((arr_1 [(signed char)3] [4]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((unsigned char) var_4))))));
                                var_14 = ((/* implicit */int) (((+(arr_12 [i_4 + 3]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [5LL])), (arr_1 [i_0] [i_0]))))))))));
                                arr_13 [i_0 + 3] [i_0] [i_2] [i_0 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */short) arr_8 [i_0])), (arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))) : (((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_2] [(short)5])))))))));
                                var_15 = ((/* implicit */short) (~((-(arr_9 [(unsigned short)12] [i_3 + 4] [i_3 + 1] [i_3 + 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_16 = arr_10 [16ULL] [16ULL];
                    /* LoopSeq 3 */
                    for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1] [(unsigned short)9] [i_1] [i_1] [(short)16] [i_7 + 3]))));
                            arr_23 [i_0] [18LL] [(short)10] [i_0 - 1] [i_0 + 1] [i_5] [i_0] |= ((/* implicit */short) var_0);
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_18 -= min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_5] [i_6 - 3] [i_6]))))), (((unsigned char) var_4)));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_1] [i_6] [i_8])) && ((!(((/* implicit */_Bool) arr_19 [i_0 - 1] [i_5] [i_0 + 2] [i_6 + 1])))))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_5] [i_5] [1LL] [i_6 - 3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((max((arr_26 [i_9] [i_1] [i_6] [i_9]), (var_0))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [13U] [i_0 + 2] [i_0 - 1] [i_0 + 3] [19ULL] [i_0 + 3]))))))))) >= (((long long int) var_7))));
                            arr_31 [i_0] [i_5] [i_0] [i_9 - 1] = ((/* implicit */unsigned int) ((short) min((((arr_7 [i_0 + 2] [i_0]) < (((/* implicit */int) arr_21 [17ULL] [(signed char)16] [2LL] [i_6] [i_9] [i_0] [i_9])))), ((!(((/* implicit */_Bool) arr_3 [i_0])))))));
                            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) min((max(((~(((/* implicit */int) arr_11 [(unsigned short)17] [0] [0])))), (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0] [5U] [6]))))), (((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_1] [i_0 - 1] [i_6] [i_9] [16LL] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) arr_10 [(short)5] [14ULL])))))));
                        }
                        var_20 = ((/* implicit */unsigned short) max((min((arr_1 [i_5] [i_1]), (((/* implicit */unsigned long long int) arr_14 [i_0 + 3] [i_1] [i_5] [i_6 + 1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_28 [i_0] [i_0] [10U] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))))))));
                    }
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_5] [i_5] [i_10 + 2]))))), ((~(((/* implicit */int) arr_21 [i_0] [(short)11] [i_0] [i_0 + 2] [i_0 - 1] [i_0] [(signed char)17]))))));
                        var_22 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0]))))), (((long long int) arr_22 [i_0] [i_0]))))));
                    }
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_5] [i_11] [i_5]);
                        arr_39 [i_0 + 3] [(unsigned char)18] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_19 [i_0 + 3] [i_5] [i_11 + 2] [6LL]))) - ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [i_0 + 3] [i_1] [i_5] [i_0 + 3] [(short)0] [i_5])) : (((/* implicit */int) arr_16 [i_5] [6ULL] [i_5]))))))));
                    }
                    arr_40 [i_5] [i_1] [i_1] [i_0 - 1] &= ((/* implicit */unsigned char) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_19 [i_0 + 3] [i_5] [i_0 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 1])) | (((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */int) ((signed char) ((unsigned char) arr_19 [(signed char)12] [i_5] [18LL] [18LL])))) : (((/* implicit */int) arr_36 [(unsigned short)15] [(unsigned char)12] [(unsigned char)12] [(unsigned short)5] [i_13]))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((arr_38 [i_0]), (((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [(_Bool)1] [i_5] [i_12])))), (((/* implicit */unsigned long long int) ((arr_28 [i_0] [i_0] [(unsigned short)1] [i_12] [i_13] [(_Bool)1] [i_0]) ? (((/* implicit */int) arr_34 [i_0 + 1] [6U] [i_12] [6U])) : (((/* implicit */int) arr_37 [12LL] [17LL] [i_12] [i_12] [i_13] [12LL])))))))) ? (((/* implicit */int) max((arr_37 [i_0 + 1] [(unsigned char)1] [i_0] [(unsigned char)0] [i_0 + 2] [i_0]), (arr_37 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0] [i_0])))) : (((/* implicit */int) ((((long long int) var_6)) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 - 1] [i_0]))))))));
                                var_26 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_0] [(unsigned char)8] [(unsigned char)8])), (arr_27 [i_5] [i_12] [i_5] [i_1] [i_1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_46 [i_0] [(unsigned char)5] [i_1] [i_5] [i_12] [(unsigned char)13] [i_0])))) : (((long long int) arr_34 [i_0 + 1] [8LL] [i_13] [i_0])))));
                                var_27 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_37 [i_0] [(signed char)17] [i_0] [i_0 - 1] [i_0] [i_0 + 2])), ((~(((/* implicit */int) arr_37 [13ULL] [i_12] [i_12] [i_12] [(short)9] [i_5]))))))));
                            }
                        } 
                    } 
                    arr_48 [13U] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) min(((~(((arr_38 [i_0]) >> (((((/* implicit */int) arr_4 [19] [i_0] [i_0])) - (11638))))))), (((/* implicit */unsigned long long int) ((int) arr_7 [i_0 - 1] [i_0 + 3])))))) : (((/* implicit */signed char) min(((~(((arr_38 [i_0]) >> (((((((/* implicit */int) arr_4 [19] [i_0] [i_0])) - (11638))) - (1470))))))), (((/* implicit */unsigned long long int) ((int) arr_7 [i_0 - 1] [i_0 + 3]))))));
                }
                arr_49 [i_0] = ((/* implicit */unsigned int) arr_5 [i_0]);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_4);
    var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
}
