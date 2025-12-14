/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170771
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_4]))))), ((~(max((-3535159478603726450LL), (((/* implicit */long long int) arr_7 [i_4] [i_3] [(unsigned short)0] [(unsigned char)11]))))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [21LL])) < (arr_9 [(short)4] [i_2] [i_1] [i_0 + 4]))))))) || (((/* implicit */_Bool) arr_12 [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(_Bool)1] [i_5])) ? ((~(max((var_1), (((/* implicit */long long int) arr_17 [i_0 - 1] [i_1])))))) : ((~(((long long int) arr_12 [(unsigned char)6]))))));
                        var_20 = ((/* implicit */signed char) arr_6 [i_0 + 2] [i_0]);
                        var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) var_6)) / (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 4])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) (+(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) & (((((/* implicit */_Bool) ((short) arr_4 [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)17280)) < (((/* implicit */int) arr_14 [i_6] [(unsigned char)12] [(_Bool)1] [(unsigned char)12] [i_6])))))) : ((~(var_16)))))));
        var_24 += ((/* implicit */short) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned short i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                {
                    arr_30 [(short)12] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_28 [(signed char)2] [i_8 - 1] [i_8 + 1]) >> (((var_7) + (2179276025827188439LL))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            arr_36 [i_6] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-1LL)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_6] [8LL] [8LL] [8LL] [8LL])) % (arr_6 [i_6] [i_9])))))) ? ((((~(((/* implicit */int) arr_18 [i_6] [i_6])))) / (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_6] [i_7] [i_8] [i_9])), (arr_17 [i_10] [(signed char)16])))))) : (((/* implicit */int) max((((unsigned char) arr_16 [i_10] [(signed char)13] [i_6] [i_6] [i_6] [i_6] [i_6])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -3173241336723175350LL)) || (((/* implicit */_Bool) (signed char)0)))))))));
                            var_25 = ((/* implicit */unsigned int) ((((arr_9 [i_8 - 1] [i_9 + 3] [i_9 - 1] [i_8 - 1]) == (((/* implicit */int) arr_18 [i_9 + 1] [i_9 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) : (arr_28 [i_6] [i_6] [5LL]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9 + 3] [i_8 - 1] [i_8 - 1] [3LL])) || (((/* implicit */_Bool) 4294967295U)))))));
                            var_26 ^= ((/* implicit */unsigned long long int) arr_3 [i_8]);
                        }
                        for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((5948896258243307738LL) >= (arr_34 [i_6] [i_8 - 1] [i_9 - 1] [i_11 + 1]))) ? ((-(((arr_8 [i_6] [(signed char)11] [(short)15]) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_6] [11LL] [i_9])))))));
                            var_28 ^= ((/* implicit */int) ((unsigned char) ((arr_16 [i_6] [i_6] [i_7] [i_7] [i_8 - 1] [(unsigned short)11] [3LL]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [17]))))));
                            var_29 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [(unsigned char)11] [i_7])))))) > (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_11] [2])) ? (arr_6 [i_8 + 1] [i_6]) : (((/* implicit */int) var_9))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_13))))));
                            var_30 = ((/* implicit */_Bool) ((signed char) (-(((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_6] [i_6])) ? (arr_31 [i_6] [i_6] [i_8 - 1] [i_9] [3U] [i_6]) : (-6443179546703334572LL))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_12 = 1; i_12 < 12; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((short) min((arr_19 [i_8] [i_8 - 1] [i_9] [i_8]), (((((/* implicit */_Bool) arr_21 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32754))) : (var_15))))));
                            arr_42 [(_Bool)1] [i_12] [i_8] [i_9] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_12] [(unsigned short)5] [i_6] [i_6]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))))));
                        }
                        arr_43 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((short) var_5));
                        var_32 = ((5948896258243307738LL) & (max((((/* implicit */long long int) (short)32754)), (var_6))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 2; i_13 < 11; i_13 += 1) 
                    {
                        arr_47 [12LL] |= ((/* implicit */short) ((unsigned int) (short)-25168));
                        var_33 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -5948896258243307738LL)) || (((/* implicit */_Bool) arr_6 [i_7] [i_13])))))));
                    }
                    arr_48 [i_6] [i_7] [2LL] &= ((/* implicit */unsigned int) ((unsigned long long int) arr_24 [i_6] [i_6] [i_6]));
                    var_34 = ((/* implicit */long long int) arr_11 [i_6] [i_6] [i_8] [i_6] [i_6]);
                }
            } 
        } 
        var_35 = ((/* implicit */long long int) min((var_35), (arr_20 [i_6] [i_6])));
    }
}
