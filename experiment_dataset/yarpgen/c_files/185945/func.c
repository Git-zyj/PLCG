/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185945
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
    var_12 ^= ((/* implicit */unsigned long long int) (unsigned char)209);
    var_13 += ((/* implicit */long long int) var_10);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            arr_12 [i_0 + 1] [i_1 + 1] [i_2 - 1] [i_2] [i_4 - 1] = ((/* implicit */short) arr_5 [i_0 + 1] [i_0 + 1]);
                            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_4 + 2] [i_2 + 1]))));
                            arr_13 [i_4 + 1] [i_2] [i_2] [i_2] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [(_Bool)1] [i_2] [i_3] [i_0 + 1] [i_1] [(signed char)4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14765)) ? (arr_2 [i_3] [i_1 + 1] [i_0 + 1]) : (((/* implicit */long long int) 1307164900U))))) : (arr_1 [i_1])));
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_1 + 3] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((267911168ULL) <= (16451175730978672491ULL))) ? (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_2 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_2 + 1] [(_Bool)1] [i_5])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_2] [i_3] [i_1])))));
                            var_15 += ((/* implicit */short) ((((_Bool) arr_6 [i_1 - 1])) ? ((~(1917426695809193808ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_5] [i_1] [i_1]))))) == (((/* implicit */int) arr_6 [i_0 + 1]))))))));
                            var_16 *= ((/* implicit */long long int) arr_14 [i_0] [i_1 + 3] [i_2] [4LL] [i_5]);
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14680)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)246)))))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [5ULL] [i_6]))) : (((((/* implicit */_Bool) arr_18 [i_6 + 1])) ? (arr_1 [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6 + 1])) && (((/* implicit */_Bool) var_3))))))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_3))));
        arr_19 [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */unsigned long long int) var_10)) : (267911174ULL)))) || (((/* implicit */_Bool) max((18446744073441640428ULL), (((/* implicit */unsigned long long int) arr_0 [i_6] [(short)3]))))))) ? (((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))) : (((267911184ULL) << (((((/* implicit */int) (short)-11210)) + (11212))))))) : (((arr_3 [i_6 + 1] [i_6] [(short)7]) << (((/* implicit */int) arr_14 [i_6 + 1] [(signed char)3] [i_6] [i_6 + 1] [14ULL]))))));
        arr_20 [i_6] = ((/* implicit */int) arr_17 [i_6 + 1]);
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) ? (267911185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7 + 1])))));
        arr_23 [i_7 + 1] [i_7] |= ((/* implicit */signed char) (short)24923);
        arr_24 [i_7 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6279))) == (996957373765252706ULL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 + 1] [i_7]))) | (127U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] = ((/* implicit */short) arr_4 [i_8 + 1] [i_8 + 1]);
        var_21 = arr_0 [i_8] [i_8 + 1];
        arr_28 [i_8] = ((var_7) || (((/* implicit */_Bool) ((short) arr_25 [i_8]))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned int) ((long long int) (~(118U))));
        arr_30 [i_8] = ((/* implicit */short) (-(((/* implicit */int) (short)-2216))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (((((/* implicit */_Bool) 1175243911059262047LL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24923)))))))) ? (((/* implicit */int) ((var_3) > (((/* implicit */int) var_1))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -2140128931)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & ((((-(var_6))) % (((/* implicit */int) var_5))))));
}
