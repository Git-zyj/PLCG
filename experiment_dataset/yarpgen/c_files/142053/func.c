/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142053
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */int) arr_1 [8U] [i_0])) & (((/* implicit */int) (signed char)46)))) : (((/* implicit */int) (signed char)-47))))) ? ((-(((3389817391U) >> (((-5452079037661231689LL) + (5452079037661231694LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [14U])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned char)14])) || (((/* implicit */_Bool) var_5)))))) : (max((((/* implicit */unsigned int) (unsigned char)148)), (4059069643U)))))));
        var_13 = ((unsigned int) max((arr_2 [(signed char)14]), (arr_2 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_14 ^= ((/* implicit */long long int) (+(((arr_4 [i_1]) ^ (arr_4 [i_1])))));
        var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)64488)) ? (((/* implicit */unsigned int) -1682567112)) : (3366058595U)));
        var_16 *= ((/* implicit */unsigned int) (~(arr_5 [i_1 + 1])));
        arr_6 [i_1 + 1] = ((/* implicit */signed char) (~(arr_4 [i_1 - 2])));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((arr_3 [i_2] [i_2]), (((/* implicit */long long int) var_9))))))) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])) : (arr_4 [i_2])));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35205)) / (843473917)));
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((383543990), (((/* implicit */int) (unsigned short)25695))))) ? (max((((/* implicit */unsigned long long int) arr_3 [13ULL] [i_2])), (arr_2 [i_2]))) : (((var_4) & (arr_2 [i_2]))))) > (((/* implicit */unsigned long long int) min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(5452079037661231689LL))))));
        var_21 = arr_4 [(signed char)0];
        var_22 = ((/* implicit */unsigned int) arr_1 [i_3] [i_3 - 2]);
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3]))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((3369720804U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))))), (1418555875U)))) != (min((min((11252020670191157968ULL), (((/* implicit */unsigned long long int) 3366058595U)))), (((/* implicit */unsigned long long int) 928908687U))))));
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */int) arr_13 [i_4]);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (min((((/* implicit */long long int) (signed char)-33)), (5452079037661231689LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_12 [i_4]) : (arr_12 [i_4]))))));
    }
    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned char) var_5))) ? (arr_11 [i_5 - 2]) : (arr_11 [(signed char)4]))), (((/* implicit */long long int) ((unsigned char) arr_1 [i_5 - 2] [i_5 + 1])))));
        arr_17 [i_5] = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) arr_2 [i_5])) ? (arr_3 [i_5] [i_5]) : (((/* implicit */long long int) var_11))))))));
        var_27 &= ((/* implicit */unsigned int) (~(((unsigned long long int) 597691833U))));
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_27 [22ULL] [22ULL] [i_8] [i_9]))));
                        var_29 = ((/* implicit */unsigned short) ((min((5841040494024722907LL), (((/* implicit */long long int) (+(((/* implicit */int) var_10))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4127684422U)) && (((/* implicit */_Bool) 1023U))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            arr_37 [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) var_11)) > (arr_27 [i_7] [i_8] [i_10] [i_8])));
                            var_30 = ((/* implicit */unsigned int) arr_23 [i_6]);
                        }
                        var_31 ^= ((/* implicit */unsigned short) arr_21 [i_8] [i_8] [i_8]);
                        var_32 |= ((/* implicit */unsigned short) ((arr_24 [i_6] [i_6] [i_8]) <= (((/* implicit */int) arr_21 [i_6] [i_7] [i_7]))));
                        arr_38 [22LL] = arr_24 [i_6] [i_7] [i_7];
                        var_33 = ((((/* implicit */_Bool) ((arr_31 [i_6] [i_6] [i_8] [i_6]) - (((/* implicit */unsigned int) arr_33 [i_8] [i_8] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35206))))));
                    }
                    for (long long int i_12 = 2; i_12 < 23; i_12 += 2) 
                    {
                        var_34 ^= ((/* implicit */int) arr_35 [i_12 + 2] [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [2U]);
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((unsigned long long int) arr_24 [i_6] [(unsigned short)23] [i_8])))));
                        var_36 += ((/* implicit */unsigned int) min((((unsigned short) -71270756)), (((/* implicit */unsigned short) arr_26 [i_12] [i_12] [i_12 - 1] [22LL]))));
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [11U] [i_12] [i_12 - 1] [i_12])) ? (((arr_23 [i_12 - 2]) & (arr_23 [i_12 + 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_12 + 2] [i_12 - 2] [i_12 - 2]))))))))));
                    }
                    arr_41 [1U] [i_7] [1U] = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) arr_22 [i_6] [i_7])), (18446744073709551595ULL))), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_6] [(unsigned short)21])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_19 [i_6]), (var_11)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) - (5452079037661231661LL))) : (((/* implicit */long long int) arr_19 [i_7])))))));
                }
            } 
        } 
    } 
}
