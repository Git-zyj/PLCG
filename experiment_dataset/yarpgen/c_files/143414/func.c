/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143414
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((var_11) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))) : (min((-4448013590733197382LL), (((/* implicit */long long int) var_8)))))) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((((/* implicit */int) var_5)) * ((-(((/* implicit */int) var_16)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 = (~(((arr_12 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4 + 1]) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 2] [i_4] [(short)4] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 1])))));
                                arr_16 [i_4 - 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4 + 1] [i_1])) % (((/* implicit */int) arr_1 [i_4 - 1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4448013590733197362LL)) || (((/* implicit */_Bool) arr_1 [i_4 - 1] [(signed char)3])))))) : (((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 1] [i_4 + 1])))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)63)) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-7718026084743469990LL)))))))));
                                arr_17 [i_2] [i_4] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    arr_18 [i_0] &= ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) + (((/* implicit */int) arr_6 [i_0] [(unsigned short)15] [i_2]))));
                }
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((~((~(9200092884789637295LL)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_22 = (short)26209;
                                var_23 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_6 - 1] [i_0] [15LL] [i_7])) - (((/* implicit */int) var_5)))));
                                arr_27 [i_5] [i_6] [(_Bool)1] [(_Bool)0] [(_Bool)1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)4] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) arr_0 [i_7])) ^ (((/* implicit */int) arr_3 [i_5]))))));
                                arr_28 [i_5] [i_1] [i_5] [i_6] [i_7] [14] = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [(signed char)8] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-4448013590733197382LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_9))));
                                arr_33 [i_5] [i_5] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 1220971084U))) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) var_14))));
                                var_25 = ((/* implicit */long long int) max((var_25), (4448013590733197381LL)));
                                arr_34 [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_7 [i_9]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_9]))) | (arr_20 [i_1])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_10)))) ? (((arr_20 [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> ((((+(((/* implicit */int) arr_23 [i_0] [(_Bool)1] [i_0] [i_0])))) - (22808)))))))))));
                    /* LoopSeq 3 */
                    for (short i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */int) arr_3 [i_10])) >= (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */int) arr_4 [i_11 + 3] [i_11 - 1] [i_11 + 1])) : (((/* implicit */int) ((unsigned short) (short)2)))))))));
                        var_28 = ((/* implicit */long long int) (-(((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1])))))));
                    }
                    for (signed char i_12 = 2; i_12 < 14; i_12 += 3) 
                    {
                        var_29 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (signed char)-1)))));
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), (arr_45 [i_0] [14] [i_0] [i_10] [i_13] [i_0] [(_Bool)1])));
                            var_31 *= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((((/* implicit */int) arr_22 [(_Bool)1])) >> (((var_13) - (2349226478U)))))), (-4448013590733197372LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_16)))))));
                            var_32 -= ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_0] [i_10] [(unsigned short)13]));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_9 [i_1])))) + (2147483647))) >> (((((((/* implicit */int) arr_6 [(unsigned char)4] [i_1] [i_10])) & (((/* implicit */int) var_5)))) - (40)))))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_12])) : (((/* implicit */int) (signed char)79))))), (1103346827U)))));
                            arr_49 [i_0] [i_1] [i_1] [i_1] [i_12] [i_0] [i_14] |= ((/* implicit */unsigned long long int) arr_44 [i_0] [i_1] [i_10] [i_1] [i_14]);
                        }
                        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            var_33 = ((/* implicit */short) var_0);
                            var_34 = ((/* implicit */int) max((((/* implicit */long long int) (-(((((/* implicit */int) arr_46 [i_0] [i_1] [i_0] [9U] [i_15] [12LL])) & (((/* implicit */int) var_6))))))), (((((/* implicit */long long int) ((/* implicit */int) ((14349921134769869299ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) * (((long long int) 3073996212U))))));
                            var_35 = ((/* implicit */_Bool) (signed char)-86);
                        }
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_30 [i_0]))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_56 [i_0] [i_0] [i_10] [i_0] [i_1] [i_16] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 3073996216U)))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_50 [(unsigned short)3] [i_1]))) / (arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((max((((/* implicit */long long int) (signed char)53)), (var_4))) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (1220971083U))))))) : (min((((((/* implicit */_Bool) (short)-22509)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [i_10] [(unsigned char)7]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 2; i_17 < 15; i_17 += 3) 
                        {
                            var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_51 [i_0] [i_1] [i_10] [i_16] [i_0])), (var_2))))) / (1189718648264876322LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)99))))) : (arr_53 [i_0] [i_1] [i_16] [i_16])))) : (((var_15) & (-1189718648264876322LL)))));
                            arr_60 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] = (~(((((long long int) var_12)) % ((-(-1189718648264876345LL))))));
                        }
                    }
                    var_38 += ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) max((arr_15 [i_0] [10LL] [i_10] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)46294)) : (((/* implicit */int) (unsigned short)65535))))))))));
                    arr_61 [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)3998))) - (-4448013590733197382LL))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15645))) - (-1189718648264876330LL)))))) ? ((((+(((/* implicit */int) var_12)))) + (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_8)) + (((((/* implicit */int) arr_29 [i_0] [i_0] [(short)15] [i_0])) - (((/* implicit */int) var_0))))))));
                    var_39 &= ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_0] [(short)12] [i_10] [i_1] [(unsigned short)7])) || ((_Bool)0))))))));
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_40 &= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) : (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_1] [i_1] [i_1] [i_18] [i_18])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_1] [i_0] [i_18 - 1] [i_1] [i_18] [i_18]))) : (max((6340136335276760587LL), (-3495030289790263697LL)))))));
                    /* LoopNest 2 */
                    for (short i_19 = 4; i_19 < 13; i_19 += 3) 
                    {
                        for (short i_20 = 0; i_20 < 16; i_20 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned int) max((var_41), (((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) var_11))))))) * (((var_3) * (((1220971084U) / (((/* implicit */unsigned int) arr_38 [i_20] [i_20] [i_20]))))))))));
                                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (+((-(((((/* implicit */int) var_9)) + (((/* implicit */int) arr_29 [9U] [10LL] [i_19 - 4] [i_20])))))))))));
                                var_43 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)106))))) || (((/* implicit */_Bool) arr_20 [i_0]))));
                            }
                        } 
                    } 
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_44 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)216))));
                    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_21])), (1189718648264876292LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned int) arr_65 [i_21] [i_1] [i_21])), (3073996184U)))))) || (((/* implicit */_Bool) arr_77 [i_0] [i_0] [(_Bool)1] [i_0])))))));
                }
                var_46 = ((/* implicit */int) var_7);
            }
        } 
    } 
}
