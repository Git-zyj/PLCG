/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141072
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (arr_0 [i_0] [i_0])));
        arr_2 [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) != (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))));
        var_20 = arr_3 [i_1];
        var_21 = ((/* implicit */signed char) ((((3533685611U) * (4213611220U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_3])) > (((/* implicit */int) arr_5 [i_3])))))) * (((81356061U) | (4213611244U)))));
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_10 [i_3])) / (((/* implicit */int) arr_10 [i_3])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])))))));
            arr_11 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) && (((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) - (0ULL)))));
            arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((arr_9 [i_2] [i_2] [i_3]), (arr_9 [i_3] [i_3] [i_3])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_3]))) / (arr_3 [i_3])))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_5 [i_3]))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [i_4]);
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_2] [(unsigned char)14])) == (((/* implicit */int) arr_13 [i_2] [i_2] [i_4])))))));
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_5 [i_5])) && (((/* implicit */_Bool) arr_6 [i_2])))) && (((/* implicit */_Bool) arr_6 [i_2])))) && (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) 4213611244U))))) || (((((/* implicit */_Bool) 7693527522099385068ULL)) || (((/* implicit */_Bool) 13365033801827581539ULL))))))));
            var_27 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((3592744599U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5])))))) * (min((((/* implicit */unsigned long long int) arr_17 [i_2] [i_5])), (arr_6 [i_2]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_2] [i_5] [(unsigned short)0])), (arr_13 [i_5] [i_5] [i_5])))) * (((((/* implicit */int) arr_5 [i_5])) / (((/* implicit */int) arr_10 [(unsigned short)12])))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_3 [8U]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [12]))))) == (((81356075U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))))) & (arr_14 [i_2] [i_2] [i_6])));
            arr_21 [i_2] [i_6] [(_Bool)1] = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned int) -1703090994)), (arr_20 [i_2] [i_6] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_6] [i_6]))) >= (arr_3 [10U])))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [14U])))));
        }
        var_29 = (((~(((/* implicit */int) arr_9 [i_2] [i_2] [(unsigned short)0])))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2])) || (((/* implicit */_Bool) arr_3 [(unsigned short)4]))))) != (((/* implicit */int) arr_8 [i_2]))))));
        var_30 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [0U] [i_2] [14U])) && (((/* implicit */_Bool) min((arr_20 [i_2] [i_2] [8U]), (((/* implicit */unsigned int) arr_16 [i_2] [i_2])))))))), (min((arr_10 [(unsigned short)2]), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [(unsigned short)16])) > (((/* implicit */int) arr_8 [(unsigned char)12])))))))));
    }
}
