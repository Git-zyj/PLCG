/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172150
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_1 - 2] [i_1 + 1]), (arr_1 [i_1 - 2] [i_1 + 1])))) : (((unsigned long long int) var_11))));
                arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (unsigned short)15124)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-23895)))) & (((/* implicit */int) arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) 374282244U)) ? ((+(((/* implicit */int) (unsigned char)116)))) : (((((/* implicit */int) (unsigned char)99)) >> (((((/* implicit */int) arr_0 [i_1])) - (92)))))))));
                arr_7 [(short)10] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)99)) ^ (((/* implicit */int) ((unsigned char) var_3)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
                            {
                                arr_16 [(signed char)16] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_1 - 2])) ? (arr_1 [i_2 + 2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2 + 2] [i_2 + 2] [i_3] [5U]))))) : (3972199405U)));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((((/* implicit */int) var_9)) * (((/* implicit */int) var_12)))), ((~(((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_1 - 1])))))))));
                                var_16 = ((/* implicit */unsigned int) var_1);
                                arr_17 [i_2] [7ULL] [i_2 + 2] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-12636)) | (((/* implicit */int) arr_3 [i_3])))))))));
                                arr_18 [i_3] [i_3] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) << (((((/* implicit */int) arr_8 [i_2])) - (19021)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [(short)16] [i_4] [i_4] [i_4] [i_2])), (var_0)))) ? (arr_13 [i_1 - 1] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))) : (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) << (((((((/* implicit */int) arr_8 [i_2])) - (19021))) + (11635)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [(short)16] [i_4] [i_4] [i_4] [i_2])), (var_0)))) ? (arr_13 [i_1 - 1] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_23 [i_2] = ((((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2 + 3] [i_2 + 2])) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2])))));
                                arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2 + 4] [i_2 + 4])) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2 + 1])))) - (((/* implicit */int) (unsigned char)84))));
                                var_17 *= ((/* implicit */short) 5865404372577368523LL);
                                var_18 = ((/* implicit */signed char) (+(((arr_19 [i_1 - 2]) / (((/* implicit */unsigned int) (-(var_11))))))));
                            }
                            for (short i_6 = 4; i_6 < 22; i_6 += 4) 
                            {
                                arr_27 [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_7) ^ (arr_1 [i_0] [i_1]))), (max((var_6), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(unsigned short)10] [i_3] [i_6]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 4] [i_6 - 4]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] [i_2])) ? (arr_21 [i_0] [22U] [i_3] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2 + 3] [i_1] [i_2])))))) - (max((18446744073709551586ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_3] [i_0] [i_2]))))))));
                                arr_28 [i_2] [i_2] [(unsigned char)18] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_3))))));
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) : (arr_21 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]))) % (((((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])) ? (arr_21 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]) : (arr_21 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 2])))));
                            }
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_1 - 1])) > (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */long long int) var_6)) : (var_4)))))), ((-(((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) arr_15 [i_7] [i_7] [(unsigned short)17] [i_7] [i_7]);
        var_22 = ((/* implicit */int) var_2);
    }
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8 - 2] [i_8 - 1] [i_8] [(_Bool)1] [i_8 + 3] [i_8 + 3] [i_8 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_26 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    arr_45 [i_8 + 3] [i_9] [i_10 + 1] [i_11] [i_9] &= ((/* implicit */unsigned int) var_4);
                    var_24 = (!(((/* implicit */_Bool) arr_14 [i_8] [i_10 - 1] [i_8])));
                    arr_46 [(short)5] [i_10] [i_8] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12621)))));
                    arr_47 [i_10] [i_10] [i_8] [i_10 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_8 - 1] [i_9 + 1]))));
                }
                arr_48 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_8] [i_10 - 1] [i_10])) ? (((/* implicit */int) arr_38 [i_8] [i_10 + 2] [i_10 + 2])) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_10]))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    arr_55 [i_8] [i_9] [i_12 + 2] [i_12] [i_8] = ((/* implicit */_Bool) 258048U);
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_9 - 1] [i_8] [i_9 - 2] [i_9 - 1])) && (((/* implicit */_Bool) arr_20 [i_9] [i_8] [i_9] [i_9] [i_9] [i_9 - 1]))));
                        arr_58 [i_14] [i_14] [i_8] [5U] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_8])) <= (((/* implicit */int) var_1))));
                        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_8]))));
                        arr_59 [i_9] [i_9] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) arr_13 [i_14] [i_12 + 2] [i_8 + 1]);
                        arr_60 [i_13] [i_13] [i_13] [i_13] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_9 - 1] [i_9] [i_12 - 1] [i_13] [i_8])) : (((/* implicit */int) var_0))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_15 - 1] [i_15] [i_12 + 1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_50 [i_15 - 1] [i_9] [i_12 - 1] [i_13])));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12] [(unsigned char)10])))));
                        var_29 *= ((/* implicit */signed char) (~(((arr_53 [8] [i_8 + 3] [i_9 + 1] [i_8 + 3]) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    }
                    var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_13] [i_13])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_61 [i_13] [i_12] [i_12] [i_9] [i_8]))));
                    arr_64 [i_8] [i_8] [i_8] [i_12 - 1] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) arr_54 [i_8] [i_9] [i_12 - 1] [i_13])))))));
                    var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_12 - 1] [i_13] [i_8 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_51 [i_12 + 2] [i_13] [i_8 + 2]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        {
                            var_32 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_8 + 2] [i_17] [i_12])) * (var_11))) ^ (((/* implicit */int) arr_51 [i_8] [i_17] [i_8]))));
                            arr_69 [i_16] [i_9 + 1] [i_12] [i_12] [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)36977)) || (((/* implicit */_Bool) -2047506527))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_8 - 1] [i_9 - 1] [i_8] [i_9 - 1] [i_12 + 1])) | (((/* implicit */int) arr_22 [i_8] [i_12] [i_12] [i_12] [i_12 - 1])))))));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [19U] [i_8] [i_8 + 2] [i_8])) || (((/* implicit */_Bool) arr_36 [i_8 - 1] [i_8]))));
                    arr_73 [i_8] [i_12] [(unsigned short)2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_72 [i_8] [i_8] [i_9 + 1] [i_9] [i_12]))));
                    arr_74 [i_8 - 2] [i_8] [i_12] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_12 + 2] [i_9 - 2] [i_8 - 2] [i_8 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (var_5)));
                }
            }
            var_35 = ((/* implicit */int) arr_21 [i_8] [i_9] [i_8] [i_9]);
        }
    }
}
