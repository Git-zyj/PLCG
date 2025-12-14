/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110599
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-25526))))), (((var_12) >> (((((/* implicit */int) var_1)) - (118)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_6 [i_0] [3ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (short)-15535);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (arr_5 [i_0 - 1] [i_3 + 4] [i_3 + 4] [i_4])));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                            var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0 - 1] [i_4] [i_0 - 2] [(signed char)0] [i_0])) != (((/* implicit */int) arr_8 [i_3 + 1] [i_0 - 1]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_20 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((462516420) & (((/* implicit */int) (short)-32761))))) || (arr_13 [i_1] [i_5] [i_1] [i_1] [i_0 - 2])));
                    arr_21 [i_0] [i_0] [i_0 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]))) == (var_2)));
                    var_21 ^= ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_5] [i_6] [i_6]);
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_22 = ((/* implicit */long long int) (((~(arr_23 [i_0 - 2]))) << ((((~(arr_12 [i_0 - 1] [9LL] [i_5] [(unsigned char)5] [i_7]))) - (4106469318U)))));
                    var_23 = ((/* implicit */unsigned short) ((arr_12 [i_0] [i_0 - 2] [(signed char)9] [i_0] [i_0 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (-462516421)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [(unsigned short)10] [(unsigned short)10] [(_Bool)1] [i_8] [7] [i_5] |= var_4;
                    arr_28 [5ULL] [5ULL] [1LL] [i_0] [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 462516420)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (short)0))));
                }
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_8))));
                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-1495355919) + (2147483647))) >> (((/* implicit */int) arr_14 [i_5] [(signed char)0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_35 [0] [i_1] [i_5] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [5LL] [i_0 + 1] [(short)4] [i_9 - 1])) >> (((((/* implicit */int) arr_7 [i_9] [i_0 + 1] [(_Bool)1] [i_9 - 1])) - (21517)))));
                            arr_36 [i_1] [i_9] [(unsigned short)1] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)42591)) - (((/* implicit */int) (signed char)62))))));
                            arr_37 [i_5] [i_5] [10ULL] [i_5] [5] = ((/* implicit */int) ((arr_15 [i_0 - 2] [i_0 - 1] [i_9 + 1]) >= (arr_15 [i_0 - 2] [i_0 - 1] [i_9 + 1])));
                            var_27 = ((/* implicit */short) ((var_11) - (((/* implicit */unsigned long long int) arr_31 [i_1] [i_9 + 1] [i_10]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (signed char)106))));
            }
            var_29 += ((/* implicit */short) (~((~(arr_29 [i_0] [(_Bool)1] [2] [8LL])))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            arr_42 [i_0] [i_0] [(short)6] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_0 - 1])) ^ (462516417)))));
            arr_43 [i_0] [i_11] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [(_Bool)1] [i_0]))))) ^ (((/* implicit */int) arr_13 [(unsigned short)2] [2LL] [i_0] [i_0] [(unsigned char)7]))));
        }
        for (short i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
        {
            arr_46 [i_0] = ((/* implicit */signed char) (~(arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 1])));
            arr_47 [0LL] [i_12] = ((/* implicit */long long int) ((var_12) << (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 11; i_14 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) arr_32 [i_0 - 1] [i_12] [i_13] [i_0 - 1]);
                    arr_53 [i_14] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 - 1] [i_14 + 1])) ? (((/* implicit */long long int) (~(var_12)))) : (var_6)));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_2 [i_12]))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0 - 2]))) + (arr_4 [i_0 + 1] [i_14 + 1] [i_14 + 1])));
                }
                var_33 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0 - 2] [0U] [(_Bool)1]) : (arr_22 [i_0 - 1] [i_0 + 1] [i_12] [i_13]))) << ((((~(462516418))) + (462516443)))));
            }
            for (long long int i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                arr_57 [10ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_56 [i_0 - 1] [i_12] [i_15 + 1] [i_15 + 1])));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    for (signed char i_17 = 1; i_17 < 10; i_17 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) 3U)) && (((/* implicit */_Bool) var_10))));
                            var_35 -= ((/* implicit */short) (~(arr_9 [i_0 - 2] [i_15 + 2] [i_17 - 1] [i_17 - 1])));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_0 - 2] [i_0 + 1])) / (var_15)));
                            arr_62 [i_0] [i_12] [8U] [8U] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_0] [8] [4LL] [i_17]))))) <= (((((/* implicit */int) var_8)) * (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((arr_33 [(short)10] [i_0] [i_12] [i_18] [(short)10]) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)-9763)) & (((/* implicit */int) (signed char)69))))))))));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 10; i_20 += 2) 
                    {
                        {
                            var_38 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (short)15544)))))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(-14))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_0])) || (((/* implicit */_Bool) (short)5754)))))));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (-(var_9))))));
        }
        for (short i_21 = 0; i_21 < 12; i_21 += 1) /* same iter space */
        {
            arr_74 [i_0 - 2] [i_21] [(signed char)0] = ((/* implicit */unsigned short) var_10);
            /* LoopNest 3 */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    for (short i_24 = 4; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_0 - 2])) * (((/* implicit */int) arr_41 [i_0 + 1]))));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [(short)11] [i_24 - 1] [i_22 - 1] [6ULL])) ? ((~(var_15))) : (((/* implicit */int) arr_65 [i_24])))))));
                        }
                    } 
                } 
            } 
        }
    }
}
