/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176193
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
    var_17 = ((/* implicit */long long int) var_7);
    var_18 = ((/* implicit */long long int) max((var_18), ((-((((-(var_8))) & (min((var_10), (var_14)))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((var_13) / (((((((/* implicit */_Bool) var_14)) ? (var_13) : ((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = arr_4 [i_0];
                arr_5 [i_0] [i_1] |= arr_3 [i_1] [i_1];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0]);
                                var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [4ULL] [i_1] [4ULL] [i_4])), (arr_6 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_4])))))))) ? (((((-964251254258701699LL) / (((/* implicit */long long int) 925506745)))) % (arr_0 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -7914717507425146783LL)) ? (-8382931545023880672LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))))) == (964251254258701699LL))))));
                                var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]))));
                            }
                            for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3 - 1]))))) ? (var_4) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3] [i_3] [i_0])) ? (var_12) : (var_8))))))));
                                var_23 ^= ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1]) : (((((/* implicit */_Bool) var_12)) ? (arr_4 [i_1]) : (arr_4 [i_5]))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_5])) ? (arr_2 [5LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1])) ? (5088976960095176524LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_1] [i_2] [i_2]))))) : (arr_4 [i_2]))));
                                arr_17 [i_0] [11LL] [i_0] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) max((arr_0 [i_0 - 3]), (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_15 [i_0] [i_3] [i_2] [i_3] [i_0])) - (22872))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((var_3), (((/* implicit */short) var_0))))) * (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))))) : (arr_11 [i_0]));
                                var_24 = max((((/* implicit */long long int) (unsigned char)33)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_11 [i_0]) : (arr_2 [i_0 - 2]))) : ((~(9223372036854775807LL))))));
                            }
                            for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                            {
                                arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [14LL] [i_0] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) max((arr_7 [i_0 - 3] [i_6 + 4] [i_0 - 3]), (((/* implicit */long long int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_2])))))));
                                arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5491434396734246142LL)) ? (((((/* implicit */_Bool) var_3)) ? (arr_18 [i_0] [i_1] [i_2] [i_0] [6LL] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 - 2] [i_0] [i_1] [i_1] [i_6]))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_6 + 2])) ? (var_14) : (arr_7 [i_0] [i_1] [i_6 + 4])))));
                                var_25 = ((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 1] [(unsigned char)4])) : (((/* implicit */int) arr_15 [i_0] [6ULL] [i_2] [i_0] [i_6])))) * (((/* implicit */int) ((((/* implicit */int) arr_14 [i_6 + 2] [i_0] [i_0] [i_0] [i_6 - 1])) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_6 + 1]))))));
                            }
                            for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                            {
                                var_26 = (-(var_13));
                                var_27 = ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_3] [i_7] [i_0 - 2] [i_3 - 1]);
                                var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((arr_4 [i_0]) + (9223372036854775807LL))) << (((arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - (725324963)))))) ? (((((/* implicit */_Bool) var_14)) ? (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((var_5) - (8067496777511733380ULL)))))))) | (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                                arr_27 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) max((var_6), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 + 1] [14ULL] [i_0 + 1] [i_0 + 1] [i_7]))) < (arr_6 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) -1LL)) ? (-4178020546308708326LL) : (49152LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_16)))))))));
                            }
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) var_11);
                            arr_29 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */short) var_7)), (arr_15 [i_0] [i_0] [10ULL] [2LL] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
}
