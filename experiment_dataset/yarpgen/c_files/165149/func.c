/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165149
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_0 [i_0])));
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (unsigned short)13))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (((long long int) var_6))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            var_14 &= ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2518326850U))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6)))))))));
            var_15 ^= ((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) & (var_0))) - (11U)))))));
            var_16 ^= ((/* implicit */unsigned int) (signed char)103);
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((!((_Bool)1))) && (((/* implicit */_Bool) var_5)))))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % ((-(((unsigned long long int) (_Bool)1))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 7; i_4 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) var_0)) * (((-1946156758921673101LL) / (((/* implicit */long long int) arr_15 [i_0] [(unsigned short)9] [i_4]))))));
                arr_16 [i_4 + 4] [i_3] [i_0] = (~(((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned char)192)) - (163))))));
            }
            for (long long int i_5 = 1; i_5 < 7; i_5 += 3) /* same iter space */
            {
                arr_21 [4LL] [i_3] [4] [i_3] |= ((/* implicit */unsigned char) var_6);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_3] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_5 + 1] [i_6] [i_0] [i_6]))) : (var_6)));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_19 [i_5] [(signed char)6] [i_3] [i_5 + 3])) % ((~(var_10)))));
                    var_22 ^= ((/* implicit */unsigned char) arr_22 [i_0] [i_3] [i_5 + 4] [i_5 + 4] [i_5] [i_6]);
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5 + 4] [i_5 + 4])) && (((/* implicit */_Bool) 8388608U)))))));
                }
                for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_3)))) ? (((long long int) (signed char)31)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) >> ((((~((~(((/* implicit */int) var_4)))))) - (40998)))));
                    arr_27 [i_5] [i_3] [i_3] = ((/* implicit */signed char) arr_9 [i_0] [i_0]);
                    arr_28 [i_5] [i_5 + 4] [i_5 + 1] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5 + 3] [i_5 - 1] [i_5])) ? (arr_19 [i_5] [i_5] [i_5 + 3] [i_5]) : (var_6)))), (max((max((arr_20 [i_3] [i_7]), (1946156758921673101LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 1946156758921673101LL)))))))));
                }
                for (int i_8 = 4; i_8 < 10; i_8 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) (((((+(var_10))) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) 4286578688U)), (((((/* implicit */_Bool) (unsigned char)160)) ? (300898910183482355LL) : (7903088070385977220LL))))) - (300898910183482355LL)))));
                    arr_31 [i_5] [i_3] [i_5 - 1] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) (unsigned char)100))))))))));
                    var_26 *= ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_0]))))), (((/* implicit */unsigned int) arr_9 [i_5 + 4] [i_8 - 2])))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095)))));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_27 ^= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_8 [i_10])) : (14867510562459894118ULL))))) > (((/* implicit */unsigned long long int) ((2097024U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(unsigned short)6] [i_3] [(unsigned short)6] [i_3])))))))))));
                        arr_38 [i_0] [i_5] [i_5] [i_9] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5])) ? (var_10) : (((/* implicit */long long int) arr_19 [i_5] [i_3] [i_3] [i_3]))))) ? (max((((/* implicit */long long int) arr_33 [i_0] [i_3] [i_5])), (arr_20 [i_0] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))))));
                        var_28 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_36 [i_5] [i_5 + 2] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) < (max((-7903088070385977223LL), (((/* implicit */long long int) 1745811190))))));
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) var_0);
                        arr_42 [i_0] [i_3] [i_3] [i_5] [i_11] = ((/* implicit */signed char) ((3ULL) * (((/* implicit */unsigned long long int) -1349246711))));
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551603ULL))))) * (((/* implicit */int) ((((/* implicit */long long int) arr_19 [(unsigned char)4] [i_5] [i_5] [i_5])) > (arr_37 [i_0] [i_0] [i_5] [i_9] [i_11]))))));
                        var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_0] [i_3] [i_0] [i_5 + 2] [i_9] [i_11] [i_5 + 2])) ? ((-(max((511U), (((/* implicit */unsigned int) var_3)))))) : (max((((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_9 - 2] [i_5 + 3])), (((((/* implicit */_Bool) arr_37 [(signed char)5] [i_3] [i_5 + 1] [i_9] [i_11])) ? (2518326850U) : (arr_14 [i_9] [i_11])))))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */unsigned long long int) arr_26 [i_5] [i_3] [i_3] [i_3])), (arr_10 [i_0]))))) != (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_8)))) | ((~(((/* implicit */int) (unsigned char)6)))))))));
                    var_33 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_33 [i_0] [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9 - 1] [i_3] [i_3]))) : (var_6)))));
                    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (var_10) : (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -300898910183482355LL)) && (((/* implicit */_Bool) var_4)))))))))));
                }
            }
        }
        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
        {
            arr_45 [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65509)) * (((/* implicit */int) (unsigned char)0))));
            var_35 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_12] [i_0] [i_0]))) / (var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26580)) / ((+(((/* implicit */int) var_2))))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_8))))) / ((+(7903088070385977233LL)))))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [(signed char)0]))))) + (max((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_0)))))));
            var_37 = ((/* implicit */long long int) var_8);
        }
        var_38 |= ((/* implicit */signed char) var_10);
    }
    var_39 ^= ((/* implicit */unsigned char) var_2);
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(669088173347748799LL)))) ? (max((((/* implicit */long long int) var_5)), (var_10))) : (2013265920LL)))) ? (((/* implicit */int) var_2)) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) >> (((((/* implicit */int) var_5)) - (236)))))));
}
