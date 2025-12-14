/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143554
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
    var_13 = ((/* implicit */signed char) ((long long int) var_2));
    var_14 = ((/* implicit */int) var_5);
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((min((1376336865U), (((/* implicit */unsigned int) 9)))) >> (((var_3) + (1346854591676545311LL)))))));
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((12733508365362719885ULL) - (12733508365362719878ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 3]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0))))));
                                arr_13 [0U] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_0]))))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_5 [i_0] [0U])))) : (((/* implicit */unsigned long long int) var_2)))) % (var_10)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 + 1] [i_1 + 1])) ? ((-(arr_9 [i_0] [i_0] [16] [i_2] [i_0] [16]))) : (((/* implicit */unsigned long long int) arr_7 [i_0]))))));
                    arr_14 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_12 [i_0] [i_1] [1LL] [i_1] [i_0 - 2]))))) & ((+(arr_11 [i_0] [i_1] [i_1 - 3] [i_0 - 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_18 |= arr_15 [i_5] [i_5];
        arr_18 [i_5] = ((/* implicit */signed char) arr_9 [4] [(signed char)13] [i_5] [(unsigned short)17] [i_5] [i_5]);
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (signed char i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    {
                        arr_29 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */_Bool) (((+(arr_11 [i_9 - 2] [i_6] [i_9] [i_6]))) - (((/* implicit */long long int) ((/* implicit */int) arr_27 [(signed char)4] [i_9] [i_9 + 2] [i_6] [(signed char)1] [(signed char)4])))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 10; i_10 += 2) 
                        {
                            arr_33 [i_6] [i_6] [8ULL] [i_10] = ((/* implicit */unsigned char) (~(13)));
                            var_19 = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) ((arr_1 [i_6]) == (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_10])))))))));
                            var_20 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)89)) >> (((arr_9 [i_6] [i_7] [(_Bool)1] [i_9] [(signed char)0] [(signed char)0]) - (7222755890083222654ULL)))))))));
                            var_21 |= ((/* implicit */unsigned long long int) min((((short) (-(-13LL)))), (((/* implicit */short) (signed char)5))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-100)) + (2147483647))) << (((((var_3) + (1346854591676545327LL))) - (16LL)))))) : (((((/* implicit */_Bool) 184933686)) ? (8603066420567093536ULL) : (arr_25 [(_Bool)1] [(_Bool)1] [2] [2]))))))));
        arr_34 [i_6] = ((/* implicit */signed char) min((5091866105038369666ULL), (((/* implicit */unsigned long long int) -489586836))));
    }
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
    {
        arr_39 [(short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 525049215)) ? (((/* implicit */int) (short)-15602)) : (((/* implicit */int) (_Bool)1))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_11] [i_11] [i_11])) : (var_2)))) ? (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [(unsigned char)12] [(unsigned char)12] [i_11] [i_11]))))) : (arr_25 [(unsigned char)2] [i_11] [i_11] [i_11])))));
        var_23 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) arr_16 [i_11]))))), ((~(12733508365362719885ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            for (unsigned int i_13 = 2; i_13 < 11; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        arr_48 [i_13] = ((/* implicit */signed char) (+((-(16155078085255836756ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)40)), ((unsigned short)53756)))))))) == (15932036173826548358ULL)));
                            var_25 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) -9)), (max((arr_4 [i_11] [i_12]), (((/* implicit */long long int) var_0))))));
                            var_26 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_44 [i_13] [i_13 - 1])) ^ (min((arr_46 [i_12] [i_13] [i_13] [i_12]), (((/* implicit */unsigned long long int) arr_6 [i_13] [i_12])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            arr_52 [(signed char)6] [10LL] [10LL] [i_13] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 8106594448159538125LL))) ? (((/* implicit */int) (signed char)98)) : (max((((/* implicit */int) var_0)), (min((-605985336), (((/* implicit */int) var_0))))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            arr_56 [i_12] [i_14] [i_13] [i_12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 605985336)) ? (-680739531) : (-525049216)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_16] [i_16] [1LL] [(short)5] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_10 [i_11] [18LL] [i_14] [(unsigned char)6])))))))) : (min((var_11), (((/* implicit */unsigned long long int) (-(1047552))))))));
                            arr_57 [i_13] [i_13] = ((/* implicit */int) (unsigned short)53050);
                            var_27 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)2292))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_46 [12] [i_13] [i_13 - 2] [i_13])) ? (arr_46 [(_Bool)1] [i_13] [i_13 - 2] [i_13]) : (arr_46 [i_13] [i_13] [i_13 + 1] [i_13]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_13] [i_13] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) (_Bool)1)) : (var_6))))));
                            var_29 = ((/* implicit */unsigned char) ((((((((var_3) >= (((/* implicit */long long int) -1)))) ? (min((((/* implicit */long long int) (unsigned char)240)), (var_3))) : (((/* implicit */long long int) min((-1819384525), (((/* implicit */int) (signed char)47))))))) + (9223372036854775807LL))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65529)) ^ (((/* implicit */int) (_Bool)1))))), (min((var_11), (((/* implicit */unsigned long long int) arr_50 [i_11] [(unsigned short)0] [i_13])))))) - (65522ULL)))));
                            var_30 *= ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_42 [i_13] [i_13]))))), (arr_7 [i_11]))));
                        }
                    }
                } 
            } 
        } 
    }
}
