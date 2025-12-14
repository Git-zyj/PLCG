/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152374
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((min((arr_1 [i_0]), (arr_1 [i_0]))) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) - (5312911440051517940ULL)))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (~(arr_2 [14]))))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [8ULL])))) : (((/* implicit */unsigned long long int) arr_2 [(unsigned short)10]))));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [8ULL])))) ? (((((/* implicit */unsigned long long int) arr_2 [2ULL])) + (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_2 [(signed char)20])) ? (((/* implicit */unsigned long long int) arr_2 [(_Bool)1])) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_6 [i_0] [(signed char)16] [i_1])))) == (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [i_0] [10ULL])), (arr_7 [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))))))));
                    arr_8 [i_0] [18] |= ((/* implicit */short) (+((-(((unsigned long long int) arr_7 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [i_3 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2 - 1] [i_0])) >= (((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_2 + 2]))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_10 [i_3] [14] [i_3 + 1] [(_Bool)1] [i_3 + 1] [i_3 + 1]))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_2 + 2] [i_0] [i_3]))));
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_2 + 2] [i_3 + 1] = ((/* implicit */short) arr_11 [i_0] [i_0] [(signed char)15]);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_2 [(signed char)2]) + (((/* implicit */int) arr_9 [i_3 + 1] [(unsigned char)3])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_5 + 2] [i_5 + 2])), (arr_0 [i_5 - 2])))));
                                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_5 + 4] [i_5] [i_5 + 3] [i_5 - 3])) == (arr_17 [i_0] [i_4] [i_4 - 1] [i_0]))))) >= (min((arr_16 [i_0] [i_4 - 1] [i_2] [i_0] [i_1]), (arr_16 [i_0] [i_4 - 1] [(_Bool)1] [i_4 - 1] [i_5])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 2) 
                    {
                        var_23 *= ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [4ULL] [16ULL] [(signed char)4]))));
                        var_24 = ((/* implicit */unsigned short) arr_17 [i_0] [i_2 + 2] [i_2 + 1] [i_6 + 3]);
                        arr_20 [i_0] [(_Bool)1] [i_2] [i_6] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_0] [(short)14]) ? (arr_18 [i_0] [i_1] [i_1]) : (arr_18 [i_0] [i_1] [(short)14])))) ? (arr_1 [i_6 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_8 = 3; i_8 < 18; i_8 += 4) 
        {
            for (unsigned char i_9 = 4; i_9 < 21; i_9 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_29 [i_7] [i_8] [i_8] [i_9]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_9])))))))))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7]))))) >= ((~(((/* implicit */int) (short)-28567))))))) >> ((((~(arr_24 [i_7]))) - (125252409)))));
                    arr_31 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_7 [i_7]))) : (arr_17 [i_7] [18U] [i_9 - 1] [5LL])))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_7])) != (arr_2 [i_7])))) : (max(((-(((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_8] [i_8] [17ULL])))), (((/* implicit */int) arr_28 [i_7]))))));
                }
            } 
        } 
        arr_32 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_27 [i_7] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_27 [i_7] [i_7] [i_7])))) : (((/* implicit */int) min((arr_27 [i_7] [i_7] [i_7]), (arr_27 [i_7] [i_7] [i_7]))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+((-(arr_18 [i_10] [i_10] [i_10]))))))));
        var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_25 [i_10]) ^ (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_10] [i_10]))))))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_24 [i_10]) - (arr_2 [(unsigned char)6])))))) ? (arr_25 [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned short)7] [i_10] [(unsigned short)7])) ? (((/* implicit */int) arr_14 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_28 [16LL]))))) ? ((~(((/* implicit */int) arr_6 [i_10] [(short)14] [(short)14])))) : (((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) arr_27 [i_11] [i_11] [i_11]);
        /* LoopSeq 2 */
        for (signed char i_12 = 4; i_12 < 16; i_12 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [5ULL] [i_12])), (arr_23 [i_12])))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_23 [i_12])) >= (arr_16 [i_12] [i_11] [i_11] [i_12] [i_12 - 4])))), (arr_23 [i_12]))) : (((/* implicit */unsigned int) (~(arr_18 [8LL] [i_12] [i_12 - 4]))))));
            var_32 = ((/* implicit */unsigned char) arr_16 [i_12] [i_12] [i_12 - 2] [i_11] [(unsigned short)0]);
        }
        /* vectorizable */
        for (short i_13 = 1; i_13 < 13; i_13 += 3) 
        {
            var_33 = ((/* implicit */short) ((unsigned short) arr_44 [i_13 + 2] [i_13 + 2] [i_13]));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    {
                        arr_50 [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28591)) ? (arr_7 [i_14]) : (5468681151517489381ULL)))) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (unsigned char)170))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_13])) || (((/* implicit */_Bool) arr_28 [i_13 - 1]))));
                        arr_51 [i_13] [i_13] [i_13] [i_15] [i_11] [i_13 + 2] = ((/* implicit */signed char) ((((arr_34 [i_13]) ? (arr_47 [i_13] [12LL] [i_11] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_13] [i_13]))))) / (((/* implicit */long long int) arr_10 [i_13 + 4] [i_13 + 3] [i_13 + 4] [i_13] [i_13 + 3] [i_13 - 1]))));
                        arr_52 [i_13] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (short)28558)) ? (1131990805U) : (((/* implicit */unsigned int) -1052020049))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_16 = 3; i_16 < 15; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) ((arr_2 [i_13]) / (arr_2 [i_13])));
                        arr_58 [i_13] [(unsigned char)0] [i_16 - 3] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_11])) | (((/* implicit */int) arr_39 [i_11]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                for (unsigned char i_19 = 1; i_19 < 16; i_19 += 3) 
                {
                    {
                        var_36 += ((/* implicit */unsigned long long int) arr_18 [i_13] [i_18] [i_18]);
                        arr_64 [i_13] [i_13 - 1] [i_18] [i_19 - 1] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_13] [(short)3] [1] [i_18])) ? (arr_17 [i_13] [i_13] [21ULL] [i_13]) : (arr_17 [i_13] [i_13] [i_13] [i_13])));
                    }
                } 
            } 
            arr_65 [i_13] = ((/* implicit */long long int) arr_40 [i_13] [i_13] [i_13]);
        }
        /* LoopNest 3 */
        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned int i_22 = 0; i_22 < 17; i_22 += 2) 
                {
                    {
                        var_37 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_18 [i_20] [i_20] [i_20])), (((unsigned int) max(((short)-24177), ((short)28538))))));
                        var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [4LL] [i_20] [(_Bool)1]))));
                        arr_74 [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_11] [i_11] [i_21] [i_11])) ? (arr_0 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_11] [i_20] [i_21] [i_22])))))) ? (arr_0 [i_21]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_70 [i_11] [i_11] [i_21] [i_22])) - (((/* implicit */int) arr_70 [i_20] [i_20] [i_21] [i_22])))))));
                    }
                } 
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned long long int) var_8);
}
