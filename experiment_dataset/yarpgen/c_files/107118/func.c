/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107118
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
    var_15 += ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_16 *= ((/* implicit */unsigned short) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    arr_11 [12U] [4] [i_2 - 4] [i_2 - 4] [i_2] &= ((/* implicit */unsigned long long int) ((_Bool) (short)-32763));
                    var_17 = var_11;
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((short) (+(((/* implicit */int) (short)-6344))))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    arr_14 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */long long int) 2374906874U);
                    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [7U] [i_1]) ^ (((/* implicit */int) (unsigned char)70))))) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned long long int) -2643643878918311059LL))));
                    var_20 = ((/* implicit */unsigned int) (_Bool)0);
                }
                var_21 = (_Bool)1;
                arr_15 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) << (((((/* implicit */int) (short)-8616)) + (8633))))));
            }
        }
        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) var_4)))) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0 + 1])) : ((-(((((/* implicit */_Bool) arr_18 [i_5])) ? (-2643643878918311062LL) : (((/* implicit */long long int) arr_8 [i_0] [i_0 - 3] [(short)0] [i_0])))))))))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_7])) ? (arr_4 [i_0] [i_5 + 2]) : (arr_4 [i_0 + 1] [i_0 - 2])))))));
                            var_24 = ((/* implicit */_Bool) arr_16 [i_5] [i_5 - 1] [i_6 - 1]);
                            arr_27 [i_0] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_5 + 1] [i_6 - 1])) ? (arr_19 [i_0 - 1] [i_5 + 1] [i_6 - 1]) : (arr_19 [i_0 - 2] [i_5 + 2] [i_6 - 1]))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_10] [i_6] [i_6 - 1] [i_6] [i_5 + 2])) - (((/* implicit */int) arr_24 [i_10] [i_10] [i_6 - 1] [i_5] [i_5 + 2]))))) ? ((+(((/* implicit */int) arr_23 [i_0] [i_0 + 1] [i_0] [i_6 - 1] [i_5 + 1] [i_6 - 1] [i_6])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [i_10] [i_6] [i_0 + 1])) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) arr_23 [i_10] [i_9] [i_0] [i_6] [i_5] [i_0] [i_0])))))))))));
                            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_0] [i_5] [(signed char)4] [i_6 - 1] [i_0] [i_9] [i_10])) | (((/* implicit */int) (short)-9141))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_4 [i_6 - 1] [i_6 - 1]) < (arr_4 [(unsigned short)6] [i_6 - 1])))) != (((((/* implicit */int) ((short) (short)254))) + (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_0 - 2] [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) arr_36 [i_0 - 1] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_36 [i_0 - 3] [i_0 - 2] [i_0 - 2]))));
                arr_37 [i_11] [i_11] [0LL] &= ((/* implicit */unsigned long long int) ((long long int) (short)-255));
                var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_0 + 1] [i_0 - 1] [i_5] [i_5] [i_5] [i_11]))));
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                var_30 += ((arr_9 [i_0 - 1] [i_0 - 3]) <= (arr_9 [i_0 - 3] [i_0 - 1]));
                arr_40 [i_0] [i_5] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_12] [i_0]))));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                {
                    var_31 = ((/* implicit */long long int) max((1ULL), (((/* implicit */unsigned long long int) (unsigned char)198))));
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (-1061125080) : (((/* implicit */int) arr_7 [i_0 - 3] [i_13] [i_0 - 3])))) | (((/* implicit */int) arr_7 [i_14] [i_13] [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_33 *= ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_15]);
                        var_34 *= ((/* implicit */unsigned int) ((int) (~(arr_38 [i_13] [i_13] [i_13]))));
                        arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((-((-(arr_16 [i_0 - 3] [i_13] [i_14])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */int) ((long long int) arr_44 [i_0]));
                            var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)27062)) - (27043)))));
                            arr_53 [(unsigned short)3] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) var_12);
                        }
                    }
                }
            } 
        } 
        arr_54 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (short)237)))));
    }
    /* vectorizable */
    for (signed char i_17 = 1; i_17 < 12; i_17 += 1) 
    {
        var_37 += ((/* implicit */short) ((((/* implicit */_Bool) 17832167008315286110ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) : ((~(arr_55 [(unsigned short)4])))));
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            for (short i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2))))));
                    arr_64 [i_17 + 2] [i_19] = ((/* implicit */unsigned short) (unsigned char)141);
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_17] [i_17] [i_17] [i_17]))) : (469762048U))))));
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((18446744073709551610ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [(signed char)0] [(signed char)0] [i_17 + 1] [i_17 - 1])))))));
        arr_65 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1340813398U)) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) arr_61 [i_17]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 4) 
    {
        for (unsigned char i_21 = 2; i_21 < 17; i_21 += 1) 
        {
            {
                arr_71 [i_20] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) <= (((/* implicit */int) (short)(-32767 - 1)))));
                var_41 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_21 + 1] [i_21])) * (((/* implicit */int) arr_70 [i_21 - 1] [i_21]))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) ((short) ((((((/* implicit */int) (short)-9141)) + (2147483647))) << (((((/* implicit */int) ((unsigned char) (unsigned short)2))) - (2))))));
}
