/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10589
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-75)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (896U) : (var_9)))), (min((((/* implicit */long long int) var_16)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 1])) <= (((/* implicit */int) arr_1 [i_0 + 1]))));
            var_21 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0 + 1]))));
        }
        for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0 + 1] [i_2 - 1])));
            var_23 = ((/* implicit */long long int) var_18);
        }
        var_24 = ((/* implicit */unsigned long long int) arr_5 [(signed char)8]);
        arr_7 [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((long long int) (unsigned char)30));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) var_15);
                        arr_14 [(signed char)19] [i_3] [i_4] [i_5 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) & (var_16));
                        arr_15 [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_3 - 2] [i_3 - 2] [i_5])) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_3 + 1] [i_4] [i_0 + 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) ((signed char) 974760430));
                            var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) arr_21 [i_0] [i_0 - 1] [(_Bool)1] [i_4] [(_Bool)1]);
                            arr_24 [i_3] [i_3 - 3] [i_8] [i_8] [(short)10] &= ((/* implicit */int) ((arr_2 [i_6 + 1]) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(_Bool)0] [15LL]))) : (arr_13 [i_0] [i_0] [i_0] [(_Bool)1])))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3 + 4] [i_0 + 1])) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) var_1))));
                            var_29 += ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                            var_30 = -688302578;
                            arr_29 [i_0] [i_4] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [18ULL]))) % (arr_23 [i_3 + 3] [(unsigned char)21] [i_3] [i_3 - 2] [i_3] [(_Bool)1] [i_4])))));
                        }
                        var_31 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) 4195158527U)) != ((-9223372036854775807LL - 1LL)))));
                        arr_30 [i_0 + 1] [i_0 + 1] [i_4] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-31390)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) (unsigned char)232)))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((arr_5 [i_4]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_3])))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (arr_17 [12LL] [i_3 + 4] [12LL] [i_3 + 1])));
                    }
                    arr_34 [i_4] [i_4] [i_4] [(unsigned char)18] = ((((/* implicit */_Bool) arr_18 [i_0] [i_4] [i_3] [i_3] [i_4] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-56))))) : (var_9));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */short) var_0);
}
