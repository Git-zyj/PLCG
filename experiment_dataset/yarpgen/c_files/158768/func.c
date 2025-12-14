/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158768
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
    var_14 += ((/* implicit */_Bool) min((((((/* implicit */int) var_9)) * ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [8LL] = ((/* implicit */unsigned int) var_10);
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0 - 2] [i_0]) / (((/* implicit */unsigned long long int) var_10))))) ? (arr_0 [i_0 - 1] [i_0 - 2]) : (arr_0 [i_0 - 3] [i_0 + 1]));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1] [i_0 - 2])) / (((/* implicit */int) arr_5 [i_2 + 1] [i_0 + 1]))))) ? (((/* implicit */int) max((arr_5 [i_2 + 1] [i_0 - 1]), (arr_5 [i_2 + 3] [i_0 - 2])))) : (((((/* implicit */int) arr_5 [i_2 + 1] [i_0 + 1])) / (((/* implicit */int) arr_5 [i_2 + 1] [i_0 + 1]))))));
                /* LoopSeq 3 */
                for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    arr_11 [i_0 - 2] [i_1] [i_2 + 1] [i_1] [i_0 - 2] = ((/* implicit */signed char) ((((-8262617499976684800LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_1]))))) | (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)27556), (((/* implicit */unsigned short) (_Bool)1))))))));
                    var_15 = ((/* implicit */_Bool) max((arr_9 [i_1] [i_2 - 1] [i_2] [(short)1] [i_0 - 2] [i_2]), (((/* implicit */unsigned int) arr_4 [i_0] [(_Bool)1] [i_3 + 1]))));
                }
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0 + 1] [(_Bool)1] [i_2] [i_4] [i_4] [i_4]))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))))));
                    arr_15 [5U] [5U] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_2]))) & ((~(((((/* implicit */_Bool) arr_12 [0LL] [0LL] [i_2] [i_4] [i_4] [i_2 + 3])) ? (arr_9 [i_4] [i_1] [i_2 + 1] [i_4] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1] [(_Bool)1])))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(signed char)2] [i_1] [i_2 + 1] [i_0 - 2]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [6] [6] [i_2 - 1] [i_0 - 2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        arr_18 [i_0] [(_Bool)1] [i_2] [i_2] [i_5 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_9)))) << (((arr_9 [i_0 + 1] [i_1] [i_2] [i_0 - 1] [i_0 - 1] [i_0]) - (61235698U)))));
                        arr_19 [i_5] [8U] [i_1] [i_1] [i_0 - 2] = ((/* implicit */signed char) var_7);
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_1] [i_5 + 2] [i_1] [(short)1])) ? (((/* implicit */int) arr_13 [i_2 - 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_13 [i_2 + 2] [(_Bool)1] [i_5 + 3] [(short)6] [i_0])))))));
                        arr_20 [i_0] [1ULL] [i_4] [i_5] = ((/* implicit */unsigned char) var_10);
                        var_19 = ((_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_11))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_0 - 2] [i_6] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)10)) : (((((/* implicit */_Bool) arr_5 [i_1] [i_6])) ? (((/* implicit */int) arr_23 [i_0] [6U] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_22 [i_2 - 1] [i_0 - 3] [i_0 - 3])))))))));
                    arr_24 [(short)3] [(short)3] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_2 + 2] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0 - 2] [i_6] [i_2 + 3] [i_6] [i_2] [i_0 + 1]))));
                }
                arr_25 [i_2 + 3] [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_4 [i_2 + 1] [(_Bool)1] [i_2]) ? (((/* implicit */int) var_5)) : (var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2 + 3] [i_2 - 1] [i_1] [i_2] [i_2]))) : (((long long int) arr_1 [i_2 + 2] [i_1]))));
            }
            /* LoopSeq 4 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_30 [i_0] [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) arr_16 [i_0] [i_1])), ((unsigned short)15))), (((/* implicit */unsigned short) min((arr_23 [(signed char)4] [(signed char)4] [(signed char)4] [(signed char)4]), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_7] [i_7] [i_7 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_7] [(_Bool)1] [i_0 - 3])))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_27 [i_0]))))) ? (((arr_7 [9U]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (signed char)-64))))));
                arr_31 [i_0] [i_0 - 3] = ((/* implicit */unsigned short) var_5);
            }
            for (signed char i_8 = 2; i_8 < 7; i_8 += 2) 
            {
                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_8 - 2] [i_0 + 1])) ? (arr_0 [i_8 + 1] [i_0 - 2]) : (arr_0 [i_8 - 1] [i_0 - 2]))), (((/* implicit */unsigned long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_8]))))))));
                arr_35 [i_0] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_16 [i_0 - 3] [i_0 - 3]))))) ? (((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) max((arr_16 [i_0 + 1] [i_0 - 3]), (arr_16 [i_0 + 1] [i_0 + 1]))))));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) arr_37 [i_0 + 1] [i_9] [i_1] [i_9]);
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 2; i_11 < 7; i_11 += 3) 
                    {
                        arr_43 [i_1] [i_1] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) arr_28 [i_0 + 1] [(_Bool)1] [i_0 + 1]);
                        var_22 ^= (~(((/* implicit */int) arr_27 [i_0 + 1])));
                    }
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_1))));
                    var_24 = arr_27 [i_10];
                    arr_44 [i_0] [i_1] [i_9] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1]))) < (arr_14 [i_0] [i_1] [i_9] [i_10] [i_0 - 2])));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_49 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_39 [i_0 + 1])) : (((/* implicit */int) arr_39 [i_0 - 3]))))), (4294836224U)));
                arr_50 [i_0 - 1] [i_0] [i_1] [i_0 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_1] [i_1] [i_0] [i_0 - 1] [i_1])) / (((/* implicit */int) arr_7 [i_1]))))), (((var_7) + (var_0)))))) ? (((((/* implicit */_Bool) -1917157158)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) 131072U))))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_9))))) ? (((/* implicit */int) ((signed char) arr_47 [i_1] [i_1] [i_12]))) : (((((/* implicit */int) arr_27 [i_0])) - (((/* implicit */int) arr_42 [i_0 - 2] [i_0] [i_1] [i_1] [i_12] [i_12]))))))));
                arr_51 [i_0] [(short)2] [i_0 - 3] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_1 [i_0 + 1] [i_12]), (arr_1 [i_0 + 1] [i_1])))) << (((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1] [i_1])), (arr_23 [i_1] [i_1] [i_1] [i_0])))) - (73)))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8064)) ? (((((/* implicit */_Bool) 1917157158)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_12] [i_12])))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_12]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_12])) : (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_42 [i_0] [(short)2] [i_12] [i_1] [i_0] [i_12]))))))));
            }
        }
    }
    var_26 = ((/* implicit */signed char) var_13);
}
