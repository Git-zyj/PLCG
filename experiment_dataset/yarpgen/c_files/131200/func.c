/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131200
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)116))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((arr_11 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) + (-1618884068)))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        }
                        var_18 = ((/* implicit */long long int) (((~(((/* implicit */int) var_6)))) + ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))))));
                        var_19 = ((/* implicit */unsigned char) ((arr_13 [i_3 - 2] [i_3 - 4] [i_0] [i_3] [i_0] [i_3 - 4] [i_3 - 4]) - (arr_13 [i_3 + 1] [i_3 - 2] [i_0] [i_3] [i_0] [i_3 - 3] [i_3 - 2])));
                    }
                    var_20 = ((/* implicit */int) -863793559984778539LL);
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned short) (+(((arr_11 [i_2]) & (arr_11 [i_2])))));
                        /* LoopSeq 2 */
                        for (int i_6 = 4; i_6 < 21; i_6 += 2) 
                        {
                            var_22 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_19 [i_2] [i_5] [i_2])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_18 [i_5 - 1] [i_6] [i_6 + 1] [i_6] [i_6]) && (arr_18 [i_5 + 1] [i_5] [i_6 - 1] [i_2] [i_5 + 1]))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0)))) : (min((var_11), (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1])))))) + (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 - 1]))) : (-7015578322586997942LL))) + (((/* implicit */long long int) max((-1618884068), (((/* implicit */int) arr_6 [i_5 - 1]))))))))));
                            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_5 - 1] [i_6])) < (((/* implicit */int) arr_7 [(unsigned short)16] [18LL] [(unsigned char)11])))))) : (-7015578322586997942LL)));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_26 = (~(7015578322586997937LL));
                            var_27 -= ((/* implicit */_Bool) -7015578322586997937LL);
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_2]))));
                        }
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((((((/* implicit */int) arr_12 [i_0] [i_5 + 1] [i_2] [i_2] [i_2] [i_1])) * (((/* implicit */int) var_12)))), (min((((/* implicit */int) min((arr_20 [i_1] [i_2] [i_2] [i_1] [(unsigned char)6]), (arr_20 [i_0] [i_2] [i_2] [i_2] [i_2])))), (max((((/* implicit */int) (_Bool)0)), (-1618884068))))))))));
                        var_30 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned char) arr_14 [i_0] [i_2] [i_5]))) ? (((/* implicit */int) min((var_12), (var_12)))) : (((/* implicit */int) arr_20 [i_5 - 1] [i_0] [i_5] [i_5 - 1] [i_5]))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_31 *= ((/* implicit */unsigned short) max((((/* implicit */int) min((((unsigned char) (unsigned char)248)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))))), ((~(((/* implicit */int) var_7))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((max((-7015578322586997937LL), (((/* implicit */long long int) (unsigned char)205)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_25 [i_1]), (((/* implicit */long long int) arr_12 [i_1] [(unsigned char)4] [i_1] [i_1] [i_1] [2ULL]))))) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_8]))))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_18 [i_0] [i_1] [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_34 += ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (unsigned char)75)), (((((/* implicit */_Bool) var_1)) ? (arr_27 [i_10] [i_2] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))) - (((/* implicit */long long int) ((((/* implicit */int) min((var_10), (((/* implicit */signed char) (_Bool)1))))) / (((/* implicit */int) ((unsigned char) arr_22 [i_1] [i_2] [i_1] [i_1]))))))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_12)), (var_3))), (((/* implicit */long long int) arr_6 [i_9]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_25 [i_9])))) ? (((/* implicit */int) var_7)) : (var_15)))))))));
                        }
                        for (long long int i_11 = 4; i_11 < 22; i_11 += 4) 
                        {
                            var_36 = ((/* implicit */long long int) min((arr_23 [i_0] [i_9] [11LL] [i_1] [i_0]), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_11 + 1]), (arr_5 [i_0] [i_2]))))));
                            arr_33 [(unsigned short)2] [(unsigned short)2] [i_0] [i_2] [8ULL] [i_2] &= ((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_11] [i_0] [i_11 - 2] [(unsigned short)6]);
                        }
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            arr_37 [i_0] [i_0] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_1 [i_2])))))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) min((arr_20 [i_0] [i_0] [i_2] [4U] [i_0]), (arr_20 [(unsigned short)11] [i_0] [(unsigned short)11] [21U] [i_12]))));
                            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_2] [i_9] [i_2])), (min((((/* implicit */long long int) (unsigned short)55000)), (7015578322586997941LL)))))) && (((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_0))))));
                            var_38 = ((/* implicit */short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned short) var_7)), (arr_4 [i_0] [i_12] [i_12]))))) << (((max((var_1), (((/* implicit */unsigned int) var_8)))) - (4294967229U)))));
                        }
                    }
                }
            } 
        } 
    }
    var_39 -= var_7;
    var_40 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned int) (short)-1)), (min((((/* implicit */unsigned int) -195720925)), (399196197U)))))));
}
