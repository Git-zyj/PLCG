/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166879
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
    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) max((((int) var_0)), (((/* implicit */int) max((var_1), (var_1))))))) && (((/* implicit */_Bool) max((var_1), (((/* implicit */short) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) var_1);
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((arr_3 [i_4 - 1] [i_4] [(unsigned char)21]) > (((/* implicit */int) ((var_9) >= (((/* implicit */int) var_11))))))))));
                        }
                        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [9ULL] [i_0] [(signed char)3] [i_2])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0 - 3] [i_1] [i_0] [11] [i_1]))))) <= (((unsigned int) (unsigned short)65535))));
                        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */unsigned long long int) 586251255)) : (18446744073709551613ULL))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_0]) + (arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))) + (((/* implicit */long long int) max((arr_4 [i_0 - 3] [i_0]), (arr_4 [i_0 + 2] [i_0]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((int) var_9)) >> (((((arr_0 [10U]) & (var_0))) - (102760465U))))) << (((((/* implicit */int) max((arr_16 [i_5 - 2] [i_5 - 2] [i_2] [i_5 - 3]), (arr_16 [i_5 - 1] [i_1] [i_5 - 1] [i_5 + 1])))) - (247))))))));
                        var_18 = ((/* implicit */signed char) max((arr_10 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */long long int) max(((~(var_8))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_0 [i_0])))))))));
                        var_19 = max((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_2] [i_5])) >> (((((/* implicit */int) var_2)) - (7768)))))))), (((2U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        var_20 = ((/* implicit */unsigned long long int) arr_14 [i_0 + 2] [i_1] [i_2] [i_5 - 3] [i_2]);
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [1] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_20 [i_0]) | (arr_20 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0 - 3] [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 1]))))) : ((+(arr_20 [i_0])))));
                        var_21 = arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0];
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        for (short i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_22 = ((((/* implicit */int) var_7)) < (((int) ((var_8) << (((/* implicit */int) var_7))))));
                                var_23 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_6)))))));
                                var_24 = ((/* implicit */unsigned int) ((arr_17 [i_0] [i_0] [i_0] [(unsigned char)6] [i_7 - 1] [i_8]) + (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) var_6))))))));
                                var_25 = ((/* implicit */_Bool) ((min((arr_17 [i_8] [i_7] [i_2] [(unsigned short)12] [(unsigned short)12] [(short)9]), (((/* implicit */long long int) ((arr_6 [i_0] [9U] [(signed char)2]) * (((/* implicit */unsigned int) arr_25 [i_0] [(_Bool)1] [i_0] [i_7] [i_8]))))))) / (((((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_0] [i_0] [i_0 - 1] [(unsigned char)15] [i_0] [(signed char)22]), (((/* implicit */signed char) var_7)))))) + (arr_17 [(unsigned char)0] [i_0 - 2] [(unsigned char)5] [2] [(short)16] [i_0 - 2])))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_25 [i_7] [i_1] [i_0] [i_7] [i_8])) < (max((arr_20 [i_0]), (((/* implicit */long long int) ((signed char) var_11)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] [i_0]))));
                    var_28 = ((unsigned long long int) ((unsigned char) var_5));
                    arr_32 [i_0] [i_1] [i_9] = ((/* implicit */unsigned char) ((var_8) * (arr_6 [i_0] [i_0 - 1] [i_0 - 3])));
                    arr_33 [i_0] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0]))));
                }
                for (unsigned int i_10 = 2; i_10 < 23; i_10 += 4) 
                {
                    var_29 = ((((arr_30 [i_0 - 3] [i_10 - 2] [i_10 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [12U] [i_10 + 1] [i_0 + 2]))))) | (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_0 - 1] [i_0]), (arr_3 [i_0] [i_0 + 1] [i_0 + 1])))));
                    var_30 = ((/* implicit */unsigned char) max((max((586251276), (((/* implicit */int) ((-586251281) >= (((/* implicit */int) (unsigned char)188))))))), (((/* implicit */int) (short)2047))));
                    var_31 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_5)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_10] [i_10] [i_0] [i_0])))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [(unsigned char)19] [i_0] [i_0 - 1] [i_0])) == (((unsigned long long int) (+(((/* implicit */int) var_4)))))));
                }
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))) >= (((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_10)))))))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_1)), (var_2)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_34 [i_0]))))));
                    var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)21] [i_0 - 3] [i_0 + 2] [i_0 + 1]))) * (arr_6 [i_0] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) arr_39 [i_1] [i_1] [i_1] [i_12] [i_1]);
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [13ULL]))) : (var_8))), (arr_0 [i_0])))) == (((((((/* implicit */unsigned long long int) var_3)) * (arr_30 [i_0] [i_0 - 2] [i_0 - 3]))) >> (((var_9) - (951778557)))))));
                                var_37 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (((+(arr_21 [15] [i_0] [(signed char)17] [(short)5] [i_0] [i_0]))) != (max((((/* implicit */unsigned int) arr_12 [i_13] [i_12] [i_0] [i_0] [i_1] [i_0 + 1])), (var_8)))))), (((unsigned short) var_2))));
                                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_2))))) * (min((var_0), (((/* implicit */unsigned int) var_9))))))) % (((unsigned long long int) max((var_9), (((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                }
                arr_45 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (!(((((/* implicit */unsigned int) arr_25 [i_1] [i_1] [i_0] [i_1] [i_1])) <= (var_10))))));
            }
        } 
    } 
}
