/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181106
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 ^= ((unsigned short) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_3] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_4 [i_0] [i_1])) : (arr_6 [i_3] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0])))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
                            {
                                var_19 += ((/* implicit */short) (-(((long long int) var_7))));
                                var_20 *= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_3])), (arr_3 [(_Bool)1] [i_1])))) ? (arr_4 [i_0] [i_3]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))))));
                                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)8691))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_10 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4]))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                            {
                                var_22 -= arr_1 [i_1];
                                var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (!((_Bool)1)))))));
                                var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned short)8596)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned short) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [(unsigned char)12])))))) : ((+(arr_13 [(unsigned short)16] [8ULL] [i_0] [i_1] [i_2] [i_3] [(unsigned short)16])))));
                                arr_18 [i_3] [i_1] [(unsigned short)21] [(signed char)11] [i_1] [i_1] = ((/* implicit */long long int) (+(4294967295U)));
                                var_25 = ((/* implicit */unsigned short) arr_6 [i_3] [(unsigned short)9] [i_1] [i_0]);
                            }
                            arr_19 [i_0] [i_0] [i_3] [i_1] [(short)11] [i_3] = ((/* implicit */signed char) min((124950518499058919LL), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] [i_2] [i_3])) & (((((/* implicit */_Bool) arr_16 [i_3] [i_1] [i_2] [16LL] [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_16 [i_3] [(signed char)22] [i_2] [i_1] [i_1] [(unsigned short)21] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                arr_22 [i_3] [(unsigned char)13] [i_1] [4U] [(signed char)8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) arr_1 [(short)21])) : (((/* implicit */int) (signed char)-34))));
                                var_26 += ((/* implicit */unsigned short) arr_21 [i_0] [i_1] [i_3] [i_0] [i_6] [i_1]);
                                arr_23 [i_3] [i_1] [i_2] [i_3] [7ULL] = ((/* implicit */unsigned long long int) (unsigned short)28851);
                                arr_24 [i_6] [i_3] [i_3] [i_3] [i_1] [(short)21] = ((/* implicit */signed char) ((int) arr_7 [i_0] [i_0]));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_27 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_7] [i_3] [i_1] [20LL]))));
                                arr_27 [i_7] [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] |= (unsigned short)59421;
                            }
                            for (short i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
                            {
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) var_2)))))));
                                var_29 += ((/* implicit */unsigned short) min((((13ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_3] [i_3] [i_3] [(unsigned short)14] [i_3] [i_3])), (arr_0 [i_3]))))))), (((/* implicit */unsigned long long int) max((arr_28 [i_1]), (((/* implicit */int) arr_10 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 2] [i_8])))))));
                            }
                            /* vectorizable */
                            for (short i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
                            {
                                var_30 = ((/* implicit */_Bool) ((unsigned short) arr_15 [i_9 + 2] [i_9 + 1] [i_2]));
                                var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (unsigned short)6115)) : (((/* implicit */int) (unsigned short)56022))));
                                arr_34 [i_0] [(unsigned char)11] [(unsigned short)20] [i_3] [i_9] = ((/* implicit */short) ((_Bool) arr_16 [i_3] [i_9 + 1] [i_9 + 2] [i_9] [i_9 - 1] [i_9] [i_3]));
                            }
                        }
                    } 
                } 
                var_32 = arr_2 [i_0];
                var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]) ? (var_6) : (arr_13 [(short)13] [i_1] [(short)20] [i_1] [i_1] [(unsigned short)10] [i_1])))))) ? (((long long int) (unsigned short)43727)) : (((/* implicit */long long int) ((unsigned int) min((var_5), (((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) var_9);
    var_35 *= ((/* implicit */_Bool) min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) (unsigned short)43727))));
}
