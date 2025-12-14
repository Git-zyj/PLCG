/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133173
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1])) / (((/* implicit */int) arr_8 [i_3 + 3] [i_3 + 1]))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) | (arr_5 [i_1] [i_2] [i_3] [(signed char)19])));
                        var_19 *= ((/* implicit */signed char) (-(arr_5 [8U] [i_1 + 2] [i_2] [i_3])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [i_1] = ((min((max((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL))), (arr_3 [i_2] [i_4]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        arr_15 [i_4] [i_1] [i_2] [9LL] [i_1] [6U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (min((((((/* implicit */_Bool) var_11)) ? (11417126283608044848ULL) : (((/* implicit */unsigned long long int) arr_1 [i_2])))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                    var_20 = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1]))))));
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned long long int) (((!((!((_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_22 += ((((/* implicit */_Bool) (~(arr_12 [1LL] [i_5] [i_6] [i_7 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)39011))))) ? (((((/* implicit */_Bool) 15382067148580336680ULL)) ? (5635756979342915743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) -5265521848180520065LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_23 = min((((((/* implicit */_Bool) arr_18 [i_7 - 2])) ? (arr_18 [i_7 + 1]) : (arr_18 [i_7 - 2]))), (((/* implicit */unsigned long long int) (_Bool)1)));
                    }
                } 
            } 
        } 
        arr_22 [i_0] &= ((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(unsigned short)2])), (((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [16LL])) | (12775331692189339819ULL))))) & (((((/* implicit */_Bool) arr_7 [(signed char)4] [i_0] [(signed char)4])) ? (arr_10 [(signed char)16] [i_0] [i_0]) : (arr_18 [i_0]))));
    }
    var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((var_11), (-3911010678014555243LL)))) ? (var_4) : (var_8))));
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            {
                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_8] [i_9] [i_9])) >> (((((/* implicit */int) arr_17 [i_8] [i_8] [i_9])) - (8637)))))) || (var_2)));
                arr_28 [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [(_Bool)1] [i_8] [i_9] [i_9] [i_9]))) : (arr_19 [i_8]))));
            }
        } 
    } 
}
