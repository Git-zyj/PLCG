/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103732
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((int) var_11));
        var_14 = ((/* implicit */signed char) var_7);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_15 = arr_4 [i_1] [i_1];
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((arr_3 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (unsigned char)255))))))));
            /* LoopSeq 3 */
            for (int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) arr_1 [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_17 &= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [3U] [5U] [i_3] [i_3])))))))) & (var_3));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)253))))), (((arr_8 [i_1] [i_1] [i_1]) * (((/* implicit */unsigned long long int) var_10)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_4])))))));
                        arr_14 [i_3] [i_4] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_10 [(unsigned short)10])), ((~(31525197391593472ULL))))), (3555564246920711166ULL)));
                        var_19 = ((/* implicit */unsigned char) arr_3 [i_0] [(short)6] [i_0]);
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_2 - 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 1] [i_2 - 1])))))));
                    }
                }
                arr_15 [i_0] = ((/* implicit */short) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 0U))))))))));
            }
            for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_5]) : (arr_16 [i_0] [i_5 - 1] [i_5] [i_5])));
                    arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (((var_9) - (((/* implicit */unsigned long long int) var_12))))));
                    var_22 = (!(((/* implicit */_Bool) arr_18 [i_5 - 1])));
                    var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) ((arr_18 [i_0]) <= (var_5))))));
                }
                for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        arr_30 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */short) (signed char)105);
                        arr_31 [i_0] [i_5] = arr_16 [i_0] [i_0] [i_5] [i_0];
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7 + 1] [i_7 - 2] [i_5] [i_7 - 2] [i_7 - 2])) ? (var_5) : (var_7))))));
                        arr_34 [i_9] [i_1] [i_5 + 3] [i_7 - 2] [i_0] = ((/* implicit */short) var_1);
                        var_25 = ((/* implicit */unsigned char) arr_32 [i_0] [i_0] [i_5 + 2] [i_7] [i_7 - 1] [i_7] [i_0]);
                        var_26 = ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_3 [12ULL] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))));
                    }
                    arr_35 [i_0] [(unsigned char)10] [(unsigned char)10] = ((/* implicit */_Bool) ((((unsigned int) min((-1LL), (((/* implicit */long long int) 8U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47438)))));
                }
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) 2147483637))))))) ? ((-(var_3))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14891179826788840434ULL)) ? (15223640728382308472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned long long int) 288230367561777152LL)) : (arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255)))))))));
                    var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [(unsigned short)1] [i_1] [(unsigned short)1] [i_10])), (min((var_12), (arr_0 [i_1])))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_5])))) ? (((/* implicit */int) (unsigned char)1)) : (((int) var_2))))) : ((+(var_3)))));
                }
                var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) min((483356862), (((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (min((((/* implicit */unsigned int) arr_18 [i_5 + 2])), (5U))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_5])) || (((/* implicit */_Bool) arr_26 [i_1])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned short)32640)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)110)))))))))));
            }
            for (short i_11 = 2; i_11 < 15; i_11 += 2) 
            {
                arr_42 [i_1] [(_Bool)1] [i_1] |= ((/* implicit */unsigned short) ((max((((((/* implicit */int) (unsigned short)3840)) | (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111)))))));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_30 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 751716582)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (short)4277))))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 14891179826788840449ULL)) ? (((/* implicit */int) arr_19 [i_11])) : (-1245879112))) : (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_23 [i_0] [i_1] [i_11] [i_11])))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-16)) != (((/* implicit */int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((((/* implicit */unsigned int) var_7)) > (arr_0 [i_1]))) ? (((((/* implicit */_Bool) arr_0 [i_14])) ? (var_10) : (arr_0 [i_11]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (127) : (((/* implicit */int) var_6))))))))));
                            arr_49 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_11] [i_13] [i_13] [i_14] [i_11])) ? (((unsigned int) arr_47 [i_13])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0]))))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_5)))))) ? (max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)89)) : (arr_9 [i_0] [i_11] [i_13] [i_14])))))) : (((/* implicit */unsigned int) (+(arr_2 [i_0] [5ULL] [i_0]))))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)-1)))))) : (((unsigned long long int) (-(((/* implicit */int) var_8)))))));
                            var_36 = ((/* implicit */short) 127);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    for (unsigned int i_16 = 3; i_16 < 14; i_16 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (signed char)-1))));
                            arr_56 [i_0] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_50 [(_Bool)1] [i_0])) | ((~((-(((/* implicit */int) (_Bool)1))))))));
                            arr_57 [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned char)16)), (31525197391593472ULL))) << (((((((/* implicit */_Bool) arr_39 [i_0] [i_1] [2U])) ? (((/* implicit */int) (signed char)110)) : (arr_39 [i_0] [(signed char)14] [i_0]))) - (94)))));
                            var_38 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) -1527575616)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (min((((/* implicit */int) var_6)), (arr_40 [i_16])))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)511))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11] [i_11 + 1] [i_11 - 1])) || (((/* implicit */_Bool) arr_39 [i_1] [i_11 - 2] [i_11 + 2]))))) : ((+(((/* implicit */int) (signed char)-89)))))))));
            }
            /* LoopSeq 2 */
            for (short i_17 = 3; i_17 < 16; i_17 += 3) 
            {
                arr_61 [i_17] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_1)))) % ((-(var_5))))));
                var_40 -= ((/* implicit */_Bool) ((int) arr_4 [i_0] [i_0]));
                var_41 = (i_0 % 2 == 0) ? (((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-89)))) >> (((((/* implicit */int) arr_50 [i_1] [i_0])) - (63466)))))) ? (((/* implicit */int) ((arr_5 [i_0]) != (((/* implicit */unsigned int) arr_39 [i_0] [i_1] [i_17]))))) : (min(((+(var_5))), (((/* implicit */int) (short)-8001)))))) : (((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-89)))) >> (((((((/* implicit */int) arr_50 [i_1] [i_0])) - (63466))) + (35936)))))) ? (((/* implicit */int) ((arr_5 [i_0]) != (((/* implicit */unsigned int) arr_39 [i_0] [i_1] [i_17]))))) : (min(((+(var_5))), (((/* implicit */int) (short)-8001))))));
            }
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64)))) > (arr_2 [i_1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (short i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 17; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))))))));
                        var_44 = var_2;
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (var_3)));
                        arr_69 [(_Bool)1] [i_0] [8] [i_18] [i_19] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_2)), (var_12))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((var_7) + (2147483647))) >> (((((/* implicit */int) var_2)) + (8172)))))) > (min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)127))))))))));
                    }
                    var_46 = ((/* implicit */int) ((1125899906842623LL) / (((((/* implicit */long long int) 1073741824U)) | (-2092967095751692557LL)))));
                    arr_70 [i_1] [i_1] [i_0] [i_19] = ((/* implicit */unsigned char) var_11);
                }
            }
            var_47 -= (-(min((((arr_4 [i_0] [i_0]) ? (3254736921U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned int) -217720704)))));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 13; i_21 += 2) 
    {
        var_48 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)89)) ? (-1987166405) : (((/* implicit */int) (unsigned char)255)))));
        var_49 = ((/* implicit */unsigned long long int) -513756653);
        arr_74 [i_21] [i_21] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (arr_18 [6U])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8191))) : (5656761987372829403LL)))), (((15ULL) - (3180697704118261946ULL)))))));
        var_50 = ((/* implicit */long long int) var_7);
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_19 [i_21]) ? (((/* implicit */int) arr_19 [i_21])) : (arr_2 [i_21] [i_21] [i_21])))) + ((-(18415218876317958144ULL)))));
    }
    var_52 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)32767))));
}
