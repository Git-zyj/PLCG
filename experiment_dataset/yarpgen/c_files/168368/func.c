/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168368
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)55)), (var_7)))) < (min((var_2), (((/* implicit */int) arr_6 [14U] [(short)17] [(short)17] [(short)17]))))))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)15] [i_1] [(signed char)19] [i_2 + 4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [12U] [12U] [12U] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(unsigned char)10] [3LL] [(unsigned short)24] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)201)), ((short)-2460)))) ? (((arr_4 [(short)3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)6] [(unsigned char)6] [i_2] [(unsigned char)15]))) : (arr_1 [i_0] [(short)19]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])) + (((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_6))));
                                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)4055)), (((((/* implicit */_Bool) var_9)) ? (((4165902635U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))));
                                var_12 = ((/* implicit */unsigned char) arr_11 [(unsigned short)6] [i_1] [(short)21] [i_2] [i_3] [i_4]);
                                var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)13] [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_2] [5] [i_4])) - (5240)))))) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) == (((arr_3 [i_0] [i_0]) | (((((/* implicit */_Bool) arr_5 [i_3] [i_3] [19U] [i_3])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) 1846549259U))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_17 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_2 - 1]))));
                        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_2 - 2])) >> (((((/* implicit */int) (short)-32543)) + (32555)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 3; i_6 < 24; i_6 += 1) 
                        {
                            arr_20 [(short)16] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5]))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)4] [i_6]))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_5] [i_2 + 3] [i_2 + 3] [i_2])) : (((/* implicit */int) arr_12 [i_6 + 1] [i_6] [i_6] [i_2 + 3] [i_2] [i_2])))))));
                        }
                        var_16 = ((/* implicit */unsigned int) (short)-32527);
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */signed char) ((arr_0 [i_2 + 2] [i_2 + 2]) > (arr_0 [14LL] [i_2 - 1])));
                            var_17 = ((/* implicit */unsigned short) ((int) arr_6 [i_0] [i_2] [i_7] [(unsigned char)0]));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_2 + 3] [i_2 - 3] [i_8] [i_8] [i_8])))))));
                            arr_26 [i_0] [i_1] [i_1] [(unsigned char)7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_8])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [15LL])) : (((/* implicit */int) arr_5 [(unsigned char)10] [i_1] [i_7] [(unsigned short)3]))));
                        }
                        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            arr_29 [(_Bool)1] [i_7] [(short)15] [i_1] [7U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [(unsigned char)4] [i_2 + 4])) ? (-774314585) : (((/* implicit */int) (short)-32537))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) arr_22 [(signed char)8] [i_0] [i_2] [(unsigned char)18] [i_0])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2 + 2])))))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            arr_32 [i_10] [i_7] [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14413)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)229))));
                            arr_33 [i_0] [i_1] [9] [i_0] [9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 3] [(_Bool)1]))));
                            arr_34 [7LL] [i_1] [i_2] [i_10] = ((/* implicit */short) (unsigned short)51328);
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 4] [i_2 + 1] [i_2 - 3])) * (((/* implicit */int) (short)32537)))))));
                            arr_35 [i_0] [i_1] [(unsigned char)2] [i_1] [i_2] [i_7] [i_10] = var_4;
                        }
                        for (unsigned char i_11 = 1; i_11 < 24; i_11 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2 + 4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 2] [i_2]))) : (-3502368720148128408LL)));
                            arr_38 [15LL] [(unsigned char)19] [i_1] [i_2] [i_2] [i_11] = ((/* implicit */unsigned int) (short)2468);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            arr_42 [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2 - 2])) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [(unsigned char)17] [i_1] [i_2 + 3]))));
                            var_22 = ((/* implicit */unsigned short) var_3);
                            var_23 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [(unsigned char)20]))));
                        }
                    }
                    arr_43 [i_0] [i_1] = ((short) (-(((((/* implicit */_Bool) arr_18 [(unsigned char)13] [(unsigned char)10] [19LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_39 [i_2]))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_21 [i_2] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        for (unsigned char i_14 = 2; i_14 < 12; i_14 += 1) 
        {
            {
                arr_50 [i_13] = ((/* implicit */signed char) 4235311192U);
                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_13] [i_13])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_14 - 1]))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_14] [i_13] [i_13] [(unsigned char)1] [i_13]))) : (arr_9 [i_14] [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32537)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_55 [i_15] [i_15] [i_14] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (59656106U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (929609593U)))) : (((((/* implicit */_Bool) arr_54 [(_Bool)1] [i_14] [i_15] [(_Bool)1])) ? (-398340316) : (((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (short i_16 = 1; i_16 < 12; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                arr_60 [(short)5] [i_14] [i_15] [i_16 - 1] [i_13] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) arr_49 [i_13]))));
                                arr_61 [i_13] [i_13] [i_15] [i_14] [i_13] = ((/* implicit */unsigned int) ((var_2) & (((/* implicit */int) arr_48 [i_14] [i_14 - 1]))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) arr_8 [i_13] [i_14] [(signed char)20] [(signed char)23]);
                }
                arr_62 [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 6598915739677191838LL)) ? (arr_3 [i_14 + 2] [i_14 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
            }
        } 
    } 
}
