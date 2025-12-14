/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122545
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_2] [9U] [(signed char)11]);
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((signed char) (unsigned short)26783)))));
                                arr_12 [(unsigned short)6] [i_0] [i_2] [i_3] [i_4] [i_4] [i_1] |= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)2)))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_6] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 3])))))));
                                var_17 = (signed char)5;
                                arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (~(((/* implicit */int) arr_4 [i_6] [i_1] [i_2]))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_0] [i_6] [(short)3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)3)), (var_10)))) ? (((int) (short)-27902)) : (((/* implicit */int) (short)-11089))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) ((long long int) arr_26 [i_7] [i_8] [i_9] [i_7]));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 23; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) 1641463481U);
                                var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)2)), ((short)-28481)))), ((-(var_13))))), (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_10] [i_11]))))))));
                                arr_34 [i_7] [i_9] = ((unsigned int) ((0ULL) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (13408439035628952909ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 3; i_12 < 23; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((arr_24 [(unsigned short)14]), (((/* implicit */unsigned short) (short)-9118)))))));
                                arr_39 [9ULL] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) ? ((-(((/* implicit */int) (signed char)59)))) : (((/* implicit */int) arr_32 [i_7] [i_8] [i_8] [i_9] [(unsigned short)3] [i_13])))) & (((/* implicit */int) ((signed char) ((unsigned long long int) (short)10098))))));
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_35 [i_7] [i_7] [i_12 + 1] [i_12 - 2] [i_12 + 2])) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max(((signed char)2), (var_4)))) : (((/* implicit */int) arr_23 [i_7] [i_8]))))) : (arr_38 [i_7] [i_8] [i_8] [i_9] [i_12 + 2] [i_13] [i_13])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_27 [i_14] [i_14]));
                                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_16] [i_8] [i_8] [i_14] [i_16]))) > (arr_44 [i_14] [i_14] [(signed char)20] [16ULL] [i_14] [i_14])));
                                var_25 = ((/* implicit */long long int) (~(2653503820U)));
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(2673953853980606628ULL)))) ? (arr_40 [i_7] [i_14] [14LL] [(unsigned short)22]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7] [i_14])) ? (arr_31 [i_7] [(short)5] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-9118)))))));
                }
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_28 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_8] [i_17] [i_7] [i_8])) ? (((/* implicit */int) arr_29 [22ULL] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_29 [i_7] [i_7] [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 3; i_19 < 21; i_19 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */short) (signed char)3);
                                var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 11460737517415028106ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1483397383U))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)15))))), (min((((/* implicit */unsigned short) var_2)), (arr_29 [i_18] [i_17] [i_8] [i_18]))))))));
                                arr_54 [i_19] [i_18] = ((/* implicit */short) var_0);
                                arr_55 [i_19] [i_8] [i_19] [i_18] [i_19] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        for (int i_22 = 0; i_22 < 25; i_22 += 3) 
                        {
                            {
                                arr_63 [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) arr_60 [i_8] [i_20])) ? (arr_60 [i_7] [i_8]) : (arr_60 [i_7] [i_20])))));
                                arr_64 [i_7] [10U] [i_20] [i_20] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_29 [i_21] [12ULL] [i_21] [i_21]))))))))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), ((((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40737)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_50 [23ULL] [(signed char)23] [i_20] [i_21])))) : (((unsigned long long int) ((unsigned long long int) (short)24453)))))));
                                arr_65 [i_7] [(short)10] [(short)15] [i_8] [i_22] = ((((/* implicit */_Bool) (short)-9114)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41764)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-622)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (986819240U)))) : (7305936946875291278ULL))) : (((/* implicit */unsigned long long int) (~(0U)))));
                            }
                        } 
                    } 
                    var_32 = ((unsigned int) ((((/* implicit */_Bool) (+(arr_28 [i_7] [i_8] [i_20])))) ? (((/* implicit */unsigned long long int) -9223372036854775790LL)) : (max((0ULL), (((/* implicit */unsigned long long int) arr_40 [i_7] [0ULL] [i_7] [i_7]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 1; i_23 < 24; i_23 += 3) 
                    {
                        for (unsigned char i_24 = 4; i_24 < 24; i_24 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_24 - 1])) ? (2811569913U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_24 - 2])))))), (min((arr_31 [i_24 + 1] [i_24] [i_24 - 4] [i_24] [i_23 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1487481082)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_70 [i_7] [i_8] [i_20] [i_7] [i_24 - 4] [(signed char)8] [i_8])))))))));
                                arr_71 [i_23] [i_23] = 3877504865282039974ULL;
                                var_34 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                }
                var_35 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)33185)))) != ((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27501)))))));
                /* LoopNest 3 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (signed char i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        for (unsigned long long int i_27 = 2; i_27 < 23; i_27 += 2) 
                        {
                            {
                                arr_80 [i_25] [i_8] [i_25] [i_26] [i_27] [i_7] = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1487481083)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32351))) : (var_3)))), (var_12))));
                                var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(26ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((((/* implicit */long long int) (short)-19996)), (arr_67 [i_7] [i_25] [i_25]))))))));
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)-1))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_50 [i_7] [i_8] [i_25] [i_26])) : (((/* implicit */int) ((short) var_11))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)98)), ((unsigned short)9))))));
                            }
                        } 
                    } 
                } 
                arr_81 [i_7] [i_8] = ((var_12) ^ (max((((/* implicit */unsigned long long int) -1487481078)), (max((((/* implicit */unsigned long long int) var_1)), (arr_75 [18ULL] [(unsigned char)4] [i_8]))))));
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_4)))))))))));
}
