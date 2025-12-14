/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107204
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_11 = ((arr_0 [i_0]) != (((/* implicit */int) var_9)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_12 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (arr_0 [i_0])));
                arr_8 [i_0] [i_2] [(_Bool)1] [4ULL] = ((/* implicit */_Bool) ((arr_7 [i_2]) | (arr_7 [i_2])));
                var_13 = ((/* implicit */unsigned short) ((arr_7 [i_2]) | (arr_7 [i_2])));
            }
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_12 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))) / (arr_1 [i_3])));
                var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)33070))));
                arr_13 [(unsigned char)2] [i_1] [i_1] = ((/* implicit */unsigned short) ((4294967295U) / (((/* implicit */unsigned int) var_0))));
                var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_3])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                arr_14 [i_1] [i_3] = ((/* implicit */short) ((17179869183ULL) << (((11157961350890724330ULL) - (11157961350890724317ULL)))));
            }
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_16 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_3));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) / (((/* implicit */int) (unsigned char)240))));
                        var_18 = ((/* implicit */short) ((4294967292U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6])))));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_5)) + (4294967295U)));
                        var_20 = ((/* implicit */short) ((964366579) / (var_2)));
                        var_21 ^= ((((/* implicit */_Bool) 18446744073709551601ULL)) || (((/* implicit */_Bool) (unsigned char)243)));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((1324707934U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0]))))))));
                    }
                    arr_24 [(unsigned short)6] [i_4] [(unsigned short)8] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_1))));
                }
                for (long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    arr_27 [(short)9] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_5)) / (arr_7 [i_0]))) | (var_6)));
                    arr_28 [5LL] [(unsigned short)7] [9ULL] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) || (((/* implicit */_Bool) arr_10 [i_8] [i_4] [3ULL] [i_0]))));
                }
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_23 = ((arr_6 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) var_2)));
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_0) ^ (var_5)))) == (var_6)));
                var_25 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)11476))));
                arr_32 [i_0] [i_1] [i_1] = ((arr_20 [i_1] [i_1] [i_1] [i_0] [i_0]) << (((((/* implicit */int) var_9)) + (21293))));
            }
            var_26 = ((/* implicit */long long int) ((var_3) << (((274877906943LL) - (274877906935LL)))));
            arr_33 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39535)) / (((/* implicit */int) (short)-4414))));
            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_17 [2U] [i_0] [(_Bool)1] [(_Bool)1])) | (11005520182034781226ULL)));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                arr_39 [i_10] [i_10] [i_0] [i_10] = ((/* implicit */long long int) ((-2305843009213693952LL) != (((/* implicit */long long int) 769231785))));
                arr_40 [i_0] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_10] [i_11])) | (((/* implicit */int) arr_3 [i_11] [1ULL] [i_11]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 4; i_12 < 8; i_12 += 3) 
            {
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_12 - 4])))))));
                        var_29 *= ((/* implicit */int) ((((/* implicit */_Bool) 964366579)) && (((/* implicit */_Bool) 8ULL))));
                    }
                } 
            } 
            arr_46 [2LL] [i_10] [i_10] = ((/* implicit */int) ((arr_6 [i_10] [i_10] [i_0] [i_0]) & (arr_6 [i_0] [(short)10] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned int i_14 = 4; i_14 < 8; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_30 = ((17307310532388643327ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))));
                            var_31 -= ((/* implicit */unsigned short) ((17ULL) + (0ULL)));
                            arr_55 [i_10] [i_10] [i_10] [10U] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((-274877906924LL) + (9223372036854775807LL))) << (((((var_6) + (680004159015271434LL))) - (45LL)))));
                            var_32 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) var_1))));
                            arr_56 [i_0] [i_10] [i_0] = ((/* implicit */long long int) ((arr_22 [i_10] [i_16] [i_16] [(short)8] [i_14] [i_10] [i_10]) * (arr_22 [i_10] [i_15] [i_14] [i_10] [i_10] [i_0] [i_10])));
                        }
                        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_14 - 3] [i_14 - 2] [i_14 - 4] [i_14 - 4] [i_14 - 4] [i_14]))) & (3705890259U)));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7))));
                        }
                        for (long long int i_18 = 2; i_18 < 10; i_18 += 1) 
                        {
                            arr_62 [i_0] [i_10] [i_14] [i_15] [i_18] [i_10] = ((/* implicit */short) ((((/* implicit */int) (short)1047)) >= (((/* implicit */int) (unsigned short)13270))));
                            var_35 = ((/* implicit */unsigned short) ((arr_60 [i_14 - 1] [i_14 + 2] [i_14 - 4] [(unsigned char)7]) << (((/* implicit */int) (short)0))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)511)) - (((/* implicit */int) arr_59 [i_14] [i_10] [i_14] [i_15] [3LL] [i_18 - 1]))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */int) (signed char)-43)) | (((/* implicit */int) arr_50 [i_18 - 1] [i_18 - 1] [i_14 - 4] [i_14 + 1])))))));
                            arr_63 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_54 [i_10] [i_18] [i_18 - 2] [i_18 + 1] [i_18 - 1]))));
                        }
                        var_38 = ((/* implicit */unsigned short) ((var_0) <= (((/* implicit */int) (unsigned short)24487))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10] [i_19]))) / (42ULL)));
                var_40 = ((/* implicit */_Bool) ((arr_7 [i_10]) - (arr_7 [i_10])));
                arr_66 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31543))) & (1ULL)));
            }
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                arr_70 [i_10] [i_10] [i_20] [i_0] = ((/* implicit */short) ((421206237U) * (arr_34 [i_0] [i_0] [i_0])));
                var_41 = ((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) var_8))));
            }
            for (short i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                var_42 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (var_5)));
                var_43 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (16140901064495857664ULL)));
                arr_73 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)28766)) * (((/* implicit */int) var_10))));
                var_44 = ((281474976710652ULL) * (281474976710632ULL));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 11; i_24 += 3) 
            {
                arr_82 [i_22] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)1] [i_22] [i_23] [i_24])))));
                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2147483629)))))));
                /* LoopNest 2 */
                for (unsigned short i_25 = 1; i_25 < 10; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_23] [(short)7] [i_25 - 1] [i_23])) >= (((/* implicit */int) (short)18251))));
                            var_47 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [i_25] [2LL] [i_25 + 1] [i_25 + 1] [i_25 + 1] [(_Bool)1])) ^ (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
            var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_45 [2U] [i_23] [i_22] [2U]))));
        }
        arr_88 [i_22] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_71 [i_22] [i_22]))) - (arr_7 [(unsigned short)2])));
        arr_89 [5LL] [i_22] = ((arr_60 [i_22] [i_22] [i_22] [i_22]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        arr_90 [i_22] = ((/* implicit */_Bool) ((2305843009213693952LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43877)))));
        /* LoopSeq 1 */
        for (signed char i_27 = 0; i_27 < 11; i_27 += 3) 
        {
            var_49 -= ((/* implicit */_Bool) ((3826175482326060028ULL) ^ (((/* implicit */unsigned long long int) arr_0 [10U]))));
            var_50 -= ((/* implicit */_Bool) ((arr_85 [(unsigned short)7] [i_22] [i_27] [i_22] [i_22] [i_22] [i_22]) | (var_2)));
        }
    }
    for (int i_28 = 0; i_28 < 21; i_28 += 2) 
    {
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_28]))) < (var_3))))) & (max((((/* implicit */unsigned long long int) arr_93 [i_28])), (max((arr_95 [(unsigned char)20] [(unsigned char)20]), (((/* implicit */unsigned long long int) var_2))))))));
        var_52 = min((min((((/* implicit */long long int) (_Bool)0)), (((var_6) / (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)0)))));
        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min((arr_94 [8U] [i_28]), (((/* implicit */short) (_Bool)1))))), (min((arr_95 [19] [13ULL]), (((/* implicit */unsigned long long int) var_0)))))), (min((max((8035521144738259662ULL), (((/* implicit */unsigned long long int) (unsigned char)150)))), (((/* implicit */unsigned long long int) ((958930769) + (((/* implicit */int) (unsigned short)0))))))))))));
        arr_97 [i_28] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744056529682432ULL)));
    }
    var_54 = ((/* implicit */int) max((var_54), (var_0)));
}
