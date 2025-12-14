/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129068
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (+(8763564848246079000ULL)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_1] [(unsigned char)8] [i_0] [12] [i_1 + 1] [(unsigned char)8]), (((/* implicit */unsigned char) arr_11 [i_0] [5U] [i_1 + 1] [i_2] [i_3] [i_4])))))) > (((((arr_4 [(unsigned char)4] [i_3 + 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [(short)2] [i_0] [i_0] [(unsigned char)12] [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) (!(var_17))))))))))));
                            arr_14 [i_1 - 1] [i_1] [i_3] [i_1 - 1] = ((/* implicit */short) 8763564848246079000ULL);
                            var_20 = ((/* implicit */unsigned char) var_6);
                            arr_15 [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned long long int) var_3)), (9683179225463472616ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 1] [4U] [(unsigned char)9] [i_3 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_4] [i_3 + 1] [i_2] [i_1 + 1] [i_0]))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [1ULL] [i_4])) ? (arr_4 [i_0] [8ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((8763564848246078986ULL) != (((/* implicit */unsigned long long int) var_1)))))));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_22 = var_2;
                            var_23 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1)))), (min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])), (var_6))))), (8763564848246078960ULL)));
                        }
                        var_24 = ((/* implicit */int) arr_4 [i_1 - 3] [i_0]);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [(unsigned short)0] [i_1] [i_1] [(unsigned short)6] [i_1 - 1] [i_1]))))) : (((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [2] [2] [i_1] [i_3]))) : (var_1)))) : (min((((/* implicit */unsigned long long int) arr_3 [8ULL] [8ULL])), (var_2)))))));
                        arr_18 [i_3] [i_2] = ((/* implicit */short) 8763564848246078998ULL);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
                        {
                            var_26 *= ((/* implicit */unsigned char) (-(arr_2 [i_0])));
                            var_27 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_20 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_6] [i_7])))), ((~(((((/* implicit */int) arr_5 [(unsigned char)1] [i_0])) | (var_7)))))));
                            var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_6])) ? (8763564848246078986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((arr_10 [i_0] [i_1] [i_2] [1ULL] [8U]) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)240))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_8 + 1])) ? (arr_26 [i_8 + 1] [i_2] [i_1 - 2] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 3] [i_1 + 1]))))))));
                            var_30 -= ((/* implicit */unsigned long long int) var_4);
                        }
                        arr_28 [i_0] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1] [(short)9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_1 - 3] [i_1 - 2] [i_6] [i_1 - 2] [i_6] [i_6]), (arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_1] [i_6] [i_0]))))) : ((~(9683179225463472630ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_31 [i_0] [i_1 + 1] [i_2] [i_6] [i_9] [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_6]), (((/* implicit */short) var_5)))))) > (var_3)));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-19685)) : (((/* implicit */int) (unsigned char)52)))) <= (((/* implicit */int) (unsigned char)252))))));
                            var_32 += ((unsigned long long int) min((((unsigned int) arr_11 [i_0] [i_1 - 3] [i_0] [2LL] [i_6] [i_9])), (((/* implicit */unsigned int) ((8486019918993392214LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)0] [i_0] [i_0]))))))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [(unsigned char)6] [i_2])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */short) arr_13 [i_9] [10ULL])), ((short)-32749))))))), (min((var_6), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_6] [i_9]))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 11; i_10 += 4) 
                        {
                            arr_35 [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_2] [i_6] [i_0]);
                            var_34 = ((((/* implicit */int) var_18)) > (((/* implicit */int) arr_23 [i_1 - 3] [i_1 - 1] [i_6] [i_6] [i_10 - 2] [i_10] [i_10])));
                            arr_36 [i_0] [i_1] [12U] [i_6] [6ULL] [i_2] [i_2] = arr_8 [i_6] [i_0] [i_0];
                            var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [(short)3] [i_1 - 1] [i_1 - 3])) ? (arr_19 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 3]) : (arr_19 [i_1 + 1] [11] [i_1 - 3] [i_1 + 1])));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */int) var_5)) == (arr_22 [i_1 - 2] [i_10 + 1] [i_2] [i_1 - 3] [i_10] [i_0]))))));
                        }
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_17))));
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_39 [i_0] [i_11] [i_11] [11LL] [i_1] = ((/* implicit */unsigned long long int) var_10);
                        arr_40 [i_0] [i_0] [i_0] [i_11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((-8486019918993392214LL) + (9223372036854775807LL))) << (((var_13) - (387624914))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))))))) >= (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [(_Bool)1] [i_2] [i_11]))));
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned char) var_14);
    var_39 = ((/* implicit */signed char) var_6);
}
