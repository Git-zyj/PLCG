/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134412
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
    var_18 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned long long int) var_2)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                            {
                                var_20 |= ((/* implicit */_Bool) ((arr_7 [i_1] [i_1 + 1]) >> ((-(((/* implicit */int) (!((_Bool)1))))))));
                                var_21 ^= ((/* implicit */unsigned int) (((((~(var_13))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))))) ? ((((~(5496809434861313405ULL))) + (((/* implicit */unsigned long long int) (-(7LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_2] [i_1])) + (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) -8LL)) : (12949934638848238206ULL)))));
                            }
                            for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                            {
                                arr_16 [i_5] [(unsigned short)5] [i_2] [i_2] [(unsigned short)0] [i_0] [i_0] = ((arr_10 [i_3] [(short)5] [i_1] [i_0]) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [i_1 + 1] [i_1 + 1] [i_1] [i_1])))))));
                                arr_17 [i_0 + 2] [i_1 - 2] [i_2] [i_3] [i_5] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))));
                                var_22 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_1)))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                            {
                                var_23 -= ((/* implicit */_Bool) var_4);
                                arr_22 [i_3] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) 2147483647);
                            }
                            /* LoopSeq 4 */
                            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned short) max((1256863339323854157ULL), (((/* implicit */unsigned long long int) 3086775092U))));
                                arr_25 [i_1] [i_7] = ((/* implicit */signed char) ((unsigned char) arr_7 [i_3 + 1] [i_2]));
                                var_25 = ((/* implicit */long long int) min((var_25), (var_15)));
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) 372846966U)) ? (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48419)))), (((((/* implicit */int) (signed char)79)) >> (((12949934638848238189ULL) - (12949934638848238176ULL)))))))) : (((1208192192U) << (((((4294967295U) >> (((/* implicit */int) (signed char)15)))) - (131067U))))))))));
                                arr_26 [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(2014472277)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 2])) - (((/* implicit */int) arr_8 [(short)11] [i_3 + 2] [i_3 - 1] [i_3 + 1])))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                            {
                                arr_29 [i_8] [i_3] [i_2] [i_1 - 1] [i_0 - 3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1] [(short)6]))) - (3086775092U)));
                                var_27 ^= ((/* implicit */signed char) ((int) arr_13 [i_1 + 1] [i_1] [i_1] [i_1] [i_0]));
                            }
                            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                            {
                                var_28 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (1256863339323854155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21374)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_9 [i_3] [i_2] [i_1 + 1] [i_0 - 3])) : (((/* implicit */int) arr_11 [i_9] [i_3] [(signed char)2] [(signed char)10] [i_0])))))));
                                var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((1338559769) - (arr_20 [i_0])))), ((-(var_17))))))));
                            }
                            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                            {
                                arr_36 [i_10] [i_2] [i_1 - 2] = (short)-1;
                                arr_37 [(_Bool)1] [(_Bool)1] [i_2 - 3] = ((/* implicit */unsigned int) min((-2089141503), (((((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2])) * (((/* implicit */int) (unsigned short)63870))))));
                                var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_12))))) : (1256863339323854145ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_3 - 1]), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_14))))) : (((((/* implicit */_Bool) var_3)) ? (3860912168U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_10] [5LL] [9ULL] [i_2] [i_2] [i_0] [i_0])))))))) : (((long long int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1)))));
                                arr_38 [i_0] [i_1] [i_1 + 1] [i_2] [i_3 + 1] [i_3] [i_10] = ((((/* implicit */_Bool) ((signed char) var_4))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((var_13), (((/* implicit */long long int) (signed char)66))))))));
                            }
                            var_31 = ((/* implicit */int) var_7);
                            arr_39 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) (-((~(((arr_24 [i_0] [i_0] [i_2] [i_3]) - (arr_31 [i_3] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_5)) : (var_13)))) : (min((16440881221303235134ULL), (((/* implicit */unsigned long long int) (signed char)99))))))) ? ((~(((/* implicit */int) max(((unsigned char)247), (((/* implicit */unsigned char) var_6))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10))))) - (((/* implicit */int) var_1))))));
}
