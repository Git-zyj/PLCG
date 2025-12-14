/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116305
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
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 4] [i_0 - 4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4350110089307537070ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 3] [i_1 - 1])) <= (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_15))))))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 3] [15LL] [(signed char)10]))) : (max((((/* implicit */unsigned long long int) (short)-7390)), (arr_5 [i_1] [i_1 - 1] [i_1 + 1])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (4350110089307537091ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 3] [i_1 - 3])))))) ? (((/* implicit */int) min((arr_4 [i_0 - 4] [i_1 - 2] [i_1 - 3]), (arr_4 [i_0 - 4] [i_1 + 1] [i_1 - 3])))) : (((/* implicit */int) max((arr_4 [i_0 + 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned char) var_4)))))));
                                var_17 = ((/* implicit */unsigned int) arr_13 [i_3] [i_1] [i_1] [(unsigned short)16] [i_4]);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_1]))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 2])) ? (min((var_9), (((/* implicit */unsigned int) 1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0])))));
                    var_19 ^= ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)0)));
                    var_20 += ((/* implicit */unsigned int) (unsigned short)51518);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 14096633984402014515ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (36026597995708416ULL)));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) arr_2 [i_6] [i_6]);
                    arr_26 [i_5] [i_6] [i_7 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_5])), (var_10)))) ? (arr_16 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_7]))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7] [i_6])))));
                    arr_27 [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (arr_9 [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]) : (arr_9 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1]))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 3; i_8 < 12; i_8 += 3) 
                    {
                        var_23 = ((short) ((((/* implicit */_Bool) 14096633984402014545ULL)) ? (((/* implicit */int) arr_1 [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_1 [i_7 - 1] [i_7 + 1]))));
                        var_24 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_20 [i_5] [i_6] [(short)12]))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        arr_34 [(short)8] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) ((max((arr_29 [i_5] [i_7 - 1] [i_7 + 1] [i_9]), (min((var_14), (((/* implicit */long long int) arr_12 [(signed char)5])))))) - (min((((((/* implicit */_Bool) 14096633984402014550ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14018))) : (-9LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51518)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_6] [i_7] [i_7])))))))));
                        arr_35 [i_5] [i_5] [i_9] = ((/* implicit */long long int) ((max((18236390916647591419ULL), (((/* implicit */unsigned long long int) -8012344896072510312LL)))) >> (((max((arr_16 [i_7 - 1]), (((/* implicit */unsigned int) arr_3 [i_7 + 1])))) - (4294967230U)))));
                        /* LoopSeq 1 */
                        for (int i_10 = 2; i_10 < 13; i_10 += 2) 
                        {
                            arr_39 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_14 [i_7 - 1]);
                            arr_40 [i_9] [i_6] [i_7] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_10] [i_7 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_9] [i_7 - 1])))) % (((arr_15 [i_7 + 1] [i_7 + 1] [i_10 + 1] [i_10 + 2]) ? (((/* implicit */int) ((signed char) 4350110089307537100ULL))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (short)30272))))))));
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_38 [i_6] [i_7 - 1] [i_9] [(signed char)6] [i_10 + 1] [i_9] [i_10 - 1]))) ? (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (3493233206U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_7]))) : (18446744073709551615ULL))))) : (((var_6) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned short)33550)) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) (unsigned short)10)), (14564506981884753774ULL))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (var_13) : (var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) + (((/* implicit */int) (_Bool)1))))) ? (((arr_21 [i_5] [i_7] [i_10]) - (((/* implicit */long long int) ((/* implicit */int) (short)-30852))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (arr_16 [i_9])))))))));
                            arr_41 [i_5] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) 1ULL);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        for (short i_12 = 2; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_47 [i_5] [i_6] [i_7] [i_11] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_5)))) ? (((arr_2 [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)11] [i_11 + 3]))) : (arr_5 [i_5] [i_6] [i_7]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (-3)))))) * (((((/* implicit */unsigned long long int) arr_10 [i_11 + 3] [i_11] [i_7 + 1])) % (18446744073709551615ULL)))));
                                var_27 = ((/* implicit */_Bool) var_6);
                                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)241)), (arr_7 [i_11 - 1] [i_12 + 1] [i_7 + 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        arr_50 [i_13] = ((/* implicit */short) (unsigned short)63809);
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            for (unsigned short i_15 = 1; i_15 < 22; i_15 += 1) 
            {
                {
                    var_30 *= ((/* implicit */_Bool) 18446744073709551588ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) 4294967278U))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (4350110089307537094ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_17] [i_17] [i_17]))) / (11822512512786985998ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_13] [i_13]))) <= (var_13)))), (var_15)))))));
                                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_56 [(unsigned char)9] [i_16] [i_16 - 3] [i_15] [i_14] [i_13]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_48 [i_13]))) >= (((((/* implicit */_Bool) arr_48 [i_13])) ? (arr_48 [i_13]) : (arr_56 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_34 = arr_56 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18];
        /* LoopSeq 1 */
        for (int i_19 = 1; i_19 < 8; i_19 += 4) 
        {
            var_35 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_8))));
            arr_66 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned short) arr_53 [i_19 + 1] [i_19 + 1] [i_19 + 2] [i_19])), (arr_45 [i_19 + 1] [i_19] [i_19 - 1]))));
            arr_67 [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_19] [i_19 + 2])) ? (((((/* implicit */_Bool) 3619969380970865620LL)) ? (((/* implicit */int) arr_1 [i_19] [i_19 + 2])) : (((/* implicit */int) arr_32 [i_19 + 2] [i_19 - 1] [i_19] [i_19] [i_19 + 2])))) : (((((/* implicit */int) arr_32 [i_19 + 2] [i_19 - 1] [i_19] [i_19] [i_19 + 2])) << (((/* implicit */int) (signed char)3))))));
            arr_68 [i_18] [1LL] [i_18] = ((/* implicit */unsigned char) arr_10 [i_19] [i_19 + 2] [i_19]);
        }
    }
    for (unsigned char i_20 = 1; i_20 < 18; i_20 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_21 = 4; i_21 < 17; i_21 += 4) 
        {
            for (unsigned short i_22 = 0; i_22 < 19; i_22 += 3) 
            {
                for (short i_23 = 0; i_23 < 19; i_23 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 19; i_24 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_14)), (((min((arr_73 [i_23] [i_24]), (((/* implicit */unsigned long long int) (short)-30852)))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)5)))))))));
                            var_37 = ((/* implicit */signed char) ((int) min((((((/* implicit */unsigned long long int) var_1)) * (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_24] [i_21] [i_22]))) : (var_1)))))));
                            arr_82 [i_20 + 1] [i_20] [i_20 - 1] [i_22] [i_20] = ((/* implicit */unsigned char) arr_12 [i_20 - 1]);
                            arr_83 [i_22] [i_23] [i_23] [i_23] = (!(((/* implicit */_Bool) arr_11 [i_20] [i_23] [(short)6] [i_23] [i_21 - 3])));
                        }
                        var_38 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_20] [i_20 - 1] [i_21] [i_23])), (66741518U)))) ? (((((/* implicit */int) ((arr_77 [i_22] [(signed char)4] [i_22]) && (((/* implicit */_Bool) arr_49 [i_23]))))) << (((/* implicit */int) arr_69 [i_22] [i_21 + 2])))) : (((/* implicit */int) min((arr_15 [i_20 + 1] [i_20] [i_20 - 1] [i_20 - 1]), (arr_15 [i_20 + 1] [(short)0] [i_20 + 1] [i_20])))));
                        var_39 += ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_4 [i_21 - 4] [(short)3] [i_23]))))));
                    }
                } 
            } 
        } 
        arr_84 [i_20] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) arr_55 [i_20] [i_20])), (arr_56 [i_20 + 1] [i_20 - 1] [i_20 + 1] [(unsigned char)8] [i_20] [i_20]))))) ? (max((((/* implicit */int) arr_12 [i_20 - 1])), (((((/* implicit */_Bool) arr_72 [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_7 [i_20] [18ULL] [18ULL])) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) ((short) arr_73 [i_20 + 1] [i_20 - 1])))));
        arr_85 [i_20 - 1] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)12625)) ? (((((/* implicit */_Bool) arr_71 [i_20] [i_20])) ? (min((arr_73 [i_20 + 1] [i_20 + 1]), (((/* implicit */unsigned long long int) -2103826082711090833LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_20] [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_0 [i_20])) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_20] [i_20 - 1] [i_20] [i_20] [i_20])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_75 [i_20] [i_20] [i_20 - 1])) : (((((/* implicit */_Bool) 14096633984402014515ULL)) ? (var_12) : (((/* implicit */unsigned long long int) arr_81 [i_20] [(short)2]))))))));
        var_40 = ((/* implicit */short) 14096633984402014516ULL);
    }
}
