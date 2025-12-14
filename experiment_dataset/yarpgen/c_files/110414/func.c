/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110414
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
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_17)) + (((((/* implicit */_Bool) -6729750143013336524LL)) ? (-6729750143013336524LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23602)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */signed char) (((+(((arr_1 [i_0] [i_0]) % (arr_1 [(unsigned char)11] [i_0]))))) & (((/* implicit */int) ((unsigned char) ((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((arr_0 [i_0]) + (768026330151946300LL))) - (54LL)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) (~((+(((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_0] [i_0]) : (arr_7 [i_2] [i_0])))))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [0ULL])) ? (4685180493545933666ULL) : (4685180493545933655ULL)))))))) | (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned int) ((int) arr_3 [i_2]))) : (((arr_3 [i_1]) + (((/* implicit */unsigned int) -1592165526))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [(unsigned short)18] [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) max((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_4]))) | (arr_2 [i_3] [i_4]))), (((/* implicit */unsigned int) (-(arr_4 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_4]) % (((/* implicit */int) arr_5 [i_0] [i_0]))))) && (((/* implicit */_Bool) (-(2284212037217991386LL)))))))));
                                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_2 [4U] [4U]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -320110147))))) : (((/* implicit */int) (signed char)-59)))) << (((((long long int) arr_6 [4] [i_1] [i_0])) - (667387519LL)))));
                                var_23 *= ((((/* implicit */_Bool) (+(((long long int) 2147483647))))) ? (max((((/* implicit */unsigned int) ((arr_1 [i_1] [(unsigned char)22]) | (1585753053)))), (((((/* implicit */_Bool) arr_10 [i_4] [i_1] [12ULL] [i_1] [i_0])) ? (arr_2 [9ULL] [4LL]) : (arr_2 [i_2] [i_4]))))) : (((/* implicit */unsigned int) arr_4 [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned long long int) arr_5 [(signed char)14] [(signed char)14]);
                                arr_22 [i_2] = ((unsigned int) (~(arr_19 [i_2] [i_5] [i_5] [i_5] [i_5] [i_1] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1707913205U))))), (((arr_3 [i_7 - 1]) - (arr_3 [i_7])))));
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)16] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_7])) ? (arr_0 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)16376)))))) ? (((((/* implicit */long long int) arr_9 [22ULL] [i_7] [22ULL])) % (4511574650601577685LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)119)))))))) - (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_19 [(short)6] [i_7 + 1] [i_7] [i_7] [i_7] [i_7] [i_7])) / (5390633773264478705LL)))) ? (((((/* implicit */_Bool) 3867474716U)) ? (72531640609982009ULL) : (((/* implicit */unsigned long long int) 1707913210U)))) : (((/* implicit */unsigned long long int) arr_1 [i_7 - 2] [i_7 + 1]))))));
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_3 [i_7]))));
            var_27 = ((/* implicit */unsigned short) arr_13 [i_8] [i_7] [i_7] [5ULL] [i_7]);
        }
        for (long long int i_9 = 2; i_9 < 12; i_9 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                arr_34 [i_10] [i_9] [i_10] [i_9 + 2] = -6729750143013336524LL;
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9] [i_9 - 2] [i_9])) || (((/* implicit */_Bool) ((signed char) 268431360ULL)))));
            }
            for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 2) 
            {
                arr_37 [i_11] [(short)12] [i_9] [i_7] = max((((/* implicit */unsigned int) -121987947)), (2587054087U));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_7 + 2] [i_9] [i_7] [i_7] [i_7])) - (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)52)), ((unsigned short)24143))))));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */unsigned int) arr_4 [i_7])) - (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_7] [i_9]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) / (-1692145849)))) : (arr_2 [i_7 - 1] [i_7]))))))));
            }
            var_31 = arr_30 [i_7 + 3] [i_7 + 3];
            var_32 = (+(((/* implicit */int) ((((/* implicit */_Bool) 2360415992U)) && (((/* implicit */_Bool) 3831455995U))))));
        }
        arr_38 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((arr_9 [i_7 + 1] [i_7] [22]) + (((/* implicit */unsigned int) arr_6 [i_7] [i_7] [i_7 + 2])))) < (((/* implicit */unsigned int) (~(arr_35 [i_7] [i_7] [i_7] [i_7])))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))))) : ((+((-(((/* implicit */int) arr_11 [i_7] [(unsigned short)20] [(unsigned short)20] [i_7] [i_7]))))))));
    }
}
