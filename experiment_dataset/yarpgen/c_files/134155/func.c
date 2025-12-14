/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134155
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)1308)))))));
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */int) (((+(((/* implicit */int) var_1)))) >= (((/* implicit */int) min((var_0), (var_9))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2]))))))))));
                arr_8 [i_0] = arr_2 [i_0 + 3] [i_1];
            }
        } 
    } 
    var_12 *= var_8;
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_18 [i_3] [(short)4] [12ULL] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_2] [i_4] [i_4] [i_2]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (14022019867669455719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (arr_13 [i_2] [i_2]) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-5577))))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_9 [i_2]))))) : (((/* implicit */int) var_7)))))));
                    arr_19 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (((((((/* implicit */int) var_0)) >= (((/* implicit */int) var_6)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_3] [i_2])))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        arr_23 [i_5] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [10ULL] [i_4] [10ULL] [i_5] [i_2]))) : (arr_9 [i_5 + 2]))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_3] [i_5 - 2] [20ULL] [i_5])) < (((/* implicit */int) var_9)))))));
                        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_10 [i_2])))) : (((/* implicit */int) var_2))));
                    }
                    for (short i_6 = 2; i_6 < 24; i_6 += 4) 
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_6))))));
                        arr_27 [i_3] [16ULL] [1ULL] [1ULL] [i_3] [1ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_22 [i_4] [(short)2] [i_6] [i_6 + 1])))));
                    }
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_32 [22ULL] [22ULL] [(short)6] [i_2] = ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_0)), (var_3))) * (min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])), (var_3)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [i_2] [(short)1] [i_4] [i_7]), (var_4))))))));
                        var_16 = (short)-25019;
                        var_17 = (+(((((/* implicit */_Bool) var_8)) ? (arr_9 [i_2]) : (arr_9 [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 4) 
                    {
                        var_18 ^= ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_8 - 3] [i_8 - 3] [i_4] [i_8]))));
                        var_19 = ((/* implicit */short) 3583683640300943582ULL);
                    }
                    arr_36 [(short)13] [(short)13] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_10 [i_3])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (short i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                for (short i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_9))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-22686)))) != (((/* implicit */int) var_1))));
                            var_22 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_2]))))) : (min((10145556060152466635ULL), (((/* implicit */unsigned long long int) var_2)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 1) 
                        {
                            var_23 = arr_20 [i_13 - 3] [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_10 + 4] [i_10 - 1];
                            arr_49 [i_13] [(short)14] [i_13] [i_13] [i_13] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))));
                        }
                        for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_24 ^= min(((short)-3074), (var_2));
                            arr_53 [(short)2] = ((/* implicit */short) ((unsigned long long int) (-((-(arr_39 [(short)9] [(short)15] [i_10] [(short)2]))))));
                            var_25 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))));
                        }
                        arr_54 [i_2] [(short)14] [(short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)11144), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_2)), (arr_44 [i_9] [i_11 + 4]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_2] [i_9] [i_10] [i_10])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) >= (((((/* implicit */_Bool) arr_37 [11ULL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))))));
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) (short)11))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) min((var_0), (var_9))))));
        arr_55 [i_2] = min((min((arr_48 [i_2] [(short)8] [i_2] [i_2] [(short)10] [i_2] [i_2]), (arr_48 [i_2] [i_2] [i_2] [i_2] [(short)15] [(short)22] [(short)21]))), (min((((/* implicit */unsigned long long int) var_5)), (var_3))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((((/* implicit */_Bool) arr_14 [i_2])) ? (arr_14 [i_2]) : (arr_14 [i_2]))) - (((((/* implicit */_Bool) arr_14 [i_2])) ? (arr_14 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    }
    for (short i_15 = 1; i_15 < 15; i_15 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */short) ((((/* implicit */int) ((short) (~(((/* implicit */int) (short)-24582)))))) & (((/* implicit */int) var_1))));
        arr_58 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */int) (short)-19867)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
    }
    for (short i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
    {
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_8))));
        arr_64 [i_16] = var_5;
        arr_65 [(short)12] [i_16] |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_1))) || (((/* implicit */_Bool) arr_39 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 + 1]))));
        var_30 = var_5;
    }
    var_31 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31785))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))));
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
}
