/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134145
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */long long int) min(((+(((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [6])))))), (((/* implicit */int) var_11))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) arr_10 [(signed char)16] [i_1] [i_1] [(signed char)17] [15LL] [i_3])));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_13))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 7719734228291063877LL))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = (~(var_13));
                        var_21 = ((/* implicit */unsigned char) var_1);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [(unsigned short)22] [(short)5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) var_11);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [12LL])) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [(short)3] [i_5] [i_2] [i_5] [i_1] [i_0])) ? (((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [(unsigned char)21] [i_5] [i_1] [(unsigned short)1])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_5] [i_2] [i_2] [6ULL] [8]))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_0] [i_7] |= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [(short)7] [(unsigned char)22] [(signed char)20] [(short)13])))) * (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1))))));
                            var_24 = ((/* implicit */unsigned long long int) (signed char)-2);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(var_14))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_1] [14] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) arr_10 [i_8] [i_8] [i_5] [i_2] [i_1] [i_0]));
                            var_26 -= ((/* implicit */unsigned short) (((_Bool)1) ? (1593808967U) : (1682415087U)));
                            arr_27 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */signed char) (((((~(((/* implicit */int) var_11)))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (2701158328U))) - (2701200596U)))));
                        }
                    }
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) & (((/* implicit */long long int) ((2701158308U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))))))) ? ((~(((unsigned long long int) var_9)))) : ((~(18446744073709551613ULL)))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
