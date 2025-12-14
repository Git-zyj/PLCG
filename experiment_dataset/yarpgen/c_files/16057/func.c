/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16057
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)31744)) ? (11807121877102181813ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
        var_15 += ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned char) var_1);
                        var_17 = ((/* implicit */unsigned short) min((max((-1029566223116908250LL), (arr_4 [i_2 - 4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                        {
                            var_18 -= ((/* implicit */unsigned char) ((max((3294824129U), (((/* implicit */unsigned int) (unsigned short)38106)))) >> (((((((((/* implicit */int) (unsigned char)250)) > (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_3] [i_4])))) ? (11807121877102181813ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31744))))) - (11807121877102181813ULL)))));
                            var_19 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 + 2])))));
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33813)) ? (((/* implicit */int) (unsigned short)11075)) : (((/* implicit */int) (short)8874))))) ? (12550261664414246707ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))));
                            var_21 *= ((/* implicit */unsigned int) var_5);
                            var_22 &= ((/* implicit */signed char) max((((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && ((_Bool)0)))), ((short)-32758)))), ((unsigned short)11578)));
                            var_23 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)13])))))) ? (((/* implicit */int) max((var_12), (var_12)))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_5]))))))));
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-29176))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_3 [i_0]))));
                        }
                    }
                } 
            } 
        } 
        var_25 = max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */long long int) (unsigned char)0)), (min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (1029566223116908227LL))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_26 = ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0)));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (-7368192683084642254LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) >> (((arr_17 [i_6]) - (7914790277020258195LL))))))));
        var_28 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)255)) - (230)))));
    }
    var_29 = ((/* implicit */_Bool) var_11);
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (min((((/* implicit */unsigned long long int) var_4)), ((~(18446744073709551615ULL)))))));
    var_31 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_5)))))));
}
