/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103068
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
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */unsigned int) (signed char)61);
    var_20 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)99))))), (var_12))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [(signed char)5] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) var_3)))));
                        arr_12 [(unsigned char)0] [i_1] [i_2 - 1] [i_3] [i_3] |= ((/* implicit */unsigned short) ((((_Bool) arr_0 [6] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11)));
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (arr_0 [i_0] [(unsigned char)9]))))) <= (((((/* implicit */_Bool) arr_4 [(_Bool)0])) ? (8878231534613340521ULL) : (((/* implicit */unsigned long long int) 163910203241112436LL))))));
                        arr_14 [i_1] [i_0] = (!(((/* implicit */_Bool) (short)-22773)));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 3; i_5 < 10; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_4] [i_2] [i_4] [i_0] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [(unsigned char)5] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-32)) ? (arr_4 [i_2 - 1]) : (arr_4 [i_2 - 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_9)))) | (((/* implicit */int) arr_15 [i_0] [i_1] [i_2 - 1]))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((-(((((/* implicit */_Bool) -2069406195)) ? (-7096925455619358627LL) : (((/* implicit */long long int) 0U)))))) >> (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) * (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_10))))))))));
                            arr_20 [i_0] [5LL] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (11772101746109682378ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_5])) > (((/* implicit */int) var_16)))))) : (((var_9) ? (arr_4 [i_5]) : (((/* implicit */unsigned long long int) var_5))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8591))))) ? (((/* implicit */unsigned long long int) min((max((var_12), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (unsigned short)29972))))) : ((~(9568512539096211104ULL)))));
                            var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [6U]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
                            arr_30 [i_0] [i_0] [i_2 - 3] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_31 [6LL] [i_0] [i_0] [i_7] = ((unsigned long long int) arr_2 [i_2 - 1] [i_0]);
                            var_24 = ((/* implicit */unsigned char) (signed char)-92);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_36 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_6 [i_0]), (arr_6 [i_0])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_26 [i_0] [(_Bool)1] [5LL] [i_4] [i_4] [i_8])))))) ? (((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_26 [i_0] [6LL] [(_Bool)1] [i_2 - 2] [i_4] [i_8]) <= (6967521912420088539ULL))))) : (max((((/* implicit */unsigned long long int) (unsigned char)96)), (arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_2 - 1] [5U] [i_0])))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_15))));
                            arr_37 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_8] = ((/* implicit */unsigned char) arr_23 [9U]);
                        }
                    }
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        var_26 ^= var_6;
                        arr_41 [(_Bool)1] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((6674642327599869238ULL), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_2] [(signed char)3] [i_2] [i_9 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min(((unsigned char)199), (var_13)))))) : (arr_10 [i_0] [i_1] [i_0] [i_9 + 1])));
                        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_9 + 1] [i_1] [(unsigned short)9])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9 + 2] [i_9 + 3] [i_2 + 1])))))));
                        arr_42 [i_0] [i_0] [i_1] [(_Bool)1] [i_0] [i_9 + 1] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_23 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) >> (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_13)))) <= (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_39 [i_0] [i_1] [6LL] [i_1] [i_0] [i_9]))))))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_28 *= ((((/* implicit */_Bool) min(((short)22), (((/* implicit */short) var_3))))) ? (((((/* implicit */_Bool) arr_35 [i_10] [i_1] [i_2 - 1] [i_10] [i_2 - 2] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_4)))));
                        arr_45 [i_0] [i_0] [i_2] [7U] [(_Bool)1] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_15)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_10)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-8591)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) var_7)))))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_26 [i_0] [i_1] [i_1] [i_2] [i_2] [i_10]), (((/* implicit */unsigned long long int) var_13)))))))))));
                        arr_46 [i_0] [i_0] [i_0] [(_Bool)1] [9ULL] = ((/* implicit */long long int) var_12);
                        arr_47 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_28 [(short)4] [i_0]) ? (((/* implicit */int) var_16)) : (-1))) % (((/* implicit */int) var_14))))) - (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_0] [i_1] [(short)10] [i_2 - 3] [i_10] [9LL]))))) + (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_32 [i_0])))))));
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        arr_51 [i_0] [i_1] [i_2] [(signed char)7] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2 - 1]))) > (((arr_7 [i_0] [i_1] [i_0]) & (var_15))))))));
                        var_30 = ((var_4) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (2016770441) : (((/* implicit */int) arr_1 [i_1])))))))) : (var_10));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            arr_54 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [8] [i_12]))))))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_14))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 1; i_13 < 16; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_13 - 1])) & (((/* implicit */int) var_16))))) ? (((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_58 [i_13 + 1]))));
                arr_60 [(unsigned short)7] [(unsigned short)7] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_13]))) <= (var_1)));
            }
        } 
    } 
}
