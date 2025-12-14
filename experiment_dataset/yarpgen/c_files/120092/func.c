/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120092
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
    var_20 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((var_5) + (2096374239))) - (30)))))) ^ (3801822971U)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                            {
                                arr_11 [12LL] [(unsigned char)4] [6LL] [i_3 - 1] [i_4] &= ((/* implicit */long long int) ((max((var_16), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [(unsigned char)2]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                                var_21 = ((/* implicit */signed char) 493144325U);
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                            {
                                arr_14 [i_2] = ((_Bool) (!(((/* implicit */_Bool) 18446744073709551610ULL))));
                                arr_15 [i_5] [i_3] [i_2] [i_2] [i_1] [(_Bool)1] = arr_4 [i_0 - 1] [i_0 - 1] [(signed char)13];
                                arr_16 [i_3] [i_3] [i_3] [i_3] [i_2] = ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (493144325U));
                                var_22 &= ((/* implicit */unsigned long long int) ((arr_8 [i_0 - 1] [10] [10] [i_0 - 1] [(_Bool)1]) + (0LL)));
                            }
                            for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                            {
                                arr_19 [i_0] [i_0 - 1] [i_1] [i_2] [4LL] [i_3] [i_6] = ((/* implicit */unsigned long long int) (~((((~(var_13))) >> (((/* implicit */int) arr_5 [i_0 - 1]))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) <= ((~((~(var_16))))))))));
                                arr_20 [(_Bool)1] [(_Bool)1] [i_2] [14LL] [(signed char)0] [14ULL] &= ((((/* implicit */_Bool) ((long long int) arr_9 [i_6 + 4] [i_2] [i_0 - 1] [i_0 - 1] [i_0]))) && (((/* implicit */_Bool) arr_6 [i_3] [i_3])));
                            }
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_1]))))))))));
                        }
                    } 
                } 
                arr_21 [3U] [3U] = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((arr_9 [i_0] [1LL] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) arr_13 [(unsigned char)14] [i_1] [5LL] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            arr_28 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)20756)) || (((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                            {
                                var_25 *= ((/* implicit */unsigned int) arr_8 [i_9] [(short)0] [i_7] [4LL] [i_9]);
                                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (_Bool)1))))))))));
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                            {
                                arr_33 [i_10] [i_0] [i_0] [12U] [i_0] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1223525791U)) ? (var_16) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_7]))))))))));
                                arr_34 [(_Bool)1] [i_1] [(unsigned char)7] [i_1] [i_10] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) && (((17300459584204720607ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_35 [i_0] [i_1] [i_7] [i_8] [i_8] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_10] [i_8] [13ULL] [7U] [i_0] [13ULL] [13ULL]))) * (var_17)))) : (arr_23 [i_0] [i_0 - 1] [i_7]))), (((/* implicit */long long int) var_3))));
                                arr_36 [i_0] [i_1] [i_7] [5U] [i_0] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((17994209398461827044ULL), (((/* implicit */unsigned long long int) 991778876U))))) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) min((arr_17 [i_7] [i_1] [i_1] [i_1] [i_1]), (var_1))))))) || (((arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] [12] [i_0]) || (((/* implicit */_Bool) ((((/* implicit */int) var_18)) * (((/* implicit */int) (_Bool)0)))))))));
                                var_27 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61871))))));
                            }
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) arr_3 [i_8] [i_0 - 1])) : (((/* implicit */int) var_9))))) / (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_7] [i_0] [i_7]))))))))));
                                arr_39 [i_0 - 1] [i_1] [i_1] [i_7] [i_8] [i_11] [i_11] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 2ULL)) ? (-1LL) : (arr_0 [i_0 - 1]))) + (9223372036854775807LL))) >> ((((~(arr_0 [i_0 - 1]))) - (6604002121207195475LL)))));
                                arr_40 [i_7] [i_7] [i_1] [i_7] |= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1188836437U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18928))))) : (arr_31 [i_0] [i_0]));
                                arr_41 [i_0] [i_11] = ((/* implicit */long long int) var_18);
                                arr_42 [i_7] [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_10 [i_1] [i_7] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)31)) || (((/* implicit */_Bool) var_5)))))) : ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((-5110358299537820615LL) + (5110358299537820622LL)))))))) ? ((+((-(-9223372036854775804LL))))) : (((arr_23 [i_0] [i_0] [i_11]) >> (((min((((/* implicit */unsigned long long int) arr_24 [i_8])), (16474687522579955013ULL))) - (197ULL)))))));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_0] [i_0 - 1])))))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((var_17) >> (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_18))))))) + ((~(min((var_12), (((/* implicit */long long int) 3456170493U))))))));
}
