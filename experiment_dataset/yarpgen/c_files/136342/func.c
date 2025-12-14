/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136342
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
    var_13 = max((((/* implicit */long long int) max((min((var_2), (var_6))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), ((+(min((var_4), (((/* implicit */long long int) (signed char)-98)))))));
    var_14 = ((/* implicit */short) var_4);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-98)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))) : (max((3620792322U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))));
        var_15 += ((/* implicit */long long int) ((unsigned int) var_12));
        var_16 = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [(short)3])))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))), (((0LL) + (var_4)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((unsigned int) (short)0)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (signed char)116)))))));
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 674174976U)), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [4ULL] [i_1]))) % (-787560009899682306LL)))) % (var_11)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        arr_18 [i_3] [i_3] [i_3] [i_3] = arr_17 [1U] [4U] [i_4 + 1] [(short)2];
                        var_18 = ((/* implicit */unsigned int) ((long long int) (+(arr_9 [i_2]))));
                    }
                    for (long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        arr_21 [(short)10] [8ULL] [8ULL] [(short)7] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(787560009899682309LL)))) || (((/* implicit */_Bool) var_2))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(787560009899682298LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0))))) : (arr_22 [(unsigned short)1] [3LL] [i_6 + 1] [6LL] [i_7] [i_7])))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (max((arr_20 [i_2] [4ULL] [(short)6] [i_2] [i_2] [i_2]), (arr_16 [9LL] [7U] [i_6])))))) ? (11385756011474659205ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7656)) ? (((((/* implicit */int) arr_24 [(signed char)1] [i_3 - 4] [1U] [i_7] [6ULL] [(unsigned char)10])) & (((/* implicit */int) arr_11 [i_3] [i_2])))) : ((~(((/* implicit */int) (short)-17130)))))))));
                            var_21 = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) 787560009899682309LL)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))), (var_8))) : (((unsigned long long int) (!(((/* implicit */_Bool) 3677490531883491865LL)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 8; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) max((((arr_20 [i_6 - 1] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 2] [i_6 + 1]) % (arr_20 [i_6 - 3] [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1]))), (((/* implicit */unsigned int) arr_27 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 3]))));
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [3LL] = (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2])))))))));
                            arr_30 [i_2] [i_2] [2LL] [2LL] [i_2] [5LL] = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) 7900272171573671976LL))));
                        }
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((9223372036854775807LL) <= (arr_9 [i_3 - 2]))))));
                    }
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6542783171561210333LL))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (short i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) arr_19 [i_11]);
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1620335242U)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned char)38))))) ? (min((arr_23 [i_2] [i_9 + 1] [(unsigned char)0] [i_11] [i_9 + 1]), (((/* implicit */long long int) arr_34 [i_2] [(signed char)4] [(short)8])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_39 [i_2] [i_10] [i_11 + 1] [i_12] = ((/* implicit */_Bool) var_0);
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */int) arr_28 [(short)9] [i_9 - 1] [(short)9])) + (2147483647))) << (((((/* implicit */int) arr_11 [i_11 - 1] [i_9 + 1])) - (6572)))));
                            var_28 = ((/* implicit */short) ((20U) >> (((-7348242300381604080LL) + (7348242300381604093LL)))));
                        }
                    }
                } 
            } 
        } 
        arr_40 [i_2] [i_2] = ((short) min(((short)0), (arr_31 [i_2])));
    }
    for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) % ((+(7039006280808779836LL))))), (((/* implicit */long long int) arr_42 [i_13]))));
        arr_44 [i_13] &= ((/* implicit */unsigned long long int) var_9);
        arr_45 [i_13] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_41 [i_13]))))));
    }
}
