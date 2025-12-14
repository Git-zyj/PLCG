/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127291
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)205)), ((unsigned short)58476)))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (2147483647)))) : (arr_3 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -2149256337911224091LL)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [4]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_2])) : (var_3)))))));
                        var_12 = ((/* implicit */unsigned int) (~(((min((-2149256337911224091LL), (-3831562261677720520LL))) / (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-87), (arr_6 [i_0] [i_1] [i_2 + 1] [i_3])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                arr_15 [i_0] [i_4 + 1] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)198);
                var_13 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)127)))) ? ((~(((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)60778)) > (((/* implicit */int) (signed char)85)))))));
                arr_16 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((5962862511854015880ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned char)9] [i_4] [i_5])))));
                var_14 = (unsigned short)29896;
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_9 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]))));
            }
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                var_16 = ((/* implicit */short) (+((-(((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_6] [i_6] [i_0]))))));
                var_17 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((18446744073709551599ULL), (((/* implicit */unsigned long long int) 9223372036854775777LL))))) ? (arr_9 [i_4] [0] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14647382594176642810ULL))))))))));
                var_18 -= ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 16583113885778670172ULL))));
                            var_20 |= ((/* implicit */short) (signed char)-80);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)64466)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_9] [i_9])) >> (((2147483631) - (2147483611)))))) : (((long long int) (unsigned char)126))));
                arr_29 [i_0] [i_4 - 1] [i_9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32405)) + (((/* implicit */int) arr_21 [i_9] [20ULL] [i_9] [i_9]))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15204292739518217356ULL)))))));
            }
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) (unsigned char)114)))))));
        }
        for (short i_10 = 1; i_10 < 23; i_10 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_22 [i_0] [i_0] [i_0])), (max((((/* implicit */short) arr_19 [i_0] [i_0] [i_10] [i_10])), (arr_10 [i_0] [i_0] [i_0])))))) + (((/* implicit */int) (short)18748))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_30 [i_0]))));
        }
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            var_26 &= ((/* implicit */short) max((((/* implicit */unsigned short) arr_23 [i_11] [i_11] [i_11] [i_0] [i_0] [i_0] [i_0])), ((unsigned short)65526)));
            arr_34 [i_11] [i_11] [i_0] = ((/* implicit */short) arr_9 [i_0] [i_11] [i_0] [i_11] [i_11] [23LL]);
            arr_35 [i_0] [i_0] [i_11] = ((/* implicit */int) min((min((max((((/* implicit */long long int) (unsigned short)20226)), (-1756844780652111722LL))), (((/* implicit */long long int) (~(2147483647)))))), (((/* implicit */long long int) arr_8 [i_11] [i_11] [i_11] [i_11] [i_11]))));
        }
    }
    var_27 = var_1;
    /* LoopSeq 1 */
    for (signed char i_12 = 2; i_12 < 13; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 13; i_13 += 3) 
        {
            for (short i_14 = 2; i_14 < 14; i_14 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_12 - 1])) < (((/* implicit */int) (short)-24749)))))));
                            var_29 = (unsigned short)63295;
                            var_30 -= ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((11172148230701045547ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_15]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36336)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)148))))));
                            arr_51 [i_12 + 2] [i_13 - 2] [(signed char)2] [i_15] [i_16] [i_15] = ((/* implicit */short) (unsigned short)2604);
                            arr_52 [i_12 + 2] [i_15] [i_14] [i_15] [i_16] = ((/* implicit */long long int) (~(arr_30 [i_15])));
                        }
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                        {
                            var_31 = ((var_3) >> (((/* implicit */int) (_Bool)1)));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((arr_24 [i_12 - 2] [i_13 - 4] [i_14] [i_15] [i_13 - 4] [i_12 - 2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [i_12] [i_13 - 1] [i_14] [i_15] [i_17] [i_12])) ^ (((/* implicit */int) (unsigned char)173))))))))));
                            var_33 = ((/* implicit */unsigned short) arr_13 [i_14 - 2]);
                        }
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */short) (-(arr_2 [i_14 - 1])));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12 + 1])))))))));
                        }
                        var_36 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32395))) != (arr_7 [i_12])))));
                    }
                    for (int i_19 = 0; i_19 < 15; i_19 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_38 [i_12] [i_13 - 1] [i_14])), (arr_47 [i_12 - 1] [i_12 - 1] [i_14 + 1] [i_19])))), (max((arr_54 [i_12] [i_13] [i_14 - 1]), (((/* implicit */unsigned short) (unsigned char)19)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_12 [i_12] [i_13] [i_14])))) ? (((/* implicit */int) arr_47 [0] [i_13 - 2] [(short)14] [i_13])) : (((/* implicit */int) arr_63 [i_14] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14]))));
                            arr_64 [i_12] [i_12 - 2] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (+(3178576288166607308ULL)));
                            var_39 *= ((/* implicit */unsigned char) var_6);
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) arr_53 [i_12] [i_13] [i_14] [i_19] [14ULL] [i_13]);
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -468680497)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned char)118))));
                        }
                    }
                    for (unsigned char i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        var_42 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_46 [i_12] [i_12] [i_12 + 2] [i_12] [i_12 - 2] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_12 - 2] [i_13 - 3] [(unsigned short)4] [(_Bool)1] [(unsigned short)4])))))) ? (-13) : (((/* implicit */int) ((((/* implicit */int) arr_43 [i_22] [i_13] [i_14])) > (((/* implicit */int) (unsigned char)145))))))) ^ (min((max((((/* implicit */int) (unsigned char)187)), (2131287228))), (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_26 [i_12 + 2] [i_13 - 1] [i_14]))))))));
                        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) arr_33 [i_13] [i_13]))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        arr_73 [i_23] [i_13] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-32))))))) ? (13950064425088153312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) -4371434646199458199LL)))), ((!(((/* implicit */_Bool) var_3))))))))));
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) 22ULL))));
                        arr_74 [(short)12] [i_13 + 2] [(short)12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_71 [i_12] [i_12]) << (((((/* implicit */int) (unsigned short)2616)) - (2575))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)11)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_12 - 2] [i_13 + 2] [i_14 - 1])) ? (((/* implicit */int) arr_17 [i_13 - 3])) : ((-(((/* implicit */int) arr_0 [i_13]))))))) : (max((arr_20 [i_12] [i_13] [i_14] [i_23]), (((/* implicit */unsigned int) arr_70 [1] [1] [i_23] [i_23]))))));
                    }
                    for (int i_24 = 0; i_24 < 15; i_24 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)84)), ((unsigned short)8176))))));
                        var_46 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41122)))))) : (max((4496679648621398303ULL), (((/* implicit */unsigned long long int) arr_59 [i_12])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_12 - 2])) ^ (((/* implicit */int) arr_33 [i_12 + 2] [i_12 - 1])))))));
                    }
                    for (int i_25 = 0; i_25 < 15; i_25 += 4) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((int) (unsigned short)65523)), (min((arr_13 [i_25]), (((/* implicit */int) var_7))))))), ((-(max((var_4), (((/* implicit */unsigned long long int) arr_48 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14 - 1]))))))));
                        var_48 ^= ((/* implicit */signed char) max((max((max((3), (((/* implicit */int) arr_1 [i_12 - 2])))), (((/* implicit */int) max((arr_70 [i_12] [i_12 + 2] [i_12] [i_12 - 2]), (arr_38 [(unsigned short)1] [i_13] [i_14])))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_12] [i_12 + 1] [i_12] [i_12])) || (((/* implicit */_Bool) 1ULL)))))))));
                        arr_80 [i_12] [11] [i_14] [i_25] [11ULL] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 420239546U)) ? (((/* implicit */int) (short)-17718)) : (((/* implicit */int) (unsigned char)99))))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)127)), (1685176570)))) : (-6549542958002148088LL)))) ? (-2488951742434093262LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_12 + 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_26 = 3; i_26 < 11; i_26 += 2) 
                        {
                            var_49 = ((/* implicit */short) arr_37 [i_13]);
                            var_50 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_12 - 2])))))));
                        }
                    }
                    var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_0 [i_12 - 1]))) >= (((/* implicit */int) ((((/* implicit */int) (short)32424)) <= (((/* implicit */int) arr_0 [i_12 + 1]))))))))));
                    var_52 |= (~(-6549542958002148088LL));
                }
            } 
        } 
        var_53 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (arr_23 [i_12] [i_12] [i_12] [i_12 - 1] [(short)17] [i_12 - 2] [i_12])))) ? ((+(max((((/* implicit */long long int) (unsigned char)175)), (2251799813685247LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_27 = 3; i_27 < 14; i_27 += 1) 
    {
        var_54 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_0 [i_27 - 2])))), (((/* implicit */int) min((((/* implicit */short) arr_21 [i_27 + 1] [i_27] [i_27 - 2] [i_27])), (var_7))))));
        var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_7), (((/* implicit */short) arr_17 [i_27])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_27 - 3]))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) 1946929566)))))))));
    }
    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 3) 
    {
        var_56 *= ((/* implicit */long long int) arr_31 [i_28] [i_28] [i_28]);
        var_57 += ((/* implicit */unsigned short) ((int) min(((short)(-32767 - 1)), (var_5))));
        var_58 -= ((/* implicit */_Bool) 6549542958002148086LL);
    }
    var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((4136748009969438497ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126)))))))) : (((/* implicit */int) max((var_2), (min((((/* implicit */short) (unsigned char)140)), ((short)21255))))))));
}
