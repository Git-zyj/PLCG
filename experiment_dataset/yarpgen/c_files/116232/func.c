/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116232
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_2 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [5U] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (arr_3 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (6454161734677112388ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))), (((/* implicit */unsigned long long int) var_9))));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (max((arr_3 [i_0]), (arr_3 [i_1]))) : (arr_3 [i_0])));
            var_11 |= ((((/* implicit */int) (short)21012)) - (((/* implicit */int) arr_2 [i_0] [i_1])));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) max((max((((/* implicit */int) var_8)), (arr_4 [6] [i_1] [i_1]))), (((/* implicit */int) arr_1 [i_0]))))), (8694412905416566371LL)));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_12 ^= ((/* implicit */unsigned int) 8694412905416566373LL);
            arr_11 [(short)12] = ((/* implicit */short) (+(((((/* implicit */int) arr_2 [i_0] [i_2])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            arr_12 [(signed char)10] [(signed char)10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_0] [i_2]) : (arr_4 [i_0] [(signed char)17] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */long long int) arr_3 [i_0])) : (-889377571225100779LL)))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) -8694412905416566374LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((8694412905416566391LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            var_13 &= ((/* implicit */long long int) ((((arr_10 [15ULL] [15ULL] [15ULL]) + (2147483647))) << (((((/* implicit */int) arr_8 [i_3 - 1])) - (127)))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) arr_3 [i_4]);
                        arr_22 [(signed char)13] [i_3] [i_4] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_4]))) : (((((/* implicit */_Bool) arr_13 [(signed char)15] [i_3 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (0ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_4]))) : (18446744073709551615ULL))) >> (((((/* implicit */int) arr_1 [i_0])) - (64)))))) ? (((((/* implicit */int) (short)-30181)) % ((-(((/* implicit */int) (unsigned short)65516)))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_3 + 1] [i_4])) != (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0)))))))));
                        arr_23 [i_0] [(unsigned short)20] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 2])), (arr_4 [i_3 - 1] [i_3 + 2] [i_3 + 2]))) % (((((/* implicit */_Bool) max((481628583), (((/* implicit */int) arr_15 [i_0] [i_3] [i_5]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)126))))))));
                    }
                } 
            } 
        }
        for (signed char i_6 = 3; i_6 < 19; i_6 += 1) 
        {
            arr_26 [i_0] = ((/* implicit */unsigned short) 198996506U);
            /* LoopNest 2 */
            for (unsigned char i_7 = 3; i_7 < 18; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    {
                        arr_33 [i_8] [i_7] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_16 [8LL] [i_6] [i_7]) & (5295292231414632398LL)))))) ? (((/* implicit */long long int) 4095970789U)) : ((+(((((/* implicit */_Bool) arr_18 [i_0] [i_6 - 2])) ? (4774245685231435152LL) : (((/* implicit */long long int) arr_30 [i_0] [i_8] [i_6] [i_8]))))))));
                        arr_34 [i_8] [i_6] [i_6] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [4]))) % (3444612607U)))) : (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (11679932390290592360ULL)))))) ? (((((/* implicit */int) arr_8 [i_8 + 1])) % (((/* implicit */int) arr_8 [i_8 + 2])))) : (((/* implicit */int) var_8)));
                        var_16 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_1 [i_0]))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (long long int i_9 = 1; i_9 < 12; i_9 += 4) 
    {
        var_17 -= ((/* implicit */signed char) arr_1 [i_9]);
        arr_38 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_9] [i_9])) + (1159656430))))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_9 - 1] [i_9 + 1] [i_9 + 2])), (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 0U)))))) : (((/* implicit */unsigned long long int) arr_13 [i_9] [i_9 + 2] [i_9]))));
    }
}
