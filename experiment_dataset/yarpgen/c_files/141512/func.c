/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141512
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
    var_19 += ((/* implicit */unsigned int) var_1);
    var_20 += ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [5U] [5U] = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1] [i_0 - 1]))) : (((/* implicit */int) ((signed char) arr_1 [i_0 + 2] [i_0 - 1])))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) arr_3 [i_1 - 1])))) : ((-(((/* implicit */int) arr_3 [i_1 + 1])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) var_0);
                arr_11 [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_2 - 1]);
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned short)64490))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (((unsigned short) (signed char)109))))))))));
            }
            for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                var_26 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (~((~(1610612736)))))), (min((arr_10 [i_1 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [4U] [i_1] [i_2 - 2])) ? (((/* implicit */int) var_10)) : (var_9))))))));
                var_27 = ((/* implicit */signed char) (unsigned short)40154);
                var_28 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 1] [i_2 + 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_2 - 1]))))), (((((/* implicit */_Bool) 1042773709324526646ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4 + 1] [i_4 + 1] [i_2 + 1])) : (arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_2 - 2])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    var_29 = ((/* implicit */signed char) ((((arr_14 [i_1] [i_1 + 1] [(_Bool)1] [i_1 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))))) ? (((/* implicit */unsigned long long int) -386956569)) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */unsigned long long int) 1342667354U)) : (arr_14 [i_1] [i_2] [i_2] [i_2])))));
                    var_30 += ((unsigned int) (unsigned short)12989);
                }
            }
            for (short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_21 [i_1] [i_1] [3] [3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_1] [i_6])) || (((/* implicit */_Bool) (signed char)99)))) ? ((~(arr_19 [i_1] [i_2] [i_2] [i_2 + 1]))) : (((/* implicit */int) (short)-31084))));
                var_31 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [0ULL] [i_2] [6] [(_Bool)1]))) : (1176296150U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 - 2] [i_1 - 2])))))) : (arr_14 [i_1 - 2] [i_1] [10ULL] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
                arr_22 [i_1] [i_1 + 1] [i_1] [(_Bool)1] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_18) : (((/* implicit */int) (unsigned short)3072))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [15U])))));
            }
            for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_32 |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)12989))));
                var_33 ^= ((((/* implicit */int) min((arr_12 [i_1 - 2]), (arr_12 [i_1 - 1])))) << (((max((((/* implicit */unsigned long long int) (_Bool)1)), (13271999362975482210ULL))) - (13271999362975482196ULL))));
                var_34 = (((!(((/* implicit */_Bool) (signed char)-124)))) ? (((/* implicit */int) arr_8 [(unsigned short)8] [i_2] [i_7])) : (max((((/* implicit */int) (unsigned short)37412)), (2147483647))));
            }
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_2 + 1] [i_2 - 1])), (arr_17 [i_2] [(short)5] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [2ULL])) && (((/* implicit */_Bool) arr_13 [i_1 - 1]))))) : ((-(arr_9 [(unsigned short)12] [i_2] [(unsigned short)12] [(unsigned short)12])))));
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 15035661899116734510ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) || (((/* implicit */_Bool) arr_6 [i_1 - 2]))))) : (((/* implicit */int) ((short) arr_6 [i_1 - 2])))));
            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [6U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_9 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) -980041277)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (10780621605307948044ULL))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            arr_29 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_8 + 1] [i_8] [i_8] [i_1])) ? (3388114019U) : (((/* implicit */unsigned int) arr_19 [i_8 - 1] [i_8] [i_8] [i_8]))));
            /* LoopSeq 3 */
            for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_9 + 3] [i_9 + 3])) ? (arr_27 [i_1] [i_1]) : (arr_27 [(signed char)7] [i_9 + 2])));
                arr_32 [i_1] [i_8 - 1] [i_9] [i_8] = ((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_9] [i_9] [i_1]);
            }
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [11ULL] [i_8 + 1] [i_1 - 2]))));
                arr_37 [i_1] = ((/* implicit */short) arr_31 [i_1] [12] [i_10]);
            }
            for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
            {
                var_39 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (short)510)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)31084)))));
                var_40 += ((/* implicit */_Bool) (signed char)127);
                var_41 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_1] [i_8 - 1] [(short)7] [i_11]))));
            }
            arr_40 [i_1] [i_1] [(short)1] = ((/* implicit */signed char) arr_33 [6U] [i_8]);
            arr_41 [(unsigned char)3] [i_8] [i_8] = ((/* implicit */unsigned short) ((arr_27 [i_1 - 2] [i_8 - 1]) + (arr_20 [i_1 - 2] [i_8 + 1])));
        }
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (signed char)112)))))) ? ((~(arr_14 [i_1] [i_1 - 2] [(unsigned short)10] [(signed char)8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)97))))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    var_43 += ((/* implicit */unsigned char) (~(13052424292028846681ULL)));
                    arr_50 [(short)3] [i_14] [i_1] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_15 [i_1 + 1] [i_14]) : (arr_15 [i_1 - 1] [i_14])));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_44 = ((/* implicit */unsigned int) min((arr_5 [i_12]), (((((/* implicit */int) arr_52 [i_1 - 1] [(signed char)8] [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_1 - 2]))))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        arr_57 [i_16] [i_12] [i_12] [(signed char)1] [i_15] [i_16] = ((/* implicit */short) (+(((/* implicit */int) max((arr_12 [i_1 + 1]), (arr_12 [i_1 - 1]))))));
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) min(((unsigned short)28), ((unsigned short)63599))))));
                        var_46 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13052424292028846681ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_44 [i_16] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_53 [i_16] [2] [i_16] [i_16])))) : ((-(7731365150387270703ULL))))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 12; i_17 += 4) 
                    {
                        arr_61 [i_1] [i_1] [i_1] [(unsigned short)12] [(short)10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                        var_47 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_9)))))) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)10))) ? (((((/* implicit */_Bool) arr_51 [i_1 - 2] [(signed char)12] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (-386956557))) : (((/* implicit */int) (unsigned short)2230)))) : (((/* implicit */int) ((_Bool) (signed char)54)))));
                        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((((_Bool) var_13)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [5U] [(signed char)1] [i_13])) ? (((/* implicit */int) (unsigned short)25493)) : (((/* implicit */int) arr_44 [i_15] [i_17])))), (((((/* implicit */_Bool) 386956557)) ? (-386956555) : (((/* implicit */int) (short)0))))))) : (max((((unsigned int) (signed char)-119)), (((/* implicit */unsigned int) ((unsigned char) var_10))))))))));
                    }
                    arr_62 [i_1] [(unsigned short)11] [i_12] [(unsigned short)11] [1U] [(unsigned short)0] = ((/* implicit */_Bool) ((short) (signed char)127));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_1 - 1])), (arr_25 [i_1] [i_1] [i_1 - 2] [i_1])))) ? (((((/* implicit */_Bool) 7666122468401603572ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((var_4) ? (4056005909393322874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18467))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)121))))))));
                        var_49 = ((/* implicit */_Bool) (~(-521730485)));
                    }
                }
                for (unsigned long long int i_19 = 3; i_19 < 12; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_20 = 3; i_20 < 12; i_20 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13] [i_19 + 1] [i_20] [i_20] [i_20 + 1] [i_20]))) : (4294967292U)));
                        var_51 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_1 - 2]))));
                        arr_71 [i_1 - 2] [i_1 - 2] [4] [i_20] [i_20] = ((unsigned int) (short)18624);
                    }
                    var_52 = ((/* implicit */signed char) arr_56 [i_1] [i_1] [i_1 - 2] [(_Bool)1] [7U] [(signed char)6]);
                    var_53 = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */_Bool) 7897243670239194813ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))), (((int) (signed char)-12)))));
                }
                arr_72 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((int) var_16)), (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))) ? (4220679427U) : (((/* implicit */unsigned int) arr_19 [i_1] [4ULL] [i_12] [(signed char)9]))));
                arr_73 [i_1 + 1] [i_12] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)62873))), (min((((/* implicit */unsigned int) (unsigned short)31996)), (var_6)))))) ? (((/* implicit */int) ((short) 18373496023354865122ULL))) : (386956574)));
            }
        }
    }
    var_54 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
}
