/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148536
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
    var_17 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [(unsigned char)0] [i_3] = ((((/* implicit */_Bool) 131071U)) ? (min((var_3), (((((/* implicit */long long int) ((/* implicit */int) (short)-14))) - (2LL))))) : ((-(arr_7 [i_2 + 2] [i_2 + 3] [i_2 + 1]))));
                        var_18 |= ((/* implicit */short) ((arr_6 [i_0] [i_2]) >> ((((+(arr_0 [i_2 + 1]))) + (8137049590424486955LL)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((-9223372036854775807LL - 1LL)));
                        /* LoopSeq 1 */
                        for (int i_5 = 3; i_5 < 16; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) min((18446744073709551589ULL), (((/* implicit */unsigned long long int) var_12))));
                            var_21 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) ((_Bool) (_Bool)1)))))), (max((((/* implicit */long long int) (short)-7)), (arr_16 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_2])))));
                        }
                        arr_18 [i_0] [(unsigned char)11] [i_2] [i_4] [8] = min(((~(((/* implicit */int) arr_5 [i_2 - 1])))), (((/* implicit */int) min(((signed char)120), (((/* implicit */signed char) arr_5 [i_2 - 1]))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((var_14), (((arr_15 [i_0 + 3] [i_4 + 1] [i_2 - 2]) ? (arr_10 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 3])))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (-(2080374784)))), (255U))), (((/* implicit */unsigned int) max((arr_19 [i_2 + 3] [i_2] [i_0 + 3] [(unsigned char)17] [i_0] [i_0]), (arr_19 [i_2 + 3] [i_1] [i_0 + 2] [i_0] [(_Bool)1] [i_0]))))));
                        var_24 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [5ULL] [i_0 - 2] [9LL] [0] [(unsigned short)8] [(signed char)6]))))) : (((/* implicit */unsigned long long int) var_9)));
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_5 [16])), ((unsigned char)31)))) ? (arr_11 [i_0 - 2] [i_0 + 3] [i_2 + 2] [i_2]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0])), (var_14)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [15] [i_6] [(unsigned short)10])))))))))));
                    }
                    arr_21 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)252))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3))))) : (arr_11 [i_2 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                    arr_22 [i_0] [i_0] &= ((/* implicit */unsigned int) 33030144);
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 4161536)))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_2 + 2] [i_2] [i_0 - 2] [i_2])) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_7])) : (arr_6 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) arr_10 [i_0 - 2] [10LL] [i_2 + 1] [i_7 + 1]))))));
                                var_27 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) var_16)) ? (2147483647) : (-2147483637)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_28 ^= ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)63))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)192)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_12 = 3; i_12 < 11; i_12 += 4) 
                    {
                        var_29 = ((((/* implicit */_Bool) arr_38 [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12 - 2] [i_12 - 3] [i_12 - 3])) ? (arr_38 [i_12 - 3] [i_12 - 1] [i_12 - 1] [i_12 - 3] [i_12 - 3] [i_12 - 1]) : (arr_38 [i_12 - 3] [i_12 - 1] [i_12 - 1] [i_12 - 3] [i_12 - 1] [i_12 - 1]));
                        var_30 ^= ((/* implicit */unsigned long long int) arr_4 [i_10] [i_9]);
                        arr_39 [i_12] = ((/* implicit */signed char) (~((~(var_8)))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_3 [i_13]))));
                        var_32 = ((/* implicit */unsigned int) (unsigned char)112);
                        arr_44 [i_9] [i_10] [i_11] [i_13] = ((((/* implicit */int) arr_26 [i_10] [i_10] [i_11] [i_13] [4])) >= ((~(((/* implicit */int) arr_2 [i_9])))));
                        var_33 = ((/* implicit */int) ((((/* implicit */int) (((+(0LL))) < (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_10] [i_13])))))))) <= (((/* implicit */int) (unsigned char)0))));
                        var_34 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (var_14) : (arr_3 [i_11]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_13])) && (((/* implicit */_Bool) arr_3 [i_9])))))));
                    }
                    for (long long int i_14 = 3; i_14 < 9; i_14 += 4) 
                    {
                        arr_47 [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_14 - 1] [i_11] [i_14] [i_11])) ? (arr_40 [i_9] [i_14 + 2] [i_11] [i_9] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_14 - 3] [i_11]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_49 [i_9] [i_10] [10ULL] [5LL] [i_15])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_14] [i_9])))))))) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
                            var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_9])) ? (min((arr_38 [i_14 + 3] [i_15 + 1] [(unsigned char)7] [i_15] [i_15] [i_15]), ((+(var_4))))) : ((~(arr_27 [(_Bool)1] [i_14] [i_14 - 2] [i_14 + 1] [i_14] [(unsigned char)5] [(unsigned char)10])))));
                            var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)255))))) ? (((/* implicit */int) arr_19 [i_14 - 3] [i_14] [i_15 + 1] [i_15] [i_15] [17ULL])) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) arr_46 [i_9] [i_9])))))))));
                            var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */_Bool) ((short) arr_19 [i_9] [i_15 + 1] [i_11] [i_14 - 2] [i_15] [17]))) ? (-1) : (((((/* implicit */_Bool) arr_11 [i_9] [i_15 + 1] [i_11] [i_14 - 2])) ? ((~(arr_3 [i_9]))) : ((~(((/* implicit */int) (unsigned short)49152))))))))));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((unsigned char) var_7)))));
                        }
                        for (int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_28 [i_11])))))) : (((long long int) arr_53 [i_9] [i_9] [i_9] [i_9] [2LL] [i_9] [i_9]))));
                        }
                        for (unsigned int i_17 = 4; i_17 < 10; i_17 += 2) 
                        {
                            var_42 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2305843009213693952LL)))))));
                            arr_56 [(unsigned char)7] [i_10] [i_14] [i_14] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (~(arr_46 [i_9] [i_10]))))), ((~(arr_53 [i_14 - 3] [i_14] [i_14] [i_14] [i_14] [i_14 - 2] [i_14])))));
                            var_43 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) arr_34 [(signed char)9] [i_14 + 3] [i_17 + 1])) : (((/* implicit */int) ((70368744177664ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))))));
                        }
                    }
                    arr_57 [i_9] [(unsigned short)10] [i_11] = ((/* implicit */long long int) (~(min((((unsigned long long int) 260096U)), (((/* implicit */unsigned long long int) (_Bool)0))))));
                }
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    var_44 = ((/* implicit */unsigned short) arr_26 [i_18] [i_18] [i_10] [i_9] [i_9]);
                    var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((short) 536870400)))));
                    arr_60 [i_9] [i_9] [(_Bool)0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) : (((((/* implicit */_Bool) (unsigned char)26)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_58 [i_9] [i_9] [i_9])) ? (arr_11 [i_9] [i_10] [i_18] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned char)3] [i_10] [i_18] [i_10] [i_10] [(signed char)11]))))) | (((/* implicit */unsigned long long int) arr_7 [i_9] [i_10] [16LL])))))));
                }
                for (long long int i_19 = 2; i_19 < 11; i_19 += 1) 
                {
                    var_47 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)22))));
                    var_48 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_9] [i_10] [i_19])) ? (max((((/* implicit */int) arr_12 [7LL] [i_19] [i_19] [i_19 + 1])), (min((-1), (((/* implicit */int) var_16)))))) : (((/* implicit */int) min((arr_25 [i_19 + 1] [i_19 - 2] [i_19]), (arr_25 [i_19 + 1] [i_19 - 2] [(unsigned short)18]))))));
                }
                var_49 = ((/* implicit */short) var_14);
            }
        } 
    } 
}
