/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162875
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
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3836679164U)) && (((/* implicit */_Bool) (unsigned short)38721)))) ? (min((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-20))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((!((_Bool)1))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) 565799989U))))))))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_3 [i_0 - 1] [i_0 - 3] [i_0 + 1])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)62673)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0 - 2] [i_3] [i_4 + 2])) || (((/* implicit */_Bool) arr_10 [i_0 - 3]))))))));
                                var_13 *= ((/* implicit */short) ((unsigned int) ((unsigned int) ((unsigned char) (unsigned short)38719))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (unsigned short)38719))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (signed char)-35)))))) + (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))), (max((2629287911U), (((/* implicit */unsigned int) var_0)))))))))));
                        var_16 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-38))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)62291))))) == (((long long int) (!(((/* implicit */_Bool) var_3))))))))));
                            var_18 = ((/* implicit */long long int) ((unsigned short) ((int) (_Bool)1)));
                            var_19 &= ((/* implicit */short) ((unsigned short) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)38719)))));
                        }
                    }
                    for (short i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        var_20 &= ((/* implicit */unsigned short) var_0);
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)38716)))))));
                        var_22 *= ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) (signed char)57)) & (((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -1835732107)) || ((_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) (short)3116))))) : (var_4)));
                    var_24 |= ((/* implicit */unsigned long long int) var_7);
                    var_25 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) (unsigned short)38696)) ? (((/* implicit */int) (unsigned short)3236)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((unsigned char) var_8)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            arr_33 [i_5] [i_12] [i_5] [i_5] [i_12] = ((/* implicit */unsigned char) (((-(arr_7 [i_5] [(signed char)0] [i_6] [i_11]))) >> (((var_8) - (4169141382U)))));
                            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                            arr_34 [i_5] [i_5] [i_12] [i_6] [i_7] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17885650672816660877ULL)) ? (1712931555U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            arr_38 [i_5] [i_5] = ((((/* implicit */_Bool) ((int) var_4))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_5 - 2])))));
                            var_27 *= ((/* implicit */long long int) (_Bool)1);
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            var_28 += ((/* implicit */long long int) (-(((unsigned int) (unsigned short)26836))));
                            arr_41 [i_5] [i_6] [i_7] [i_11] [i_11] = (~(((((/* implicit */int) arr_18 [i_5 - 1])) * (((/* implicit */int) var_9)))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((short) (~((~(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            var_30 ^= ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))))), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (signed char)68))))))));
                            var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_1 [i_16] [i_16])))) + (((/* implicit */int) ((unsigned char) var_2)))));
                        }
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (unsigned char)74)))));
                            var_33 = ((/* implicit */_Bool) var_6);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
                        {
                            var_34 ^= ((/* implicit */_Bool) ((unsigned char) var_2));
                            arr_52 [i_5 + 1] [i_5 + 1] [i_7] [i_15] [i_18] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-9784))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) ((((17885650672816660893ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (((857412689994158987ULL) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_46 [i_5] [i_15 - 1] [i_5 - 2] [i_5] [i_5] [i_5]), (((/* implicit */short) arr_49 [i_15 - 1] [i_5 - 2] [i_7] [i_15 - 1]))))))));
                            arr_56 [i_5] [i_5] [5] [(signed char)5] [(unsigned char)12] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_19])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 33554431))))))) : ((((-(var_8))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2])))))));
                        }
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_5 [i_15 - 1] [i_5 + 1]))));
                        var_37 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)223)));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) min(((-(min((arr_28 [(unsigned char)3] [i_7] [i_6] [(unsigned char)3] [(unsigned char)3]), (((/* implicit */long long int) (signed char)-10)))))), (((/* implicit */long long int) (-(((var_7) * (var_8)))))))))));
                    }
                }
            } 
        } 
    } 
}
