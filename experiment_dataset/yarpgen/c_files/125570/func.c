/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125570
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_3 - 3])) ? (((/* implicit */int) arr_0 [i_3 - 4])) : (((/* implicit */int) arr_0 [i_3 - 2]))))) ^ (((((/* implicit */_Bool) ((arr_1 [i_2] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
                        var_19 = ((/* implicit */unsigned long long int) arr_1 [18LL] [i_1]);
                    }
                    arr_9 [i_0] [i_0] [i_1 - 4] [i_1 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(unsigned char)18]), (arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_4] [8ULL]))))) ? (((/* implicit */int) arr_11 [i_5 + 2])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        var_21 ^= ((/* implicit */unsigned char) arr_2 [i_7]);
                        arr_21 [i_4] [i_4] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */unsigned int) var_16);
                        var_22 = ((/* implicit */short) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_13))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((min((arr_15 [i_6 + 3] [i_4] [i_6]), (((/* implicit */long long int) var_6)))), (max((arr_15 [i_6 + 3] [i_4] [i_6]), (arr_15 [i_6 + 3] [i_4] [i_6])))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_0 [i_6]))));
                        arr_25 [i_4] [i_4] [(short)14] [(unsigned char)8] [12ULL] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_4] [i_5 + 2] [i_6 + 2] [i_4])) ? (arr_15 [i_4] [i_4] [i_6 - 1]) : (arr_20 [i_4] [i_5 - 2] [i_6 - 1] [i_8]))) / (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_6 + 2])) ? (arr_15 [(unsigned short)3] [i_4] [i_6 + 1]) : (arr_15 [i_4] [i_4] [i_6 + 1])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 2; i_9 < 22; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_29 [i_9 + 1])) ? (arr_29 [i_9 + 1]) : (arr_29 [i_9 - 1])))));
                var_26 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(signed char)16]))) : (var_6)))) ? (arr_29 [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (max((arr_28 [i_9] [i_9 + 1]), (((/* implicit */unsigned long long int) arr_29 [i_9 - 1])))));
            }
        } 
    } 
}
