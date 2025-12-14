/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187369
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
            var_12 = ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))))) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (11824392418264276906ULL))))) - (8296))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_13 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                var_14 = ((((/* implicit */_Bool) var_5)) ? (2199976406U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_3 - 1] [i_3 + 1] [(unsigned char)8])) ? (2094990889U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                /* LoopSeq 4 */
                for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2199976406U)) ? (0U) : (740544443U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-9223372036854775789LL))))));
                    var_17 = ((/* implicit */signed char) var_3);
                }
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((unsigned int) (unsigned char)208))));
                    arr_18 [i_0] [i_2] [i_3] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((int) var_4));
                    arr_19 [(unsigned short)7] [(unsigned short)7] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3554422852U))));
                }
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    arr_22 [i_6] [i_3] [(short)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_3] [i_0] [i_0])) ? ((-(11824392418264276906ULL))) : (((11824392418264276906ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62616)))))));
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                }
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    arr_26 [i_0] [i_2] [i_3] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_2] [i_0] [i_0]))));
                    arr_27 [i_2] [(signed char)2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [(signed char)5] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) : (arr_21 [i_0] [i_2] [i_3 + 1] [i_2] [i_3 - 1] [i_2])));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                }
            }
        }
        var_20 = ((((/* implicit */_Bool) (unsigned char)0)) ? (min((((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))), (((var_7) ? (((/* implicit */unsigned int) var_3)) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2199976405U) | (740544443U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (var_3)))));
    }
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) 2094990868U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2199976410U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-99))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)104)), ((short)1030))))));
    var_22 ^= min((10316035726518606164ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        var_23 |= (-(21ULL));
        var_24 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_1)))))) <= (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) : (3554422830U)))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_25 += ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_31 [i_12] [(signed char)8] [i_12])))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) (unsigned short)65535)) - (65519)))));
                            arr_41 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 814529317U))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) 6622351655445274710ULL))));
                var_28 ^= ((/* implicit */_Bool) ((long long int) 4294967289U));
                var_29 = ((/* implicit */int) arr_37 [i_9] [i_9]);
            }
            for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_9] [i_13])) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) arr_31 [i_13] [i_9] [1ULL]))));
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_13])) ? (arr_29 [i_8] [i_8]) : (arr_29 [i_8] [i_9])));
            }
            for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_30 [i_8]))));
                            var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) (unsigned char)29)))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_14] [i_9] [i_14])) ? (((/* implicit */int) arr_39 [i_8] [i_9] [i_9] [i_9] [i_14])) : (((/* implicit */int) arr_39 [i_14] [i_9] [i_9] [i_9] [i_8]))));
                var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_7)))));
                arr_51 [i_8] [i_9] [i_14] = ((/* implicit */signed char) var_4);
            }
            var_36 = ((((arr_32 [i_9]) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_6))))) - (1))));
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    {
                        arr_58 [2ULL] [2ULL] [i_9] [19LL] = (-(9279384066321901076ULL));
                        arr_59 [i_8] [i_9] [i_17] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) (short)28189)) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_48 [16U] [16U] [i_8] [i_9] [i_8])) : (((/* implicit */int) var_5)))))))));
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */int) arr_48 [8U] [20U] [i_9] [i_9] [i_9])) <= (((/* implicit */int) arr_48 [(unsigned char)4] [i_9] [i_9] [i_9] [i_9])))))));
        }
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (~(((((/* implicit */unsigned long long int) var_8)) * (3ULL))))))));
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) <= (((unsigned int) var_4))));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) 
            {
                for (short i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    {
                        arr_67 [i_8] [i_8] [i_20] [(short)20] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) arr_52 [i_8] [i_19] [i_20])) : (((/* implicit */int) arr_48 [i_20] [i_20] [i_19] [i_19] [i_20]))));
                        var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_8] [i_8] [i_19] [i_20] [i_20])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_3)) : (3520920003U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_20] [i_8] [i_19] [i_8] [i_21])))));
                    }
                } 
            } 
        }
        for (unsigned short i_22 = 0; i_22 < 21; i_22 += 3) /* same iter space */
        {
            var_43 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 740544443U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            arr_71 [7U] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(var_7)))) >> (((((((/* implicit */_Bool) arr_53 [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_6)))) + (32796)))));
        }
    }
}
