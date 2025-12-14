/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138467
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62413)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)3149))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (arr_5 [i_0] [i_1] [i_2]))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)2)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))) ? ((~((~(5657667555022086903ULL))))) : (((/* implicit */unsigned long long int) arr_11 [i_3]))));
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)50947))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_13 &= ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (short)-6497)))) ? ((+(12747408822560161370ULL))) : (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_15 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_8 [i_5] [i_5] [i_1]);
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_18 [i_0 + 1] [i_1] [i_2] [i_6 + 1] = ((/* implicit */unsigned short) arr_12 [i_0 + 1] [i_6 + 1] [i_2] [i_1]);
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)31744)) <= (((/* implicit */int) arr_12 [(unsigned short)7] [4ULL] [i_0 - 1] [i_1]))));
                        arr_20 [(unsigned short)8] [(unsigned short)8] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [8U])) >= (((/* implicit */int) var_7)))) ? (arr_10 [(unsigned short)21] [(unsigned short)21] [i_2] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_12 [i_0 - 3] [i_1] [i_2] [4LL]))))));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2] [6ULL])))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) 5657667555022086903ULL);
                            arr_29 [i_0] [i_1] [i_2] [i_1] [i_8] = ((/* implicit */short) ((unsigned int) ((long long int) ((var_9) && (((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_7] [i_1]))))));
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) == (((/* implicit */int) arr_0 [i_0 - 1])))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            arr_34 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_4 [i_1] [i_2] [i_1] [i_9])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_0 + 1] [i_1] [i_2] [i_7] [i_9]))))))) & (((/* implicit */int) (unsigned short)43166))));
                            arr_35 [i_0] [i_1] [i_7] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0])))));
                            arr_36 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) arr_10 [i_0] [i_0] [i_2] [i_7] [i_9]))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_2] [9LL] [i_1]))) : (((/* implicit */int) var_1)))) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_1]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (2002186159U)));
                            arr_41 [i_1] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */signed char) min((2251799813423104LL), (((/* implicit */long long int) (unsigned char)77))));
                            var_18 = ((/* implicit */short) ((unsigned short) ((((arr_7 [i_1] [i_0] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_1]))))) | (((/* implicit */long long int) min((var_3), (var_6)))))));
                            arr_42 [i_0] [i_2] [i_1] [i_10] = (!((_Bool)1));
                            var_19 = ((/* implicit */_Bool) ((short) arr_5 [i_0] [(_Bool)1] [i_0]));
                        }
                        var_20 -= min((((((/* implicit */_Bool) ((unsigned short) arr_17 [4LL] [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_7]))) ? (((((/* implicit */_Bool) arr_24 [i_0] [0LL] [0LL] [(short)0])) ? (var_4) : (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_7])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_0 + 1] [i_0] [8LL] [14LL] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_32 [(unsigned short)14] [14] [i_2] [i_7]), (((/* implicit */long long int) var_1)))))))));
                        arr_43 [i_1] [i_2] [i_1] [i_1] = max((((/* implicit */long long int) max((arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_0 [i_0 - 2]))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) * (9223372036854775782LL))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (((-((-(((/* implicit */int) var_2)))))) * (((/* implicit */int) (signed char)6))));
}
