/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115892
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = min((((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((130023424) - (130023396))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2088510264)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)108))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_0]))))), (((((arr_7 [(unsigned char)6] [i_1] [i_1]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)48042)) - (48025)))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_0] [i_0]) >> (((/* implicit */int) ((((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (var_15))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (var_5) : (var_15)))) ? (((/* implicit */unsigned long long int) (+(var_11)))) : (arr_5 [i_0] [13] [i_2 - 2])));
                var_18 = ((/* implicit */unsigned char) (~(arr_6 [i_2 - 1])));
            }
        }
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_3))))))));
                    arr_19 [i_3] = ((/* implicit */int) 9019690760550449450LL);
                    arr_20 [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0]))))), (arr_0 [i_3])));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) (signed char)-68)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18783))) <= ((-9223372036854775807LL - 1LL))))))))));
                        arr_23 [i_3] = ((/* implicit */unsigned short) var_14);
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_5] [(unsigned short)11] [i_0])) <= (((/* implicit */int) (unsigned short)64060))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((((var_15) >> (((var_11) - (518941765772131112LL))))) <= (((/* implicit */int) arr_14 [i_6 + 3]))))), (arr_1 [i_3 - 2])));
                                arr_29 [i_0] [i_3] [1ULL] [i_6] [i_7] [(unsigned char)1] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) var_15)))))), (((long long int) 13510349252947652193ULL))));
                                var_23 = (~(arr_18 [12] [i_7]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 5672299292684491253LL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [i_0])), (var_5)))) : (max((var_2), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))))));
        arr_30 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)27424))));
    }
    var_25 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        var_26 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)90)))) ? (arr_1 [i_8 + 2]) : (((/* implicit */int) ((unsigned char) var_1)))));
        /* LoopSeq 4 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            arr_39 [i_8 + 1] [i_8 + 1] [i_8] = ((/* implicit */unsigned long long int) arr_18 [i_8 + 1] [i_8 + 1]);
            arr_40 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_9] [i_8 + 1] [i_9] [i_9])) <= (((/* implicit */int) ((4892803571722083273LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_43 [4] = ((((/* implicit */_Bool) -3692636350137441767LL)) ? (((/* implicit */int) (unsigned short)1984)) : (((/* implicit */int) var_13)));
            arr_44 [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)118)) <= (((/* implicit */int) arr_34 [i_8 + 1]))));
        }
        for (long long int i_11 = 1; i_11 < 8; i_11 += 4) 
        {
            var_27 -= ((/* implicit */int) arr_36 [i_8]);
            arr_47 [i_8] [6] |= ((/* implicit */_Bool) ((arr_21 [i_11] [i_11 - 1] [i_11] [i_8 - 1]) >> (((/* implicit */int) ((signed char) -9223372036854775795LL)))));
        }
        for (int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) arr_7 [5U] [i_8 - 1] [5U]))));
            var_29 = (((((~(((/* implicit */int) var_12)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) var_9))) - (154))));
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 2) 
        {
            for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((arr_4 [i_13 + 1] [i_13 + 1] [i_14]) >> (((((/* implicit */int) (short)-32691)) + (32712)))));
                        arr_61 [i_8] [i_13] [i_15] = ((/* implicit */unsigned short) -8418790271831450480LL);
                        arr_62 [i_13 - 1] [i_13 - 1] [i_8 + 1] [i_13 - 1] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) (short)17946));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_8 + 2] [i_8] [i_13 + 1] [i_14 - 1])) ? (((/* implicit */int) arr_16 [i_14] [i_14 - 2] [i_14])) : (((((/* implicit */_Bool) -1181988642)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)208))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_33 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (arr_51 [i_8] [i_8 + 2] [i_14 - 1])));
                        var_34 = ((/* implicit */unsigned long long int) arr_6 [9LL]);
                    }
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        var_35 += ((/* implicit */signed char) (((+(((/* implicit */int) var_16)))) / (((/* implicit */int) arr_50 [i_14 - 2] [i_14 - 2] [i_14 + 1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            arr_71 [i_13 + 1] [i_13] [i_18] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)57813)) >> (((((/* implicit */int) (unsigned char)197)) - (188)))));
                            var_36 *= ((/* implicit */int) (short)-5818);
                        }
                    }
                    arr_72 [i_8 + 2] [i_8 + 2] [i_13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */int) arr_33 [i_14])))) <= (((0) >> (((((/* implicit */int) (unsigned char)255)) - (255)))))));
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (unsigned char)255))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_19 = 2; i_19 < 9; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
            {
                {
                    arr_79 [i_20] [i_20] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_73 [i_8] [(short)9]))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4844739495193932682LL)) ? (((/* implicit */int) arr_48 [i_19] [i_19 + 2] [i_19 + 1])) : (var_8)));
                    /* LoopNest 2 */
                    for (signed char i_21 = 1; i_21 < 8; i_21 += 3) 
                    {
                        for (unsigned int i_22 = 4; i_22 < 8; i_22 += 2) 
                        {
                            {
                                arr_85 [i_20] [i_20] [9LL] [i_20] = var_11;
                                var_39 += ((/* implicit */short) (unsigned char)255);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
