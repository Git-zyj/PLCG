/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147920
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
    var_17 = (-(((((/* implicit */_Bool) (short)31221)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)31221)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 699883920)) ? (max((((/* implicit */int) (unsigned short)0)), (699883922))) : (((/* implicit */int) (short)30))))) ? (((unsigned int) 9223372036854775807LL)) : (((/* implicit */unsigned int) (-(173547280)))))))));
        var_19 ^= ((/* implicit */int) (unsigned short)13217);
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_20 = max((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_1] [i_2] [i_1 - 1]));
            var_21 = ((/* implicit */unsigned char) (-(2147483647)));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                arr_10 [i_1 + 1] = ((/* implicit */_Bool) 9223372036854775807LL);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_17 [i_4] [i_2] [i_3] [9] = ((/* implicit */int) (!(((/* implicit */_Bool) -699883920))));
                            var_22 = ((/* implicit */unsigned char) max((1701450652986122324LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_4])))))));
                            arr_18 [i_5] [i_5 - 1] [i_5] [i_4] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) (signed char)6)) ? (arr_3 [i_1 + 2]) : (arr_3 [i_1 + 1])))));
                            arr_19 [i_4] [i_2] [i_3] [i_2] [i_5 - 1] = ((/* implicit */long long int) arr_12 [i_4]);
                            var_23 = arr_0 [i_1 + 1];
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((unsigned long long int) 0));
                    arr_30 [i_6] [i_7] [i_6] = ((/* implicit */signed char) arr_0 [i_1 + 2]);
                    arr_31 [i_1 - 1] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (~(arr_2 [i_1 + 2] [i_1])));
                }
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        {
                            arr_36 [i_6] [i_9] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_6] [i_10 + 1] [i_7])) ? (arr_4 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))));
                            var_25 = ((/* implicit */short) ((arr_28 [i_1] [i_10 - 1]) / (-2)));
                        }
                    } 
                } 
                arr_37 [i_6] [i_6] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_1 + 2] [i_1 - 2] [i_6]))));
                /* LoopNest 2 */
                for (signed char i_11 = 4; i_11 < 11; i_11 += 4) 
                {
                    for (long long int i_12 = 4; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_45 [i_11] [i_11] [i_7] [i_1] [i_6] [i_11] &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) 0)) >= (9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_12] [i_11 + 1] [i_11 - 1] [i_1 - 1] [i_12]))) : (((((/* implicit */_Bool) 2147483647)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_46 [i_6] [5LL] = ((((/* implicit */_Bool) 1279228551U)) ? (((/* implicit */int) (short)-12072)) : (((/* implicit */int) (unsigned short)0)));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1879048192U)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)107)) != (((/* implicit */int) (signed char)0))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) >= (142989288169013248LL)))))))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1 - 2] [i_11 - 1] [i_12 - 4]))));
                            var_28 ^= ((/* implicit */_Bool) 18446744073709551608ULL);
                        }
                    } 
                } 
            }
            for (long long int i_13 = 1; i_13 < 10; i_13 += 2) 
            {
                var_29 &= var_4;
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 2; i_15 < 12; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 2147483640))))))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_14)) < (arr_53 [i_1] [i_13] [i_15] [i_15] [i_15 - 1])));
                            arr_56 [i_1 + 2] [i_6] [i_15] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)32766))));
                            arr_57 [i_15] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4222707770658560594ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))));
                            arr_58 [i_1] [i_6] [i_13] [i_14] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1073741824)) ? (((1U) >> (((-9223372036854775799LL) - (-9223372036854775800LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    arr_61 [i_1] [i_6] [i_1 - 1] [i_1 + 1] [i_1] = arr_28 [i_1 + 1] [i_6];
                    arr_62 [i_1] [i_6] [i_1] [i_1 - 2] [(signed char)5] [i_1 - 2] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2))) : (1879048192U)));
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1073741815)) ? (18446744073709551612ULL) : (17873661021126656ULL)));
                    var_33 ^= ((/* implicit */long long int) (+(arr_4 [i_13 + 3])));
                }
                arr_66 [i_6] [i_6] [i_13] = ((/* implicit */int) arr_33 [i_1 + 1]);
            }
            arr_67 [i_6] [i_6] = ((/* implicit */long long int) (_Bool)1);
        }
        var_34 = ((/* implicit */short) max((3499869304410986714LL), (((/* implicit */long long int) (unsigned char)255))));
        arr_68 [i_1] = ((/* implicit */short) max((-1LL), (((/* implicit */long long int) (signed char)-35))));
    }
    var_35 = ((/* implicit */long long int) var_14);
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) 2305838611167182848LL)), (((9223372036854775807LL) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))));
}
