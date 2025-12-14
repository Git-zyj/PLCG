/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142550
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
    var_11 += ((/* implicit */unsigned int) min((var_5), (((var_7) * (((/* implicit */unsigned long long int) ((var_10) >> (((var_7) - (18015815850752170613ULL))))))))));
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (signed char)54)))))) > ((+(var_10))))))) : (min((((var_1) ^ (var_7))), (((/* implicit */unsigned long long int) var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = var_4;
                arr_7 [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 - 3])), (var_3))))) ^ ((~(arr_3 [i_0]))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_3)))) ^ (((/* implicit */int) arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_4 + 1]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) (~(var_10)))) * (arr_0 [15ULL])))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                            {
                                arr_20 [i_0 + 2] [11U] [i_2] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2] [(unsigned char)13])) : (((/* implicit */int) arr_10 [i_2] [i_0]))))) + (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19738)))))))) || (((/* implicit */_Bool) arr_1 [i_5]))));
                                arr_21 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_5])) - (((/* implicit */int) arr_4 [i_0] [i_1]))))))) * (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_0] [i_0])))))));
                                var_14 = ((/* implicit */short) max((var_3), (((/* implicit */unsigned short) arr_18 [i_3 + 2] [(unsigned short)19] [i_1 - 2] [i_3 - 2] [i_0 - 3]))));
                                arr_22 [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))) || (((/* implicit */_Bool) var_6)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_5])) ? (var_5) : (arr_5 [i_0] [i_2] [i_3])))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_0] [(signed char)7]))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_16 [(unsigned char)22] [i_1] [i_3] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [(signed char)8] [i_0])))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (-29LL))))))));
                                var_16 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_1 + 1] [i_3 - 2]);
                            }
                            for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned short) max((((arr_24 [i_0 + 2] [i_0 + 2] [(unsigned short)10] [i_3] [i_3] [i_7]) / (arr_24 [i_0] [i_1 - 1] [i_2] [i_3 + 2] [i_7] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [6U] [i_0] [i_0] [i_0])))))));
                                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_3])))) ^ (((/* implicit */int) arr_18 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_3] [i_7]))))), ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_3 + 2] [i_2] [i_1 + 1] [i_0]))) : (18446744073709551615ULL)))))));
                                var_19 = ((/* implicit */unsigned char) max(((((+(arr_3 [i_7]))) >> (((((unsigned long long int) var_1)) - (10131422509955096883ULL))))), (((/* implicit */unsigned long long int) arr_19 [i_0]))));
                            }
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)101))));
                            arr_27 [i_0] [24ULL] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_10)));
}
