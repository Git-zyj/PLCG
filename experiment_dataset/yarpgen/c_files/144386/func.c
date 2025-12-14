/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144386
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
    var_18 = (~(((((/* implicit */_Bool) max((var_4), (var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)198)))))))));
    var_19 ^= ((/* implicit */signed char) ((((((/* implicit */int) (!((_Bool)0)))) == (((/* implicit */int) ((short) 1792130851))))) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1792130855)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) (+(1792130838)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_0]));
        var_21 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0] [i_0 + 1]));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0]))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0 - 2] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) * (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) / (((/* implicit */int) arr_0 [i_0 + 2] [i_0])))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_23 &= (~((+(((/* implicit */int) arr_5 [22])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 = ((int) min((((unsigned char) arr_11 [i_4])), (arr_6 [i_1 + 1])));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_2 - 1])))) ? (min((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (short)1)) : (1635922131))), (((/* implicit */int) arr_5 [24])))) : (((/* implicit */int) ((1792130852) == (((/* implicit */int) (signed char)107))))))))));
                                var_26 -= ((((/* implicit */_Bool) min((arr_12 [i_1] [4] [i_1 + 1] [i_2] [i_2] [i_2 + 2]), (arr_12 [14] [(short)12] [(unsigned char)16] [14] [i_2] [i_2 - 1])))) || ((!(((/* implicit */_Bool) arr_12 [4LL] [14ULL] [2ULL] [4LL] [i_2 - 1] [i_2 + 1])))));
                                var_27 = (+(((((((/* implicit */unsigned long long int) arr_13 [i_1] [i_4] [i_3] [i_2 + 1] [i_1])) / (var_14))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned char)125)))), (904650871)));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 2; i_6 < 24; i_6 += 2) 
                    {
                        arr_19 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                        arr_20 [i_1] [i_2 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_1 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)185))))) ? ((~(arr_8 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_1 + 3])))))) : (((((/* implicit */_Bool) max((-1792130861), (-1593231430)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]))) : (max((((/* implicit */long long int) arr_11 [i_6])), (arr_14 [i_1] [i_3] [i_6])))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_2] [i_3] [i_7])))))), ((+(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) arr_17 [i_1 + 2] [i_3] [i_3] [i_7] [i_2] [i_7])) : (((/* implicit */int) (unsigned char)150))))))));
                        arr_24 [20U] [i_2] [i_3] [i_7] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2 - 1] [22U] [i_2 - 1] [10] [i_2] [i_2 - 1]))) : (arr_8 [i_1 + 1]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_30 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_22 [i_1 - 1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) min((arr_11 [i_1 + 2]), (arr_11 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_22 [i_1 - 1] [12] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1 + 1])) : (((/* implicit */int) arr_22 [i_1 + 1] [i_1] [(short)12] [i_1]))))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6001))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (max((var_3), (arr_15 [i_1])))))) ? (max((((/* implicit */unsigned int) arr_17 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_9] [i_9])), (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [12ULL] [i_1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27612))) : (var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_18 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
                    var_32 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) arr_14 [i_9] [(signed char)23] [i_9])) ? (var_14) : (((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_1] [i_8] [i_8] [i_1])))) != (((/* implicit */unsigned long long int) max((arr_13 [i_1] [i_1] [i_8] [i_9] [i_1]), (((/* implicit */unsigned int) var_11)))))))));
                    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_9])) ? (arr_28 [i_1] [i_9]) : (arr_28 [i_1] [i_8]))))));
                }
            } 
        } 
    }
}
