/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103185
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
    var_16 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [10LL] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_15)))), (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [i_0])))))))) : (var_14)));
                arr_8 [i_0] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) min((arr_6 [i_1] [11]), (arr_1 [i_0])))) : (arr_2 [i_0] [(unsigned char)6]))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_12 [i_0] [i_1] [(short)17] = ((int) ((((var_14) >= (((/* implicit */long long int) arr_1 [i_1])))) && ((_Bool)1)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = var_4;
                            arr_18 [i_0] [i_3] = ((/* implicit */int) (unsigned char)16);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) arr_9 [i_0]);
                            var_18 += ((/* implicit */unsigned long long int) var_6);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) var_3)) != (arr_10 [i_0] [0])));
                            var_19 *= ((/* implicit */int) ((unsigned long long int) ((unsigned char) var_8)));
                            arr_24 [i_0] = ((unsigned int) var_14);
                        }
                        var_20 = ((/* implicit */int) min((var_20), (max((var_6), (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]))))));
                        var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [3ULL] [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)2)) : (max((arr_20 [i_0] [i_0] [i_1] [(unsigned short)10] [i_3]), (((/* implicit */int) arr_4 [i_1] [i_2] [i_3])))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_27 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_13 [i_0]))))));
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
                            arr_29 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (signed char)-123))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_15))));
                            arr_30 [(short)13] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-9806)) : (((/* implicit */int) arr_19 [i_7])))));
                        }
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_3] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]))) % (((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((long long int) arr_2 [i_1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))))))))));
                            arr_33 [i_0] [i_0] [i_2] [i_3] [(short)4] [(short)2] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_32 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] [(unsigned short)9]), (var_12))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) & (arr_22 [i_0] [i_1] [i_2] [i_0] [i_0] [i_8 - 2] [i_8 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])) : (10927082570526130993ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_14)))) : (arr_25 [i_0] [18] [(unsigned short)8] [i_3] [18]))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_37 [i_9] = ((/* implicit */short) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) min((arr_19 [i_1]), (((/* implicit */unsigned short) (signed char)-48)))))));
                            arr_38 [i_0] [i_9] = ((/* implicit */signed char) var_2);
                            arr_39 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_2] [i_0] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_25 [i_0] [i_1] [i_2] [i_3] [i_3]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9806)) ? (arr_31 [i_0] [i_1] [i_2] [i_3] [i_9]) : (((/* implicit */long long int) arr_20 [i_0] [i_1] [i_2] [i_3] [i_9])))))));
                        }
                    }
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_13 [i_2])) : (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_0]))))));
                    arr_40 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) | (((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) arr_19 [i_0]))))))));
                }
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_14))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47823)) ? (arr_2 [i_0] [(unsigned char)8]) : (arr_35 [12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((int) var_1))))) : ((-(((((/* implicit */_Bool) arr_21 [i_10] [i_10] [(short)8] [(short)8] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_42 [i_0])) : (arr_2 [i_0] [i_0])))))));
                    arr_43 [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_25 [i_0] [i_0] [(short)4] [(short)4] [i_0]) >> (((((((/* implicit */_Bool) ((arr_42 [i_1]) - (((/* implicit */int) arr_3 [i_1]))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)248)))) + (2083)))));
                    arr_44 [(unsigned short)16] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1] [i_1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_10]))) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((1991226874) - (1991226864)))))) : (max((arr_16 [(_Bool)1] [(_Bool)1] [i_1] [i_10] [i_10]), (((/* implicit */long long int) (unsigned short)47823))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 4; i_12 < 18; i_12 += 4) 
                    {
                        arr_50 [i_12] [i_12] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_19 [i_1]);
                        arr_51 [i_12] [i_11] [i_1] [(short)15] = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */int) arr_32 [i_0] [i_1] [7ULL] [i_12] [i_11] [i_12] [i_12])) * (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_0])))), (((/* implicit */int) arr_19 [i_0]))))));
                    }
                    for (int i_13 = 3; i_13 < 19; i_13 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) (short)29442);
                        arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_48 [i_0] [i_1] [i_1] [i_11] [i_13 + 1] [i_13 + 1]);
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) & ((-(((unsigned long long int) arr_14 [i_0] [i_13 - 1] [(unsigned short)4] [(short)16] [(short)16]))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)19393)), ((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) (unsigned char)1)))) : (arr_46 [i_11] [i_0])));
                        arr_57 [i_14] [i_11] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */short) arr_52 [i_0] [i_1] [i_11] [i_14] [i_11])), (var_2)))))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [(short)12] [14ULL] [i_11] [i_14])) & (arr_6 [i_14] [15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_11]))) : (((unsigned long long int) arr_13 [i_0]))))));
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((short) ((((unsigned long long int) var_15)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_49 [i_0] [i_1] [(unsigned short)13] [(unsigned short)13] [i_1] [i_0]))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            arr_63 [i_11] [i_15] [i_11] [17U] [i_0] = arr_5 [i_0] [i_0];
                            arr_64 [i_0] [i_0] [12U] [12U] [i_0] [i_16] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_35 [i_16]) : (((/* implicit */unsigned long long int) var_0))))) ? (((unsigned long long int) arr_15 [i_0] [i_0] [15U] [i_11] [i_15] [i_16])) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-16160))) & (-6966351447977727644LL))))));
                            arr_65 [i_0] [i_1] [i_11] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) (short)16152)) : (var_6)));
                        }
                        var_30 ^= ((/* implicit */int) (-((~(((unsigned int) arr_9 [i_0]))))));
                        arr_66 [10] [10] [10] [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (~(1197918696))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_11])) ? (((/* implicit */int) arr_41 [i_0] [i_1] [i_11] [(short)10])) : (((/* implicit */int) arr_60 [8ULL] [(unsigned char)13] [8ULL] [i_15])))) <= (((/* implicit */int) var_4)))))) : (min((((unsigned long long int) arr_41 [i_15] [i_15] [i_15] [i_15])), (((/* implicit */unsigned long long int) min((-6291345466733358485LL), (((/* implicit */long long int) (unsigned short)19905)))))))));
                    }
                    arr_67 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_13 [i_1])), (((((/* implicit */_Bool) arr_13 [i_11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_69 [i_0] [i_0] [i_0] [i_1] [i_17])) & (((((/* implicit */_Bool) arr_46 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_17] [i_0])))));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            var_32 = ((/* implicit */short) min((var_32), (arr_55 [(unsigned char)1] [i_11] [(short)8] [i_0])));
                            var_33 += ((/* implicit */unsigned int) var_7);
                            arr_73 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_17])) ? (((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [7] [i_0] [7])) : (((/* implicit */int) var_4))));
                        }
                        var_34 ^= ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_16 [i_0] [i_0] [i_11] [i_1] [i_1])));
                    }
                }
            }
        } 
    } 
}
