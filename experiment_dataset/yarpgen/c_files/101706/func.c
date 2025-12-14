/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101706
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
    var_15 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (-(400554206U)))) && (((/* implicit */_Bool) ((3128183415U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))), (var_0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [(signed char)7] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (var_4)))))) ^ (((((/* implicit */_Bool) 3331643722U)) ? (11965360058088199877ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767)))))));
                arr_6 [i_0] [0LL] = ((/* implicit */_Bool) (unsigned char)0);
                arr_7 [i_0] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [(short)4] [i_1 + 1]), (arr_0 [10LL] [i_1 + 1])))) ? (min((((/* implicit */long long int) (short)-1)), (arr_3 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_0])))))))));
                arr_8 [2U] [i_1] [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) -1483109116)), (min((((/* implicit */unsigned long long int) (unsigned char)101)), (11965360058088199877ULL)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [2] [i_2] [2] [i_0] = ((/* implicit */_Bool) min((((unsigned long long int) arr_13 [i_0] [0U] [i_1] [10])), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_14 [(_Bool)1] [i_1] [8U] [10] [10ULL])), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [4])) : (var_12)))) : (arr_15 [i_4] [i_3])))));
                                arr_17 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_20 [i_0] [3ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5] [i_0] [i_0] [i_2 - 1])) & (((/* implicit */int) arr_18 [5U] [8] [8U] [i_2 - 1]))));
                        arr_21 [i_0] [i_0] [i_0] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_2 - 1])) ? ((~(arr_11 [i_5] [i_0] [(signed char)3] [i_5]))) : (((int) (signed char)-34))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (short i_7 = 4; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((((short) arr_15 [i_0] [1ULL])), (((/* implicit */short) arr_23 [7] [(short)5] [i_1 - 1] [i_0]))))) | ((-(((/* implicit */int) arr_0 [i_0] [i_7 - 1]))))));
                                arr_28 [i_1] [i_1] [i_1] [8ULL] [8ULL] [i_1] = ((/* implicit */short) arr_12 [10] [i_1]);
                            }
                        } 
                    } 
                }
                for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        for (signed char i_10 = 2; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_1] [(signed char)10] [i_0] [i_9] [i_0] [i_9] = ((/* implicit */int) var_7);
                                arr_36 [4U] [(_Bool)0] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */unsigned char) arr_2 [i_0] [i_9] [i_9]);
                            }
                        } 
                    } 
                    arr_37 [(short)8] [(short)8] = ((/* implicit */_Bool) min((min(((-(var_2))), (var_9))), (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_8 - 2])));
                    arr_38 [i_0] [(unsigned short)6] [i_8] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-8))));
                    arr_39 [8ULL] [2] = (-(((/* implicit */int) var_3)));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)16382)))), ((-(((/* implicit */int) var_8))))))) ? (var_4) : (((/* implicit */unsigned int) (((((-(((/* implicit */int) var_11)))) + (2147483647))) >> (((((/* implicit */int) var_11)) - (42876))))))));
}
