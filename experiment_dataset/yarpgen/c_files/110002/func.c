/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110002
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
    var_14 &= ((((/* implicit */int) var_9)) - ((((-(((/* implicit */int) var_1)))) % (((/* implicit */int) ((((/* implicit */int) (short)-16384)) >= (((/* implicit */int) (short)-26854))))))));
    var_15 -= ((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_7)));
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) + (((((/* implicit */_Bool) 12541299328417567099ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) arr_2 [12] [i_1]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 + 2] [i_1 + 3] [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3615236655171991446LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13832)))))))))) : (var_12)));
                                var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                                var_20 = ((/* implicit */_Bool) max((min((arr_2 [i_0 + 2] [i_0]), (((/* implicit */int) arr_3 [i_0 - 2] [i_1 + 2] [i_3 - 1])))), ((~(((/* implicit */int) arr_3 [i_0 + 2] [i_1 - 2] [i_3 + 2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_7 = 3; i_7 < 12; i_7 += 3) 
                            {
                                var_21 -= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) arr_6 [i_5 - 1] [i_5]))))))) * ((-((+(arr_12 [i_0 + 1] [i_1 - 1] [i_5] [i_6] [13LL] [i_5] [i_1 - 1])))))));
                                var_22 ^= ((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_1] [i_5] [i_6] [i_7 - 3] [i_5] [i_6]);
                                var_23 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)62)))) / ((~(min((((/* implicit */int) var_4)), (arr_17 [i_7] [(short)6] [(short)6] [i_1] [i_0])))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned char)143), (((/* implicit */unsigned char) arr_19 [i_5] [i_7] [(unsigned short)9] [i_6 - 1] [i_6] [i_5] [i_5]))))) ? (((((/* implicit */unsigned int) min((arr_17 [(unsigned short)6] [i_1] [i_1] [i_1] [i_1 + 4]), (((/* implicit */int) (unsigned char)119))))) + (((unsigned int) arr_15 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                                arr_20 [i_7] [i_7] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)65534))))));
                            }
                            for (signed char i_8 = 2; i_8 < 12; i_8 += 2) 
                            {
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))), (arr_8 [i_5] [i_5 + 1] [i_5] [i_5] [i_6])))) && ((!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_3)))))))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_8 [i_1 - 1] [i_1 - 4] [i_5 - 1] [i_6 - 2] [i_6 - 1]) / (((/* implicit */int) arr_7 [i_0 + 2] [i_6 + 1]))))) * (((((arr_22 [i_8] [i_0] [i_5 + 1] [i_1 + 4] [i_1] [i_0] [i_0]) ? (arr_14 [i_0] [i_5] [i_6] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) arr_1 [(unsigned char)11] [i_1])))))))));
                            }
                            var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)-7094)) && (((/* implicit */_Bool) (-(var_12))))))), (((((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_5] [i_6])) % (arr_8 [(unsigned short)8] [i_1 - 3] [i_5] [i_1 + 1] [i_5 + 1]))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17142))) <= (var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    for (int i_10 = 4; i_10 < 13; i_10 += 3) 
                    {
                        for (signed char i_11 = 2; i_11 < 11; i_11 += 1) 
                        {
                            {
                                arr_34 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (min((((arr_9 [i_0] [i_0] [i_9] [i_9] [i_11] [i_9]) - (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_9 [(unsigned char)4] [i_11] [i_10] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_32 [i_11] [i_10] [(short)11] [i_1 - 2] [i_1] [i_10] [i_0])))))) : ((-(((arr_17 [i_0] [i_0 + 1] [(unsigned char)1] [i_0 + 1] [i_0]) / (((/* implicit */int) var_6))))))));
                                var_28 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) ((arr_29 [i_11] [i_10] [(short)10] [i_1] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 2] [(_Bool)1] [i_0 + 1]))) ^ (-3615236655171991447LL))), ((~(arr_29 [i_0] [i_10] [(short)2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_17 [(short)3] [i_0] [i_0] [i_0 - 2] [i_0 - 2]))) ? (((((arr_17 [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1]) + (2147483647))) << (((((arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1]) + (1253644638))) - (9))))) : (((arr_17 [i_0] [i_0 + 2] [i_0] [i_0 - 2] [i_0 - 1]) % (((/* implicit */int) var_11))))));
                    var_30 |= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [i_1 - 4] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) + ((+(arr_4 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((arr_36 [i_0 - 1]) * (((/* implicit */unsigned int) (-(arr_9 [i_0] [i_0] [i_1] [6ULL] [i_12] [i_12])))))))));
                }
                for (short i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    var_31 += ((/* implicit */unsigned char) min(((unsigned short)65534), (((/* implicit */unsigned short) (unsigned char)164))));
                    arr_41 [i_0] = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_13] [i_13] [i_13 + 1] [i_1 - 4])) : (((/* implicit */int) (unsigned char)231)))) | (((/* implicit */int) ((signed char) -16))))), (((((/* implicit */_Bool) arr_28 [i_13 + 1] [(unsigned short)12] [i_13])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_13] [0] [i_1 + 1] [i_0] [i_13 + 1] [5ULL])) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_7))))))));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 4; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) arr_1 [i_14] [i_1]))))));
                                var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_10 [7ULL] [i_13 - 1] [7ULL] [i_13 - 1] [(short)7] [i_1] [i_0 + 2])), (var_7)));
                            }
                        } 
                    } 
                }
                for (int i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) (-(arr_36 [i_1])));
                    arr_51 [i_1 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_38 [i_0 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_21 [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((arr_36 [i_1 + 4]) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65534)) | (((/* implicit */int) var_6)))))))) : (min((((((/* implicit */_Bool) arr_36 [i_16])) ? (arr_14 [i_0] [3] [i_0] [i_0]) : (arr_44 [i_16] [i_1 - 2] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_16] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_35 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((var_7) + (6987075307590695517LL)))))) ? (((/* implicit */int) arr_40 [(short)4] [i_16] [i_16] [i_16])) : (((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) var_9)))))))));
                }
            }
        } 
    } 
}
