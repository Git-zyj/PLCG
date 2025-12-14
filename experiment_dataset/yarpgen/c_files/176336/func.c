/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176336
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
    var_12 = ((/* implicit */signed char) ((_Bool) min((var_9), (((/* implicit */int) var_1)))));
    var_13 = ((/* implicit */long long int) ((signed char) (signed char)-123));
    var_14 = ((/* implicit */signed char) ((((((((/* implicit */int) var_8)) - (((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_3)))) - (1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)202)), (min((arr_4 [i_0 - 1] [i_0 - 2]), (arr_4 [i_0 + 3] [i_0 + 2])))));
                var_16 = ((/* implicit */unsigned short) (-(0U)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) : (7U)));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0 + 3]))))) / (arr_7 [i_0] [i_0 - 1] [i_3]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 -= ((/* implicit */unsigned char) var_10);
                        arr_14 [i_0] |= arr_3 [i_4];
                        var_20 = ((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_17 [i_5] [i_2] [i_2] [i_1] [17U] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 + 3] [i_1] [i_0] [i_2 - 1])) ? (8091545263728859453LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_5] [(signed char)18] [i_2 - 1])))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-7197879843208209650LL) + (9223372036854775807LL))) >> (((var_0) - (2178404282362855825LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_2 [4U] [i_1] [(_Bool)1]) : (arr_4 [i_5] [i_2])))) : (7197879843208209652LL)));
                    }
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(-7197879843208209647LL))))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 1] [i_0])) || (((/* implicit */_Bool) arr_16 [(unsigned char)4] [i_1] [i_1] [i_0])))) ? ((~(((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1] [(_Bool)1])))) : (((/* implicit */int) ((arr_6 [i_2] [i_2] [i_2 + 1] [i_2 + 1]) <= (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 1] [i_2 - 1])))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 - 2] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) (!((_Bool)1)))) : (((arr_20 [i_0 - 1] [i_0 - 1] [i_0]) % (arr_20 [i_0 + 3] [i_0 + 1] [i_0 + 2]))))))));
                    arr_21 [(_Bool)1] [18U] [i_1] [14ULL] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_6] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8)))), (((arr_20 [i_0] [i_0] [i_0]) ^ (((/* implicit */int) arr_8 [i_1])))))) / (arr_9 [i_0] [i_1] [i_1] [i_6])));
                    arr_22 [11] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_16 [i_0 + 1] [14U] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_1] [i_6])) : (((/* implicit */int) arr_16 [i_0 - 1] [i_1] [i_1] [i_0]))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) ((long long int) 1588080987U));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_8] [i_7 - 1] [i_8] [i_8] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_7))))));
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) ^ (((/* implicit */int) (short)-10445))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 9706321328284447310ULL)) ? (((/* implicit */unsigned long long int) -4791131941498175878LL)) : (arr_0 [i_0]))), ((-(arr_29 [i_8] [i_8])))))) ? (max((((/* implicit */int) arr_24 [i_0] [i_0 - 2] [i_0] [i_8])), ((+(((/* implicit */int) arr_24 [18ULL] [i_7] [i_1] [18ULL])))))) : (((/* implicit */int) arr_11 [i_0 - 2]))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) (short)-10445)) ? (max((((/* implicit */unsigned long long int) arr_1 [i_7 - 1])), (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) arr_2 [i_9] [i_8] [(short)6])) : (var_10))))) : (((unsigned long long int) var_8))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            arr_35 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-8867397394731302479LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)4] [i_0]))) : (var_3))))));
                            arr_36 [i_8] [i_8] [i_7] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_20 [i_8] [i_1] [i_0])) : (15U)))) ? (((((/* implicit */_Bool) arr_25 [i_7] [i_8] [i_10])) ? (arr_31 [i_8] [(signed char)21] [i_8]) : (((/* implicit */unsigned long long int) -4791131941498175852LL)))) : (((/* implicit */unsigned long long int) ((long long int) 871176186U)))));
                        }
                        arr_37 [i_8] = ((/* implicit */unsigned int) var_9);
                    }
                }
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) ((unsigned short) ((arr_3 [i_0]) >= (((/* implicit */long long int) arr_18 [i_1] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (long long int i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                for (short i_14 = 2; i_14 < 11; i_14 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_50 [(unsigned short)0] [i_14] = ((/* implicit */signed char) arr_44 [(short)8]);
                        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_13 + 1] [i_12] [6] [i_14])) >> (((((/* implicit */int) (unsigned short)51750)) - (51750))))) / (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned short) min((var_0), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)202)))))));
        var_33 = ((/* implicit */_Bool) arr_40 [i_11]);
    }
    for (long long int i_15 = 3; i_15 < 9; i_15 += 4) 
    {
        arr_54 [i_15] [i_15] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((arr_32 [i_15] [i_15] [i_15] [i_15] [i_15]) > (((/* implicit */int) var_5))))), (arr_7 [i_15] [(signed char)2] [i_15 + 3]))), (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)32512)))) ? (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [(short)18] [4LL] [i_15])))))));
        var_34 = ((/* implicit */_Bool) max((var_34), (arr_11 [i_15])));
        var_35 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_12 [i_15 + 3] [i_15 - 3] [i_15 - 1] [i_15])))) / (((/* implicit */int) arr_12 [i_15 - 1] [i_15 + 1] [i_15 + 2] [i_15]))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_15 + 1] [i_15 - 2] [i_15 + 3] [i_15] [i_15 - 1] [i_15 + 3])) ? (((arr_6 [i_15 - 2] [i_15] [i_15 - 1] [i_15]) - (arr_6 [i_15 - 2] [9ULL] [i_15 - 2] [i_15]))) : (max((arr_6 [i_15 + 3] [i_15 + 2] [i_15 - 1] [i_15 - 3]), (((/* implicit */int) arr_49 [i_15] [i_15 + 2] [i_15] [i_15] [i_15 - 2] [i_15 + 1])))))))));
        arr_55 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483631)) ? (((/* implicit */unsigned long long int) 6U)) : (8806733214244174445ULL)));
    }
}
