/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147850
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_1) / (((/* implicit */int) (unsigned short)65231))))) + (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (min((((/* implicit */unsigned long long int) var_3)), (var_2))))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (max((var_4), (var_6)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 1]))) ^ (arr_0 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_14 *= ((/* implicit */unsigned short) ((((515800851U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)293)))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */int) (-(6935646552136172414LL)));
                        arr_17 [i_0] [i_1] [i_0] [12ULL] = ((/* implicit */signed char) ((arr_1 [i_3 + 3] [i_3 - 1]) | (((((/* implicit */_Bool) (signed char)105)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        arr_18 [i_0 + 2] [i_1] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */int) (~(arr_7 [i_1 - 1] [i_3 - 1])));
                        var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)2] [i_4])))));
                        arr_19 [i_4] [i_0] [i_2 - 1] [i_2 - 1] [i_4] [i_3 + 1] = ((unsigned long long int) var_8);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_17 ^= ((/* implicit */unsigned int) ((unsigned long long int) var_10));
                        var_18 = ((/* implicit */_Bool) ((var_11) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 3] [i_3 - 2] [i_3] [i_5])))));
                    }
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0] [i_0] [14ULL]))))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((var_8) % (((/* implicit */int) var_11)))))));
                }
                arr_24 [i_0] [i_0] = ((/* implicit */int) var_4);
            }
            for (signed char i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                arr_27 [i_0] [i_1 + 2] [i_6 - 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8484))) * (17714779504978702840ULL)));
                var_20 += ((/* implicit */unsigned long long int) ((signed char) 18446744073709551615ULL));
                /* LoopSeq 3 */
                for (int i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    var_21 *= ((/* implicit */_Bool) ((1514532175) >> (((((arr_4 [6ULL] [i_1 + 2] [i_6]) << (((((((/* implicit */int) (signed char)-105)) + (113))) - (8))))) - (1873148656)))));
                    arr_32 [i_0] [i_0] [i_0] [i_0 + 4] = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_34 [i_0] [i_1 + 3] [(unsigned char)2] [i_1 - 1] [i_6 - 2] [i_6]))));
                        var_23 = ((/* implicit */_Bool) ((signed char) ((var_1) & (((/* implicit */int) (short)8474)))));
                    }
                    for (long long int i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((6349521882782506301ULL) & (((/* implicit */unsigned long long int) 3779166445U))));
                        arr_37 [i_0 + 3] [i_0] [i_7] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) 13975899166171262619ULL)) && (((/* implicit */_Bool) 17714779504978702839ULL)))) && (((/* implicit */_Bool) ((-447547763) - (var_9))))));
                    }
                    /* LoopSeq 4 */
                    for (short i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [i_0] [i_0 + 1] [i_0] [i_1 + 1] [i_6 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_38 [(signed char)12] [i_0] [i_0 + 4] [i_0 + 4] [i_1 - 1] [i_6 - 1] [10U])) : (((/* implicit */int) arr_38 [2ULL] [i_0] [i_0 - 2] [i_0] [i_1 + 2] [i_6 - 3] [2ULL]))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_4))));
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        var_27 ^= ((/* implicit */_Bool) (-(var_8)));
                        var_28 = ((/* implicit */signed char) ((9223372036854775807LL) != (((/* implicit */long long int) ((unsigned int) (signed char)0)))));
                        var_29 = 3687010686U;
                    }
                    for (signed char i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        var_30 ^= ((/* implicit */int) (+(((unsigned long long int) (signed char)63))));
                        var_31 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0]))));
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) (-((~(var_8)))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_0 + 2] [i_1 + 3])) ? (arr_11 [i_0 + 1] [i_0 - 1] [i_1 + 3]) : (arr_11 [i_0 + 4] [i_0 - 1] [i_1 + 1])));
                        var_34 = ((/* implicit */unsigned short) (+(arr_22 [i_0] [i_0 + 1] [i_0 + 4] [i_0] [i_0])));
                        var_35 = ((/* implicit */short) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [13] [i_0] [i_0 + 4] [i_0])))));
                    }
                    arr_49 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_0] [i_1] [i_0] [i_1] [i_1] [5] [i_1])) / (arr_31 [i_0])));
                }
                for (unsigned short i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    arr_52 [10U] [(unsigned short)18] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_7 [i_0 + 2] [i_14 + 2]) < (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
                    var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_14 + 3] [i_14 + 3] [i_14 - 1] [i_14 + 3] [i_14 + 3] [i_14 + 3]))));
                    arr_53 [i_0] [i_1] [i_1] = ((/* implicit */short) var_11);
                }
                for (signed char i_15 = 3; i_15 < 21; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        arr_60 [i_16] [i_0] [i_15] [i_15] [i_6] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) var_5))));
                        arr_61 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) % (18446744073709551615ULL)))) ? (((/* implicit */int) arr_38 [i_0] [i_1] [i_6] [1ULL] [i_16] [i_6] [i_16])) : (((/* implicit */int) arr_54 [i_0] [20LL] [i_0] [(short)12] [i_15 - 3] [i_16])));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((_Bool) (~(var_8))));
                        var_38 = ((/* implicit */unsigned short) ((((arr_23 [i_0] [i_0] [i_6 + 1] [i_15] [i_17] [i_17]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114)))));
                        arr_66 [i_0] = ((/* implicit */int) ((unsigned int) var_2));
                    }
                    arr_67 [i_0] [i_1] [i_6] [21] [i_0] = ((/* implicit */unsigned short) ((((long long int) (unsigned short)48286)) * (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_0] [i_6] [i_6] [i_6 - 2] [i_6 - 2] [i_15])))));
                    var_39 = ((/* implicit */long long int) arr_23 [i_0] [i_0 + 3] [i_1 + 2] [i_6] [i_6 - 1] [i_6 - 1]);
                }
            }
        }
    }
    for (unsigned short i_18 = 1; i_18 < 12; i_18 += 4) 
    {
        arr_70 [i_18] = ((/* implicit */signed char) var_6);
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (-(((unsigned long long int) 1514532175)))))));
        var_41 = ((/* implicit */unsigned int) min((((max((((/* implicit */long long int) arr_14 [(signed char)20] [i_18] [(signed char)20])), (var_4))) <= (((/* implicit */long long int) ((/* implicit */int) arr_28 [22U]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-80), ((signed char)0))))) > (arr_42 [i_18 + 1] [i_18 - 1] [(short)14])))));
    }
    /* vectorizable */
    for (signed char i_19 = 0; i_19 < 15; i_19 += 4) 
    {
        var_42 += ((/* implicit */unsigned int) var_7);
        var_43 ^= ((/* implicit */long long int) arr_33 [i_19] [i_19]);
        arr_73 [5] = ((/* implicit */_Bool) arr_4 [i_19] [i_19] [(signed char)8]);
    }
}
