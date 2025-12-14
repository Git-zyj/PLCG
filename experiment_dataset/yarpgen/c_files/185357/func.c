/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185357
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (max((arr_1 [i_0]), (arr_1 [i_0]))))) : (arr_1 [i_0])));
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_0 [1] [i_0])));
    }
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */short) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */short) arr_6 [i_1 + 3] [i_1 - 2])), (var_16))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (short)1914)) : (-8)));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) arr_4 [(short)21] [i_2 - 2])), (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_2]))))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_14 [(unsigned char)6] [(unsigned char)19] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))));
                arr_15 [i_3] [i_2 - 4] &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                var_19 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
    {
        var_20 += ((/* implicit */unsigned int) var_4);
        arr_20 [9U] [7ULL] = ((/* implicit */unsigned int) var_8);
        arr_21 [i_4 - 3] = ((/* implicit */unsigned int) arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
    }
    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (max((2340557471230455657ULL), (((/* implicit */unsigned long long int) (unsigned short)65530))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (var_14) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))))) : (max((((/* implicit */int) ((signed char) var_14))), (var_14)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_6])))) ? (max(((+(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_24 [i_6] [(short)9])) ? (((/* implicit */int) arr_0 [i_5] [(unsigned char)17])) : (((/* implicit */int) arr_13 [i_5] [i_5])))))) : (min(((~(((/* implicit */int) arr_0 [(signed char)17] [i_6])))), (((/* implicit */int) var_12)))))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_4 [i_6] [i_6]))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1590848592)))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (var_14))), (min((arr_25 [(short)4] [i_5] [(unsigned char)10]), (((/* implicit */int) arr_4 [21] [i_8])))))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_31 [i_8] [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */int) max((((/* implicit */short) arr_23 [i_5])), (var_16))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                            {
                                arr_36 [i_5] [i_5] [(unsigned short)10] [i_5] [(signed char)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_5] [i_6] [(unsigned short)2] [i_6])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))));
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))));
                                arr_37 [i_6] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_9 [i_5]))) ? (((unsigned long long int) arr_23 [i_8])) : (((/* implicit */unsigned long long int) var_4))));
                            }
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_5] [(unsigned short)13]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_10 = 4; i_10 < 12; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_32 [i_6] [i_6] [i_6] [(unsigned char)9]))));
                        var_28 = var_14;
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_45 [(unsigned short)14] [i_11 + 3] [(unsigned short)14] [2]);
                            var_30 *= var_7;
                            var_31 = ((/* implicit */int) var_0);
                            var_32 = ((/* implicit */unsigned short) arr_45 [(short)1] [(short)14] [i_10] [(signed char)12]);
                        }
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_33 &= ((/* implicit */unsigned char) ((unsigned long long int) var_10));
                        var_34 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_5 [i_10] [(unsigned char)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10 + 3])))))));
                        var_36 = ((/* implicit */unsigned long long int) arr_25 [(signed char)3] [i_5] [13]);
                    }
                    var_37 = ((/* implicit */signed char) var_12);
                }
            }
        } 
    } 
}
