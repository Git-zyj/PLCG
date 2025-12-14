/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136902
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
    var_12 = ((/* implicit */unsigned short) max((((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)0))))))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (unsigned char)252))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) (unsigned char)17)))))));
                            arr_11 [i_0] [i_1] [i_4] [i_3] [i_1] [i_1] [i_4] = (~(((/* implicit */int) var_4)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_14 [i_0] [i_5] [i_2] [(_Bool)1] [i_5] [i_5] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)65523)))) == (((/* implicit */int) var_6))));
                            var_15 ^= ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                        for (short i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_3 + 1] [i_6 + 1] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_6))))));
                            arr_19 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [(short)8] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 2])) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1))))) : ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_0] [17U] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_7] [i_8] [i_2] [i_8] = ((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_7] [i_8] [i_0]);
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)16)) != (((/* implicit */int) (short)-32766)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 485742868U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned char)10))))))) : (var_11))))));
                            arr_29 [i_0] [i_0] [i_8] [i_1] [i_8] = ((((/* implicit */int) ((_Bool) var_11))) <= (((((((/* implicit */_Bool) (unsigned short)16256)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (signed char)(-127 - 1))))) & (((/* implicit */int) (unsigned char)0)))));
                            arr_30 [i_2] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)252)), ((unsigned short)5221)))) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */int) (signed char)112)) - (var_5)))))) >= (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) << (((/* implicit */int) arr_8 [i_0] [(short)19] [i_0] [i_0]))))), (878790867155303328LL)))));
                            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_17 [i_0] [i_1] [i_2] [(signed char)2] [2LL] [(unsigned short)8] [i_2])))) ^ (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)-126))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_33 [i_2] [i_1] [i_2] [(unsigned short)4] [i_9] [i_9] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [(unsigned short)12] [(unsigned short)12] [i_7] [i_7 - 1] [i_7] [i_9]))))) ? (((/* implicit */int) arr_16 [(short)13] [i_1] [i_2] [i_2] [i_7 - 1] [i_7] [i_2])) : (((arr_10 [i_0] [i_9] [i_2] [i_7 - 1] [i_9]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) arr_27 [i_0] [(signed char)14] [i_7 - 1])) : (1259434150)));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) arr_25 [15] [i_1] [i_2] [i_7] [i_10 + 2])) : (((/* implicit */int) var_2))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned char)11))));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_7 - 1] [i_2] [i_10] [i_2])) ? (((((/* implicit */_Bool) -511936228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [6LL]))) : (var_11))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1)))))));
                            arr_37 [i_1] [i_0] [i_2] [i_7] [i_2] [i_1] = ((signed char) arr_0 [i_7 - 1]);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_2] [i_10 - 2] [i_7 - 1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)9358))));
                        }
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned short)43840)))) != ((((-2147483647 - 1)) / (((/* implicit */int) (unsigned char)3))))))) : (((/* implicit */int) (unsigned char)228))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_40 [i_0] [i_11] [i_2] [i_7 - 1] [i_11] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)118)), ((unsigned char)0))))));
                            var_24 = ((/* implicit */long long int) var_8);
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_1] [i_1] [(unsigned short)10] [i_12] = ((/* implicit */short) max((-1259434151), (((/* implicit */int) (_Bool)1))));
                            var_25 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)21)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) : (min((min((((/* implicit */unsigned long long int) (unsigned short)61190)), (var_11))), (((/* implicit */unsigned long long int) (unsigned short)16703))))));
                            arr_45 [i_0] [i_1] [i_2] [i_7 - 1] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_12] [i_2] [i_1] [i_0]))));
                            arr_46 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */short) (!(((((/* implicit */int) var_8)) >= (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)-21))))))));
                            arr_47 [(short)13] [(short)13] [(short)13] [18ULL] [i_7 - 1] [i_12] = ((/* implicit */short) max((max((-1259434163), (((/* implicit */int) min((arr_43 [i_12] [i_1]), (var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19754)) ? (((/* implicit */int) (unsigned short)22192)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1] [i_7 - 1] [i_7] [i_12])) ? (1259434150) : (-1259434151))) : (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        }
                        var_26 ^= ((((/* implicit */int) ((unsigned short) arr_39 [i_0] [(_Bool)1] [i_7 - 1]))) >= (((1259434174) | (((/* implicit */int) var_8)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_2] [i_14]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)22209))))) ? (((/* implicit */int) ((((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_8 [i_1] [i_2] [i_13] [i_14]))))) : (((/* implicit */int) ((arr_8 [i_0] [i_0] [i_2] [i_13]) && (((/* implicit */_Bool) (unsigned short)44230)))))));
                                arr_55 [i_0] [i_1] [i_14] [i_2] [i_13] [i_13] [i_0] = ((/* implicit */short) ((signed char) (short)23456));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            {
                arr_61 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_15] [i_15] [i_16])) ? (((((/* implicit */_Bool) var_3)) ? ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (max(((unsigned char)7), ((unsigned char)18)))))))));
                arr_62 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned short)22192))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 34359734272LL)) || (((/* implicit */_Bool) (unsigned char)229))))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_8 [i_15] [i_15] [i_15] [i_16]))))))))));
            }
        } 
    } 
}
