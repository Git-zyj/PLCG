/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17008
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [(short)12] &= ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_13))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((+((~(5837316715130466260ULL))))) : (((/* implicit */unsigned long long int) var_1))));
                    arr_13 [i_2] [i_2] [i_2] [i_1] |= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) var_16)) / (min((12609427358579085362ULL), (((/* implicit */unsigned long long int) (unsigned char)57)))))), (((/* implicit */unsigned long long int) var_4))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)63)) ^ ((-(((/* implicit */int) arr_8 [12U])))))), (max((((((/* implicit */int) var_7)) - (arr_6 [i_1]))), ((+(((/* implicit */int) (signed char)-119))))))));
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) (unsigned char)199))) : ((+(((/* implicit */int) (short)32764)))))), (((/* implicit */int) (unsigned char)63))));
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (max(((~(((/* implicit */int) arr_8 [i_4])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) var_7)))))) : (var_14)));
                    arr_20 [i_5] = ((/* implicit */unsigned int) ((arr_7 [i_5]) >= (min((arr_7 [i_5]), (arr_7 [i_4])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_8])))))))) ? (((12609427358579085355ULL) * (((((/* implicit */_Bool) arr_21 [i_1])) ? (12609427358579085355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_1])) ? (arr_24 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
                                var_23 = var_1;
                            }
                        } 
                    } 
                    var_24 = (+(((/* implicit */int) ((signed char) max((arr_7 [i_1]), (((/* implicit */unsigned long long int) arr_21 [i_1])))))));
                    arr_31 [6] [(unsigned char)10] [i_6] = max((((((/* implicit */_Bool) arr_5 [i_1] [(signed char)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_7] [i_6 + 1]))), (((/* implicit */unsigned long long int) ((long long int) arr_29 [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 1]))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned char) 5552436493219321582ULL);
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                {
                    arr_39 [i_11] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_19 [(signed char)10] [i_11] [i_12] [(signed char)10])) : (var_6))) >= (min((((/* implicit */unsigned long long int) 3449607592U)), (5837316715130466260ULL)))));
                    arr_40 [i_10] [i_11] [i_10] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_37 [5U] [5U] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [2ULL]))) : (arr_5 [i_10] [i_11]))));
                }
            } 
        } 
        arr_41 [i_10] [i_10] = max((((/* implicit */long long int) ((1414333480) & (-949231732)))), (((((/* implicit */_Bool) arr_14 [i_10])) ? (((/* implicit */long long int) var_17)) : (arr_14 [i_10]))));
    }
    var_25 -= ((/* implicit */unsigned char) var_14);
}
