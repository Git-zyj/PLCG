/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135121
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
    var_10 = ((/* implicit */unsigned char) ((0ULL) >> (((/* implicit */int) ((((240U) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) || (((/* implicit */_Bool) 0ULL)))))));
    var_11 |= ((/* implicit */unsigned short) 12ULL);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_4 [i_0] |= ((/* implicit */unsigned short) ((((18446744073709551615ULL) * (18446744073709551615ULL))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - (2191632079393503652ULL)))));
            var_12 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) > (((/* implicit */int) arr_2 [i_0] [i_0])))))) != (4294967295U)));
            arr_5 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) % (arr_1 [i_0] [i_0]));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)2] [i_0] [i_0])) || (((/* implicit */_Bool) 5480750150837559146LL))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_13 = ((((/* implicit */_Bool) arr_3 [i_1] [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_3 [7LL] [i_2] [i_4])));
                            arr_15 [(unsigned short)10] [i_1] [i_1] [(short)2] [i_4] [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [3LL] [i_2])) || (((/* implicit */_Bool) arr_9 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 768326472U)) || (((/* implicit */_Bool) -1393142704)))))) : (arr_1 [i_3] [i_0])));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_5] [i_1] [i_2] [i_3] [10ULL] [i_3] [i_2] = ((/* implicit */unsigned char) arr_0 [i_2]);
                            var_14 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) arr_13 [i_5] [i_0] [4U] [i_2] [i_2] [i_0] [i_0])) : (arr_17 [i_0] [i_1] [(unsigned short)10] [i_3] [i_5])))) < (7ULL)));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) arr_11 [i_3] [i_1] [i_1] [i_1] [i_1]);
                            arr_22 [i_3] [i_1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [6ULL] [i_3] [i_0] [i_6])) > (-974185295)))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12LL] [i_6]))) < (18446744073709551608ULL))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)32767)) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (unsigned char)7))))))) * (((arr_13 [(unsigned short)4] [i_7] [i_7] [i_0] [i_0] [i_7] [i_7]) * (15U)))));
            arr_25 [(unsigned short)9] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((0U) >> (((-8170692002644554155LL) + (8170692002644554169LL)))))) ^ (5847245189192082671LL)))) ? (2380604903U) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 3535700354010833424ULL)) && (((/* implicit */_Bool) arr_0 [i_0]))))) >> (((((((/* implicit */_Bool) arr_13 [i_0] [i_7] [i_7] [i_0] [i_0] [i_7] [i_0])) ? (arr_18 [i_0] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [8ULL] [12U]))))) - (1329034637U))))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 0)), (0ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) - (arr_8 [(signed char)0] [(signed char)0] [i_0] [(short)5]))))))) ? (arr_18 [i_7] [i_0]) : (((((/* implicit */_Bool) arr_6 [i_0] [i_7] [1U] [i_7])) ? (((((/* implicit */_Bool) (short)0)) ? (2724530870U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7])))))));
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 7ULL)) || (((/* implicit */_Bool) (unsigned char)0))))) < (((/* implicit */int) arr_11 [i_7] [i_7] [i_0] [i_7] [i_7]))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_29 [i_0] [i_8] = ((/* implicit */unsigned int) ((((0U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8]))))) ? (((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)-24642)))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_0] [i_0] [6LL] [i_0])))))));
            arr_30 [i_0] [i_0] |= ((((((/* implicit */_Bool) (unsigned char)227)) || (((/* implicit */_Bool) (unsigned short)12288)))) ? (((/* implicit */long long int) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))) : (((arr_12 [12ULL] [i_8] [i_8] [i_0] [i_0]) - (((/* implicit */long long int) 4294967295U)))));
            arr_31 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((0ULL) <= (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_8]))));
        }
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-24642)) : (((/* implicit */int) (signed char)-88))))) ? (min((((/* implicit */int) arr_3 [8U] [8U] [i_0])), (33554431))) : (((/* implicit */int) (unsigned short)62458)))) | (((((/* implicit */int) arr_23 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)47799))))));
        arr_32 [i_0] [9ULL] = ((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_9 = 4; i_9 < 18; i_9 += 3) 
    {
        var_19 |= ((/* implicit */unsigned int) arr_34 [12U] [12]);
        var_20 |= ((/* implicit */unsigned char) min((((arr_33 [i_9 - 4] [i_9]) >> (((((arr_34 [11LL] [10]) | (arr_34 [17U] [i_9]))) - (4025843901740881151LL))))), (arr_33 [i_9 + 2] [i_9 - 3])));
    }
}
