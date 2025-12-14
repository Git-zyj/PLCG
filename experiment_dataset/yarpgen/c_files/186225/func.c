/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186225
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (((549474444U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)15504))))))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (short)-32744))) % (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))))));
        var_17 = ((((/* implicit */_Bool) ((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))) ? (((/* implicit */int) ((unsigned short) 137438949376ULL))) : (((/* implicit */int) ((short) (((_Bool)1) ? (var_8) : (((/* implicit */int) (short)32767)))))));
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((8653000358848745818LL) % (((/* implicit */long long int) -1))))) ? (((/* implicit */int) (signed char)1)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-32767)))))), (var_8)));
        var_19 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((unsigned int) 0U))) ^ (arr_2 [i_0] [i_0])))));
        var_20 = min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3840)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [(_Bool)1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (2818002534U))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (2055850241) : (((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32746))))) ? (((/* implicit */long long int) ((int) var_8))) : ((~(9223372036854775804LL)))));
                    arr_11 [i_1] [(unsigned short)4] [i_2] [i_3] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)36471))));
                    var_22 = ((/* implicit */long long int) 67108856U);
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54084)) ? (1327174315U) : (((/* implicit */unsigned int) var_8)))))));
                    var_24 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
        var_25 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (arr_10 [4] [i_1] [(unsigned short)4]) : (arr_10 [i_1] [i_1] [i_1]))))));
        var_26 = ((/* implicit */short) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_5 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_16 [i_1] [i_4] [2ULL] [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [(unsigned short)9] [i_7 + 2] [i_7] [(short)2])) ? (((/* implicit */int) var_7)) : (arr_21 [(unsigned char)5] [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2])));
                                var_29 += (+(((/* implicit */int) arr_20 [(unsigned char)9] [i_6] [i_6 + 2] [i_6 + 1])));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) arr_23 [(unsigned short)3] [7] [7] [i_4] [i_5 - 1]);
                    arr_25 [(signed char)6] [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1024))))) ? (((/* implicit */unsigned long long int) arr_21 [i_1] [i_4] [i_4] [i_5] [i_5])) : (0ULL)));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    arr_34 [i_9] [(unsigned short)3] [2LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) / ((~(max((var_6), (((/* implicit */unsigned long long int) var_8))))))));
                    arr_35 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_9 - 1])) >> (((((/* implicit */int) arr_27 [i_9 - 1])) - (6632)))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29064))) - (var_14))) & (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_8])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36471)) | (((((/* implicit */_Bool) (unsigned short)36471)) ? (((/* implicit */int) arr_38 [i_12 + 1] [1LL] [i_11] [3LL] [i_8] [i_8])) : (((/* implicit */int) var_11))))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)20910))))), (3258572595U)))));
                                var_32 -= ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_9)))));
                                arr_42 [i_8] [i_9] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-31530)), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (short)-516))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31530))) : (arr_32 [i_8] [i_13] [i_8]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_27 [3U])))))))) : (((((/* implicit */_Bool) arr_37 [i_8])) ? (arr_31 [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13])))))));
            var_34 = ((/* implicit */unsigned long long int) ((419795433) >= (((((/* implicit */_Bool) arr_44 [10] [i_13] [i_8])) ? ((-(((/* implicit */int) (short)5052)))) : (((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned short)29251))))))));
        }
        for (signed char i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [(signed char)11]))))), (((((((/* implicit */int) var_10)) & (((/* implicit */int) arr_30 [i_8] [i_17])))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_50 [(unsigned char)4] [(_Bool)1])) : (((/* implicit */int) var_12))))))));
                            arr_59 [2ULL] [i_8] [0] [i_8] [i_8] = ((/* implicit */unsigned short) arr_36 [i_16] [i_14] [i_8]);
                            var_36 = ((/* implicit */_Bool) (+(max((-695310328), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-32744)), (arr_41 [3LL]))))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */_Bool) (+(min(((+(((/* implicit */int) var_16)))), (((/* implicit */int) (unsigned short)29064))))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                var_38 = ((short) (-(arr_36 [i_8] [i_18] [11LL])));
                arr_62 [i_8] [(signed char)2] [i_14] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)36282))))) | (((((/* implicit */_Bool) ((201326592U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14] [(unsigned short)6])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) | (18446744073709551603ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_38 [(short)5] [i_14] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_1)))))))));
                var_39 ^= ((/* implicit */unsigned char) ((min((var_6), (((/* implicit */unsigned long long int) arr_44 [i_14] [i_18 + 1] [i_14])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_40 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1]), (arr_40 [i_18] [i_18 + 1] [i_18 + 1] [i_18] [i_18])))))));
            }
            var_40 = ((/* implicit */int) (~((+((~(3651228313388201791LL)))))));
        }
        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                arr_70 [i_19] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((-(arr_45 [0U] [i_8])))))), (((((/* implicit */_Bool) arr_65 [i_8] [i_19])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_8] [i_19] [i_20]))) ^ (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4278887505921141310LL))))))))));
                var_41 ^= ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)102)))));
            }
            var_42 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-8))));
            var_43 = ((/* implicit */_Bool) var_14);
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (1233896678U)));
            arr_71 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((int) ((((max((-1239602978), (-1239602978))) + (2147483647))) >> (((min((var_6), (((/* implicit */unsigned long long int) arr_46 [i_8] [(signed char)12])))) - (14090ULL))))));
        }
        for (signed char i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
        {
            var_45 |= ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) 1079503853U)) ? (((/* implicit */int) arr_46 [i_8] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)-24601)) ? (((/* implicit */int) arr_33 [4ULL] [i_21] [i_8] [4U])) : (((/* implicit */int) var_0))))))));
            arr_75 [i_8] [i_8] &= ((/* implicit */long long int) min((min((arr_47 [i_8]), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) arr_29 [i_8]))));
            var_46 = ((/* implicit */_Bool) var_5);
        }
    }
    var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (short)-24603)))))))));
    var_48 &= ((/* implicit */unsigned int) var_3);
}
