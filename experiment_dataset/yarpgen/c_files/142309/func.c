/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142309
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-204168394337426175LL)))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (0ULL)))))));
    var_17 = (+(4294967295U));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)238)) : (min((var_2), (arr_2 [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) arr_5 [i_3] [i_1] [i_2] [i_3]);
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-5)) ? (-204168394337426156LL) : (arr_9 [i_2] [i_2] [i_4 + 1] [i_4] [i_2] [i_4]))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) arr_2 [i_2] [i_2])) : (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 533954527)) : (9223372036854775807LL))) : ((~(var_6)))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) + (arr_1 [i_0]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_2 [i_2] [i_1]))))));
                }
            } 
        } 
        var_22 = 18444143974186186554ULL;
        var_23 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (var_5)))))) ? (((((/* implicit */_Bool) var_2)) ? (3145081832993036662LL) : (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((arr_1 [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)18)), (0LL)))))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5] [i_5])) : (arr_1 [i_5])))) ? (arr_7 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((((/* implicit */_Bool) ((var_7) | (70368744177663LL)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_10)) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))))))))));
        var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5])))) ? ((((!(((/* implicit */_Bool) (unsigned char)240)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (var_14))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), ((+(arr_9 [i_5] [(unsigned char)9] [i_5] [i_5] [i_5] [i_5]))))))));
        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        arr_13 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */long long int) (~(arr_2 [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_5])) ? (arr_0 [i_5] [i_5]) : (((/* implicit */long long int) arr_6 [i_5] [i_5] [i_5] [i_5]))))));
        arr_14 [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((var_1), (268435455U)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_5)) : (204168394337426185LL))) : (((/* implicit */long long int) 489294901))))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_17 [i_6] [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (_Bool)1))))) ? (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)7)))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_3))))) & (((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_6] [i_6])) ? (var_6) : (-204168394337426183LL))))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 4; i_10 < 11; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((unsigned short) ((1583312539U) ^ (((/* implicit */unsigned int) ((var_5) & (((/* implicit */int) (_Bool)1)))))))))));
                                arr_28 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_6])))))))) - ((-(((var_12) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (_Bool)1))))))));
                                var_29 = (i_9 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_10 - 2] [i_10 - 2] [i_10])), (arr_24 [i_9] [i_9] [i_9] [i_6])))) && (((/* implicit */_Bool) ((((var_15) >> (((arr_24 [i_6] [i_7] [i_9] [i_9]) - (11463278557118317217ULL))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_10 - 2] [i_10 - 2] [i_10])), (arr_24 [i_9] [i_9] [i_9] [i_6])))) && (((/* implicit */_Bool) ((((var_15) >> (((((arr_24 [i_6] [i_7] [i_9] [i_9]) - (11463278557118317217ULL))) - (1562314685613641960ULL))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7] [i_9] [i_10 - 1])) || (((/* implicit */_Bool) 489294901))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_10 - 4])) && (((/* implicit */_Bool) var_4)))))));
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) var_13);
}
