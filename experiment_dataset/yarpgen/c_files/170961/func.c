/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170961
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8204)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))) : ((~(((((/* implicit */_Bool) (unsigned char)2)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2783530937U))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_11))));
                                var_16 = ((/* implicit */_Bool) (+(9223372036854775780LL)));
                                arr_12 [i_0] [i_1] [9LL] [i_1] [i_4] &= ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 18; i_5 += 4) 
        {
            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned char) min(((+(1511436358U))), (((/* implicit */unsigned int) ((arr_9 [i_6 + 3] [i_6 + 1] [i_6] [i_6 + 1] [i_5 - 3]) < (arr_9 [i_6 + 2] [5U] [(unsigned char)11] [i_5] [i_5 - 3]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_18 -= ((/* implicit */unsigned int) arr_3 [i_6] [i_0]);
                            var_19 |= var_6;
                            var_20 -= ((/* implicit */unsigned int) var_12);
                        }
                        var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (min((((/* implicit */long long int) (unsigned short)1891)), (9223372036854775796LL)))));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39563)));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_23 *= ((/* implicit */unsigned int) (((+((~(var_11))))) * (((/* implicit */int) ((arr_19 [(_Bool)1] [i_0] [i_0] [(_Bool)1]) == (arr_23 [i_9]))))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_24 = ((/* implicit */long long int) var_8);
                    var_25 = ((/* implicit */int) min((var_25), ((((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_5)))))) % (((((/* implicit */_Bool) (-(-9223372036854775786LL)))) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_10 + 1] [i_9] [16])))))));
                }
                arr_31 [i_0] [i_9] [i_10 + 1] = ((/* implicit */unsigned short) var_3);
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                arr_35 [i_9] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_4 [2ULL] [i_9] [i_9])) ? (arr_4 [i_0] [i_9] [i_12]) : (((/* implicit */int) arr_26 [i_0] [i_9] [i_12])))));
                var_26 = ((/* implicit */unsigned int) min((var_26), ((-(min((4113503073U), (arr_2 [i_9] [i_12])))))));
                var_27 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1))))))) <= ((-(1500628701U)))));
            }
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_9])) : (-9223372036854775780LL)))) || (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))), ((+(arr_2 [i_0] [i_0]))))))));
        }
        var_29 += ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) 4294967295U)));
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)1895)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            {
                var_31 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (1125899906842112ULL))));
                var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_13] [i_14]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 161627769U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_39 [i_13] [i_13])))));
                /* LoopSeq 4 */
                for (long long int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                {
                    arr_45 [i_15] [i_15] [i_13] [i_13] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_38 [i_15])) && (((/* implicit */_Bool) arr_38 [i_13])))), ((!(((/* implicit */_Bool) arr_38 [i_13]))))));
                    arr_46 [i_13] [i_13] [i_15] = ((/* implicit */unsigned long long int) ((unsigned int) arr_41 [i_13] [i_13]));
                }
                for (long long int i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    arr_51 [i_13] [i_16] [i_13] [i_13] |= ((/* implicit */unsigned short) (~(2147483648U)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_17 = 3; i_17 < 22; i_17 += 3) 
                    {
                        var_33 |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [i_17 - 3]))));
                        var_34 &= ((((/* implicit */_Bool) arr_40 [i_13] [i_14] [i_17])) ? (((/* implicit */unsigned long long int) -1100937778)) : (((((/* implicit */unsigned long long int) 2434779216U)) / (9167281862504953869ULL))));
                        var_35 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1500628688U)))) / (arr_36 [i_13] [i_13]));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 23; i_18 += 4) 
                    {
                        var_36 &= ((/* implicit */unsigned long long int) (~(((2794338583U) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)229)))))))));
                        var_37 *= ((/* implicit */unsigned int) ((unsigned long long int) min((arr_47 [i_18 + 2] [i_18] [10ULL] [i_18 + 2]), (arr_47 [11U] [7U] [i_14] [i_18 + 2]))));
                    }
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        var_38 |= ((/* implicit */int) min((17830046689736266126ULL), (((/* implicit */unsigned long long int) -9223372036854775786LL))));
                        /* LoopSeq 3 */
                        for (unsigned int i_20 = 2; i_20 < 23; i_20 += 4) 
                        {
                            var_39 = min((min((arr_60 [12ULL] [i_14] [i_20 - 2] [i_20 - 2] [i_20] [i_14]), (8388607))), (((((/* implicit */_Bool) arr_60 [i_13] [i_14] [i_20 - 2] [i_19] [i_20] [i_13])) ? (arr_60 [(_Bool)1] [i_14] [i_20 - 2] [(_Bool)1] [(unsigned short)11] [i_20 - 2]) : (arr_60 [i_13] [i_14] [i_20 - 2] [i_19] [i_20 + 1] [i_13]))));
                            arr_61 [i_14] [i_14] [i_14] [i_20 + 1] = min((((/* implicit */int) var_3)), (((arr_38 [i_20 + 2]) + (((/* implicit */int) var_3)))));
                            var_40 ^= ((/* implicit */unsigned long long int) arr_40 [i_20 - 2] [i_20 - 2] [i_20 + 1]);
                            arr_62 [i_13] [i_13] [i_16] [(_Bool)1] [i_16] = ((/* implicit */long long int) var_10);
                        }
                        for (long long int i_21 = 0; i_21 < 25; i_21 += 2) /* same iter space */
                        {
                            arr_65 [i_13] [i_14] [i_16] [i_19] [i_21] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((!(var_3))), (((arr_64 [i_13] [i_13] [i_16] [i_19] [i_21] [i_16]) < (((/* implicit */unsigned int) var_12))))))) >> (((((/* implicit */_Bool) arr_40 [i_16] [i_19] [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_19] [i_19] [i_19]))))));
                            var_41 = ((/* implicit */long long int) min((arr_38 [i_19]), (((/* implicit */int) (unsigned char)22))));
                            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) 8291489816475518905LL)) ? (((((/* implicit */_Bool) 131071ULL)) ? (131063ULL) : (((/* implicit */unsigned long long int) 2011409181)))) : (((/* implicit */unsigned long long int) -602858844)))))));
                        }
                        for (long long int i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
                        {
                            arr_68 [i_13] [i_14] [i_16] [i_19] [i_22] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_38 [(unsigned short)24])), (((((/* implicit */_Bool) var_10)) ? (arr_39 [i_13] [9U]) : (((/* implicit */long long int) 602858850)))))) - (((/* implicit */long long int) max((arr_59 [i_19] [i_14] [i_16] [i_14] [i_22] [i_14]), (((/* implicit */int) arr_53 [i_13] [13ULL] [i_22])))))));
                            arr_69 [i_13] [i_14] [i_14] [i_19] [i_22] = ((/* implicit */unsigned short) (-(((-2147058359) / (arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
                            arr_70 [i_13] [(_Bool)1] [22U] [i_19] [i_22] = ((/* implicit */unsigned int) max((min((2443914838661636141ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_13] [i_14] [(unsigned short)16])) * (((/* implicit */int) arr_40 [1LL] [i_14] [i_16])))))));
                        }
                    }
                    for (long long int i_23 = 4; i_23 < 23; i_23 += 4) 
                    {
                        arr_73 [i_13] [i_13] [i_14] [3] [i_23 - 4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_52 [i_23 + 1] [i_23] [i_23 + 1] [i_23 - 2] [i_23]), (arr_52 [i_23 + 1] [i_23 + 1] [22] [i_23 + 2] [i_23 - 4]))))));
                        arr_74 [i_23] [i_16] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_4);
                    }
                }
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1257187401345099672ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775796LL)));
                    arr_78 [i_14] [i_24] = ((/* implicit */long long int) ((int) var_8));
                }
                for (long long int i_25 = 0; i_25 < 25; i_25 += 4) /* same iter space */
                {
                    var_44 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_13])) ? ((-(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_47 [i_13] [i_14] [i_13] [i_25]))))))) * ((-(1459177542972724659LL)))));
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (arr_80 [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) -6584750465072316838LL))))) ? (((((/* implicit */_Bool) var_12)) ? (131065ULL) : (arr_57 [i_14] [i_14] [i_25] [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9)))))))) || (((/* implicit */_Bool) arr_48 [i_13] [i_14] [i_25])))))));
                }
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (18446744073709420559ULL) : (5091821545995390181ULL)))) ? (((var_4) | (((/* implicit */unsigned int) var_11)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_76 [14LL] [i_14] [i_13])))) : (((((/* implicit */_Bool) 281447170U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) : (2794338605U)))))));
                var_47 -= min((var_1), (((/* implicit */unsigned int) arr_53 [5U] [i_14] [i_14])));
            }
        } 
    } 
}
