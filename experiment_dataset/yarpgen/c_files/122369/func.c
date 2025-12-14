/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122369
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
    var_11 -= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-18)) <= ((~(((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned char)174), ((unsigned char)243)))), (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) : (3ULL)))) ? (((/* implicit */unsigned long long int) 5624703761844720017LL)) : ((+(18446744073709551612ULL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_13 = ((((((/* implicit */_Bool) 917116286U)) || (((/* implicit */_Bool) (unsigned char)238)))) ? (arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))));
                            var_14 = ((/* implicit */long long int) (-(arr_6 [(unsigned char)5] [i_1 + 1] [i_1 + 1] [i_2])));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))))))));
                        }
                        var_16 += ((/* implicit */unsigned char) ((unsigned long long int) arr_9 [i_2] [i_3] [i_1 + 1] [i_3] [0LL] [i_2]));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) arr_0 [i_5]);
                        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 - 1] [i_0])) ^ (((/* implicit */int) arr_9 [i_1] [i_0] [8] [i_1] [i_1 - 1] [i_1]))));
                        var_19 += ((/* implicit */signed char) (~((-(18446744073709551613ULL)))));
                        var_20 = 5229090675449268439LL;
                    }
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) ((15161201790241913153ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))))))));
                    var_22 = var_8;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_6 - 1] [i_6 + 3] [i_6])) ? (arr_14 [i_1 + 1] [i_6 + 2] [i_6 + 3] [i_7]) : (((/* implicit */long long int) -727963218))));
                                var_24 = ((/* implicit */long long int) arr_3 [i_7] [i_7]);
                                var_25 += ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_7] [i_2])) >= (arr_5 [i_1] [(signed char)11] [i_1 + 1])));
                            }
                        } 
                    } 
                    arr_19 [i_2] = ((/* implicit */signed char) 3298534883328LL);
                }
                var_26 = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_2)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (4124938138U))))))), (var_8));
                /* LoopNest 3 */
                for (signed char i_8 = 4; i_8 < 14; i_8 += 1) 
                {
                    for (long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        for (long long int i_10 = 4; i_10 < 15; i_10 += 3) 
                        {
                            {
                                arr_27 [i_8] [10LL] [(unsigned char)3] [i_9] [10LL] = ((/* implicit */unsigned char) 3593773299128122811LL);
                                var_27 = ((/* implicit */signed char) 23407133U);
                                var_28 = ((/* implicit */long long int) arr_25 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 2; i_11 < 15; i_11 += 3) 
                {
                    var_29 = ((/* implicit */long long int) arr_7 [i_0] [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 2]);
                    var_30 = ((/* implicit */unsigned char) ((1969110536555679590LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_11])))));
                    var_31 -= ((/* implicit */unsigned char) (~(arr_6 [i_1 - 1] [i_1 + 1] [(signed char)4] [i_0])));
                    var_32 -= ((/* implicit */unsigned char) arr_21 [i_0] [i_1 + 1]);
                }
            }
        } 
    } 
}
