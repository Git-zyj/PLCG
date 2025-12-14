/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176685
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
    var_13 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */short) var_2)), ((short)-32741))), (((/* implicit */short) (!(((/* implicit */_Bool) var_11)))))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (var_1)))));
    var_14 = var_6;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) ((int) arr_1 [i_1]));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)38065);
                arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_7)))));
                var_16 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
            }
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_17 ^= ((/* implicit */unsigned short) ((arr_12 [i_3] [i_1] [i_3]) - (arr_12 [i_0] [i_1] [i_3])));
                var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_2)))) >= (((/* implicit */int) var_2))));
            }
            for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])) ? (arr_5 [i_0] [i_1] [i_4 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_21 [i_4] [i_5] [i_5] [i_4] [i_5] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)27487)) ^ (((/* implicit */int) (_Bool)1)))));
                            arr_22 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_0] [i_0] [i_0]))) >= (var_11)))) != (((((/* implicit */int) arr_9 [i_4] [i_1] [i_0])) ^ (((/* implicit */int) var_4)))));
                            var_20 *= ((/* implicit */unsigned char) ((long long int) arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 1]));
                        }
                    } 
                } 
            }
            arr_23 [i_1] [i_1] &= ((/* implicit */int) var_12);
            /* LoopSeq 1 */
            for (unsigned char i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                arr_26 [i_1] [i_1] [i_7] = ((/* implicit */signed char) arr_5 [i_0] [i_7] [i_7] [i_7]);
                /* LoopSeq 2 */
                for (unsigned short i_8 = 1; i_8 < 7; i_8 += 3) 
                {
                    var_21 = ((_Bool) (unsigned char)40);
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_11)) : (arr_17 [i_0] [i_7] [i_0] [i_0])))) ? (((/* implicit */int) (unsigned char)38)) : (((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-1)))))))));
                }
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_31 [i_0] [i_0] [i_0] [i_9] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((7899535754319176843LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))));
                    arr_32 [i_0] [i_1] [i_7] [i_1] [i_9] = ((/* implicit */unsigned char) ((int) (unsigned short)2));
                    arr_33 [i_7] = ((_Bool) (unsigned char)37);
                    var_23 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)3));
                    arr_34 [i_1] = ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_7] [i_7] [i_7]));
                }
                arr_35 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((int) (unsigned char)215));
                arr_36 [i_0] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073692774400ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7 - 2] [i_7 + 2] [i_7 - 1] [i_7 - 1]))) : (var_11)));
            }
        }
        arr_37 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) min((((unsigned char) 727568484)), (((/* implicit */unsigned char) ((arr_14 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) 1959612544))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (unsigned char i_11 = 1; i_11 < 9; i_11 += 3) 
            {
                {
                    var_24 = (+((~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4))))))));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_12] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)16)) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)62)) == (((/* implicit */int) arr_18 [i_0] [i_0] [i_10] [i_10] [i_12]))))))), (var_7)));
                        var_25 = ((unsigned long long int) (signed char)-1);
                        var_26 = (!(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_9)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_11)))))));
                    }
                    for (int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        arr_50 [i_10] [i_10] [i_13] [i_13] &= ((var_6) * (((/* implicit */int) min(((!(((/* implicit */_Bool) 900974571)))), (var_0)))));
                        var_27 ^= ((/* implicit */unsigned short) arr_0 [i_11]);
                    }
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]))) : (var_5))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        var_30 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_28 [i_0] [i_11 + 2] [i_11 + 2] [i_11 + 2]) : (arr_28 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 2])))));
                        arr_54 [i_14] [i_11] [i_10] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_10] [i_14] [i_10])), (((((/* implicit */_Bool) 8184)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))))));
                        arr_55 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((var_11), (8307851322063439647LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59527)) != (((/* implicit */int) arr_49 [i_10] [i_14] [i_11] [i_11] [i_10])))))))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        var_31 = (!(((/* implicit */_Bool) (~(0ULL)))));
                        arr_58 [i_0] [i_0] [i_10] [i_10] [i_11] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)30360)) : (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    arr_59 [i_10] = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
    {
        var_32 ^= ((/* implicit */_Bool) arr_18 [i_16] [i_16] [i_16] [i_16] [i_16]);
        /* LoopNest 3 */
        for (unsigned char i_17 = 1; i_17 < 7; i_17 += 3) 
        {
            for (unsigned short i_18 = 3; i_18 < 7; i_18 += 4) 
            {
                for (long long int i_19 = 4; i_19 < 7; i_19 += 3) 
                {
                    {
                        arr_68 [i_19] = ((/* implicit */int) (unsigned short)11820);
                        /* LoopSeq 1 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_71 [i_16] [i_20] [i_20] [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24509)) && (((/* implicit */_Bool) arr_39 [i_16] [i_16] [i_16])))))));
                            arr_72 [i_19] [i_18] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_56 [i_20] [i_20] [i_20] [i_19]))) ? ((~(arr_42 [i_18]))) : (8587145360721135274LL))))));
                            var_33 ^= arr_0 [i_16];
                        }
                        arr_73 [i_18] [i_18] = ((/* implicit */unsigned short) arr_5 [i_16] [4ULL] [i_18] [i_19]);
                        arr_74 [i_18] = ((/* implicit */long long int) (unsigned short)2071);
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned short) (-((-(((((/* implicit */int) arr_51 [i_16] [i_16] [i_16] [i_16] [i_16])) + (arr_28 [i_16] [i_16] [i_16] [i_16])))))));
        arr_75 [i_16] &= ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (arr_61 [i_16] [i_16])));
    }
}
