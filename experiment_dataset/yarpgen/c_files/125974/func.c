/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125974
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_15 = arr_5 [i_1] [i_0];
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18463)) ? (-1LL) : (((/* implicit */long long int) 366810034U))))) ? (((/* implicit */int) ((unsigned short) (signed char)-18))) : (((/* implicit */int) ((_Bool) var_11)))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((arr_8 [i_1 + 1] [i_2]) == (arr_8 [i_1 - 1] [i_1 + 2]))), (((arr_8 [i_1 - 1] [i_3]) < (arr_8 [i_1 + 2] [i_3]))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) var_7);
                        arr_10 [i_0] [22] [i_3] = ((/* implicit */_Bool) var_3);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_5 [i_0] [10]))));
                        var_19 = ((/* implicit */unsigned short) var_8);
                        var_20 = ((/* implicit */unsigned short) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_4]) && (((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_13))))))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (_Bool)1))))))));
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 18446744073709551613ULL)))));
                        arr_20 [i_0] [i_0] [i_0] [(unsigned short)13] = max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)39801)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) : (7774764061841101944ULL))))), (min((((/* implicit */unsigned long long int) arr_5 [3] [i_1 + 1])), (min((((/* implicit */unsigned long long int) var_10)), (18446744073709551597ULL))))));
                        var_22 = ((/* implicit */unsigned short) var_4);
                        var_23 = ((/* implicit */unsigned char) var_2);
                    }
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))), ((+(4294967295U)))))), ((~(var_8)))));
        arr_21 [i_0] = ((/* implicit */unsigned short) (-((-(arr_8 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_25 [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-2077)) - (((/* implicit */int) (unsigned char)66))))) : (((((/* implicit */_Bool) 18446744073709551576ULL)) ? (1687784047U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            arr_26 [i_6] [i_0] [i_6] &= ((/* implicit */_Bool) arr_17 [7ULL] [7ULL] [i_0] [i_6] [(short)16] [7ULL]);
            var_25 = ((/* implicit */unsigned int) 15ULL);
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 24; i_7 += 4) 
            {
                arr_29 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                arr_30 [i_0] = ((/* implicit */unsigned long long int) 1156789636);
                var_26 = ((/* implicit */unsigned short) 8662949223741396815ULL);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_27 ^= ((/* implicit */_Bool) arr_3 [i_8]);
            arr_33 [i_8] [(unsigned short)19] [i_0] = ((/* implicit */long long int) arr_23 [i_8]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_37 [(_Bool)1] [i_0] [(signed char)22])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))) & (((/* implicit */int) arr_15 [i_0] [i_9] [i_9] [i_0]))));
            var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_9])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_9])) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (34359738367LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_9] [0LL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)2077))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3563))))) : (((/* implicit */int) (unsigned short)65525)))))));
            var_29 = (-(18446744073709551609ULL));
            var_30 += (!(((/* implicit */_Bool) (+(3658650834698406590ULL)))));
            arr_39 [i_0] = ((/* implicit */unsigned short) (short)32756);
        }
    }
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        arr_42 [i_10] = ((/* implicit */unsigned long long int) ((5481154723442233680LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_2))));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            var_32 = (!(((/* implicit */_Bool) (unsigned short)65519)));
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 5576297152734708296LL)))) ? (((/* implicit */int) max((arr_15 [i_10] [i_10] [(signed char)20] [i_11]), (((/* implicit */unsigned short) var_12))))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (-100274480) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_11])) ? (-1836525758) : (((/* implicit */int) (short)-32380))));
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (short)32767))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)83))))))) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_36 |= ((/* implicit */long long int) var_5);
                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) arr_27 [i_10] [i_12] [i_10])) == (arr_43 [i_10] [i_10]))))) ? (((/* implicit */int) (short)-17369)) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (long long int i_14 = 2; i_14 < 14; i_14 += 3) 
            {
                var_38 = ((/* implicit */unsigned short) (short)2072);
                var_39 = ((/* implicit */long long int) min((var_39), (max(((~(9223372036854775802LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */int) var_6)) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))))));
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (1077296430104477509LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43837)) || (((/* implicit */_Bool) 2288822655482465049ULL))))))));
            }
        }
        arr_56 [i_10] |= ((/* implicit */short) (unsigned short)65535);
    }
    for (int i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)65529)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65519)))))))))));
        var_42 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_15])) ? (36028797018963967LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_15] [i_15]))))));
    }
}
