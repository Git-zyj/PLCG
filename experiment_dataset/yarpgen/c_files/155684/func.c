/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155684
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 &= ((/* implicit */unsigned short) arr_2 [i_0] [i_2 - 1]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) >> (((((/* implicit */int) var_10)) - (48)))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_9 [12LL] [i_3] [12LL] [(signed char)0] [i_1] [12LL]))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_11)))))) ? (((((/* implicit */int) arr_9 [14LL] [14LL] [i_2 + 1] [i_2 - 1] [i_2 - 1] [14LL])) * (((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_2 - 1])))) : (max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)3839)))))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_21 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))) * (((((/* implicit */_Bool) (signed char)-64)) ? (max((((/* implicit */long long int) var_6)), (arr_5 [i_1] [i_2]))) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4] [i_4])))));
                            arr_14 [i_0] [i_0] [i_4] [i_0] [i_0] &= ((/* implicit */short) var_15);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_5] [i_0] [i_5] &= ((/* implicit */unsigned short) var_11);
                            var_22 ^= ((/* implicit */signed char) (~(((((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned short)0)))) ? (arr_7 [i_0] [i_5] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_7))));
                            var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_2] [i_2 + 1]))))), (((((/* implicit */_Bool) (unsigned short)3840)) ? (arr_13 [i_2 + 1] [i_2] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
                            arr_20 [i_2] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-47)), (arr_5 [i_2 - 1] [i_2 - 1])))) && (((/* implicit */_Bool) max((arr_5 [i_2 + 1] [i_2 - 1]), (arr_5 [i_2 - 1] [i_2 - 1]))))));
                        }
                        var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((signed char) 4294967283U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 1]))) > (((long long int) arr_18 [(signed char)3] [i_1] [i_2] [5ULL] [i_3] [i_2] [i_3])))))) : ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_7)))));
                        var_26 = ((/* implicit */unsigned long long int) arr_19 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        var_27 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)-4))))), (((arr_11 [i_0] [i_1] [i_2 - 1] [i_2 + 1] [i_7 + 1] [14LL] [i_7]) ^ (arr_11 [i_1] [i_2] [i_1] [i_2 + 1] [i_7] [(short)4] [i_7 + 2])))));
                        var_28 = ((/* implicit */signed char) arr_7 [i_0] [i_2] [i_7 - 1]);
                        var_29 = ((/* implicit */unsigned short) max(((-(arr_15 [i_2]))), (((/* implicit */unsigned long long int) (unsigned short)61695))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((var_7) - (2689061589U)))))) ? (arr_16 [(short)14] [2LL] [i_2] [i_2] [(short)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : ((-(((/* implicit */int) arr_3 [i_8] [(unsigned short)15] [(unsigned short)15]))))));
                        var_31 = ((((/* implicit */_Bool) arr_5 [i_0] [i_8])) ? ((~(((var_17) ? (((/* implicit */int) var_16)) : (var_0))))) : (1426293938));
                        var_32 += ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_1] [i_2 + 1])) : (arr_25 [i_0] [i_1] [i_2])));
                        var_34 = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_1] [i_2]);
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (1426293946) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))));
}
