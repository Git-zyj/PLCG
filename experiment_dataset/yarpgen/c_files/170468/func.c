/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170468
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
    var_11 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_1 + 4]))) & (arr_1 [i_2 - 1] [i_1 + 4])));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (-(arr_4 [i_2])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_12 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_9 [i_2 - 1] [i_2 - 3] [i_2] [i_2] [i_2]))))));
                        arr_10 [i_1] [i_1] [i_2] [10ULL] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((-688022069) <= (((/* implicit */int) arr_3 [7ULL])))))) ^ (12584063852903510425ULL))));
                    }
                    arr_11 [19ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) -2179408818665518623LL)) != (((arr_1 [i_1] [i_2]) / (arr_1 [i_0] [i_0])))))));
                }
                for (int i_4 = 3; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_9 [i_0] [i_4 + 1] [i_0] [i_1] [i_1 + 1]) == (arr_9 [i_0] [i_4 + 1] [i_4] [i_1] [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        arr_17 [i_1] [i_5] = ((/* implicit */unsigned long long int) (short)32767);
                        arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((2179408818665518622LL) - (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1 - 1] [i_1 - 1]), (arr_5 [i_1] [i_1 + 1])))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_14 *= ((/* implicit */unsigned short) (unsigned char)130);
                            arr_23 [i_1] [(unsigned short)18] &= ((/* implicit */unsigned long long int) (-(((((arr_15 [i_5 + 2] [i_6] [i_5 + 2] [i_0]) + (2147483647))) << (((((arr_15 [i_6] [i_4] [i_5 + 2] [i_4]) + (215909526))) - (3)))))));
                        }
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((arr_22 [i_0] [i_0] [16ULL] [i_1] [16ULL] [2LL]) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) | (arr_22 [i_0] [i_0] [i_1] [i_4] [i_5] [12LL]))) - (((/* implicit */unsigned long long int) ((((-2179408818665518623LL) + (9223372036854775807LL))) >> (((arr_15 [i_0] [2ULL] [2ULL] [i_5]) + (215909526)))))))))))));
                    }
                }
                for (long long int i_7 = 4; i_7 < 20; i_7 += 3) 
                {
                    arr_26 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) (+(-7884098784064561023LL))));
                    var_16 ^= ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [2LL] [i_0] [(unsigned char)2]);
                    var_17 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)24949)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) arr_25 [i_1] [19ULL] [i_1]))) - (49292)))))) : (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)24949)))) + (2147483647))) << (((((((/* implicit */int) ((unsigned short) arr_25 [i_1] [19ULL] [i_1]))) - (49292))) - (1718))))));
                    arr_27 [i_1] [i_1] [i_0] = var_7;
                }
                /* vectorizable */
                for (long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            arr_38 [i_1] [i_8] [i_9] [i_1] = ((/* implicit */unsigned short) (short)20544);
                            arr_39 [i_0] [2LL] [i_8] [(short)9] [i_1] [i_9] = ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0]))) ? (((/* implicit */unsigned long long int) 1976381610084368060LL)) : ((~(arr_29 [i_1] [i_1]))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            var_18 = ((/* implicit */short) arr_12 [i_0] [i_1]);
                            arr_43 [i_0] [i_1] [i_1] [i_1] [(short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_8] [i_9] [i_11] [i_11 + 1])) ? (arr_19 [i_0] [i_0] [16LL] [i_9] [13ULL] [i_1]) : (arr_19 [i_0] [i_1] [i_8] [i_9] [i_11] [19ULL])));
                            arr_44 [i_11] [6ULL] [i_1] [i_1] [6ULL] = ((/* implicit */unsigned long long int) ((arr_20 [i_8] [i_8] [i_8] [i_11 + 1] [2LL]) + (arr_36 [i_8] [i_1] [i_8 - 1] [i_8] [i_8] [i_8 - 1])));
                            var_19 = ((/* implicit */unsigned short) arr_40 [i_1] [i_9 - 1] [i_8 - 1] [i_0] [i_1] [i_1]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_8] [i_9] [(unsigned char)20] [i_9] [i_9 - 2] [i_12] [i_12])) >> (((((/* implicit */int) arr_30 [i_1] [i_1 + 2] [i_0])) - (30408))))))));
                            var_21 ^= ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) -2179408818665518623LL)) & (var_6)))));
                        }
                        var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(2179408818665518622LL))))));
                    }
                    arr_48 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                    arr_49 [i_1] [i_1] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1])))))));
                }
                arr_50 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_45 [i_1] [i_1])), (((unsigned long long int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                var_23 = max(((((+(arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) ^ (((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (short)32767)))))));
                arr_51 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((2179408818665518622LL) >> (((arr_32 [i_1] [i_1] [19LL] [i_1]) - (9548850635061089850ULL))))) >> (((min((var_8), (((/* implicit */unsigned long long int) 2179408818665518622LL)))) - (2179408818665518621ULL))))) * (((2179408818665518622LL) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [7LL])))))))) : (((/* implicit */unsigned long long int) ((((((2179408818665518622LL) >> (((((arr_32 [i_1] [i_1] [19LL] [i_1]) - (9548850635061089850ULL))) - (13929449392002105101ULL))))) >> (((min((var_8), (((/* implicit */unsigned long long int) 2179408818665518622LL)))) - (2179408818665518621ULL))))) / (((2179408818665518622LL) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [7LL]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) -2179408818665518623LL)));
    var_25 -= ((/* implicit */long long int) (~(var_3)));
}
