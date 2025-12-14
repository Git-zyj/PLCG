/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147772
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
    var_14 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-6)) && (((/* implicit */_Bool) 1073676288U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18446744073709551615ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_13)))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_16 = ((/* implicit */signed char) (((_Bool)1) ? (571957152676052992LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127)))));
                arr_9 [i_2] [i_1 + 1] [i_2] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)192)))) + (((/* implicit */int) ((((/* implicit */int) (signed char)-17)) >= (((/* implicit */int) (signed char)12)))))));
                /* LoopSeq 4 */
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_0))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)0)))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (signed char)127))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 4; i_4 < 16; i_4 += 4) 
                    {
                        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((2305843009213693952LL) ^ (14LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U)));
                        arr_16 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                        arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) | (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                    }
                }
                for (unsigned short i_5 = 3; i_5 < 16; i_5 += 4) 
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-103)) / (((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) < (3U))))))))));
                    arr_20 [(unsigned char)16] [i_2] [i_2] [(short)6] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % (var_9)));
                }
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (short)32767))));
                    /* LoopSeq 3 */
                    for (short i_7 = 3; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)0))))) % (((/* implicit */int) var_5))));
                        arr_28 [i_0] [i_2] [i_2] [i_6] [(signed char)5] = ((/* implicit */signed char) (-(var_9)));
                    }
                    for (short i_8 = 3; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned long long int) var_13);
                        arr_33 [i_2] [i_1] [i_2] [i_6] = var_3;
                        arr_34 [i_2] [(unsigned short)15] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_8))))));
                        var_25 += ((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
                        var_26 += ((/* implicit */unsigned short) ((1125899839733760LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))));
                    }
                    for (short i_9 = 3; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-25)) < (((/* implicit */int) (short)-1))));
                        arr_38 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 13LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65513))) : (0U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (var_9)))))));
                        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 288230376149614592LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) : (0ULL)));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)6)) < (((/* implicit */int) var_11))));
                    }
                }
                for (long long int i_10 = 3; i_10 < 15; i_10 += 3) 
                {
                    var_30 = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))));
                    arr_41 [i_0] [i_1] [(unsigned short)9] [i_2] [i_10 - 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-512)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)16))))) : (((((/* implicit */_Bool) var_13)) ? (-1LL) : (9221120237041090560LL)))));
                    var_31 = ((/* implicit */unsigned char) ((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == ((-(0LL)))));
                    arr_42 [i_0] [(_Bool)1] [i_2] [i_1] [i_2] [i_10 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) ? (-68719476736LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)15)) ? (((((/* implicit */_Bool) var_10)) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)96))))))))));
                }
            }
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 2; i_12 < 16; i_12 += 3) 
                {
                    var_33 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)4095))) ^ (-1LL))) < (9223372036854775807LL)));
                    var_34 = ((/* implicit */signed char) ((var_9) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))));
                    arr_48 [i_0] [i_1] [i_12] [i_11] [i_12 + 1] [i_12 - 1] = ((/* implicit */short) (~(var_4)));
                }
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)255))));
            }
        }
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                {
                    var_36 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_5), (var_13)))) ? (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (short)2)))))))));
                    arr_55 [i_13] [i_14] [8U] [i_13] = ((((max((var_9), (((/* implicit */long long int) (signed char)121)))) | (((((/* implicit */_Bool) (signed char)-1)) ? (2305825417027649536LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) >> (((((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)32754)))) ? (((((/* implicit */_Bool) 16888498602639360LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (28672LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-14)), ((unsigned short)13))))))) - (15268LL))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)252))))) > (min((min((0U), (((/* implicit */unsigned int) (unsigned short)61440)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255)))))))));
                        var_38 = ((/* implicit */long long int) (((-(((/* implicit */int) var_12)))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL))))));
                        /* LoopSeq 4 */
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            var_39 += ((/* implicit */signed char) ((((/* implicit */int) ((4611686018427387896LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) <= (max((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_12))))), ((~(((/* implicit */int) var_12))))))));
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+(min((((/* implicit */int) min((((/* implicit */short) var_3)), (var_13)))), ((+(((/* implicit */int) (unsigned char)62)))))))))));
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_9)) ? (max((var_4), (((/* implicit */long long int) (unsigned char)3)))) : (min((0LL), (18014398509481976LL))))))))));
                            arr_60 [i_0] [i_13] [i_13] [i_15] [i_16] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8))))) ? ((-(((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)0)))))) : (((((/* implicit */int) max((var_3), (var_6)))) ^ (((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                        for (long long int i_17 = 1; i_17 < 16; i_17 += 3) 
                        {
                            arr_64 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (short)32765))));
                            arr_65 [i_15] [(signed char)3] [i_13] [(signed char)4] [i_17 + 1] = ((/* implicit */short) ((((((/* implicit */int) var_2)) != (((/* implicit */int) (signed char)-1)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)-32743)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) 
                        {
                            arr_68 [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (61)))))));
                            arr_69 [i_14] [i_13] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)6))));
                            arr_70 [i_15] [i_13] [i_14] [i_13] [i_18] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)(-127 - 1))))) ^ (((/* implicit */int) var_2)))))));
                        }
                        for (signed char i_19 = 3; i_19 < 13; i_19 += 3) 
                        {
                            arr_74 [i_0] [(signed char)16] [i_0] [i_15] [i_19 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)65517)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_1))))) : (max((var_4), (((/* implicit */long long int) var_6))))));
                            var_43 = ((/* implicit */short) max((min((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned short)19))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)7680)))))));
                            arr_75 [i_0] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned short) (((+(140737488355327LL))) * (((/* implicit */long long int) ((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                        }
                        var_44 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_9)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-123)), (var_5)))) : (((/* implicit */int) var_1))))), (((((((/* implicit */long long int) ((/* implicit */int) var_8))) & (0LL))) - ((~(var_4)))))));
                    }
                }
            } 
        } 
        var_45 ^= ((/* implicit */short) min((min((((/* implicit */unsigned short) max((((/* implicit */signed char) var_2)), (var_0)))), (min((((/* implicit */unsigned short) (signed char)123)), ((unsigned short)28))))), (((/* implicit */unsigned short) min(((short)32704), (((/* implicit */short) (_Bool)1)))))));
    }
    var_46 = ((/* implicit */long long int) var_13);
}
