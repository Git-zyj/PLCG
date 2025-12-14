/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131277
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_11)))), ((+(arr_3 [i_0] [i_1])))))) ? ((-(0U))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(short)8])))))))));
                                var_14 += ((/* implicit */int) var_4);
                                var_15 ^= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | ((+(arr_11 [i_0] [i_0]))));
                                arr_17 [i_4] [i_3] [i_0] [i_0] [i_1] [10LL] = ((/* implicit */unsigned int) ((long long int) var_0));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_21 [i_2] [1U] [i_0] [i_1] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_15 [i_0])))) ? (((/* implicit */int) ((_Bool) arr_18 [i_0] [i_1] [i_2] [6ULL]))) : (arr_14 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 2] [i_1 - 1] [i_1 + 1]))) : (arr_11 [i_1 + 2] [i_1 - 1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] &= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) : (1603343953U))))) != (((/* implicit */unsigned int) ((((int) var_7)) ^ ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_5])))))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 130036484)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_6] [i_5] [i_2])) > (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2])))))) : (((((/* implicit */_Bool) arr_4 [i_2] [(signed char)1] [(signed char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [0U] [i_5] [i_6 + 1] [i_6] [i_0]))) : (((unsigned int) (unsigned short)5))))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 1) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_5] [(unsigned short)0] = ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [(signed char)8] [i_7] [i_7 - 1] [i_7 - 2] [4U] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))))));
                            arr_29 [9U] [i_0] = ((/* implicit */short) arr_10 [i_5] [i_0]);
                            var_17 *= ((/* implicit */unsigned int) var_10);
                        }
                        arr_30 [i_0] [i_0] [1U] [6U] [1U] [i_5] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)103))))) == (max((((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_0]) << (((arr_1 [i_0]) - (17105182367197492736ULL)))))), (((((/* implicit */_Bool) 1056218769U)) ? (arr_19 [(unsigned char)4] [i_1] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)103))))) == (max((((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_0]) << (((((arr_1 [i_0]) - (17105182367197492736ULL))) - (7937927063484953915ULL)))))), (((((/* implicit */_Bool) 1056218769U)) ? (arr_19 [(unsigned char)4] [i_1] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                        arr_31 [4ULL] [i_1 + 1] [i_0] [4] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) arr_9 [i_1 - 1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (var_13)))) ? (max((((/* implicit */unsigned long long int) arr_8 [3U] [i_0] [i_0])), (var_3))) : (max((((/* implicit */unsigned long long int) arr_23 [8U] [i_0] [i_2] [i_2] [i_5])), (arr_3 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1603343953U)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0])))) > (((/* implicit */int) arr_26 [i_0] [i_5] [i_5] [i_5] [4]))))))));
                        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(arr_18 [i_1 - 1] [i_5] [i_2] [i_5])))), (((((/* implicit */_Bool) (short)-4067)) ? (18ULL) : (((/* implicit */unsigned long long int) 2691623343U))))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_19 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_0] [5U] [i_8])) & (arr_3 [i_2] [i_2])))) ? (((((/* implicit */_Bool) (unsigned short)34807)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [(short)3] [i_0])))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_2] [i_0]))) ^ (arr_22 [i_0] [3] [i_2] [i_1] [i_2])))))) >= (min((min((((/* implicit */unsigned long long int) (unsigned short)5)), (561850441793536ULL))), (((/* implicit */unsigned long long int) var_10))))));
                    }
                    var_21 = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_2);
    var_23 = ((/* implicit */unsigned int) var_6);
}
