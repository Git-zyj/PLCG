/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170831
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (signed char)0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) arr_1 [i_2]);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (8228532638063488367ULL)));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((int) 8228532638063488367ULL)))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((long long int) -8192)))));
                        var_23 = arr_10 [i_3] [i_1] [i_2];
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) == (10218211435646063256ULL)));
                        var_24 = ((/* implicit */int) arr_0 [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */signed char) 10218211435646063256ULL);
                        arr_17 [i_0] [i_0] [(unsigned char)13] [(signed char)3] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) > ((~(((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0])), (-476110867)))), (((unsigned int) 0))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_4] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                            var_25 -= ((/* implicit */unsigned char) var_17);
                            arr_21 [i_2] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0]);
                            arr_22 [i_4] [i_0] [i_4] [i_4] [(_Bool)1] [i_0] [i_4] = ((/* implicit */long long int) var_0);
                        }
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_26 [i_0] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((long long int) var_14)));
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_19 [i_6] [i_2] [i_1] [2])), (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4]))) : (var_14)))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            arr_32 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4])))), (((/* implicit */int) max((arr_9 [i_0] [(_Bool)1] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_1] [i_0]))))));
                            var_26 = ((/* implicit */unsigned char) ((int) ((_Bool) arr_28 [i_7])));
                            arr_33 [i_0] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) var_5));
                            arr_34 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = min(((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1] [i_4] [i_7])), (arr_28 [i_7])))))), (var_7));
                        }
                        var_27 = ((unsigned char) max((((arr_4 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)204)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_2] [i_8] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) min((min((((/* implicit */unsigned char) arr_30 [i_8] [i_0] [(_Bool)1] [i_0] [i_0])), (var_19))), (((/* implicit */unsigned char) ((_Bool) var_17)))))), (max((((100663296) ^ (var_10))), (((/* implicit */int) ((arr_2 [i_0] [(short)11]) > (((/* implicit */int) var_5)))))))));
                        arr_39 [i_0] [(signed char)5] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */signed char) arr_28 [i_1]);
                        arr_40 [i_0] [i_0] [(signed char)3] [(signed char)3] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) (_Bool)0)))) ? (max((arr_18 [i_8] [i_2] [i_1] [(signed char)13] [i_0]), (arr_18 [i_0] [i_1] [i_2] [i_2] [i_8]))) : (((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_1] [i_0]))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_23 [i_0] [(unsigned char)12] [(unsigned char)12] [i_2] [i_8] [i_9])))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_9] [i_0]))) <= (arr_4 [i_1])))))))));
                            arr_43 [i_0] [i_0] [i_0] [i_8] [i_9] [i_9] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_1] [i_0])), (((((/* implicit */_Bool) arr_1 [i_9])) ? (var_3) : (((/* implicit */unsigned long long int) arr_35 [i_0]))))));
                            arr_44 [i_0] [i_1] [12] [i_1] [i_1] = (~(((((((-1069476390) ^ (((/* implicit */int) (unsigned char)255)))) + (2147483647))) << (((((/* implicit */int) ((short) arr_6 [i_0] [4LL] [i_2]))) - (1))))));
                            arr_45 [i_0] [i_1] [i_0] [i_8] [i_0] = ((/* implicit */signed char) max((min((arr_7 [i_0] [i_8] [i_9]), (((/* implicit */long long int) arr_29 [i_0])))), (((/* implicit */long long int) ((unsigned int) 14495378541114959052ULL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) (-(max((arr_25 [i_8] [i_2] [i_8] [i_8]), (arr_25 [i_10] [i_8] [i_2] [i_1])))));
                            arr_48 [i_0] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) == (var_17))), (min((arr_47 [i_0] [i_1] [i_2] [i_8] [i_10]), (arr_47 [i_10] [i_1] [i_2] [i_1] [i_0])))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_30 [i_10] [i_2] [i_2] [i_2] [i_0]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) var_5);
    var_32 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_19))))), (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned long long int) var_0)) : (var_3))))), (((/* implicit */unsigned long long int) var_17))));
}
