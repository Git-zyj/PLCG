/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150492
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    arr_8 [(signed char)8] = ((/* implicit */short) min((((arr_7 [i_2 - 2] [12LL] [i_2 - 2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [(unsigned char)15])))))))));
                    arr_9 [(unsigned char)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_6))))) || (((/* implicit */_Bool) ((arr_3 [i_2 + 1]) % (((/* implicit */int) var_6)))))));
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_3] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22263))) <= (var_1)))) * (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) (short)32767))))));
                }
                for (unsigned int i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_4] = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (-5002287424185413174LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32765)))))) ? (min(((-2147483647 - 1)), (((/* implicit */int) var_17)))) : (((/* implicit */int) var_16))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1423)) ? (415835260) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))))));
                        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                    }
                    arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_4])) * (var_15)));
                    arr_20 [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [11ULL] [i_1] [(_Bool)1] [(unsigned short)11]))));
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-21950))));
                }
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    arr_23 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_6])))))) >> (((((/* implicit */int) arr_17 [i_0] [i_0] [i_6] [i_0] [(short)8])) - (212)))));
                    var_23 -= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)184)) >> (((((/* implicit */int) (unsigned short)29456)) - (29428)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_10))))) : (24U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) arr_6 [i_0] [16ULL] [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) arr_6 [i_6] [i_6] [i_1] [i_0]))))))));
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)18183))))) | (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_12)))))));
                    arr_25 [i_6] [3LL] [i_1] [14ULL] = arr_0 [i_1];
                }
                var_24 = ((/* implicit */unsigned char) var_13);
                var_25 ^= ((/* implicit */unsigned long long int) (unsigned char)6);
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                arr_34 [(short)6] [i_8 + 1] [i_8 + 2] [(short)10] [i_7] [i_1] [2U] = arr_27 [i_8] [i_8];
                                var_26 ^= ((/* implicit */unsigned short) var_13);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) (short)-11950);
                }
                for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    arr_38 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_26 [i_0] [(unsigned short)7])) ? (var_15) : (((/* implicit */unsigned long long int) arr_26 [i_0] [(short)0])))) > (((/* implicit */unsigned long long int) ((long long int) arr_26 [i_10] [i_0])))));
                    arr_39 [(_Bool)1] [i_10] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_10)) - (10305)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4542))) : (arr_7 [4LL] [i_1] [(short)6])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_43 [i_0] [(unsigned short)15] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [6U])))))) & (((((/* implicit */_Bool) ((long long int) 0LL))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (7LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))));
                        arr_44 [i_0] [(short)11] [(short)13] [i_11] = ((/* implicit */_Bool) 12398514327520632764ULL);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_0] [i_1] [i_11]) : (arr_13 [i_0] [i_1] [1ULL])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (arr_13 [i_0] [i_0] [i_0])))) : (min((arr_33 [i_0] [i_1] [i_10] [i_11]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_10] [i_11]))))));
                        arr_45 [(_Bool)1] [(signed char)3] [i_10] [(_Bool)1] [i_10] [i_10] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) var_3)))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) min((arr_33 [(unsigned short)2] [(unsigned short)2] [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) -9223372036854775802LL)))))) % (((/* implicit */int) var_2))));
                        var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((var_3), (var_9)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_18)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_13 = 4; i_13 < 16; i_13 += 2) 
                        {
                            arr_52 [(short)12] [i_12] = ((/* implicit */short) arr_7 [i_1] [i_10] [i_1]);
                            arr_53 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_13 - 2])) & (((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_32 [i_0] [i_1] [i_10] [i_12] [(signed char)10]) | (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) arr_6 [7LL] [i_1] [(unsigned char)0] [i_12])) / (536870911))))))));
                        }
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 1; i_15 < 17; i_15 += 4) 
                        {
                            arr_60 [i_0] [8ULL] [i_10] [i_15] [i_15] [i_1] [(short)18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)11949)) ? (((/* implicit */int) var_5)) : (-415835260)))))) ? (((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_58 [i_15] [i_1] [i_15] [18ULL] [i_15] [(unsigned short)16] [i_10]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_4 [i_0])))) ? ((-(((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_0] [i_15])))) : ((-(((/* implicit */int) var_12))))))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) 7LL)), (arr_11 [(unsigned short)14] [i_1]))))) ? (min((((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned long long int) var_18)) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (31U)))))) : (((/* implicit */unsigned long long int) ((((min((-415835289), (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) var_2)) + (20417))))))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((min((min((0U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))) | (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_10 [(_Bool)1] [(_Bool)1] [i_10]))));
                            var_36 ^= ((/* implicit */unsigned char) (short)-11932);
                        }
                        arr_63 [(_Bool)1] [i_1] [i_1] [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_7))))) ? (((var_17) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) (short)-1))))), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_1))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 3; i_17 < 16; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
                        {
                            {
                                arr_68 [(unsigned short)1] [i_1] [i_17] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) % (((((/* implicit */_Bool) arr_29 [i_17 + 3] [i_17 + 3] [i_18])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_17 - 3] [i_17] [i_18])))))));
                                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-(((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
                {
                    var_38 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_37 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_27 [13LL] [13LL]))) & (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        for (unsigned short i_21 = 2; i_21 < 15; i_21 += 3) 
                        {
                            {
                                arr_77 [(_Bool)1] [i_19] [i_19 - 1] [i_20] [i_20] [i_21 + 1] [(short)17] = ((/* implicit */_Bool) (unsigned char)127);
                                arr_78 [i_19 + 1] [i_19 + 1] [i_19] [i_19 + 1] [i_19 + 1] = ((/* implicit */short) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_0] [i_1] [i_19 + 1] [11LL] [i_21]))))))));
                                var_39 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) max((arr_33 [8ULL] [i_21] [i_19] [10]), (var_13)))))));
                                arr_79 [i_19] [i_1] [(unsigned short)9] [(unsigned short)13] [i_21] [i_21] [i_1] = ((/* implicit */_Bool) 8121195516788917247LL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_40 = ((/* implicit */int) (!(((((/* implicit */_Bool) 4747061203318421594ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)110)))))))));
    var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)7)))))))));
}
