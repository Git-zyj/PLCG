/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104805
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
    var_14 &= ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned long long int) max((max((var_11), (var_4))), (((/* implicit */unsigned int) var_3)))))));
    var_15 = var_12;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) (-(arr_2 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))), (((unsigned int) var_5))))) > (((unsigned long long int) arr_5 [5] [i_2]))));
                        var_17 = ((/* implicit */unsigned short) max(((unsigned char)147), (((/* implicit */unsigned char) ((_Bool) arr_4 [i_0] [i_1] [i_0] [i_3])))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) min(((~(var_2))), (((/* implicit */unsigned long long int) (unsigned char)147))));
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_19 &= max((((/* implicit */int) (unsigned char)102)), ((-(((/* implicit */int) min((((/* implicit */short) arr_8 [i_4])), (arr_11 [i_4])))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(arr_6 [(_Bool)1] [i_0] [i_0])))), ((-(((/* implicit */int) arr_4 [i_0] [18U] [18U] [i_5 - 1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2ULL)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) : (2147483647))))));
                arr_17 [i_0] [i_4] = min(((+(((/* implicit */int) (unsigned char)33)))), (((/* implicit */int) max((arr_8 [i_5 + 4]), (arr_8 [i_5 - 1])))));
                arr_18 [(_Bool)1] [i_5] [i_4] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) min((arr_1 [i_5]), (((/* implicit */long long int) var_10))))) < (((((/* implicit */_Bool) var_1)) ? (3ULL) : (18446744073709551615ULL))))), (((arr_15 [i_5] [i_4] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1])))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 2) 
        {
            var_21 = ((/* implicit */int) min((((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_13 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) >> (((((/* implicit */int) arr_11 [i_6 - 2])) + (10929))))), (((/* implicit */long long int) arr_16 [i_6 - 1] [18ULL] [i_0]))));
            arr_22 [i_6 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((18446744073709551614ULL), (((/* implicit */unsigned long long int) arr_13 [(_Bool)1])))) | (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_6 - 3])), (14ULL)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_6 + 1]))))) : (arr_19 [i_6 - 2])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                var_22 = ((/* implicit */short) ((arr_5 [i_0] [i_7]) ^ (arr_5 [i_7 - 1] [i_6 - 1])));
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [(signed char)12] [i_6] [i_7]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_28 [i_0] [i_0] = ((max((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_6 - 2] [i_6 - 2] [i_6 - 3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6 - 2] [i_6 + 2] [i_6 - 3])))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_24 [10LL] [i_6 - 2] [i_8] [(short)17])), (var_13)))) >> (3ULL))))));
            }
        }
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_13)), (min((((/* implicit */unsigned short) arr_10 [13] [13] [i_0])), ((unsigned short)65535)))));
        arr_30 [i_0] |= ((/* implicit */unsigned int) arr_27 [i_0] [i_0]);
        arr_31 [i_0] &= ((/* implicit */long long int) min((2ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
    }
    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_33 [i_9 - 1] [i_9 - 1]), (arr_33 [9U] [i_9 + 1])))) ? (min((arr_33 [i_9 - 1] [i_9]), (arr_33 [i_9 + 1] [i_9 + 1]))) : (((((/* implicit */_Bool) arr_33 [i_9 + 1] [i_9])) ? (arr_33 [i_9 - 2] [i_9 - 1]) : (arr_33 [i_9] [i_9 - 2])))));
        arr_34 [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9 - 1] [i_9])))))) ? (((((/* implicit */_Bool) (signed char)10)) ? (-2147483641) : (126976))) : (((arr_32 [i_9] [i_9]) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_32 [i_9] [i_9]))))))));
    }
    var_26 -= ((((/* implicit */int) var_10)) % ((+(var_1))));
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) + (((((/* implicit */_Bool) 18446744073709551593ULL)) ? (var_4) : (((/* implicit */unsigned int) -2147483647)))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
}
