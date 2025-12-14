/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100974
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
    var_18 = var_15;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [18LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 8U));
                var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) (~(max((5269552326807687011LL), (((/* implicit */long long int) arr_0 [(unsigned short)22])))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_9);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = ((/* implicit */short) var_5);
                            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_1 - 1] [i_3 - 1]) | (arr_12 [i_1 - 1] [i_3 - 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967287U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2])), (arr_2 [i_0] [i_0]))))) : (var_14))) : (((/* implicit */long long int) ((unsigned int) min((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))))) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_5)))) ? (8204379541901478874ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_1] [i_0])) ? (arr_12 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_5]))))))))));
                        var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (((unsigned int) 4294967256U)) : (2180490577U)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] = ((/* implicit */unsigned char) (-(4294967288U)));
                        var_23 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_20 [i_6] [i_4] [i_1 - 1] [i_1 - 1] [i_4] [i_1])) ? (var_15) : (arr_12 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_4] [i_1 - 1] [i_1] [i_4] [i_0])) ? (arr_12 [i_1 + 1] [i_1]) : (var_14)))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -7430401770887823234LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1 - 1] [i_4] [i_6]))) : (arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_6])))) ? (((unsigned int) var_6)) : (((((/* implicit */_Bool) arr_18 [i_6] [i_4] [i_6])) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))))));
                        arr_23 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (+(arr_3 [i_0])));
                            var_26 = ((/* implicit */long long int) ((arr_10 [i_0] [i_1 + 1] [i_0] [i_1]) <= (((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_0] [i_6])) ? (arr_10 [i_7] [i_1 - 1] [i_0] [i_0]) : (arr_10 [i_4] [i_1 + 1] [i_0] [i_6])))));
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_4] [i_8] [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2702909559U)));
                        var_27 = ((/* implicit */unsigned int) (~((~((~(-4136613959893894275LL)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_4] [i_1 + 1] [i_1 + 1]);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_4)) % (((unsigned long long int) (~(((/* implicit */int) (unsigned short)14936)))))));
                        var_30 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? ((+(arr_27 [i_0] [i_0] [i_0]))) : ((-(arr_14 [i_0] [i_0] [i_4] [i_9])))))), (((((/* implicit */_Bool) min((arr_3 [i_0]), (var_16)))) ? (((long long int) var_15)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (var_16))))))));
                    }
                    var_31 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) ((arr_14 [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))), ((~(var_0)))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1])))))) > (arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
                    var_32 = ((/* implicit */unsigned int) (-(var_15)));
                    arr_33 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) var_0);
                }
            }
        } 
    } 
}
