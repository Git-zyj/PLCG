/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11361
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) / (var_0)))) && (((/* implicit */_Bool) ((arr_0 [3LL] [i_0 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17459)))))));
                arr_6 [5U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)17] [i_3])) && (((/* implicit */_Bool) (-(arr_2 [i_2])))))))) == (((arr_3 [i_2]) % (arr_3 [i_3])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        arr_16 [i_2] [i_3] [i_3] [i_3] [6] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_14 [17ULL] [(unsigned short)12] [(signed char)14] [(unsigned char)17] [(unsigned short)2] [i_5])))) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) var_1))));
                        var_14 = ((/* implicit */unsigned long long int) ((arr_0 [i_5 + 2] [(short)7]) == (arr_0 [i_5 + 1] [i_2])));
                    }
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((int) -1LL)) - (((/* implicit */int) arr_11 [i_2])))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_19 [(short)9] = ((/* implicit */int) ((((/* implicit */long long int) ((arr_2 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_3])))))) == (max((((/* implicit */long long int) var_4)), (arr_17 [i_3])))));
                    var_16 = ((((/* implicit */int) max((arr_12 [i_6] [i_3] [i_6]), (arr_12 [i_6] [4LL] [(unsigned short)11])))) * ((+(((/* implicit */int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(arr_18 [(short)17] [(unsigned short)15] [(unsigned short)15] [(unsigned short)15])))) & (4294967295U)));
                    arr_20 [5U] [10] [8] = ((/* implicit */unsigned short) ((short) ((arr_15 [i_2] [15ULL] [0] [i_6]) & (((/* implicit */unsigned long long int) ((int) arr_9 [i_2] [i_3]))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(4294967292U)))) - (6ULL)));
                    arr_23 [0] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_14 [i_2] [i_3] [i_3] [(_Bool)1] [17LL] [i_7]))))) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    arr_24 [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [14ULL] [(_Bool)1] [i_7] [i_7])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_0 [11] [(unsigned char)5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 901595104)) ? (arr_21 [5U] [i_3] [(_Bool)1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_4))))), (arr_18 [(unsigned short)16] [5U] [i_7] [(short)2]))) : ((~(((/* implicit */int) (unsigned short)4067))))));
                }
                var_19 = (~(((((/* implicit */_Bool) (+(arr_0 [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_18 [i_2] [(_Bool)1] [i_3] [(unsigned short)15])) ? (arr_14 [14] [14] [i_2] [(signed char)7] [3U] [17]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)7]))))) : ((+(8589460696226915218LL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((signed char) 4294967277U)))));
            arr_29 [10U] [i_8] [(signed char)5] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) > (((((/* implicit */_Bool) arr_22 [i_8] [i_9] [13ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25))) : (arr_9 [i_8] [10ULL])))));
            arr_30 [i_8] [i_8] [4ULL] = ((arr_28 [i_9] [i_8] [i_8]) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_27 [i_8] [i_9])) ^ (arr_15 [(short)17] [i_8] [i_8] [i_9])))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((arr_14 [i_8] [i_8] [i_8] [6ULL] [i_8] [i_9]) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8]))))))));
            /* LoopNest 3 */
            for (short i_10 = 1; i_10 < 14; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_38 [(_Bool)1] [i_9] [(_Bool)1] [2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_8] [(signed char)0] [i_10 + 2] [i_11])) ? (arr_18 [i_12] [2LL] [i_10 + 4] [i_12]) : (arr_18 [4U] [i_12] [i_10 - 1] [i_11])));
                            arr_39 [(_Bool)1] [i_8] [10LL] [i_10] [4U] [i_11] [15LL] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
            /* LoopNest 2 */
            for (long long int i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(signed char)9] [i_15] [i_15] [i_14 - 2])) ? (arr_15 [9ULL] [(unsigned char)4] [12U] [i_14 - 2]) : (arr_15 [i_15] [i_14] [i_14 - 2] [i_14 - 2])));
                        var_24 = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_13] [i_16])))))));
                        arr_53 [(_Bool)1] [(short)7] [(signed char)10] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_17] [i_16] [i_13] [i_8])) ? (arr_21 [i_17] [i_16] [15U] [0LL]) : (arr_21 [i_17] [i_13] [i_13] [i_8])));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_13])) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(signed char)16]))))))))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_47 [i_8] [i_8] [i_8] [i_8])) & (((/* implicit */int) arr_8 [i_8]))));
    }
}
