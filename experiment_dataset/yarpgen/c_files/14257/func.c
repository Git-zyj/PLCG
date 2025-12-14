/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14257
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
    var_11 = ((/* implicit */unsigned long long int) ((var_5) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) -6LL))))), (max((((/* implicit */unsigned long long int) var_6)), (var_7)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_0 [i_0])), (33554431U))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))) / (max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) / (22LL)))))));
        var_13 *= ((/* implicit */_Bool) ((short) 0ULL));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) (-(arr_4 [i_2 + 2] [i_2 + 2])));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_13 [i_2] = max((((/* implicit */unsigned long long int) arr_6 [i_5] [i_4] [i_3] [i_1])), (min((arr_4 [i_2 - 2] [i_2 - 1]), (((/* implicit */unsigned long long int) arr_6 [i_1] [15U] [i_3] [i_4])))));
                            var_15 = arr_8 [i_5] [i_2];
                            var_16 = ((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4]);
                        }
                    } 
                } 
            } 
            arr_14 [i_1] [0LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) -400301390)) ? (max((max((arr_2 [6U] [i_2 + 1]), (((/* implicit */long long int) arr_12 [i_1])))), (((/* implicit */long long int) min((((/* implicit */short) arr_12 [i_1])), ((short)24197)))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(signed char)7] [i_2] [i_2] [8U] [i_2])))))) / (min((arr_2 [i_2] [15ULL]), (arr_3 [i_1])))))));
            var_17 = ((/* implicit */long long int) max((((unsigned char) arr_7 [i_1] [i_1])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 2])))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6 - 1] [i_6] [i_6] [(unsigned short)13])) ? (((arr_4 [i_6] [i_1]) - (arr_5 [i_6]))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
            arr_17 [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) && (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_20 [(unsigned short)4] [(unsigned short)4] |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) * (arr_6 [i_1] [i_1] [i_1] [i_1]))))))) > (((/* implicit */int) arr_8 [i_7 - 1] [i_7 - 1]))));
            var_19 = ((/* implicit */_Bool) arr_11 [i_7] [(signed char)7] [i_1] [i_1] [(signed char)7]);
            var_20 = ((/* implicit */_Bool) ((int) (unsigned char)107));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) -2091051845)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [10LL]))) : (0ULL)));
            var_22 ^= ((/* implicit */long long int) arr_10 [i_8 - 1] [(short)9] [(short)9] [i_8 - 1] [(_Bool)1]);
            arr_24 [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_21 [i_1])) ^ (arr_3 [i_1]))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15247)))))) ^ (((max((((/* implicit */unsigned long long int) (unsigned char)255)), (15567128071984130496ULL))) / (4488130337058852898ULL)))));
        }
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned short) arr_11 [12] [i_1] [i_1] [i_1] [12]);
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_9 [i_12] [i_9])) - (((/* implicit */int) arr_9 [i_1] [i_1])))))))));
                            arr_35 [i_11] [1ULL] = ((unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
        {
            arr_38 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))))));
            arr_39 [i_1] = ((/* implicit */int) arr_9 [i_1] [i_1]);
        }
        for (long long int i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) 327179485);
            arr_43 [i_14] [3U] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((signed char) arr_9 [i_1] [i_14]))), (max((((/* implicit */unsigned long long int) arr_25 [i_14])), (arr_4 [i_14] [7ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_14])) ? (((/* implicit */int) ((10U) < (3346401019U)))) : (((/* implicit */int) ((arr_3 [i_14]) == (((/* implicit */long long int) arr_6 [5] [5] [5] [5]))))))))));
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (short i_16 = 1; i_16 < 15; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) max((arr_5 [i_1]), (max((((arr_19 [i_16] [i_1] [i_15]) - (arr_5 [i_1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_1] [i_1] [8LL] [i_15])))))))));
                            var_27 -= ((/* implicit */unsigned int) -4138860974737451969LL);
                        }
                    } 
                } 
            } 
            var_28 = arr_49 [i_1] [i_1] [i_14] [i_14] [i_14];
            var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_26 [i_1] [i_14])) ? (((/* implicit */int) (!((_Bool)1)))) : ((~(arr_45 [i_1] [i_14])))))));
        }
    }
    var_30 = var_8;
    var_31 = ((/* implicit */int) var_2);
    var_32 = ((/* implicit */short) var_5);
}
