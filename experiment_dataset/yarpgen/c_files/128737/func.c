/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128737
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
    var_15 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_7 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) <= (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(signed char)17])) ? (((/* implicit */int) ((signed char) var_6))) : (arr_3 [i_2])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */int) arr_6 [(short)0] [i_1] [(unsigned char)16] [(short)18]);
                                arr_12 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)118))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) max((var_17), (max((((short) var_4)), (((/* implicit */short) (((((_Bool)1) ? (-1) : (arr_2 [(signed char)8]))) != (((/* implicit */int) arr_9 [i_0] [i_1] [(short)1])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */int) (unsigned short)42016);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_0] [i_6] [i_2])))) || (arr_6 [i_0] [i_1] [i_2] [i_5]))))));
                                var_20 *= ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] = ((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1] [i_7]);
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 20; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_27 [1] [(_Bool)1] [(short)11] [i_1] [i_9] = ((/* implicit */unsigned long long int) arr_1 [i_0] [8]);
                                arr_28 [i_0] [i_1] [i_7] [i_8] [i_9] [20] = ((/* implicit */signed char) ((((long long int) arr_17 [i_1 + 1] [i_1] [i_9 + 3] [i_0] [i_9])) * (((/* implicit */long long int) arr_10 [i_1 - 1] [19ULL] [i_1] [i_8 + 2] [i_9]))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_1] [i_7] = (((~(((/* implicit */int) arr_24 [i_0] [i_1 - 1])))) ^ (((/* implicit */int) arr_23 [16] [8] [i_1] [i_7])));
                }
                for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (int i_12 = 3; i_12 < 21; i_12 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_1] [(unsigned char)7] [i_0] [0] [i_1] [(unsigned char)19] = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) arr_15 [8LL] [i_1] [i_10] [i_11] [i_12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_10] [i_11] [i_12]))))) : (((/* implicit */int) var_8))))));
                                arr_37 [i_0] [4] [i_0] [i_11] [i_12] &= ((/* implicit */signed char) arr_18 [i_0] [i_10] [0ULL] [(short)9]);
                                var_21 = ((/* implicit */long long int) max((var_21), (arr_13 [i_1 + 1] [i_12 - 3] [i_12] [i_12])));
                                var_22 = arr_26 [i_1] [(unsigned char)14] [i_0] [i_11] [i_12];
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_10] [i_10] [16LL] |= ((/* implicit */short) 1083237481603028265LL);
                }
                /* vectorizable */
                for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        for (signed char i_15 = 2; i_15 < 19; i_15 += 2) 
                        {
                            {
                                arr_47 [i_0] [i_1] [19LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1124521649U);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) + (3170445647U)))) ? (arr_10 [i_15 + 1] [i_15] [i_15 + 3] [10] [i_1 - 1]) : (((/* implicit */int) (!(arr_14 [i_1]))))));
                            }
                        } 
                    } 
                    arr_48 [i_0] [i_1] [18LL] = ((/* implicit */int) arr_4 [i_0] [i_13] [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (signed char i_16 = 3; i_16 < 20; i_16 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_17 = 1; i_17 < 20; i_17 += 2) 
                        {
                            var_24 *= ((/* implicit */unsigned int) var_7);
                            arr_55 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 930698359))));
                            var_25 ^= ((/* implicit */short) ((unsigned char) arr_11 [10LL] [14] [i_13] [(unsigned char)16] [i_17 + 1]));
                            var_26 &= ((((/* implicit */_Bool) 3170445647U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) >= (var_10)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_44 [8ULL] [(short)7] [i_13] [(signed char)3] [(short)3])) : (((/* implicit */int) arr_49 [i_0])))));
                            arr_56 [15] [21LL] [i_17] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 3170445626U)) || (((/* implicit */_Bool) 1252873843))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                        {
                            arr_61 [i_1] [i_1] [i_13] [(_Bool)1] [i_18] = ((/* implicit */signed char) (+(var_9)));
                            arr_62 [i_1] [i_0] [15ULL] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_16] [i_18])) ? (((/* implicit */int) arr_14 [i_1])) : (((/* implicit */int) var_1)))));
                            var_27 += ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)17))));
                        }
                        for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) arr_44 [i_0] [i_1] [i_13] [i_16] [i_19])) : (((/* implicit */int) arr_24 [i_16] [i_19]))))) ? (arr_3 [i_19]) : (((/* implicit */int) (unsigned char)16))));
                            arr_65 [i_1] [i_1] = ((/* implicit */_Bool) ((int) arr_54 [i_0] [i_19] [i_13] [i_1 - 2] [i_19] [i_13]));
                            arr_66 [i_0] [i_0] [(signed char)18] [i_13] [i_19] [i_0] |= ((/* implicit */_Bool) 1124521661U);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3129551912339122157LL) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3170445636U)))) : (var_14)));
                            var_30 = arr_51 [i_0] [(signed char)10] [(signed char)4] [i_1 - 2] [i_16 + 1];
                        }
                        var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_24 [(unsigned char)11] [(unsigned char)7])) : (((/* implicit */int) arr_0 [(unsigned char)11])))) : (((/* implicit */int) ((unsigned char) 3170445647U)))));
                    }
                    var_32 |= ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1] [21LL] [i_1 - 1] [i_13]));
                    var_33 = ((((/* implicit */_Bool) arr_33 [i_0] [i_1 - 1] [i_1 + 1])) ? (arr_33 [i_0] [i_1 - 2] [i_1 + 1]) : (arr_33 [i_0] [i_1 - 1] [i_1 - 2]));
                }
                for (int i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)8313)), (((((/* implicit */_Bool) 1124521655U)) ? (3170445635U) : (1124521661U)))))) < (((((/* implicit */_Bool) ((1124521660U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) % (1651209008)))) : (((long long int) arr_64 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 22; i_22 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */long long int) arr_30 [i_1 - 1] [i_20]))))), (((((/* implicit */_Bool) arr_39 [(unsigned char)17] [i_20] [i_21] [(_Bool)1])) ? (max((((/* implicit */unsigned long long int) arr_57 [i_0] [i_0] [i_1] [16] [(signed char)9])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2778856004537874038LL))))))));
                                arr_75 [11] [i_1] [i_20] [18LL] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (var_14)))))))));
                                var_36 *= ((/* implicit */short) min((((/* implicit */long long int) (short)23231)), (((((/* implicit */_Bool) arr_41 [i_1 - 2] [i_20] [i_1 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_1 - 2] [i_0] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    arr_76 [i_0] [12] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (min((((((/* implicit */_Bool) 3170445625U)) ? (((/* implicit */int) arr_69 [14U] [i_1] [i_20])) : (arr_30 [(short)2] [7LL]))), (((((/* implicit */int) arr_44 [15LL] [(short)9] [i_20] [i_20] [i_20])) | (((/* implicit */int) arr_71 [(unsigned short)19] [i_1])))))) : (((/* implicit */int) (signed char)113))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 1; i_23 < 21; i_23 += 2) 
                    {
                        for (int i_24 = 2; i_24 < 18; i_24 += 2) 
                        {
                            {
                                arr_82 [(unsigned char)3] [i_1] [i_1] [i_23] [i_24] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [(unsigned char)4] [i_23] [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) != (var_10))))) : (max((var_3), (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                                var_37 = ((((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_24] [i_23] [1LL] [8ULL] [(unsigned char)1])) || (((/* implicit */_Bool) 271583528))))) == (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) var_2))))))) ? (((/* implicit */int) var_13)) : (arr_10 [i_0] [12] [i_20] [i_23] [(unsigned short)14]));
                                arr_83 [i_24] [i_1] [i_1] [i_1] = ((/* implicit */long long int) 3170445632U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        for (signed char i_26 = 1; i_26 < 21; i_26 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((3170445654U) >> (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((4579043357368193798LL) - (((/* implicit */long long int) -1607070247)))))), ((+(arr_22 [i_1 - 1]))))))));
                                arr_88 [3U] [i_1] [(signed char)21] [i_25] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1124521659U)))))) < (arr_13 [12] [i_1] [21ULL] [i_25])));
                                var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~((+(((/* implicit */int) arr_9 [(short)4] [i_20] [i_25]))))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_14 [i_0])), (var_13)))) ? (-4110708116569503710LL) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_58 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
                arr_89 [i_1] = ((/* implicit */signed char) (unsigned char)198);
            }
        } 
    } 
}
