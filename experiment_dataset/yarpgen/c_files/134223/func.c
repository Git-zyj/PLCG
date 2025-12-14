/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134223
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 778135544)) ? ((~(((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (short)19105)) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : (max((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))))))))));
        arr_2 [i_0] = (unsigned char)87;
        var_18 = ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((+(((/* implicit */int) (unsigned short)26431)))) << ((((((~(((/* implicit */int) (unsigned short)58852)))) + (58878))) - (15))))))));
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6102003199293629597LL)) ? ((+(arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_2] [i_2])))) : ((+((-9223372036854775807LL - 1LL))))));
        arr_10 [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1458240487) : (((/* implicit */int) arr_1 [i_2] [i_2]))))) ? (-10LL) : (((/* implicit */long long int) (~(arr_4 [i_2] [i_2]))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((778135563) ^ (((1734386852) >> (((arr_0 [i_2] [i_2]) + (475688383)))))));
        var_21 ^= ((/* implicit */short) arr_0 [i_2] [i_2]);
        /* LoopSeq 1 */
        for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (signed char)85)))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 3; i_4 < 18; i_4 += 3) 
            {
                for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) -4441517329255483820LL);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) / (((unsigned long long int) var_6)))))));
                            var_25 = ((((/* implicit */int) (signed char)54)) << (((6181575584269102587LL) - (6181575584269102586LL))));
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((arr_5 [i_5 + 2] [i_6 - 1]) + (9223372036854775807LL))) << (((arr_5 [i_5 - 1] [i_6 - 1]) + (9143082807494747585LL)))));
                            arr_23 [i_5] [(unsigned char)16] [i_4] [(unsigned char)16] [i_5] [i_5] |= ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
            } 
            arr_24 [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)61))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_29 [i_2] [i_2] [i_3] = ((/* implicit */signed char) (-((~(arr_7 [i_3])))));
                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 - 3] [i_3])) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (unsigned short)65535))));
                var_27 = ((/* implicit */signed char) arr_1 [i_3 - 1] [i_3 - 3]);
            }
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                arr_33 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_3] [i_8])) && (((/* implicit */_Bool) var_8))));
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    arr_36 [i_8] [i_3] [i_3] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)39105))));
                    arr_37 [i_2] [i_3] [i_2] = ((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_9]);
                    var_28 ^= ((/* implicit */unsigned char) ((4294967288U) << (((((/* implicit */int) (unsigned short)39102)) - (39083)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_40 [i_3] = ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
                        arr_41 [i_3] [i_3] [i_8] [i_9] [i_3] = ((((/* implicit */_Bool) (~(6181575584269102613LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)26429))))) : (arr_31 [i_2] [i_3] [i_3]));
                        var_29 = ((/* implicit */unsigned short) arr_1 [i_2] [i_10]);
                    }
                }
                for (unsigned int i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    arr_45 [i_3] [i_3] [i_8] [i_3] = ((/* implicit */_Bool) 2476457266U);
                    var_30 ^= ((/* implicit */unsigned char) arr_21 [i_2] [i_2] [i_2] [i_11] [i_11]);
                    arr_46 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_39 [i_2]) : (((/* implicit */long long int) arr_15 [i_2] [i_3] [i_2])))))));
                    arr_47 [12LL] |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_2] [i_3])) ? (arr_43 [i_2] [i_3] [(unsigned short)4] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))));
                }
                for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_3 - 3] [i_3 + 1] [i_3] [i_3 - 3])) * (((/* implicit */int) var_10))));
                    /* LoopSeq 3 */
                    for (int i_13 = 3; i_13 < 16; i_13 += 3) 
                    {
                        arr_53 [16] [i_2] [i_8] [i_12] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (arr_27 [i_13 + 4] [i_13 - 2]) : (var_6)));
                        arr_54 [i_3] [i_3] [i_8] [i_3] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_44 [i_2] [i_2] [i_3] [i_8] [i_2] [i_13]) : (arr_30 [i_3 - 2] [i_13 - 2])));
                        arr_55 [i_2] [i_2] [i_3] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_2]))) + (((((/* implicit */_Bool) 1283596736)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_2] [i_3] [i_3] [i_8] [i_12] [i_13]))) : (3266349807U))));
                    }
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        arr_60 [i_2] [i_3] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 1]))) : (((((/* implicit */long long int) arr_48 [i_3] [i_3])) / (arr_8 [i_12]))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_8] [i_2] [i_3])) ? (arr_35 [i_2] [i_12] [i_3 + 1] [i_8] [i_14]) : (arr_35 [i_3] [i_3] [i_3 - 2] [i_12] [i_14])));
                    }
                    for (unsigned short i_15 = 1; i_15 < 19; i_15 += 1) 
                    {
                        arr_63 [i_2] [i_2] [i_3] [i_15] = ((unsigned char) ((unsigned long long int) arr_19 [i_2] [i_2] [i_8] [i_12]));
                        arr_64 [i_3] [i_3] = ((/* implicit */int) arr_32 [i_2] [i_2] [i_3] [i_2]);
                    }
                    arr_65 [i_3] [i_3] [i_3] [i_12] = ((/* implicit */unsigned short) 4441517329255483807LL);
                    var_33 = arr_17 [i_3] [i_3 - 3] [i_3 - 1] [i_3 - 1];
                }
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_8])) ^ (((/* implicit */int) arr_20 [0U] [0U] [0U] [0U] [0U]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (((((/* implicit */long long int) arr_4 [i_2] [i_2])) & (arr_39 [i_2]))))))));
                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)26433)))))));
            }
            for (int i_16 = 3; i_16 < 18; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            arr_74 [i_17] [i_3] [i_3] [i_2] = (i_3 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_71 [i_2] [i_3 - 1] [i_3 - 1] [i_3] [i_18])) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_3] [i_17] [i_17]))) <= (arr_5 [i_16] [i_2]))))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_71 [i_2] [i_3 - 1] [i_3 - 1] [i_3] [i_18])) - (2147483647))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_3] [i_17] [i_17]))) <= (arr_5 [i_16] [i_2])))))));
                            var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_3)))))));
                            arr_75 [i_2] [i_3] [i_16] [i_16] [i_17] [i_16] [i_18] = ((/* implicit */unsigned short) (((~(var_16))) != ((+(arr_7 [i_2])))));
                            arr_76 [i_3] [i_3] [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (4252006042100264269LL) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2476457256U)) ? (((/* implicit */int) (unsigned short)28342)) : (((/* implicit */int) arr_42 [i_2] [i_2] [i_3]))))) : (arr_44 [i_3] [i_3] [i_3] [i_3 - 1] [i_17 + 1] [i_17])));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_19 = 1; i_19 < 19; i_19 += 2) 
                {
                    arr_80 [(unsigned char)16] [(unsigned char)16] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2357456879U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (4252006042100264270LL))))));
                    arr_81 [i_2] [i_3] [i_16] [i_3] = ((/* implicit */unsigned char) ((arr_73 [i_3] [i_19 + 1] [i_19] [i_19] [i_3]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (446200903U))))));
                }
                for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 2) 
                {
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) arr_42 [i_2] [i_2] [4ULL]))));
                    var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_2] [i_2] [14U] [i_20] [i_3]))) : (var_8)))) : (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_16] [i_3])) ? (((/* implicit */long long int) arr_31 [i_2] [i_20] [0])) : (var_15)))));
                }
                for (long long int i_21 = 1; i_21 < 18; i_21 += 3) 
                {
                    arr_86 [i_21] [i_3] [i_3] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_2] [i_3 + 1] [i_21] [i_21] [i_16 - 2])) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_59 [i_2] [i_21 + 2] [i_21 + 2] [i_21 + 2] [i_21]))));
                    arr_87 [i_3] [i_3] [i_16] [i_21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_51 [i_3] [i_3] [i_2] [i_16] [i_16 - 2] [i_16]))));
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_85 [i_3 + 1] [i_16 - 2] [i_3] [i_21 - 1] [i_21])) ? (((/* implicit */int) arr_85 [i_3 + 1] [i_16 - 2] [i_3] [i_21 - 1] [i_21])) : (((/* implicit */int) arr_85 [i_3 + 1] [i_16 - 1] [i_3] [i_21 + 2] [i_3]))));
                    arr_88 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) ((unsigned long long int) 3593016912U));
                }
            }
        }
    }
    var_40 = ((/* implicit */int) max((var_40), ((-(var_7)))));
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) (~(-506021830)))) <= (min((((/* implicit */long long int) var_16)), (var_12)))))) << (((max((((/* implicit */long long int) var_8)), (((4252006042100264280LL) + (-4441517329255483831LL))))) - (5758653LL)))));
}
