/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184936
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (-9118204178006227710LL))) + (268435456LL)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_3]) & (((/* implicit */int) (_Bool)0))));
                                var_18 = ((/* implicit */long long int) min((var_18), (arr_8 [i_4] [i_1] [i_1])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_18 [5ULL] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) (((+((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5])))))) >= ((+(((/* implicit */int) arr_3 [i_0] [i_1]))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2]))))) ? (arr_10 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)9)))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_6] [6ULL] [i_2] [6ULL] [i_7] |= ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_0] [i_7] [i_2] [i_6])) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned char)5)))) + (14)))));
                            arr_24 [i_7] [(signed char)10] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_7] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_2] [i_1] [i_1] [i_0])))))) : ((+(-4566392047467264542LL)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            arr_27 [(_Bool)1] [i_1] [i_2] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) & ((-(arr_13 [i_8] [i_0] [(unsigned short)0])))));
                            arr_28 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((var_10) - (arr_22 [i_0] [i_1] [i_2] [8LL] [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_1] [i_6] [i_1])))))));
                            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (4350961937517772267LL)));
                            arr_30 [i_8] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)229);
                            arr_31 [(short)7] [(short)7] [i_2] [9LL] [9LL] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0] [i_1]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)218))))));
                            arr_35 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_14 [i_0] [i_0] [(short)10] [i_0] [i_0]));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_1] [i_9]))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */short) min((-1734252043), (((/* implicit */int) (unsigned char)5))));
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_10] [8ULL] [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) min((var_15), (arr_13 [i_2] [(_Bool)1] [i_10]))))));
                        arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 6987874816437006966LL))));
                        arr_41 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(10839968551511301351ULL)))) ? ((+(((/* implicit */int) (unsigned short)23420)))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_1])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [6ULL]))))))));
                        arr_44 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_25 [8ULL] [(short)5] [i_2] [8ULL] [(unsigned short)6] [(_Bool)1]);
                    }
                }
                for (short i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_51 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned char)11), (((/* implicit */unsigned char) arr_50 [9LL] [i_1] [9LL] [9LL]))))) || (((/* implicit */_Bool) ((short) (short)32740))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [(_Bool)1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32050)))))));
                        arr_52 [i_0] [i_12] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) (unsigned char)128)) ? (arr_15 [0LL] [i_1] [i_1] [i_1] [i_12]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)2224)) : (((/* implicit */int) var_7))))))));
                        var_24 ^= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_13 [i_0] [10U] [i_0])) ? (arr_49 [i_0] [i_1] [i_0] [(unsigned char)7] [(unsigned char)7] [4LL]) : (arr_8 [i_0] [i_0] [i_0]))), (max((arr_9 [i_0] [i_1] [i_12]), (arr_22 [i_12] [i_12] [i_12] [i_12] [6ULL]))))) % (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    arr_53 [2ULL] [(_Bool)1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 13851715187320659732ULL)) ? (arr_43 [1LL] [i_1]) : (arr_43 [i_0] [i_0]))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(5566205121810198808LL)))), (7606775522198250265ULL))))));
    var_26 &= ((/* implicit */short) min((-15LL), (((/* implicit */long long int) (_Bool)0))));
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_4))));
    var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-2754086891589600469LL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_0))))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6788927959934045821LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))))))));
}
