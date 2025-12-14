/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14150
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((((-5958458451379005514LL) & (5958458451379005515LL))) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (5958458451379005516LL) : (arr_4 [i_0]))) - (5958458451379005463LL))))) & (arr_0 [i_1] [i_0])));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) & (((((arr_5 [i_0]) ? (arr_2 [1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2]))))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_5 [8ULL]))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_3 [3LL] [3LL])))));
                        arr_14 [i_1] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (+((-(((((/* implicit */int) arr_10 [i_3])) - (arr_8 [i_1])))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        arr_18 [i_4] [(_Bool)1] [i_2] [(_Bool)1] [7LL] [i_0] |= ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_0] [i_0]);
                        arr_19 [i_0] [i_1] [i_0] [i_4] [i_4] [i_1] = ((/* implicit */int) (-(arr_17 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4])));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) (-(arr_16 [i_5] [i_2] [i_2] [i_2] [i_1] [i_0])));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_17 [i_0] [(unsigned short)3] [(short)5] [i_5] [i_0]))));
                    }
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0])) ? (max((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */int) arr_5 [i_0])) % (((/* implicit */int) arr_3 [i_0] [i_0])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [(signed char)8])) ? (arr_17 [0U] [i_2] [(unsigned short)8] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0]))))) >= (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) * (arr_16 [i_0] [i_0] [i_1] [i_2] [0] [0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_1] [i_6]))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (~(arr_0 [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_6] [i_6] [i_2] [i_6]))))) != (arr_2 [i_1] [i_1])))) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                        var_20 |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((arr_13 [i_0] [(short)3] [i_0] [i_0] [i_0] [(unsigned short)4]) + (9223372036854775807LL))) >> (((arr_2 [7ULL] [i_1]) - (3145492397U)))))) && (((/* implicit */_Bool) ((arr_21 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) arr_8 [i_2]))))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5958458451379005525LL)))))));
                        arr_30 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) && (((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */int) arr_12 [i_0] [6] [i_2] [i_7]))))))));
                        arr_31 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(unsigned short)1] [i_2] [(signed char)8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7]))) : (arr_15 [i_0] [(unsigned short)5] [(unsigned short)5] [2LL]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))) <= (4294967295U)))))))) ? (min((((/* implicit */long long int) arr_2 [i_2] [2ULL])), (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) -985731755)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_8 [i_7])) : (arr_4 [9U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [8ULL] [8ULL] [i_2] [i_0])) || (arr_1 [(_Bool)1])))) : (((((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_0] [i_1])) >> (((((/* implicit */int) (unsigned short)45055)) - (45052))))))))));
                        arr_32 [i_1] [i_1] [8ULL] [i_7] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [0ULL] [i_1] [i_7])) ? ((~(((arr_16 [3U] [i_1] [(unsigned short)6] [(_Bool)1] [i_2] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_12 [i_0] [i_0] [i_2] [i_7]), (((/* implicit */short) arr_1 [i_0]))))) | (min((622107694), (-1003475426))))))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3621678467816230253LL)) ? (-1) : (((/* implicit */int) (unsigned char)43))))))))));
                    var_23 &= ((/* implicit */signed char) ((((/* implicit */long long int) (~((-(arr_8 [i_0])))))) - (((arr_26 [i_1] [i_8] [i_8] [i_8] [i_1] [(signed char)5]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(short)2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_8] [i_1]))) : (arr_21 [(unsigned short)2] [6] [i_8] [i_8] [i_8] [i_0])))) : (((long long int) arr_5 [i_1]))))));
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    arr_38 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((arr_17 [i_0] [i_0] [3ULL] [i_0] [i_0]), (arr_17 [5ULL] [i_9] [i_9] [i_9] [i_9]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_0] [i_1] [i_9] [i_1] [i_0]) != (arr_17 [i_0] [i_0] [i_1] [i_1] [i_9])))))));
                    var_24 = ((/* implicit */int) max((var_24), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1070569143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_9] [(signed char)0]))) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_6 [(unsigned short)1]) : (((((/* implicit */_Bool) (unsigned short)8210)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [(unsigned char)4]))))))))));
                }
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)10117)))) - (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50304)) ? (var_8) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) var_8)))))));
}
