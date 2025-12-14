/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160850
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
    var_11 = ((/* implicit */long long int) min((var_11), (var_8)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) arr_2 [9U]);
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [2U] [i_0 + 2]))) : (3225547291934946217LL)));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0 + 1])) ? (((/* implicit */long long int) arr_5 [i_0 + 2] [2LL])) : (var_6))))));
            var_13 *= ((/* implicit */unsigned short) arr_5 [i_0 + 4] [(short)6]);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) ((unsigned short) var_7));
                var_15 = ((((unsigned int) arr_8 [i_0])) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0))))));
            }
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_3] [i_3] [10U])) ? (((arr_12 [i_3] [i_1] [i_0]) & (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))));
                var_17 = ((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_1] [i_1]);
                arr_13 [i_0 + 2] [i_1] [i_0 + 2] |= ((/* implicit */_Bool) var_10);
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                arr_17 [i_4] = ((/* implicit */long long int) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 23U)) ? (3176647503933705427ULL) : (((/* implicit */unsigned long long int) 2137115517U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 4]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_21 [i_0 - 2] [i_1] [(unsigned char)6] [i_5] [i_6])))));
                            var_18 = ((/* implicit */short) arr_14 [0LL]);
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (5315292623897711458LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12587)))));
                            var_20 = ((/* implicit */unsigned char) (+(arr_21 [i_0] [i_1] [i_4] [i_5] [i_6])));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_7 [(_Bool)1] [13ULL] [i_4]);
            }
        }
    }
    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [i_7] [13ULL] [i_7] [i_7] [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))) ? (((arr_11 [(unsigned char)2] [(unsigned char)2] [i_7] [14LL]) & (arr_11 [i_7] [i_7] [i_7] [i_7]))) : (((/* implicit */long long int) min((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        arr_26 [i_7] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)65)) <= (arr_20 [i_7] [i_7] [i_7] [4] [4] [i_7] [i_7]))) ? (((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */int) (unsigned short)24499)) : (((/* implicit */int) (unsigned char)180)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_7])))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_8] [i_8])))) : (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (long long int i_9 = 1; i_9 < 11; i_9 += 3) 
        {
            for (int i_10 = 1; i_10 < 11; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    {
                        var_24 = ((((var_2) + (2147483647))) << (((var_4) - (17228949286073565479ULL))));
                        /* LoopSeq 1 */
                        for (int i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            arr_42 [i_10] [(unsigned char)7] = ((/* implicit */unsigned char) var_3);
                            arr_43 [i_10] [i_11] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) arr_24 [i_9 + 2]);
                            var_25 = ((/* implicit */long long int) ((unsigned char) arr_7 [i_9] [i_10 - 1] [i_12 + 1]));
                        }
                        var_26 = ((/* implicit */int) arr_29 [(signed char)11] [i_9 + 1]);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 1152921504606846976LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_1 [i_8]))));
    }
    for (long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
    {
        var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */int) arr_10 [i_13] [i_13] [i_13])) & (((/* implicit */int) arr_10 [i_13] [i_13] [15ULL])))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_29 [i_13] [i_13])))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) | (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13] [i_13] [i_13]))) : (((arr_27 [i_13]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_13])))))))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_15 [i_13] [i_13] [i_13] [i_13])))))));
    }
}
