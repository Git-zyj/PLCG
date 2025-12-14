/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144909
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) - (((/* implicit */int) (signed char)-8))))) ? ((((_Bool)1) ? (var_12) : (var_12))) : (((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((_Bool) ((int) ((long long int) 11853987708031176200ULL))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)29))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6592756365678375415ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((_Bool) arr_4 [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 3]))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned char) ((arr_11 [i_1] [i_1] [i_1] [(short)10]) & (arr_11 [i_1 + 3] [i_2 - 1] [i_1 - 3] [i_1 - 3])));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (arr_8 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 2])) ? (arr_9 [i_5 - 1]) : (arr_9 [i_5 + 2])));
                        }
                        var_22 = ((arr_2 [i_2 - 1]) >= (-2867195883674132326LL));
                        arr_17 [i_1] [8U] [i_2 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-22)) | (((/* implicit */int) (unsigned char)115))))) ? (3028912406U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11853987708031176200ULL)) ? (((/* implicit */int) (signed char)-16)) : (201326592))))));
                    }
                    for (unsigned int i_6 = 4; i_6 < 17; i_6 += 2) 
                    {
                        var_23 ^= ((/* implicit */_Bool) arr_2 [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((unsigned int) arr_15 [(_Bool)1] [i_6 + 1] [i_6] [(_Bool)1] [i_6 - 1] [i_6 - 4]));
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_22 [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_2] [i_2 + 1] [i_6 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_1] [i_1 - 3] [i_2] [i_1] [(_Bool)1] [i_2 - 2] [i_6 - 2])) + (31442)))));
                        }
                        var_26 = ((/* implicit */long long int) ((unsigned int) 14279773147283564605ULL));
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_27 [i_1] [i_2] [i_8] [i_1] = ((/* implicit */_Bool) ((((_Bool) (signed char)-11)) ? (((arr_10 [(signed char)17]) << (((arr_10 [i_2 - 1]) - (8587324158986841063LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 2])))));
                            var_27 ^= ((/* implicit */signed char) ((_Bool) arr_24 [i_2 - 3] [i_2 - 2]));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (_Bool)1))));
                            arr_28 [i_1] [i_2] [i_2] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [(signed char)17])) <= (((/* implicit */int) arr_13 [i_1 - 2]))));
                        }
                        for (long long int i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) arr_12 [i_2] [8ULL] [3] [i_8]);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 + 2] [i_2 - 2])) ? (((/* implicit */int) arr_24 [i_1 - 2] [i_2 - 2])) : (((/* implicit */int) arr_24 [i_1 + 2] [i_2 - 2]))));
                        }
                        var_31 = ((/* implicit */_Bool) ((3028912392U) / (((/* implicit */unsigned int) ((arr_19 [i_1] [(_Bool)0]) / (((/* implicit */int) arr_18 [i_2] [15ULL] [i_3] [i_8])))))));
                    }
                    arr_31 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [(unsigned char)12] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1]))) : (1266054866U))));
                    arr_32 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [1])))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1 - 3] [i_1 - 3] [i_1] [i_2 - 3])) ? (((/* implicit */long long int) arr_30 [i_2 - 2] [i_2 - 3] [i_1 + 1] [i_1] [i_1] [i_1])) : (((long long int) (signed char)34))));
                }
            } 
        } 
    }
}
