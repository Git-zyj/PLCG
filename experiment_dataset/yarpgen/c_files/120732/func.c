/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120732
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
    var_14 = ((/* implicit */unsigned int) (short)-667);
    var_15 = 9223372036854775807LL;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) max((4294967289U), (((/* implicit */unsigned int) (signed char)-118))));
        var_17 = ((/* implicit */long long int) ((arr_2 [i_0]) >> (((arr_0 [i_0] [i_0]) - (1033711433U)))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_13 [1U] [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((_Bool) arr_8 [i_1]))) : (((/* implicit */int) (signed char)14)))), (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1])))));
                        var_19 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_3]))))), (((/* implicit */unsigned int) var_8))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) arr_7 [i_1] [i_1] [i_1]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_22 = ((min((arr_22 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8]), (arr_22 [i_8 + 1] [i_8] [8ULL] [i_8 - 1] [i_8 + 1] [i_8]))) >> (((arr_22 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8]) - (3903112912U))));
                                var_23 ^= ((/* implicit */unsigned int) arr_27 [22U] [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
                                arr_28 [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)82)), (var_4)));
                                var_24 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_22 [i_1] [5U] [5U] [i_6] [i_6] [i_8])), (((/* implicit */unsigned long long int) (unsigned char)61))));
                                var_25 *= ((/* implicit */unsigned long long int) ((unsigned char) arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) arr_5 [i_6]);
                }
            } 
        } 
        arr_29 [i_1] [i_1] = ((/* implicit */signed char) ((short) min((((/* implicit */long long int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (var_5))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) ((long long int) min((min((arr_11 [(short)8]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_7 [i_9] [i_9] [i_9])))));
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned short) arr_5 [i_9]);
        var_28 = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) var_10)))));
        var_29 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9] [i_9] [i_9])) : (arr_11 [i_9])))));
    }
    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) 
    {
        var_30 = ((/* implicit */long long int) arr_3 [i_10]);
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            var_31 -= ((/* implicit */unsigned char) max((arr_4 [i_10 - 1]), (((unsigned int) 654982648U))));
            var_32 ^= ((/* implicit */short) arr_16 [i_11] [i_11] [i_10]);
        }
        for (unsigned short i_12 = 4; i_12 < 11; i_12 += 3) 
        {
            var_33 -= ((/* implicit */unsigned long long int) var_10);
            var_34 = -9223372036854775807LL;
        }
    }
}
