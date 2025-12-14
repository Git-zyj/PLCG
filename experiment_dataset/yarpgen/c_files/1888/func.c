/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1888
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(4294967272U)))))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (15ULL))))));
                            var_17 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) : (18446744073709551592ULL)));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_1] [i_0]))) : (arr_2 [(_Bool)1] [i_1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (12ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)243)) ? (227026362) : (((/* implicit */int) (unsigned char)11))))))));
                    var_19 = max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))))), (11ULL));
                    arr_15 [i_0] [(short)16] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 262816362))));
                }
                var_20 = ((((/* implicit */_Bool) max((arr_6 [i_1] [i_0] [i_0] [i_1 + 1]), (arr_6 [i_1] [i_0] [i_0] [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -227026377))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0] [i_1 + 1])) ? (arr_6 [i_1] [i_0] [i_0] [i_1 + 1]) : (arr_6 [i_1] [i_0] [i_0] [i_1 + 1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)21))))));
    var_22 = ((/* implicit */_Bool) (~(max(((~(var_10))), (((/* implicit */unsigned int) ((signed char) var_7)))))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] = ((/* implicit */_Bool) ((arr_8 [14] [i_6] [14]) ? (2147483641) : (((/* implicit */int) arr_0 [i_6]))));
            var_23 = ((/* implicit */short) 2319123944426586085ULL);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_11))));
            arr_22 [i_5] [i_6] = ((/* implicit */unsigned char) arr_4 [i_5] [i_5] [i_5]);
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
        {
            var_25 |= ((/* implicit */short) arr_9 [i_5] [i_7]);
            var_26 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)-9322)) > (((/* implicit */int) (unsigned char)8)))))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483642)) ? (3285460629169904164ULL) : (((/* implicit */unsigned long long int) 1649404534U))));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)146))))))));
                        var_30 *= ((/* implicit */_Bool) ((arr_13 [i_10] [i_9] [i_5]) ^ ((~(((/* implicit */int) (short)-23671))))));
                        var_31 = ((/* implicit */_Bool) ((short) 4294967288U));
                    }
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_9] [i_9] [i_9] [i_9] [i_9 - 2]))));
                }
                for (int i_11 = 3; i_11 < 13; i_11 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)238)) << (((((unsigned long long int) (short)-3040)) - (18446744073709548566ULL)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        arr_41 [i_5] [i_7] [i_8] [(unsigned char)0] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)6)) < (316981158)));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 3099727647U)) ? (13259080372943087908ULL) : (((/* implicit */unsigned long long int) 1268385050U)))) : (((/* implicit */unsigned long long int) -2147483647)))))));
                        arr_42 [i_5] [i_7] [i_8] = ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) var_8)) : (1531911840));
                    }
                    var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3446024053U) >> (((4176070402768648532ULL) - (4176070402768648505ULL)))))) ? ((+(var_4))) : (((((/* implicit */_Bool) arr_26 [i_5] [i_8] [i_11])) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)6))))));
                    var_36 = ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((int) (signed char)-91))) : (var_11));
                }
                var_37 = (~(18446744073709551609ULL));
            }
        }
        var_38 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) -1400863011)) < (((var_2) ? (arr_39 [0ULL] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_5] [i_5]))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_13)))))));
        var_39 |= ((/* implicit */int) max(((((+(arr_3 [6ULL] [6ULL]))) + (((/* implicit */unsigned int) arr_40 [(unsigned char)3] [i_5])))), (((/* implicit */unsigned int) arr_18 [i_5] [i_5] [i_5]))));
        arr_43 [i_5] = arr_39 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5];
    }
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_8))))))) : (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1400863010))))))))));
}
