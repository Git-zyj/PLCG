/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159565
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
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_17 -= arr_0 [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((((/* implicit */int) arr_0 [i_0 + 1])) >> (((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_18 -= ((((/* implicit */_Bool) ((arr_4 [i_0 + 1]) << (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(signed char)10] [i_0] [i_3]))) : (arr_1 [(unsigned char)11] [i_2])))))) ? ((-(arr_5 [i_0 - 1] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(arr_4 [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            var_19 *= arr_10 [i_0] [i_0 - 1] [i_4] [i_2] [(unsigned char)8] [i_4];
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_3 - 2] [i_1] [(_Bool)1])), (arr_11 [i_0 - 1] [i_1] [i_1 - 2] [(signed char)2] [i_3 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 2] [i_3 - 1] [i_2] [i_1 + 1] [5U]))) % (max((arr_1 [6] [(unsigned char)8]), (arr_5 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(arr_3 [i_2]))))))));
                        }
                        arr_13 [4LL] [4LL] [(unsigned short)4] |= ((/* implicit */signed char) ((((arr_9 [i_3 + 1] [i_2 - 1] [i_1 - 1] [i_0]) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3]))) | (arr_1 [(unsigned char)3] [(unsigned char)8]))) : (((/* implicit */unsigned int) ((int) arr_4 [0U]))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1]))))));
                        var_21 -= ((/* implicit */long long int) ((((arr_7 [i_0 + 1] [6LL] [i_0 + 1]) / (arr_7 [i_0 - 1] [i_0] [i_0 - 1]))) == (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        arr_14 [(unsigned short)5] [(unsigned short)5] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)1] [(_Bool)1] [i_2 + 3] [i_2 + 3]))) : (arr_8 [(signed char)9] [i_2] [(signed char)9]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 + 1])))))))), (max(((-(arr_3 [i_2]))), (((/* implicit */long long int) (~(arr_8 [i_0] [i_1] [i_3]))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) max((((((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_0] [11U]))))) ? (((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_8 [(signed char)0] [(signed char)0] [(_Bool)1]) : (arr_8 [(signed char)8] [(unsigned short)6] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_0] [i_0] [8ULL] [i_0] [i_0 - 1] [i_0]), (arr_10 [i_0 - 1] [i_0] [(unsigned char)2] [i_0 + 1] [(unsigned char)2] [i_0]))))))), ((~(2528368209U)))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */int) (+(((arr_24 [6] [i_5 + 1] [i_5] [6]) & (arr_24 [i_6] [i_5 + 2] [9LL] [i_0])))));
                        var_24 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_6]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_7 + 3] [i_6] [i_0] [i_0]))))) : (max((((/* implicit */unsigned int) arr_12 [i_7])), (arr_18 [i_5] [2U]))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) ((long long int) (-((+(((/* implicit */int) arr_26 [i_8])))))));
        var_25 += ((/* implicit */_Bool) ((unsigned int) ((arr_27 [i_8]) <= (arr_27 [i_8]))));
        var_26 = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) ((_Bool) arr_25 [(short)8] [(_Bool)1]))), ((+(arr_27 [i_8]))))));
        arr_29 [i_8] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_26 [6U])), (arr_27 [i_8]))))))), (((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) arr_25 [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [8U])) ? (arr_27 [8ULL]) : (arr_27 [17LL])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_9] [i_9])) / (((/* implicit */int) arr_25 [i_9] [i_9])))))));
        arr_33 [i_9] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */int) arr_31 [i_9])) : (((/* implicit */int) arr_31 [i_9]))))) ? (((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) arr_25 [i_9] [21LL])) : (((/* implicit */int) arr_25 [i_9] [(signed char)12])))) : ((~(((/* implicit */int) arr_25 [i_9] [i_9]))))));
    }
    var_28 = ((((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_15)))))) ^ (((((_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))))) : (((unsigned int) var_5)))));
    var_29 ^= ((/* implicit */unsigned short) ((unsigned char) var_10));
}
