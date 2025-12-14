/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126890
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
    var_13 = ((/* implicit */unsigned char) min((869953155025460900ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (869953155025460900ULL))), ((~(var_8)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((unsigned short) (~((~(((/* implicit */int) var_12)))))))));
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                var_16 *= (~(min((((unsigned long long int) arr_3 [i_2])), (((/* implicit */unsigned long long int) arr_10 [(unsigned char)3] [i_2] [i_3] [(unsigned char)3])))));
                                var_17 = ((((/* implicit */_Bool) max((arr_9 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_14 [i_0 + 1] [i_1] [1U] [6ULL])) < (var_8))))))) ? (((((/* implicit */_Bool) ((869953155025460900ULL) - (0ULL)))) ? (((((/* implicit */unsigned long long int) 803892296U)) & (869953155025460900ULL))) : (max((((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])), (var_0))))) : (((/* implicit */unsigned long long int) (-(arr_12 [i_2] [i_0 + 2])))));
                                arr_16 [i_0] [12ULL] [(unsigned char)8] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) arr_0 [i_1] [i_2])) && (((/* implicit */_Bool) 18263726925076200989ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))) : (((unsigned long long int) ((unsigned short) var_5)))));
                            }
                            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [(unsigned short)4] [i_1] [2ULL] [i_1])) : (((/* implicit */int) var_7)))))))))));
                                var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)118))))) ? (((((/* implicit */unsigned long long int) var_9)) * (var_0))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [(short)11] [i_2] [i_2] [i_0]))))))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                arr_21 [i_0] [i_1] [10ULL] [i_6] [i_6] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((arr_11 [i_0] [(unsigned char)1] [10ULL] [i_3] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13866))))) >= (((/* implicit */unsigned long long int) (-(arr_12 [(short)6] [(short)6])))))))));
                                arr_22 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) var_5))))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                            {
                                var_20 = ((/* implicit */short) arr_13 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0] [i_0 - 1]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_8 [2U] [i_1] [i_2] [i_1])), (arr_13 [i_0] [i_1] [i_2] [(short)5] [i_3] [i_1] [i_1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) var_10)))))))) + (((/* implicit */int) var_10))));
                            }
                            arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) (unsigned short)4);
                            var_22 = ((/* implicit */short) ((unsigned long long int) ((((unsigned long long int) 5814243765414837974ULL)) + (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_12))));
}
