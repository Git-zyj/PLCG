/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175409
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((((/* implicit */int) (short)-28087)) > (2147483642)))), (2147483642)))));
        var_10 = ((/* implicit */_Bool) ((min((min((-2147483643), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] = 1809930408;
                        var_11 = ((/* implicit */signed char) -1110655698);
                    }
                } 
            } 
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_8 [(short)5] [(short)5] [i_1 + 1]), (arr_8 [i_1] [i_1] [i_1 + 1])))) || (((/* implicit */_Bool) min((arr_8 [i_1] [i_1] [i_1 + 1]), (arr_8 [i_1 + 1] [i_1] [i_1 + 1])))))))));
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) arr_1 [i_1 + 1])), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) min((((((arr_7 [(signed char)7] [i_1] [i_1]) + (9223372036854775807LL))) >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (3975552269U))))), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0] [i_0]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (551465985U) : (arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0])));
            var_15 = arr_14 [i_0] [i_0];
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) (signed char)119)) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_3)))))))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 4; i_6 < 9; i_6 += 2) 
            {
                var_17 = ((((/* implicit */_Bool) -205153195)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (var_9));
                /* LoopSeq 1 */
                for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    var_18 = ((/* implicit */int) arr_15 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned char) var_3);
                }
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    var_20 += ((/* implicit */unsigned int) var_3);
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_0))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 2147483642))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_16 [i_0] [i_5]))));
                }
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551613ULL)) && (((/* implicit */_Bool) (short)9465))));
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_5] [i_5] [(unsigned short)3])), (arr_13 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((arr_4 [i_6 - 2] [i_6 - 3] [i_6]), (arr_4 [i_6 - 2] [i_6 - 3] [i_6])))));
            }
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_26 += ((/* implicit */unsigned long long int) min(((~(arr_4 [i_0] [i_5] [i_5 + 1]))), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_9]))));
                var_27 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((arr_29 [i_9]), (((/* implicit */unsigned long long int) 551465985U))))) ? (min((137436856320ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_5] [i_5] [i_0] [i_5] [i_0])))) : (((/* implicit */unsigned long long int) 551465985U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])) << ((+(((/* implicit */int) var_8)))))))));
                /* LoopSeq 2 */
                for (int i_10 = 2; i_10 < 9; i_10 += 3) 
                {
                    arr_33 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) max((var_8), (((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)4)), (3743501304U)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))));
                    var_28 -= ((/* implicit */unsigned short) var_4);
                    var_29 = ((/* implicit */unsigned short) (+(134217727ULL)));
                }
                for (unsigned short i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    arr_37 [i_0] [i_11] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) min((arr_19 [i_0]), (var_7)))), (min((arr_27 [3U] [i_5] [i_5 + 1]), (((/* implicit */unsigned short) var_2))))))) < (((((/* implicit */int) var_2)) * (((/* implicit */int) var_8))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11 + 3] [i_5 + 1] [i_9])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_11 - 1] [i_5 + 1] [i_11])))));
                        arr_40 [i_0] [i_5 + 1] [i_0] [i_5 + 1] = ((/* implicit */unsigned char) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [i_0]);
                        arr_41 [i_0] [i_5 + 1] [i_9] [i_11] = arr_19 [i_11 + 3];
                        var_31 = ((/* implicit */_Bool) var_1);
                        arr_42 [i_0] [i_5] [i_0] [i_11] [i_11] = (+(((/* implicit */int) ((551465981U) > (((/* implicit */unsigned int) 2147483642))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_32 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_5 + 1])) : (((/* implicit */int) arr_19 [i_5 + 1])))), (((/* implicit */int) arr_19 [i_5 + 1]))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)15151)), (-1964032797)))) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_39 [i_0] [i_0] [i_0] [i_11 + 3] [i_13] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_32 [i_0] [i_5] [i_9] [i_11 + 1] [i_13] [i_13])) <= (((/* implicit */int) arr_32 [i_11] [(_Bool)1] [(_Bool)1] [i_11 + 3] [i_13] [i_13])))))));
                        arr_47 [i_0] [i_13] [0] [(signed char)11] [(signed char)11] = ((/* implicit */unsigned short) (-(134217732ULL)));
                        var_34 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) ((arr_18 [i_0]) && (((/* implicit */_Bool) var_5))))), (arr_35 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_14 = 1; i_14 < 11; i_14 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) max((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_0] [i_0]))));
                        arr_52 [i_0] [i_5 + 1] [i_5 + 1] [i_0] [i_14 + 1] [i_11] [i_14] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_13 [(unsigned short)2] [i_14 + 1] [i_14])))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_24 [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (arr_12 [1U] [1U] [1U]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))))))));
                    }
                    arr_53 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) arr_34 [(unsigned char)4] [i_5] [i_5] [i_5 + 1]);
                    arr_54 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) < (10392226631976454030ULL)));
                }
            }
            arr_55 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), (1216147522)));
        }
        arr_56 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((var_8) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6)))) > (((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [11U] [8U] [i_0] [i_0] [i_0] [(_Bool)1])), (var_5))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)10]))))), (min((551465981U), (((/* implicit */unsigned int) (_Bool)1))))))));
    }
    var_36 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-21783))))), (max((var_9), (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)));
}
