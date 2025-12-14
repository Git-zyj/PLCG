/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152449
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((int) var_10));
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) (signed char)83)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) max((var_12), (((/* implicit */short) (unsigned char)75))))) : (((/* implicit */int) (_Bool)0))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (min((((/* implicit */long long int) (unsigned char)69)), (min((((/* implicit */long long int) (unsigned short)65535)), (1104653601473393594LL))))) : (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) 1201226438))))) : (var_6)))));
                            }
                            var_15 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) 1201226432)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1))))));
                            arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_5), (-1201226438))), (((var_8) - (((/* implicit */int) (signed char)-101))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((var_11) <= (((/* implicit */int) (short)-32760))))), ((unsigned short)12525))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (max((413225206933714092ULL), (((/* implicit */unsigned long long int) 5224713563602634560LL))))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (+(((/* implicit */int) max((var_4), (var_3)))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) max((((((/* implicit */long long int) (~(((/* implicit */int) (signed char)112))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)74))) ^ (var_6))))), (((/* implicit */long long int) var_9))));
                arr_13 [i_0] [i_1] [i_1] = ((((/* implicit */int) (unsigned char)101)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_6)))) == (((((/* implicit */unsigned long long int) var_10)) / (921495620185343127ULL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    arr_16 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_12)) : (var_1)));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_18 = (-(var_11));
                        var_19 = ((/* implicit */unsigned int) (!((_Bool)0)));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_5] [i_5 + 2] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_7)))) - (18446744073709551615ULL)));
                            arr_26 [i_7] [i_5] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50868)))))) : (((((/* implicit */_Bool) var_0)) ? (607665453U) : (((/* implicit */unsigned int) var_8))))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            arr_29 [i_0] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)42))));
                            arr_30 [i_1] [i_5 - 1] [i_5] [i_8 + 1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_11))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_0))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (var_11)))) ? (var_7) : (((/* implicit */int) (short)-17977))));
                            arr_34 [i_9] [i_5 - 1] [i_5] [i_6] [i_9] [i_6] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                            arr_35 [i_0] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)111))))) && (((/* implicit */_Bool) 3687301839U)));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4227557624U)) ? (var_1) : (var_11)));
                            var_23 = (-(((/* implicit */int) var_2)));
                        }
                        var_24 = ((/* implicit */unsigned int) (unsigned short)3);
                        var_25 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = var_3;
                                arr_41 [i_10 - 1] [i_1] [i_5] [i_10 + 2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-((+(380997111)))));
                            }
                        } 
                    } 
                    var_26 -= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_1) / (1600474047)))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) var_10)))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) var_5)))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    var_28 = (+(((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) var_9))))));
                    arr_46 [i_0] [i_12] = ((/* implicit */unsigned int) var_3);
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) (_Bool)1);
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            arr_53 [i_14] [i_13] [i_12] [i_12] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) 3218917002831454968LL);
                            arr_54 [2ULL] |= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned int) (signed char)114)), (4294967287U)))));
                            var_30 = ((((((/* implicit */int) ((((/* implicit */int) var_2)) != (var_11)))) >= (((/* implicit */int) ((var_5) != (((/* implicit */int) (unsigned short)50868))))))) ? (max((9027976923983952820LL), ((~(var_6))))) : (((/* implicit */long long int) var_9)));
                        }
                        /* vectorizable */
                        for (long long int i_15 = 1; i_15 < 14; i_15 += 3) 
                        {
                            var_31 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)32758)) >> (((((/* implicit */int) (unsigned char)171)) - (165)))));
                            var_32 = ((/* implicit */unsigned char) var_6);
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((((-1079082121) + (2147483647))) >> (((((/* implicit */int) (short)32764)) - (32737))))) <= (((/* implicit */int) ((var_5) != (var_9)))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-103)) : (var_1))))));
                        }
                        arr_58 [i_1] [i_1] [i_12] = ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3)));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        arr_61 [i_0] [i_12] [i_12] [i_16] [i_12] [i_0] = ((/* implicit */int) (short)2923);
                        var_35 = ((/* implicit */signed char) var_7);
                    }
                    var_36 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)57496)) & (((/* implicit */int) (unsigned short)34913))))))) ? (min((var_7), (((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)0))))))) : (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (unsigned short)30621)) : (((/* implicit */int) (signed char)-112))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) (unsigned char)50)), (var_6))) : (((/* implicit */long long int) var_0))))));
        arr_65 [i_17] = ((/* implicit */short) var_8);
    }
    var_38 = ((/* implicit */unsigned int) max(((+(var_1))), (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_4)))))));
}
