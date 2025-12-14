/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169241
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) 3335859722576720388LL);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) 2958682334U)) : (824252622743853035ULL)));
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1336284961U);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                            arr_25 [i_0] [i_5] [i_6] [12LL] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_0] [11U] [13] [i_0] [i_0] [i_5]))));
        }
        for (signed char i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(short)2] [(short)2] [i_9] [i_9 + 2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30415))) : (arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_26 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30415)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) * (var_9)))) ? (min((2958682345U), (((/* implicit */unsigned int) arr_4 [i_9] [i_9])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4080840897348669738LL))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [1LL] [i_0] [i_9] [i_9 - 1])) ? (var_10) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [8ULL] [8ULL] [i_9 + 2] [i_9 - 1])))))))))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            arr_36 [i_0] [14U] [i_10] [14U] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_28 [(unsigned char)3] [16ULL] [i_9])) : (arr_32 [(unsigned short)2] [16ULL] [i_0])));
                            arr_37 [i_9 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_5 [i_10] [i_0])) / (((((/* implicit */_Bool) arr_21 [(short)3] [i_9 + 2] [13] [i_11] [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5759035765755836733LL))))) ^ (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) 2958682334U)) : (-1502686913904926586LL)))));
                            var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */int) arr_34 [(unsigned short)7] [i_11] [i_10] [(unsigned short)7] [(unsigned short)7])) >= (((/* implicit */int) arr_11 [i_12] [i_11] [8LL] [i_9] [(short)9])))) ? (((/* implicit */int) arr_19 [i_0] [14LL] [i_10] [6LL])) : (((/* implicit */int) ((2091119095U) < (((/* implicit */unsigned int) arr_6 [i_9] [i_0] [i_0]))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(1023))))));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 2; i_14 < 14; i_14 += 4) 
            {
                arr_43 [i_0] [i_13] [i_14] = ((/* implicit */unsigned char) arr_17 [i_0]);
                arr_44 [i_0] [(signed char)10] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 4496293486722439719ULL))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0))))));
                var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_14] [i_14])) ? (var_11) : (((/* implicit */int) var_16))))) ? (-1189119418796907324LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28131)))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_13] [(signed char)1]))))) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_14 - 1] [0])) : ((+(((/* implicit */int) arr_30 [i_0] [i_0] [i_14]))))));
                var_25 &= var_13;
            }
            var_26 += ((/* implicit */unsigned long long int) var_5);
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_13] [i_0] [i_13])) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_0] [(signed char)14] [i_13])) + (79))))))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26150)) ? (-8546903847266112415LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34849)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13] [i_0] [i_0] [(short)10]))) : (((((/* implicit */_Bool) var_2)) ? (17622491450965698581ULL) : (17622491450965698581ULL)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_6))))));
        var_30 = ((/* implicit */unsigned long long int) max((var_30), ((~(824252622743853035ULL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                arr_52 [i_15] [i_16 + 1] [i_15] |= ((/* implicit */int) arr_12 [i_15] [i_16 - 1] [i_15] [2LL] [i_15] [i_16] [8]);
                var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_15] [i_16 - 1] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29872))) : (arr_12 [i_15] [i_15] [i_15] [i_15] [i_17] [i_17] [i_16])));
            }
            /* LoopSeq 3 */
            for (unsigned int i_18 = 1; i_18 < 15; i_18 += 2) 
            {
                arr_55 [i_15] [i_15] [i_18] &= ((/* implicit */unsigned short) var_7);
                arr_56 [i_15] [i_18] [16ULL] [i_15] = ((/* implicit */long long int) ((int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_15] [i_15] [i_15]))) : (arr_17 [i_18]))));
            }
            for (long long int i_19 = 2; i_19 < 15; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 2; i_20 < 16; i_20 += 2) 
                {
                    arr_61 [i_15] [i_15] [i_15] [i_20] [i_15] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_15] [i_20] [i_20] [i_20]))))) ? (((((/* implicit */_Bool) 17622491450965698581ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_15])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) arr_8 [i_15] [i_16])))))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) arr_30 [i_19] [i_16] [i_15])) ? (15603791082901767059ULL) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_28 [i_16 - 1] [(short)2] [(unsigned char)9])))))))));
                    arr_62 [(signed char)16] [(unsigned short)9] [i_15] [(unsigned short)9] [i_15] &= ((/* implicit */unsigned char) (-(3ULL)));
                }
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_46 [i_15] [i_16 + 1]))));
            }
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                arr_67 [i_15] [i_16] [i_21] [i_16] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 17622491450965698599ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(signed char)5] [i_16] [i_16 + 1]))) : (6436074074308976661ULL))));
                var_34 = ((/* implicit */int) 9059509120002453047LL);
            }
            var_35 = ((/* implicit */signed char) (unsigned char)64);
        }
    }
    for (unsigned long long int i_22 = 1; i_22 < 12; i_22 += 4) 
    {
        arr_71 [i_22] [9ULL] = 18ULL;
        var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5859))) : (13950450586987111909ULL)))) ? (((/* implicit */int) (unsigned short)27591)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (2088885927713879959ULL)))) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) arr_30 [i_22 + 1] [i_22 + 1] [i_22 + 1]))))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2088885927713879953ULL)) ? (2088885927713879953ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27591)))))) ? (((((/* implicit */_Bool) (short)14164)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_22]))))) : (((((/* implicit */_Bool) 9059509120002453066LL)) ? (3804284461834102674ULL) : (((/* implicit */unsigned long long int) 127))))))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */int) arr_38 [i_22 + 2] [14LL] [i_22])) / (((/* implicit */int) arr_38 [i_22 + 1] [i_22 + 1] [i_22 - 1])))))))));
    }
    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) 17622491450965698601ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))));
}
