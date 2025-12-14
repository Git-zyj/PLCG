/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149314
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
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)4094))) : ((~(var_7))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4078)) ? (4280797346595568587LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61441)))))), (var_7)))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned int) max(((unsigned short)61441), ((unsigned short)61442)))), (var_16)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_0 + 2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) (unsigned short)61442);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) 32767);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_18 [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_3])), (arr_9 [i_5] [i_2] [i_2] [i_0 - 3])))) ? (((14249463635217722150ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 + 3] [i_0 - 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (0) : (((/* implicit */int) var_3)))))));
                                arr_19 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_1 - 1] [i_0] [i_2] [i_2] [i_5])), (arr_2 [i_3] [i_1])))))));
                                var_21 |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)61448)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4085))))));
                            }
                            for (short i_6 = 1; i_6 < 23; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) arr_2 [i_0] [i_2]);
                                arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_3] [i_3])))) ? ((~(var_14))) : (((/* implicit */long long int) ((/* implicit */int) max((var_15), (((/* implicit */signed char) arr_20 [i_0] [i_3] [i_2] [i_0] [i_0]))))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_16 [i_1] [i_2] [i_3] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(var_7)))))));
                                arr_24 [i_0] [i_1] [i_3] [i_3] [(unsigned short)17] [i_0] [i_0 + 2] = var_0;
                                arr_25 [i_0 + 3] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1343551483U), (((/* implicit */unsigned int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)61436)) : (2147483646)));
                                arr_26 [i_0 + 3] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) == (var_18)))), (arr_5 [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1727241403)))) * ((-(arr_12 [i_1] [i_1] [i_1] [i_1] [i_6 + 1])))))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                            {
                                arr_29 [i_0] [i_1] [i_2] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */int) arr_20 [(unsigned short)10] [i_1] [i_1] [i_1 + 1] [i_1])), (2147483643))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1 + 1] [i_1])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 6091602460368176815ULL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (((arr_20 [i_7] [i_3] [i_2] [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))))));
                                arr_30 [i_0 + 3] [i_0 + 3] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1017603001393717911ULL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_28 [i_0 - 1] [i_2] [i_3] [i_7]))))) - (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
                            }
                            arr_31 [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)41)) ? (14086269732266937747ULL) : (((/* implicit */unsigned long long int) -5840164721380367297LL))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) | (arr_16 [i_0] [i_1] [i_0 - 2] [i_0 - 3]))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0 + 3])) % (((/* implicit */int) arr_11 [i_0 - 3])))))));
                arr_32 [i_0] [i_1] = ((/* implicit */unsigned int) var_7);
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_1] [i_1 + 1] [i_1] [i_1 - 1]))))))))));
            }
        } 
    } 
}
