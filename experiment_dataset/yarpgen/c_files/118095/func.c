/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118095
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
    var_19 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) max((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6402470005162122971LL)) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1] [1U])), (72057594037927935ULL))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        arr_11 [(unsigned char)8] [6LL] [i_2] [i_2] [i_2] [4ULL] = ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_16)) : ((+(((/* implicit */int) var_0)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [0ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6402470005162122971LL)) ? (((/* implicit */int) (_Bool)1)) : (-1)))) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))));
                            var_20 = ((/* implicit */_Bool) (short)-19205);
                            var_21 += ((/* implicit */long long int) (+(arr_5 [i_4] [i_1 - 1] [i_2])));
                            var_22 = ((/* implicit */unsigned int) ((-6409506401569184983LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_3] [i_2])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            var_23 += ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_15 [i_5] [(unsigned short)4] [10] [6U] [i_3])))) + (2147483647))) << (((((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])) - (21453)))));
                            arr_18 [i_2] [i_3] [i_2] [i_1 + 2] [i_2] = ((/* implicit */_Bool) ((arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 2]) - (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1]))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) var_16);
                            arr_21 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [8] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                        }
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(arr_0 [(_Bool)1] [i_1]))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) (_Bool)1)), (-6402470005162122982LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)13897)) | (((/* implicit */int) (unsigned char)184))))))), (((/* implicit */long long int) var_4))));
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)127)))), (((((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_2] [i_7] [i_2] [i_1])) >= (((/* implicit */int) (unsigned short)7787)))))))));
                    }
                    for (short i_8 = 3; i_8 < 10; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            arr_30 [i_9 + 1] [i_2] [(signed char)7] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [(short)5] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_9]))))) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_9 + 1] [i_9] [i_9])) : (((arr_3 [i_0]) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [(unsigned short)8])) : (((/* implicit */int) arr_20 [i_0] [(short)9] [(short)9] [i_8] [(short)0]))))))) + (((((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_2] [i_2] [(signed char)6])), (-8)))) ? (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_2] [i_8] [i_8] [i_1])) : (arr_24 [(unsigned char)0] [i_1] [i_2] [i_2] [i_8 - 1] [i_9])))));
                            var_28 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -1)), (((var_3) << (((((/* implicit */int) (unsigned short)7774)) - (7755)))))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1 - 2] [i_8 - 2] [i_8] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_1] [8LL] [i_8 - 2] [3LL]))))) : (((arr_25 [i_0] [(signed char)2] [i_8 - 2] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [8LL] [i_8 - 2] [i_8]))) : (var_3)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_1 - 1] [i_2]) : (arr_28 [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_10] [i_2] [i_0] [i_10]))))) : (((((/* implicit */unsigned long long int) arr_27 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_10] [(unsigned char)0])) + (var_12))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) -7787444934915562472LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_32 [i_2]))))), (max((((/* implicit */long long int) var_6)), (-5261078448639649486LL)))))))))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_19 [i_1 + 2] [i_1] [i_1 + 2]))));
                        var_32 ^= arr_15 [8LL] [i_1 + 1] [i_1] [i_1] [i_0];
                        var_33 = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((((((/* implicit */_Bool) -1130052972)) ? (((/* implicit */int) (short)-4782)) : (((/* implicit */int) (short)4774)))) + (2147483647))) << (((((arr_33 [i_2] [i_1 + 2] [i_2]) << (((arr_24 [i_1 - 1] [i_1] [i_1] [i_0] [i_0] [i_0]) - (1179349920994867513LL))))) - (6678356661297479680ULL)))))) : (((/* implicit */signed char) ((((((((/* implicit */_Bool) -1130052972)) ? (((/* implicit */int) (short)-4782)) : (((/* implicit */int) (short)4774)))) + (2147483647))) << (((((((arr_33 [i_2] [i_1 + 2] [i_2]) << (((arr_24 [i_1 - 1] [i_1] [i_1] [i_0] [i_0] [i_0]) - (1179349920994867513LL))))) - (6678356661297479680ULL))) - (9267484993116962816ULL))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        arr_37 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (arr_22 [i_2])))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [7] [i_2] [i_2])) : (((/* implicit */int) var_0))))))) ? (((arr_25 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_1 - 2] [i_1 + 2] [i_2] [i_1])) : (((/* implicit */int) var_1)))) : (min((((((/* implicit */_Bool) 7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)1))))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (arr_19 [i_0] [i_1 - 1] [i_1 - 1])));
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((_Bool) 5255409288606239460LL)))));
}
