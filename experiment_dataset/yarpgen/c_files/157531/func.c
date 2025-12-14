/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157531
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 &= ((/* implicit */unsigned char) (~(-643126427)));
                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((((_Bool)1) ? (6400598669047345678ULL) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) 13933731492812940103ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))) : (max(((~(13933731492812940103ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [(short)3])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((int) ((signed char) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 -= ((/* implicit */signed char) 4294967287U);
                            }
                            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                            {
                                arr_18 [i_5] [10U] [i_0] [i_1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_10);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_0))));
                            }
                            var_20 *= ((/* implicit */unsigned char) max((var_0), (((((/* implicit */_Bool) 8190)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_3])) : ((+(((/* implicit */int) (unsigned char)16))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((arr_20 [i_6] [i_1] [i_6]) <= (var_11))))));
                    arr_23 [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_6]);
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_22 -= ((/* implicit */unsigned char) var_8);
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_7] [i_1] [i_6])))) || (((/* implicit */_Bool) var_0)))))));
                        var_24 += ((/* implicit */unsigned char) ((unsigned short) arr_15 [i_0] [i_0] [i_1] [i_6] [i_6] [i_0] [i_7]));
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_25 -= ((((/* implicit */int) arr_27 [(signed char)0] [(signed char)0])) % (((/* implicit */int) arr_27 [i_6] [i_8])));
                        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)252)) || (((/* implicit */_Bool) (signed char)28))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_9))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_9] [(short)6] [i_6] [i_1] [i_0])) : (((/* implicit */int) ((signed char) 2076288132401934078ULL))))))));
                        var_29 -= ((/* implicit */signed char) 12046145404662205938ULL);
                    }
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_16 [i_0] [i_1] [i_6]) / (((/* implicit */int) ((unsigned char) var_12))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (!(((((/* implicit */int) arr_27 [i_6] [i_11])) < (arr_15 [i_0] [i_0] [(_Bool)1] [i_6] [(_Bool)1] [i_11] [i_6]))))))));
                            var_32 -= ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) var_3))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)126)) && (((/* implicit */_Bool) var_14)))))));
                        }
                        var_33 = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_6] [i_0])) ? (((1914884976) | (((/* implicit */int) var_2)))) : (((/* implicit */int) var_4)));
                    }
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_1])) != (arr_15 [14ULL] [14ULL] [14ULL] [14ULL] [(unsigned short)4] [i_0] [i_1]))))));
                }
                for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_35 ^= ((/* implicit */signed char) arr_41 [i_13] [i_12] [i_1] [i_0]);
                        var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((var_12) / (((/* implicit */int) arr_27 [i_0] [i_1])))) / (((/* implicit */int) arr_14 [i_0] [i_12] [i_12] [i_1] [i_13]))))) ? (((((/* implicit */int) ((arr_13 [i_12] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_1] [i_12] [i_13])))))) >> (((((18160053365559621458ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1]))))) - (1334914788635629284ULL))))) : (((((/* implicit */_Bool) arr_40 [i_0] [i_1])) ? (min((((/* implicit */int) (short)-4814)), (var_11))) : (((/* implicit */int) var_10))))));
                    }
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */short) arr_32 [i_0] [i_0] [i_12] [i_1] [i_0] [i_0])), (arr_27 [i_12] [i_12])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_12]))))))) ^ (((/* implicit */int) ((short) arr_34 [0ULL] [i_0] [i_1] [i_1] [i_0]))))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_12))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_39 -= ((/* implicit */short) (unsigned short)35379);
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_14] [(unsigned char)12])) <= (((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_14] [10ULL])))))));
        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14])) / (var_11)));
    }
    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
    {
        arr_48 [i_15] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 1961675550U))))))));
        var_42 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((arr_16 [i_15] [i_15] [i_15]), (arr_16 [i_15] [i_15] [i_15])))) < (((((/* implicit */_Bool) arr_16 [i_15] [i_15] [i_15])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        var_43 ^= ((/* implicit */unsigned long long int) var_11);
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) var_0))));
        var_45 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1504766048U)) ? (arr_47 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6400598669047345677ULL)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (unsigned char)53)))))));
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
    {
        var_46 ^= arr_10 [i_16] [i_16] [i_16] [i_16];
        var_47 += ((/* implicit */unsigned long long int) arr_16 [i_16] [i_16] [i_16]);
        arr_53 [i_16] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_16] [i_16])) ? (arr_22 [i_16] [i_16]) : (((/* implicit */unsigned long long int) (-(var_11))))));
    }
}
