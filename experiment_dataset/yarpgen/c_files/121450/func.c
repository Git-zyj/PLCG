/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121450
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
    var_14 *= ((/* implicit */long long int) 0ULL);
    var_15 &= var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_1 [i_1]))));
                    var_17 = ((((((/* implicit */int) min(((short)-16571), ((short)-16571)))) == (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16571))))) : ((-(max((((/* implicit */unsigned long long int) var_7)), (var_3))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_3] [i_3] [i_1] [1U] = ((/* implicit */unsigned char) arr_5 [i_0 - 2] [i_1] [i_1]);
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0 - 1] [i_0 - 2] [i_0 + 1]) : (arr_5 [i_0 - 1] [i_0 - 2] [i_0 + 1])))))))));
                }
                for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))))) : (var_11)))));
                    arr_15 [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) (short)316)), (arr_8 [i_0] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32758)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4])))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0 - 2] [i_5] [i_0 - 2]))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (4031390576U) : (((/* implicit */unsigned int) arr_13 [i_0] [17ULL] [i_5 + 1]))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((max((((/* implicit */unsigned long long int) var_10)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (18374686479671623680ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)11251)))))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_21 -= ((/* implicit */long long int) ((unsigned long long int) (short)32751));
                            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 1])) * (((/* implicit */int) var_2)))))))) * (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13))))))));
                            var_23 = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)-16571)) - (((/* implicit */int) (short)32743)))), (min((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])), ((~(arr_8 [i_6] [i_5] [20ULL])))))));
                            var_24 = ((/* implicit */signed char) ((short) (short)-300));
                        }
                        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_4] [i_1] [i_4] [i_4] [i_4] [i_7] [i_0])))))));
                            var_26 = ((/* implicit */long long int) (short)-32744);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_9)) : (arr_8 [i_4 + 1] [i_1] [i_7 - 1]))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            var_28 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_4 - 1] [i_8 + 1] [i_8 + 1]))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5 - 1])))))) / (((((/* implicit */_Bool) 18374686479671623670ULL)) ? (((/* implicit */long long int) 3295337492U)) : (var_10))))) : (((/* implicit */long long int) (~(var_1))))));
                            var_29 = ((/* implicit */unsigned char) 7538986314951206009ULL);
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            arr_27 [i_1] [i_1] [i_4] [i_5] [i_9] [i_9] |= ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_5 + 1]))));
                            var_30 = ((/* implicit */unsigned char) arr_18 [i_0] [0LL] [i_5] [(unsigned char)1]);
                            arr_28 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_4 - 2] [(_Bool)1] [i_4 - 2] [i_4 + 2] [i_4] [i_4 + 2])) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11251))))))));
                        }
                        var_31 = ((/* implicit */unsigned char) (~((~(arr_12 [i_0] [i_5 + 1] [i_0 - 2] [i_4 - 1])))));
                    }
                }
                for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_13)))));
                    arr_32 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */long long int) (short)335);
                    var_33 = ((/* implicit */unsigned short) (~(((unsigned long long int) var_3))));
                }
                arr_33 [i_1] [i_1] [i_0] = var_7;
                var_34 = ((/* implicit */unsigned char) (((-(min((3295337492U), (((/* implicit */unsigned int) var_4)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60724)))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) var_1))))));
    /* LoopSeq 3 */
    for (int i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_11])) && (((/* implicit */_Bool) arr_1 [i_11]))))))))));
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_4 [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_11])))) : (arr_2 [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-666)) ? (arr_31 [i_11] [i_11] [i_11] [i_11]) : (9223372036854775807LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1))))))));
        var_38 = ((/* implicit */signed char) (-((+(arr_24 [i_11] [i_11])))));
        var_39 = ((/* implicit */long long int) (((!(var_2))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)60724)) && (((/* implicit */_Bool) var_12)))) && ((_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        arr_39 [4U] = ((/* implicit */_Bool) var_10);
        var_40 = ((/* implicit */int) var_12);
    }
    for (short i_13 = 1; i_13 < 11; i_13 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                arr_47 [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_45 [i_13])) ? (arr_10 [i_13 + 1] [i_14] [i_13 + 1]) : (arr_10 [i_15] [i_14] [i_13])))));
                var_41 += ((/* implicit */unsigned int) arr_13 [i_13] [i_14] [i_15]);
                /* LoopNest 2 */
                for (short i_16 = 2; i_16 < 12; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_45 [i_13])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (7538986314951206009ULL))))));
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (_Bool)0))));
                            var_44 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_30 [i_13 + 1] [i_13 + 1] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_30 [i_13 + 2] [i_13 + 2] [i_16 + 1] [i_16 - 2]))))) ? (((((/* implicit */_Bool) arr_49 [i_15])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [i_13 + 2] [i_13 + 2] [i_16 - 1] [i_16 - 2])))) : (arr_49 [i_16])));
                            var_45 += ((((/* implicit */_Bool) min((((/* implicit */short) arr_53 [i_13] [i_14] [i_15])), ((short)-32744)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_13 + 1])) > (((/* implicit */int) arr_4 [i_15]))))) : (((/* implicit */int) arr_46 [i_15] [i_15] [i_15])));
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (var_3)));
                        }
                    } 
                } 
                arr_54 [i_13] [i_14] [i_14] |= ((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_13 + 2] [i_14] [i_14]))) == (max((var_1), (((/* implicit */unsigned int) var_2))))))))));
            }
            for (int i_18 = 2; i_18 < 12; i_18 += 2) 
            {
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_13))))) % (max((var_11), (((/* implicit */unsigned long long int) 1548164035U))))))))));
                var_48 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                var_49 ^= arr_10 [11U] [i_14] [8U];
                arr_58 [5LL] [i_13] [i_18] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_51 [i_13] [i_13 - 1] [i_13 - 1] [i_18] [i_18])), (((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744))) : (min((var_0), (((/* implicit */unsigned long long int) (signed char)-39))))))));
            }
            var_50 = ((/* implicit */long long int) (((-(arr_10 [i_13] [i_13 - 1] [i_14]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)(-32767 - 1)))))));
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_51 *= ((/* implicit */int) (~(((unsigned long long int) (-(arr_60 [i_14] [i_14]))))));
                var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) var_7))));
            }
        }
        var_53 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_42 [i_13])) ? (arr_42 [i_13]) : (arr_42 [i_13]))), (((((/* implicit */_Bool) arr_42 [i_13])) ? (arr_42 [i_13]) : (arr_42 [i_13])))));
        var_54 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((_Bool) max((((/* implicit */long long int) var_6)), (arr_26 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))), (arr_16 [i_13] [i_13] [(unsigned short)10] [i_13])));
        arr_61 [i_13 - 1] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2869613853374498430ULL)) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) arr_46 [i_13] [i_13 - 1] [i_13]))));
    }
}
