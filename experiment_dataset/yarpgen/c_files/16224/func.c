/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16224
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_6)), ((+(261120U))))) >= ((((+(var_7))) << (((/* implicit */int) min((var_9), (arr_3 [i_0] [(_Bool)1] [10ULL]))))))));
                    arr_8 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (~(6U)))) ? (((/* implicit */long long int) ((int) (short)5777))) : (max((((/* implicit */long long int) arr_6 [(_Bool)1] [i_1])), (1073741823LL))))), (((/* implicit */long long int) var_9))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_2] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) ((max((261120U), (((/* implicit */unsigned int) var_4)))) >> (((((((/* implicit */_Bool) 4294706192U)) ? (5328563743236397222LL) : (((/* implicit */long long int) arr_1 [i_1])))) - (5328563743236397207LL)))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            arr_15 [i_2] = ((/* implicit */unsigned long long int) (+(arr_1 [i_0 - 1])));
                            arr_16 [i_2] [i_1 + 1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_12) : (var_12)));
                            var_15 *= ((/* implicit */int) ((((var_6) ? (3773358344647025490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 1] [i_0] [i_2] [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
                            arr_17 [i_2] [i_1 + 1] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_5 [i_0] [i_3 + 2] [i_4])) >> (((/* implicit */int) var_8))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) arr_20 [i_0 - 2] [i_5 + 2] [i_2 + 1] [i_2 + 1]));
                            arr_25 [i_2] [i_1 - 2] [18LL] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [1LL] [11] [1LL] [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_14 [(signed char)2] [(signed char)2] [i_2] [i_5] [i_6])) : (((/* implicit */int) (_Bool)1)))))));
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1]))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned long long int) var_13);
                            arr_28 [i_1] [i_1] [i_2 + 1] [i_5 + 2] [i_7] [(unsigned char)13] [i_2] = ((/* implicit */long long int) ((4294706159U) >> ((((~(((/* implicit */int) var_3)))) + (7)))));
                            arr_29 [i_0] [i_0] [i_0] [i_2] [15LL] = (((+(((/* implicit */int) (short)2)))) - ((-(((/* implicit */int) var_8)))));
                        }
                        var_18 = ((/* implicit */signed char) (~(6185617526669176101ULL)));
                    }
                    for (unsigned char i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) arr_3 [i_8] [i_8 - 1] [i_1 + 1])), (var_7)))));
                        arr_33 [i_2] [i_2] [i_2 + 1] [i_0] [i_1] = ((/* implicit */unsigned char) max(((unsigned short)255), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_5), (var_2)))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (var_6)));
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_45 [i_9] [i_10] [i_12] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(261130U)))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-20446))))), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (2419836150U))) != (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)32)))))))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11 - 1])))))) ? (((((/* implicit */_Bool) arr_2 [i_11 + 1])) ? (((/* implicit */int) arr_2 [i_11 - 3])) : (((/* implicit */int) arr_2 [i_11 - 3])))) : (((/* implicit */int) (signed char)-59))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_14 = 2; i_14 < 10; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((arr_13 [20] [i_10] [17ULL] [17ULL] [i_10]), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10)))))))));
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) || (var_3))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            var_23 = ((653103879) - (((/* implicit */int) (unsigned char)190)));
                            var_24 = ((/* implicit */unsigned char) arr_18 [i_9] [i_10]);
                            arr_56 [i_9] [i_9] [i_14] [2ULL] [i_16] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_52 [i_16] [i_9] [i_9] [i_9] [i_9]))))) : (var_5)));
                            var_25 = (~(((/* implicit */int) var_6)));
                        }
                    }
                    arr_57 [i_9] [1LL] [i_14] = ((/* implicit */unsigned int) (!(var_3)));
                }
                var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                var_27 += ((((/* implicit */_Bool) max((min((6185617526669176101ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) arr_14 [i_9] [(short)19] [i_9] [9U] [i_10]))))) ? (6185617526669176101ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_9])) ? (arr_1 [i_9]) : ((~(((/* implicit */int) arr_31 [i_9]))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_13)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (4294967295U)))))));
}
