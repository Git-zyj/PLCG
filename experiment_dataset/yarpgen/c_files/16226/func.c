/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16226
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
    for (int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((unsigned int) min((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3])), (arr_8 [i_0] [i_1])))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0 - 1]) ? (((arr_1 [i_0 + 4]) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 4]))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_3)), (arr_8 [i_3] [i_0 - 1]))) * (((arr_8 [i_3] [i_0 + 4]) * (arr_8 [i_3] [i_0 + 2]))))))));
                        var_16 = ((/* implicit */long long int) min((arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0 + 3] [i_0 + 1] [i_0 + 2]), (((/* implicit */short) ((((/* implicit */int) (unsigned char)96)) <= (((/* implicit */int) arr_10 [i_0 + 3] [i_0 - 1] [i_0 + 4] [i_0] [i_0] [i_0 + 3])))))));
                        var_17 = min((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0]), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_0])));
                    }
                    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) : (12U)));
                        arr_17 [i_0] [i_0] [i_2] [i_4] [i_1] = ((/* implicit */long long int) (unsigned char)22);
                        arr_18 [i_0 + 2] [i_0] [i_0] [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 2] [i_0 + 4] [i_0 + 1])) ^ (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 3] [i_0 + 1] [i_0 + 3])) ^ (((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) arr_13 [i_4 + 3] [i_4 - 2] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0 + 3] [i_0 - 1] [i_4 - 1] [i_4] [i_1])) : (((/* implicit */int) var_6)))));
                        arr_19 [i_0] = ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 3] [i_0 + 2] [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned char) var_10))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_5]);
                        arr_23 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 2] [i_0])))))) % (var_10)));
                    }
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    var_18 += ((/* implicit */short) min(((-(((/* implicit */int) var_13)))), ((-(((/* implicit */int) (unsigned short)32768))))));
                }
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((arr_11 [i_0 + 4] [i_0 + 3] [i_0 + 4] [i_0 + 2] [i_0 + 4]), (((/* implicit */unsigned char) (signed char)3))))) : (((/* implicit */int) (_Bool)0))));
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_20 += ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32766)) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 - 1])))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_4))));
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */short) (unsigned char)26);
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_0 + 3] [i_0] [i_6] [i_0]))))), (max((4U), (((/* implicit */unsigned int) var_2))))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_12)))), (arr_27 [i_0] [i_0] [i_1] [i_6])))));
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_34 [i_0 + 2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)244), ((unsigned char)14)))) ? (max((max((var_10), (((/* implicit */unsigned long long int) (signed char)101)))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (~(arr_8 [i_0] [i_0 + 2]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), ((-(((/* implicit */int) ((arr_8 [i_8] [i_9 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                            arr_38 [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) ((arr_31 [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 2] [i_0]) & (arr_31 [i_9] [i_7] [i_7] [i_1] [i_0 - 1])));
                            var_24 = ((/* implicit */unsigned short) var_8);
                        }
                        /* vectorizable */
                        for (long long int i_10 = 1; i_10 < 7; i_10 += 4) 
                        {
                            var_25 *= ((/* implicit */unsigned char) arr_15 [i_0 + 2] [i_1] [i_8] [i_8] [i_10 - 1]);
                            arr_42 [i_8] &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (22U))));
                            arr_43 [i_10] [i_8] [i_0] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_36 [i_8] [i_7] [i_7] [i_0] [i_8] [i_0] [i_1])));
                        }
                        var_26 = ((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) (unsigned short)32768)))) * (((/* implicit */int) ((unsigned char) arr_14 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_0 - 1])))));
                        arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((arr_26 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 + 4] [i_1] [i_7] [i_0]))) / (var_1)))))) : (((long long int) (!(((/* implicit */_Bool) var_1))))));
                    }
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    arr_47 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned long long int) ((arr_30 [i_0 + 4] [i_0 + 3] [i_11]) == (arr_30 [i_0 - 1] [i_0 + 1] [i_11])));
                    arr_48 [i_11] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0 + 4]))) : (var_12)));
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    arr_52 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) var_4);
                                var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), ((~(arr_41 [i_14] [i_13 - 1] [i_12] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0 + 3] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) (unsigned char)26)))) - (((/* implicit */int) arr_20 [i_0 + 2] [(short)6] [i_0]))));
                }
            }
        } 
    } 
    var_30 = (unsigned char)228;
}
