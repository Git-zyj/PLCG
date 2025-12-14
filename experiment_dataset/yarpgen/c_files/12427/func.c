/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12427
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
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (18LL)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)30006))))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) - (((/* implicit */int) var_8)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    arr_7 [i_1 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_1 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (735146856U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2 - 3] [i_2 - 3] [i_4] = ((/* implicit */signed char) arr_0 [i_2]);
                                var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) arr_9 [i_0] [i_0] [i_3 + 2] [i_0])) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9))))))) ? (-6442429831096986755LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [0ULL] [5LL] [i_4] = ((/* implicit */short) (signed char)69);
                                var_13 = ((/* implicit */long long int) (((+(arr_10 [i_1 + 1] [i_1] [i_2 + 1] [i_3]))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)29998)))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (var_3)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) (~(var_1)));
                }
                for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    var_16 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_5] [i_1 + 1])) ? (((/* implicit */int) arr_8 [i_1 + 1] [(signed char)13] [7ULL] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_5] [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (long long int i_7 = 3; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [13U] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-26575), (((/* implicit */short) (signed char)11))))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */int) arr_8 [i_7 - 2] [i_6] [i_1] [(short)8])) + (((/* implicit */int) (unsigned short)51535))))))), (169435201932517853ULL)));
                                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-26575)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)7]))) : (var_1))))))));
                                var_18 *= arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [6U] [i_0 + 1] [i_0];
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)17637)), ((unsigned short)51535)))) : (((/* implicit */int) (short)-12500))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned long long int) -6LL);
            }
        } 
    } 
}
