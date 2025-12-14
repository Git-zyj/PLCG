/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187603
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((var_6) | (var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_16 &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (var_3))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_2] [i_1] [i_0])))))));
                    arr_9 [i_0] [i_1] [i_2] [5ULL] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_2])))) + (((/* implicit */int) arr_2 [i_1]))));
                    var_17 -= max(((-(((/* implicit */int) arr_1 [i_0] [i_1])))), (max(((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (((/* implicit */int) var_12)))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    arr_12 [i_3] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    /* LoopSeq 4 */
                    for (signed char i_4 = 3; i_4 < 22; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) var_13);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_3])) : (((/* implicit */int) arr_14 [i_0] [i_5] [i_5]))))) ? (max((((/* implicit */int) arr_2 [i_5])), (var_8))) : (((arr_7 [i_0] [i_1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_1] [i_5]))))));
                            arr_18 [(unsigned short)12] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) ^ (var_6)))));
                            var_20 = ((/* implicit */unsigned char) var_6);
                            var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [(unsigned char)11] [i_5]))));
                            arr_19 [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4 - 3] [i_4] [i_4] [i_4] [i_4] [i_4 - 3] [i_4 - 3])) ? (arr_15 [i_5] [i_5] [i_4] [i_5] [i_4] [i_4] [i_4 - 3]) : (arr_15 [i_5] [2] [i_4] [i_5] [i_4] [i_5] [i_4 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) - (((/* implicit */int) ((unsigned char) var_13)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (((arr_11 [i_1] [i_1] [i_0]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_0] [i_0])))))))));
                        }
                        var_22 = ((/* implicit */short) var_12);
                        var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        var_24 = ((/* implicit */int) ((((var_13) ^ (((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13))))) * (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) | ((+(var_6)))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        arr_24 [i_6] [i_6] [i_3] [i_3] [i_0] [i_0] |= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_2 [i_0]))))));
                        var_25 = ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_20 [i_0] [i_1] [i_3] [i_3] [i_3] [i_6 + 1])), (var_8)))), (min((var_13), (((/* implicit */unsigned int) var_0)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_1] [i_7] [(unsigned char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            arr_32 [i_0] [i_8] [i_3] [i_7] [i_8 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_3] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : ((-(var_3)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            arr_37 [i_0] [i_1] [i_3] [i_7] [i_9] [i_1] [i_9] = ((/* implicit */unsigned int) var_10);
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_3] [i_7]))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_1] [i_1] [i_7] [7ULL]))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            arr_41 [i_3] [(_Bool)1] [i_3] [i_1] [i_0] = ((((/* implicit */_Bool) arr_17 [i_0] [i_10] [i_3] [i_7] [i_10] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_7] [i_0] [i_3] [i_1] [i_0]))) : (var_5));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_10] [i_1])) * (((/* implicit */int) arr_7 [i_0] [i_10])))))));
                            var_28 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_36 [i_0] [i_1] [i_3] [i_7])) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_30 += ((/* implicit */signed char) var_1);
                        arr_44 [i_0] [(short)7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_3] [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_0] [(unsigned char)5] [i_3] [i_11])) ? (((/* implicit */int) arr_36 [(unsigned short)17] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_36 [(signed char)18] [i_1] [i_3] [i_11]))))) : (((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [7] [7] [i_11])))))));
                        arr_45 [i_0] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_5 [i_0] [(short)1] [(_Bool)1]))) | (((/* implicit */unsigned int) var_14)))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_1))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_12 = 3; i_12 < 22; i_12 += 2) 
                    {
                        var_32 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_3] [i_12 - 2] [(unsigned char)16] [i_1] [i_12 - 3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_12 + 1] [i_12] [i_12] [i_12 - 3] [(unsigned short)1] [i_12]))) : (min((((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_12 - 1] [i_0] [(_Bool)1])), (var_8)))), (((arr_25 [i_12]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_1])))))))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) min((min((((arr_30 [i_12] [i_12] [i_12] [i_0] [6] [i_12] [i_12 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_5 [i_1] [(unsigned short)3] [i_12])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_0] [i_0] [i_12 - 1] [i_12 - 3] [i_12 - 1])) ? (((/* implicit */unsigned int) arr_15 [i_12] [i_12] [i_0] [i_12 - 2] [i_12] [i_12 - 3] [i_12])) : (max((((/* implicit */unsigned int) var_0)), (var_5)))))))))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_20 [i_12 - 3] [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12]), (arr_40 [i_12 - 1] [i_12 - 3] [i_12] [i_12] [i_12 - 1] [i_12] [i_12])))))))));
                        var_35 = ((/* implicit */int) var_2);
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_12 + 1] [i_3]))))) ? ((~(((/* implicit */int) arr_4 [(short)1] [i_12 - 1] [i_3])))) : (((((/* implicit */int) arr_4 [i_0] [i_12 + 1] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_12 - 3] [i_3]))))));
                    }
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_1] [i_3]))))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : ((-(((/* implicit */int) var_0))))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_50 [12ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) ^ (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))))));
                        var_38 = ((/* implicit */short) max((((arr_7 [i_1] [i_13]) ? (((/* implicit */int) arr_7 [i_3] [i_13])) : (((/* implicit */int) arr_7 [i_0] [i_0])))), (min(((-(((/* implicit */int) arr_28 [i_13] [i_13] [i_3] [i_13])))), (((((/* implicit */_Bool) arr_6 [(unsigned short)10] [i_0] [i_0])) ? (var_8) : (((/* implicit */int) arr_6 [(unsigned short)0] [i_13] [i_3]))))))));
                        var_39 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_9)))));
                        var_40 *= ((/* implicit */unsigned int) (((+(arr_23 [i_0] [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_23 [i_1] [i_13]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_41 += ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_1])) ? (arr_23 [i_0] [i_1]) : (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_0] [i_14] [i_0] [i_0] [i_0]))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [11U] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_23 [i_3] [i_14])));
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)14] [i_0] [i_3] [i_3] [(signed char)20] [i_14])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] [i_0])))))));
                        var_44 |= ((/* implicit */_Bool) ((arr_20 [i_0] [i_0] [(unsigned short)7] [(unsigned short)10] [i_14] [i_14]) ? (((((/* implicit */int) var_11)) * (var_7))) : (((/* implicit */int) arr_4 [i_1] [0U] [i_14]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_0] [i_0] [i_3] [i_14] [i_3])) % (((/* implicit */int) arr_47 [i_15] [i_15] [i_3] [i_15] [i_0]))));
                            arr_55 [i_0] [i_1] [i_0] [i_14] [i_15] [i_15] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_11 [i_14] [i_3] [i_0]))));
                            var_46 = ((/* implicit */unsigned int) arr_10 [i_3] [i_15]);
                        }
                    }
                }
            }
        } 
    } 
}
