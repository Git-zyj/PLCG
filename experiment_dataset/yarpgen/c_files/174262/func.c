/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174262
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] [i_0] = arr_1 [i_0];
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_3 [i_1 + 2] [i_1 + 2] [(unsigned char)0]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        arr_10 [6LL] [6LL] [i_2] [6LL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [14LL] [14LL] [i_0])) ? (arr_8 [i_0] [(short)4] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_7 [i_2]));
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [14LL]))))) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [13] [i_3])))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1]))) : (3111727876U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_9 [(_Bool)0] [i_0] [i_0] [i_0])) ? (arr_8 [(unsigned char)3] [i_0] [i_2] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_0] [8ULL])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_0] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_1] [i_2])))))))));
                        var_21 |= ((/* implicit */unsigned short) arr_4 [i_2] [i_2] [(unsigned char)8]);
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        arr_14 [i_0] [6U] [i_0] [i_4] = ((/* implicit */_Bool) arr_0 [5LL]);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_2] [i_0]))) : (arr_8 [i_0] [i_4] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_0]))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1828787875U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9289))) : (-5629375604383051237LL)))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_12 [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_25 |= ((/* implicit */_Bool) arr_7 [i_0]);
                            arr_18 [i_0] [1LL] [(unsigned char)5] [i_0] [i_0] [i_0] = arr_1 [i_0];
                        }
                    }
                }
            } 
        } 
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)12] [(_Bool)1] [(signed char)12])) ? (((arr_13 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(unsigned char)2])) ? (arr_8 [(unsigned short)6] [(unsigned short)2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [0LL] [0LL])))))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)10])))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_19))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
