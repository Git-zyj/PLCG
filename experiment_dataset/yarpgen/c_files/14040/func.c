/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14040
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
    var_10 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_11 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [i_0] [0] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0]);
            arr_8 [i_0] [i_0] [(unsigned short)5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), (max((var_2), (((/* implicit */unsigned long long int) arr_5 [i_0]))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
            {
                arr_11 [i_2] [i_1] [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) (_Bool)0))))));
                arr_12 [i_0] [i_0] [(_Bool)1] [(unsigned char)10] = ((/* implicit */unsigned char) (~((~(((1566311469) ^ (arr_10 [5ULL])))))));
                arr_13 [i_0] [i_0] [i_0] [(signed char)15] = ((/* implicit */unsigned short) arr_3 [i_2] [i_1] [i_0]);
            }
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_17 [i_5] [3U] [i_3] [(_Bool)1] [(signed char)8]), (arr_17 [i_5] [i_4] [i_3] [i_1] [5ULL])))) != (((/* implicit */int) var_1))));
                            var_14 *= ((/* implicit */signed char) 0ULL);
                        }
                    } 
                } 
                arr_20 [i_1] [12] [i_3] = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (min((((/* implicit */unsigned int) (~(arr_10 [16])))), (4247160273U))));
                var_15 ^= ((/* implicit */unsigned long long int) 47807023U);
                var_16 *= ((/* implicit */unsigned int) (+(max((arr_18 [i_0] [i_1] [i_3] [6] [i_3] [i_3 + 1]), (arr_18 [(short)0] [i_1] [i_3] [i_3] [11U] [i_3 + 1])))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (arr_21 [i_0]))))))));
                arr_23 [i_0] [i_1] [5] = min((((18446744073709551589ULL) << (((/* implicit */int) arr_3 [6] [i_1] [i_6 - 1])))), (((/* implicit */unsigned long long int) ((short) ((unsigned long long int) 130816)))));
            }
        }
    }
    for (short i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        arr_27 [i_7] [0U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_26 [i_7 + 1])) + (var_5)))) ? ((+(arr_18 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1]))) : (((((/* implicit */_Bool) arr_18 [7LL] [i_7] [i_7] [(_Bool)1] [i_7 + 1] [i_7 + 1])) ? (arr_18 [12U] [i_7 + 1] [(_Bool)1] [i_7] [i_7 + 1] [i_7 + 1]) : (arr_18 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_17 [i_7] [i_7] [i_7] [i_7 - 1] [i_7]) ? (((/* implicit */int) arr_3 [i_7 + 1] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_22 [i_7 + 1] [14] [i_7 - 1] [i_7]))))) ? (((/* implicit */int) ((arr_15 [i_7 + 1] [i_7 + 1]) >= ((+(arr_16 [i_7] [12])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)16338), (((/* implicit */short) var_6)))))) == (((((/* implicit */_Bool) arr_25 [i_7] [10])) ? (((/* implicit */unsigned long long int) 954899490)) : (arr_14 [(unsigned char)0] [i_7 + 1] [(unsigned char)12]))))))));
        arr_29 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_2 [13ULL])))) ^ (((arr_22 [i_7 + 1] [i_7 + 1] [i_7 + 1] [5]) ? (((/* implicit */unsigned long long int) var_9)) : (var_5))))))));
        /* LoopSeq 2 */
        for (int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            arr_32 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483647)), (var_4)))) ? (((/* implicit */int) ((signed char) arr_26 [(short)10]))) : (max((arr_5 [i_7 + 1]), (((/* implicit */int) arr_19 [(unsigned char)2] [i_7 - 1] [(short)4] [7ULL] [6U]))))))) || ((!(((/* implicit */_Bool) arr_5 [i_7]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                var_18 = ((/* implicit */int) (_Bool)1);
                arr_35 [i_8] [i_8] [i_7 - 1] [i_8] = ((/* implicit */_Bool) var_9);
            }
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            var_19 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_7 - 1]))));
            arr_38 [i_7] [(_Bool)1] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_7 + 1] [6U] [i_7 - 1] [11])) ? (((/* implicit */int) arr_4 [i_7 - 1] [i_10 + 1])) : (((/* implicit */int) arr_17 [i_7] [i_7 + 1] [i_7] [(unsigned char)9] [i_7])))))));
        }
    }
    var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32763)) ? (-9223372036854775795LL) : (((/* implicit */long long int) (-2147483647 - 1)))))), (((((/* implicit */unsigned long long int) 1917509004U)) * (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -353700909)) : (var_8)))))));
    /* LoopSeq 1 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        arr_42 [i_11] [(signed char)3] = ((/* implicit */unsigned short) ((unsigned int) min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_11 - 1])))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_47 [(unsigned short)8] [(signed char)0] [(_Bool)1] |= ((/* implicit */long long int) ((unsigned long long int) (+(((var_3) / (((/* implicit */long long int) ((/* implicit */int) (short)32763))))))));
            arr_48 [(unsigned short)8] [(unsigned short)8] |= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_44 [i_11 - 1] [i_11 - 1])) ? (arr_44 [i_11] [i_11 - 1]) : (arr_44 [(short)5] [i_11 - 1])))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_31 [(short)0])))) ? (((unsigned long long int) (signed char)-68)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_31 [2U])))))))));
                var_23 = ((/* implicit */int) var_9);
                /* LoopSeq 2 */
                for (int i_14 = 2; i_14 < 6; i_14 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_14 + 1] [5] [i_14] [i_14 - 2]))))) ? (((arr_22 [i_14 + 1] [i_11] [i_11] [i_11]) ? (((/* implicit */int) arr_22 [i_14 - 1] [i_13] [(signed char)8] [i_11 - 1])) : (((/* implicit */int) arr_22 [i_14 + 4] [i_12] [(signed char)6] [i_12])))) : (((/* implicit */int) arr_22 [i_14 + 3] [12] [i_11 - 1] [(signed char)4]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_57 [4] [i_12] [i_11 - 1] [i_14] [i_12] = ((/* implicit */int) 3725084488U);
                        arr_58 [i_11] [i_13] [1ULL] [i_12] = ((/* implicit */unsigned long long int) arr_21 [i_15]);
                        arr_59 [i_14] [i_12] [(_Bool)1] [i_12] [i_11 - 1] = ((/* implicit */long long int) ((int) arr_18 [i_13] [i_14 + 4] [i_13] [i_13] [i_13] [i_13]));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_11 - 1] [i_11 - 1])) ? (arr_39 [i_11 - 1] [i_11 - 1]) : (((/* implicit */long long int) arr_9 [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                    }
                }
                for (signed char i_16 = 2; i_16 < 7; i_16 += 2) 
                {
                    arr_63 [i_11 - 1] [i_12] [i_13] [i_16] [i_16] = (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_41 [i_11 - 1])))))));
                    arr_64 [i_12] [i_12] [i_13] [i_16 - 2] = ((/* implicit */int) arr_41 [i_11]);
                }
            }
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_67 [i_11] [i_12] [i_12] [i_17] = ((/* implicit */unsigned long long int) ((short) (-2147483647 - 1)));
                arr_68 [i_12] = ((/* implicit */long long int) 18446744073709551589ULL);
                arr_69 [i_11 - 1] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 71137655))) | (1418612242)));
                arr_70 [i_11] [i_12] [i_17] [i_17] = ((/* implicit */unsigned char) var_2);
            }
        }
        arr_71 [(_Bool)0] [(short)1] &= ((/* implicit */short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [5])))))))));
    }
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) 2018258455U)), (12565310239734695772ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_4), (((/* implicit */unsigned long long int) var_8)))) < (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7795))) : (26ULL))))))) : (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_4))))))))));
}
