/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171329
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29251))))) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)29250)) ^ (((/* implicit */int) (short)24079))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39058))) : (9269558223535078821ULL)))) || (((/* implicit */_Bool) (short)5002)))))));
        var_16 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0] [0ULL])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned short)6])) : (var_5)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((signed char) arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) + (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [2ULL] [i_1])) ? (-8424076248804229768LL) : (arr_0 [i_1] [i_1])))))) : (((unsigned int) (short)-23380))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        arr_17 [i_1] [i_4] [i_4] [(unsigned char)12] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) arr_16 [i_4 - 2] [i_4] [i_2] [i_4 - 2] [i_4 - 2] [i_4])));
                        var_17 |= ((/* implicit */unsigned char) var_15);
                        var_18 = ((/* implicit */unsigned short) (~(8921764233516698851ULL)));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_20 [i_1] [0LL] [i_1] [(unsigned char)15] [i_1] [i_2] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) var_3)) % (var_15)))))) != (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_1])) ? (arr_12 [i_1] [i_2] [6ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) : (((arr_9 [i_2] [i_3] [i_2]) ^ (15380253896013447555ULL)))))));
                            arr_21 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26478))))), (min((((/* implicit */unsigned long long int) 81041960U)), (var_5))))) << (((((/* implicit */int) ((short) 70368744144896ULL))) + (32831)))));
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_7))))))) ? (((12131728760016955441ULL) >> (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_8 [i_2] [i_3])) - (25023))))))));
                            var_20 = ((/* implicit */short) var_5);
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_24 [13ULL] [i_4] [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_2] [i_4 + 1])) && (((/* implicit */_Bool) (short)24079))));
                            var_21 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)39058)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26478)))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_2])))))));
                            arr_28 [(short)12] [i_3] [i_3] [i_4] [i_4] [i_3] [10LL] &= ((unsigned int) arr_22 [i_3] [i_7] [i_4 - 1] [i_4 + 1] [i_3]);
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) / (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_4] [i_2]))) : (3208254800U)));
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4 - 1] [6ULL] [i_3] [i_3] [i_4 - 1] [i_4 - 1])) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)24065)) : (((/* implicit */int) (short)5303)))))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_32 [i_1] [i_2] = ((/* implicit */short) 3208254800U);
                        arr_33 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) (short)27930))), (2124280905U)))) : (10205035256508912899ULL)));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 183929959592276843LL))));
                        arr_34 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_10);
                    }
                    arr_35 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_22 [i_2] [i_2] [i_3] [i_2] [i_2]), (arr_22 [3ULL] [i_2] [i_3] [i_2] [i_2])))), (min((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) ((signed char) var_15)))))));
                    arr_36 [i_2] = ((/* implicit */short) ((8424076248804229768LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39068)))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_29 [i_1] [i_1] [12LL] [i_1])) > (arr_0 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_1])) >= (var_0)))))) * (((((/* implicit */int) max((((/* implicit */short) (unsigned char)1)), ((short)(-32767 - 1))))) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) (unsigned short)6383)))))))));
        arr_37 [i_1] = ((long long int) ((((/* implicit */int) ((unsigned char) var_5))) << ((((-(((/* implicit */int) arr_14 [(short)12] [i_1] [i_1])))) + (116)))));
    }
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((18446744073709551607ULL), (arr_38 [i_9])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) : (((arr_0 [i_9] [i_9]) & (arr_1 [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) var_9)))))));
        arr_40 [i_9] = ((/* implicit */unsigned long long int) ((short) (-(((unsigned int) (unsigned char)0)))));
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        arr_43 [i_10] = ((/* implicit */short) arr_25 [i_10] [i_10] [(unsigned short)6] [i_10] [(unsigned short)6] [i_10] [i_10]);
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                for (unsigned short i_13 = 2; i_13 < 14; i_13 += 2) 
                {
                    {
                        arr_50 [i_13 + 2] [i_11] [i_12] [i_11] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_10] [i_10] [i_10] [(signed char)6] [i_11])), (((arr_11 [i_13] [i_11] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10] [i_11]))))))))));
                        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32761)))))) ? (min((arr_49 [i_13] [i_12] [i_13 + 2] [i_13]), (arr_49 [i_12] [i_11] [i_13 - 2] [i_11]))) : (min((arr_49 [i_13] [i_11] [i_13 + 2] [(unsigned short)0]), (arr_49 [i_12] [i_11] [i_13 - 1] [i_11])))));
                        arr_51 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)254))))))));
                    }
                } 
            } 
        } 
    }
}
