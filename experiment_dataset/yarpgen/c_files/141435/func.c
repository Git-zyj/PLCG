/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141435
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (var_1) : (((/* implicit */int) arr_6 [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [12] [i_2] [i_3] [i_0] [12] = ((/* implicit */int) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) 14230414887650342688ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13396))))), ((-(5434521157319834419LL)))))));
                                var_12 *= ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                                arr_14 [i_0] [(unsigned char)4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((-(((/* implicit */int) arr_16 [i_6] [i_5])))))), ((~(((/* implicit */int) arr_16 [i_0] [i_5]))))));
                    var_14 *= ((/* implicit */unsigned long long int) 2147483639);
                    arr_20 [i_0] [i_0] [i_6] = (+(var_6));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
    {
        var_15 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_7])))));
        var_16 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_0)))));
        var_17 &= ((/* implicit */long long int) ((_Bool) arr_21 [i_7 + 1]));
    }
    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_29 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_8] [i_9] [i_8] [12ULL] [i_10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_9] [(short)12]))))) : (arr_24 [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((_Bool) (-(((((/* implicit */_Bool) arr_10 [i_8] [i_9] [i_11])) ? (((/* implicit */int) (short)13396)) : (((/* implicit */int) arr_1 [i_8])))))));
                                arr_35 [i_8] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483647)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) -917120461))))) ? (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                                var_19 = ((/* implicit */int) (-((((!(((/* implicit */_Bool) (short)-13381)))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [(signed char)13] [i_9] [i_10] [i_11] [i_12 - 1]))))))));
                            }
                        } 
                    } 
                    arr_36 [i_9] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned int) 2147483647)), (18U)));
                }
            } 
        } 
        arr_37 [i_8] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(arr_12 [i_8])))), (min((arr_10 [i_8] [i_8] [i_8]), (arr_10 [(short)17] [i_8] [i_8])))));
        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_31 [i_8] [i_8] [i_8])) * (((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (arr_27 [i_8] [i_8] [i_8]) : (arr_24 [8] [i_8]))))) : (arr_24 [i_8] [i_8])));
    }
    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        arr_42 [i_13] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5434521157319834419LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -917120458)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13] [i_13] [i_13] [i_13]))) : (18446744073709551615ULL))))))), (3952644975U)));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16U))));
    }
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            {
                var_22 -= ((/* implicit */unsigned char) var_4);
                var_23 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (18446744073709551615ULL))) & (var_7)));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        {
                            arr_54 [i_14] [i_14] [i_16] [i_17] [i_14] = ((/* implicit */unsigned long long int) var_2);
                            /* LoopSeq 2 */
                            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                            {
                                arr_59 [i_14] [i_15] [i_14] [i_17] [i_14] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), ((_Bool)1)));
                                var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_15 + 1] [i_15 + 1] [i_16] [i_17])) - (((/* implicit */int) arr_11 [i_15 + 1] [i_15 + 1] [i_15] [i_16] [i_18 + 1]))))) ? (((((/* implicit */_Bool) ((2147483647) / (((/* implicit */int) arr_52 [i_14] [i_14] [i_16] [i_17] [i_17] [i_17]))))) ? (((/* implicit */int) arr_3 [i_18 + 1] [i_18 + 1] [i_15 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_49 [11] [i_18]))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_47 [i_14] [2U] [i_14])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (4294967295U)))))))));
                            }
                            /* vectorizable */
                            for (int i_19 = 0; i_19 < 21; i_19 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) (-(arr_61 [i_14] [i_14] [i_19]))))));
                                var_27 = ((/* implicit */long long int) arr_57 [i_16] [i_16] [i_16] [i_16] [i_16]);
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16ULL)) || ((_Bool)0)));
                            }
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (signed char)94))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) ((((((arr_4 [i_15]) != (((/* implicit */unsigned int) var_1)))) && (((((/* implicit */int) var_4)) != (var_1))))) ? ((+(((/* implicit */int) ((short) 917120469))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 11740375604352162594ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))))))))));
            }
        } 
    } 
}
