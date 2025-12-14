/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16996
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
    var_16 &= ((/* implicit */unsigned char) min(((+(((/* implicit */int) min((var_4), (var_6)))))), (((/* implicit */int) var_4))));
    var_17 &= ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (2493471602U))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) min(((-(min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    arr_8 [i_0] [13] [13] [i_1] = ((/* implicit */_Bool) 4294967274U);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        arr_11 [(short)1] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1801495691U)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned char)240)))) >> (((arr_4 [i_2 + 1] [i_0 + 1]) - (879951500U)))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            arr_16 [i_2] [i_4] = ((/* implicit */unsigned short) 226884403U);
                            arr_17 [1U] [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_0] [i_2 + 2] [i_2] [4ULL] [i_0 - 1] [i_3 + 1]))));
                            arr_18 [i_0] [(short)5] [(short)5] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_3 - 1]))) ? (-1043109803842407973LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [2] [i_1] [i_2] [i_2] [i_4] [i_1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_1] [i_4])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43812))) - (4079681239616378579LL)))));
                            arr_23 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_3 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_14 [i_0] [i_3 - 1] [i_2])) : (((/* implicit */int) arr_14 [i_0] [i_3 + 1] [i_0]))));
                        }
                    }
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) var_11);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2]))) : (((var_5) | (var_0)))));
                    var_21 += ((/* implicit */unsigned short) arr_24 [i_0]);
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 2] [i_0 - 1]))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_1] [i_7])) & (var_0)));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_4 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [i_7] [i_8])))))) >> (((((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (879951498U)))));
                        arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                    }
                    arr_33 [(unsigned short)0] [i_1] [(_Bool)1] = ((/* implicit */long long int) var_5);
                }
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            {
                                arr_43 [(unsigned char)6] [3] [i_1] [(unsigned char)8] [i_1] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 1])) == (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 1])) ? (arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) : (arr_28 [i_0 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2])))));
                                var_24 += ((/* implicit */unsigned int) max((min((6265384084115977212LL), (((/* implicit */long long int) (unsigned char)60)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (short)3968)) : (((/* implicit */int) (unsigned char)242)))))));
                                arr_44 [i_0] [i_0] [i_11] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)21723)) ? (((((/* implicit */_Bool) (unsigned char)227)) ? (1801495702U) : (233442276U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)41669))))))));
                                arr_45 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_10] [(unsigned short)13] [i_10] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_0 [5]))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) (~(-1043109803842407997LL)));
                }
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned char)243))));
            }
        } 
    } 
}
