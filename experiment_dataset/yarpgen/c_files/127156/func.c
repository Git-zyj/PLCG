/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127156
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 |= ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_8 [i_0] [(short)7] [i_2] [i_0] = ((/* implicit */int) var_4);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (-661718766)))) : (min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_2)))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [13] [i_1] [i_1] [i_2])) : ((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)48)), (1007036183U)));
                        arr_12 [i_3] [(unsigned short)19] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) % (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-86))))));
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (!((_Bool)1)))))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)0] [i_2] [(unsigned short)0])) : (((/* implicit */int) var_1)))))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5])))))) ? ((-(((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!((_Bool)1))))));
                        arr_18 [i_0] [i_1] [i_2] [(short)16] = ((/* implicit */_Bool) 1149226743807417124ULL);
                        var_22 |= ((/* implicit */short) min((arr_4 [i_0] [(_Bool)1] [i_0]), ((+(((13U) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_2] [i_5]))))) != ((-(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) (-(304974810U)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 1149226743807417124ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 3; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_2] [i_1] [i_2] &= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) var_14)) ? (17297517329902134491ULL) : (1149226743807417125ULL)))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_24 [(_Bool)1] [(unsigned char)16] [i_2] [i_6] [i_2] [i_7 - 3] [(unsigned char)13])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned char)166)))))))));
                            arr_26 [i_0] [i_7] [i_2] [(unsigned char)19] [(short)7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_23 [i_7] [12U] [i_7] [i_7 - 2] [(signed char)5] [i_7] [i_7 - 1])))));
                            arr_27 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1048575)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_12)))))));
                        }
                        for (short i_8 = 3; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            arr_31 [14] [i_2] [14ULL] = ((/* implicit */_Bool) (+(((min((-1048597), (((/* implicit */int) arr_9 [i_6] [i_2] [i_1] [i_0])))) - (((/* implicit */int) (short)-21010))))));
                            arr_32 [i_0] [i_1] [i_2] [14LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)2)), (arr_30 [i_8 - 2] [i_8] [i_8 - 1] [i_8 - 2] [i_8])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16698)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (var_11)))) ? (-1606588461) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max(((unsigned char)202), ((unsigned char)3))))));
                            arr_33 [i_1] [i_6] [i_8] &= ((/* implicit */int) ((((((/* implicit */long long int) var_11)) / (arr_22 [i_6] [17LL] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 2]))) & (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */_Bool) 16239199077567273116ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)80)))))))));
                        }
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_30 [(_Bool)1] [i_1] [4LL] [i_6] [i_6]))))));
                    }
                }
                for (signed char i_9 = 4; i_9 < 19; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) (~(((((/* implicit */_Bool) 1818139093U)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [(signed char)19] [i_11] [i_10] [i_9] [i_1] [i_1] [(_Bool)1])))))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(17297517329902134503ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_11] [i_0] [i_0]))))) : ((~(var_0)))));
                                var_28 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)-85))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_11)) : (var_13)))))) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (unsigned char)198))))));
                    arr_40 [i_9 + 1] [(signed char)10] [(unsigned short)17] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_43 [(signed char)16] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_9 - 3] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) 6128330966987626115ULL)))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    arr_47 [i_0] [i_1] [i_13 + 2] = ((/* implicit */unsigned short) ((unsigned int) -1048590));
                    /* LoopSeq 1 */
                    for (short i_14 = 4; i_14 < 19; i_14 += 2) 
                    {
                        var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))));
                        var_32 = (short)16697;
                        arr_52 [(signed char)16] [i_13] [i_0] [i_0] = ((/* implicit */signed char) ((1048574) / (((/* implicit */int) (unsigned char)214))));
                    }
                }
                var_33 += ((/* implicit */unsigned char) min(((~(var_9))), (((/* implicit */unsigned int) var_10))));
                arr_53 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))))), ((~(var_11)))));
                arr_54 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(17297517329902134491ULL))), (((/* implicit */unsigned long long int) (signed char)-94))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1357427528U))))), (arr_46 [i_1] [i_1] [i_0])))) : ((-(((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28311)) ? (((/* implicit */int) arr_20 [(short)11] [(unsigned char)18] [i_0] [i_1])) : (((/* implicit */int) (signed char)-83))))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_0]))) : (var_9))))))));
            }
        } 
    } 
}
