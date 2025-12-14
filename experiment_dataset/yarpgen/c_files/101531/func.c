/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101531
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))) ? (var_4) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (var_0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_12 = ((/* implicit */int) ((var_10) <= (((/* implicit */int) arr_2 [i_1]))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (503190464435834344ULL)));
                }
                for (short i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) var_10);
                    arr_11 [i_0] [i_0] [i_3] [i_3 + 2] = ((/* implicit */_Bool) arr_7 [i_1] [i_3 + 2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) var_10);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_1] [i_0] [i_3 - 2] [i_4] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_5] [i_3 - 3] [i_1] [i_0]))))))))))));
                                var_16 = (-(((((/* implicit */_Bool) -923135419)) ? (((((/* implicit */_Bool) 3927121987U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (503190464435834368ULL))) : (12859293565428570954ULL))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) arr_13 [i_0] [i_3] [i_1] [i_3 + 1] [i_3 - 3] [i_3 - 1]);
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) < (arr_14 [i_0] [i_1] [i_1] [i_3 - 2]))) ? (((/* implicit */int) ((short) var_2))) : (min((((/* implicit */int) arr_2 [i_0])), (arr_3 [i_1]))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((var_3) && (((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)121))));
                            arr_23 [i_7] [i_6] = ((/* implicit */unsigned long long int) var_8);
                            arr_24 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                        }
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((((/* implicit */_Bool) 17943553609273717285ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_4))) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_7] [i_6] [i_1] [i_1] [i_0]))));
                            var_22 ^= ((/* implicit */unsigned int) arr_6 [i_1] [i_6] [i_7] [i_9]);
                        }
                        for (long long int i_10 = 2; i_10 < 22; i_10 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */short) arr_12 [i_10 - 1] [i_7] [i_6] [i_1]);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_2 [i_10 - 2]))));
                        }
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_4))));
                    }
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_34 [i_11] [i_0] [i_1] [i_6] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_27 [i_0] [i_11] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_27 [i_11] [i_11] [i_1] [i_11] [i_1] [i_1])) : (((/* implicit */int) arr_27 [i_11] [i_11] [i_6] [i_1] [i_11] [i_0])))), (((/* implicit */int) min((arr_27 [i_0] [i_11] [i_6] [i_11] [i_1] [i_6]), (arr_27 [i_11] [i_11] [i_1] [i_0] [i_11] [i_0]))))));
                        arr_35 [i_0] [i_1] [i_6] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0]) >> (((arr_3 [i_1]) - (1741015360)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0])))) : (min((((/* implicit */unsigned long long int) arr_3 [i_11])), (17943553609273717300ULL)))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-23)) ? (503190464435834331ULL) : (((/* implicit */unsigned long long int) var_0))))))));
                    }
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */short) var_10);
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((17943553609273717285ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (arr_13 [i_0] [i_0] [i_1] [i_12] [i_1] [i_0]) : (((/* implicit */int) (signed char)-46))))) : (min((((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_1] [i_6] [i_12]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (503190464435834330ULL)))))));
                    }
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        arr_44 [i_0] [i_1] [i_6] [i_13] [i_13] = ((/* implicit */short) arr_33 [i_0] [i_1] [i_1] [i_0] [i_13]);
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18))))))))));
                    }
                    arr_45 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_38 [i_0] [i_1] [i_6] [i_1]))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                }
                arr_46 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) (short)-30927)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 3) 
        {
            for (short i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                {
                    var_29 = ((/* implicit */short) var_3);
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)226)) << (((((/* implicit */int) arr_26 [i_16] [i_16] [i_16] [i_15 - 1] [i_14] [i_14])) - (26409))))))));
                    var_31 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((((/* implicit */int) (signed char)-23)) > (((/* implicit */int) (_Bool)1))))))))));
                    arr_54 [i_14] [i_15 - 1] [i_14] = ((/* implicit */short) arr_53 [i_14] [i_14] [i_16] [i_15 - 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        for (short i_18 = 1; i_18 < 11; i_18 += 3) 
                        {
                            {
                                arr_61 [i_18 - 1] [i_14] [i_16] [i_16] [i_15 - 1] [i_14] [i_14] = ((/* implicit */int) arr_22 [i_14] [i_18 + 1] [i_16] [i_17] [i_18 + 1]);
                                var_32 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (arr_15 [i_18 + 1] [i_17] [i_16] [(short)18] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_14] [(short)14] [i_15 + 1] [i_17] [i_17] [i_15 - 1])))))) > (min((min((((/* implicit */unsigned long long int) arr_53 [i_18 - 1] [(short)0] [i_16] [i_17])), (arr_17 [i_14] [i_15 - 1] [i_16] [i_18 + 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
