/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161594
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
    var_13 = ((/* implicit */signed char) ((long long int) ((((var_11) + (9223372036854775807LL))) >> ((((+(var_1))) + (534809906))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_0)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((unsigned char) (((+((-9223372036854775807LL - 1LL)))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2]))))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((min((((/* implicit */long long int) arr_6 [i_0 - 2])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_9))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)102))))));
                                var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) min(((unsigned char)252), (arr_10 [i_4] [i_0] [i_4])))) ? (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)28)))) : (((/* implicit */int) arr_4 [i_0] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_19 = arr_17 [22] [i_0] [i_6] [i_8];
                            var_20 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_5 - 2] [i_0 - 1]))));
                            var_21 = ((/* implicit */signed char) (short)(-32767 - 1));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)223))));
                            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) -8878297642418235777LL)))));
                        }
                    } 
                } 
                var_24 &= ((/* implicit */short) 0ULL);
            }
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0 + 2] [(signed char)13] [7])) && (((/* implicit */_Bool) var_1))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (var_9)));
                            var_27 = ((/* implicit */long long int) var_8);
                            var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    var_29 *= ((/* implicit */unsigned long long int) var_7);
                    var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_5] [i_12] [i_0] [(_Bool)1] [i_5] [i_5 - 2]))));
                }
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 2; i_15 < 22; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) + ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_15 + 1]))) : (0ULL)));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (1ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (-5169050960358604123LL)));
                        var_33 = ((/* implicit */long long int) var_8);
                    }
                    var_34 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((arr_3 [i_0]) >> (((((((/* implicit */_Bool) arr_20 [i_5 - 3])) ? (((/* implicit */int) arr_13 [i_0] [i_5])) : (((/* implicit */int) (unsigned short)0)))) - (17)))))) : (((/* implicit */_Bool) ((((arr_3 [i_0]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_20 [i_5 - 3])) ? (((/* implicit */int) arr_13 [i_0] [i_5])) : (((/* implicit */int) (unsigned short)0)))) - (17))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_35 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 5907129924949229434LL)) ? (((/* implicit */int) var_7)) : (var_2))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_36 [i_0] [i_5] [i_12] [1U])) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16090))))) - (18446744073709551569ULL)))));
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) (unsigned char)15)) < ((~(((/* implicit */int) var_6)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 1; i_17 < 20; i_17 += 3) 
                    {
                        var_37 = ((/* implicit */short) arr_39 [i_17]);
                        var_38 = ((/* implicit */_Bool) ((arr_26 [i_5 - 3] [i_5] [i_12] [i_17 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [i_0]))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_39 |= ((/* implicit */unsigned short) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5 - 4] [i_5 + 2] [i_5])))));
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_16] [i_16])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_51 [i_0 - 1] [i_5] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [(signed char)10]))) ^ (arr_40 [17ULL] [17ULL] [i_12] [i_16] [i_16]))))))));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (21ULL) : (21ULL))) >> (((/* implicit */int) arr_13 [i_5 - 4] [i_5 + 1])))))));
                    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_33 [i_5] [i_12])) : (arr_19 [i_5] [i_5] [i_5] [i_5 - 3] [i_5] [i_5 + 1])))) ? (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) arr_38 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0 - 3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (arr_36 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3]))))));
                    var_43 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))));
                    var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)30))));
                }
                var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (!(((/* implicit */_Bool) -9223372036854775786LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 23; i_20 += 2) 
                {
                    for (int i_21 = 1; i_21 < 21; i_21 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_20] [i_0] [i_20] [i_0] [i_20])) ? (((/* implicit */unsigned int) arr_21 [i_0] [i_21 - 1] [6U] [i_0 - 1] [i_21 - 1] [i_5 + 1])) : (((1350342033U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_47 &= ((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_0] [i_0] [i_20] [i_5 + 2] [i_21] [i_21 + 2] [2U])) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) > (var_12))))));
                            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_12] [i_20] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_5 - 4])));
                            var_49 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_5 + 1] [i_20] [i_0 + 3])) / (((/* implicit */int) arr_50 [i_5 - 1] [(unsigned char)8] [i_0 - 4] [i_5 - 1] [i_21 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_22 = 4; i_22 < 20; i_22 += 2) 
                {
                    for (unsigned int i_23 = 0; i_23 < 23; i_23 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_22 - 1] [i_22 + 3] [i_22 + 3] [i_22 + 3])) ? ((-(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3))))));
                            var_51 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0 - 1] [i_22 - 4] [i_22 - 4] [i_23] [i_23]))));
                            var_52 = ((/* implicit */unsigned char) (!(arr_57 [5] [i_0] [i_0 + 3] [i_0] [i_0])));
                            var_53 -= ((/* implicit */short) (~(arr_59 [i_22] [i_22] [i_22 - 1] [i_22])));
                        }
                    } 
                } 
            }
        }
    }
    var_54 = min((((/* implicit */long long int) var_8)), (((long long int) (-(var_3)))));
}
