/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146281
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */long long int) (~(((2443414541U) - (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 6521766301037567574LL))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned int) 0LL);
                                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (4LL))))));
                                arr_14 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)1420))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) 1601664960613488992LL);
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (0ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 4; i_6 < 13; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) 9223372036854775807LL);
                                arr_23 [i_7] [i_7] [i_5] [i_7] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((_Bool)1))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6636106378711526988LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) : (18446744073709551615ULL)))) ? (17557705966348014047ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16025)) - (((/* implicit */int) var_7)))))))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) 3652547283U)) ? (3115710066U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((min((((13164727950733569785ULL) << (((1769874373145082379ULL) - (1769874373145082335ULL))))), (((/* implicit */unsigned long long int) -9223372036854775797LL)))) >> (((-4813788377396107390LL) + (4813788377396107435LL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!(((((unsigned int) var_1)) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1009701314))))))))));
                        var_20 = ((short) max(((+(var_0))), (((/* implicit */unsigned long long int) var_8))));
                    }
                }
                arr_31 [i_0] [i_1] = ((/* implicit */unsigned char) var_0);
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    arr_35 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_4)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -906054197)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                        var_22 = ((var_4) * (((/* implicit */unsigned long long int) max((-2158171325901118665LL), (-8526787552386893946LL)))));
                        arr_39 [i_0] [i_1] [(unsigned short)1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 13419918275109515853ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 1506118045)) && (((/* implicit */_Bool) var_7)))))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61697))))) == ((~(((/* implicit */int) (unsigned char)8))))))));
                            arr_42 [i_0] [i_1] [i_10] [i_11] [i_11] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1110965193U))))));
                        }
                        for (int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                        {
                            var_24 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)12)))), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL)))))))) : (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8436542470881035182ULL)) ? (-8795266600612733784LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65509))))))))));
                            var_25 = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1LL)))) ? (max((((/* implicit */long long int) 2097151)), (1379706610069549319LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))));
                        }
                        var_26 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 526629395U)) ? (var_1) : (((/* implicit */int) (unsigned char)112))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-8795266600612733782LL))))))));
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        arr_47 [i_14] [i_1] [i_1] [i_1] = (unsigned char)3;
                        arr_48 [i_0] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)182)) ? (4101756986U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) == (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        arr_49 [i_14] [i_1] [i_14] [i_14] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                    }
                    arr_50 [i_10] [i_1] [i_10] [i_0] = ((/* implicit */int) ((unsigned int) 9223372036854775805LL));
                }
                var_28 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8795266600612733780LL)) ? (((/* implicit */long long int) 0U)) : (8295915867455954905LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)25208)) : (((/* implicit */int) (unsigned short)11))))) : (((((/* implicit */_Bool) (unsigned short)8)) ? (8795266600612733787LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_51 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) var_9)) >= (((long long int) (+(0ULL))))));
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_15 = 2; i_15 < 10; i_15 += 2) 
    {
        var_30 = (~(1582529751));
        arr_56 [i_15] = ((/* implicit */long long int) var_1);
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 3066760690853638852LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
    }
}
