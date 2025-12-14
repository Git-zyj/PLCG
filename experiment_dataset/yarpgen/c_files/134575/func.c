/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134575
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-105), (var_3)))) ^ (var_15)));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0 + 1] [i_1]))) ? (((/* implicit */int) max((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 1] [i_1])))) : (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    var_16 *= ((/* implicit */_Bool) ((arr_5 [(short)11] [i_1] [i_1]) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(unsigned short)2] [i_0 + 1] [i_0 + 1] [(unsigned short)2]))))) : (((arr_2 [i_0 - 1]) << (((((/* implicit */int) var_14)) - (106)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        arr_12 [(unsigned short)11] = ((/* implicit */int) var_7);
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_3])) * (((/* implicit */int) arr_11 [i_3 + 1])))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_15 [i_4] = arr_13 [i_4] [i_4];
        arr_16 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_4] [i_4])))))));
        var_18 = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */short) arr_14 [i_4])), (arr_13 [20LL] [i_4])))), (((int) arr_14 [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            arr_22 [17] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_5] [i_6]))));
            arr_23 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_20 [i_5] [i_6])));
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) >> ((((-(var_1))) + (1911976512)))));
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_8 + 2])) ? (arr_27 [i_7 - 3]) : (var_9)));
            }
            arr_28 [i_7 - 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) >= (arr_18 [i_7 - 1])));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_7 - 3] [i_7 + 2])))))));
        }
        arr_29 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_27 [i_5]) : (arr_27 [i_5])));
    }
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */signed char) arr_32 [i_9] [i_9]);
        var_22 = ((/* implicit */_Bool) arr_30 [16U]);
    }
    var_23 = min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) var_15)), (var_13))));
    /* LoopNest 3 */
    for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12] [i_11] [i_10 + 2]))) : (arr_6 [i_10] [i_10] [10LL]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_10 + 2] [i_11] [i_11])) ? (((/* implicit */int) arr_41 [i_11] [i_11] [i_10 - 1])) : (((/* implicit */int) arr_41 [i_12] [i_11] [i_10]))))))))));
                    arr_43 [i_10 - 1] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10 - 1])) ? (arr_24 [i_10 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? ((-(var_0))) : (((/* implicit */long long int) ((var_1) / (var_1))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_13 = 2; i_13 < 10; i_13 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), ((_Bool)1)));
                        var_26 ^= ((/* implicit */unsigned char) arr_32 [i_10 - 3] [i_10 - 3]);
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_10 + 1])) ? (arr_39 [i_10 - 1]) : (var_0)));
                    }
                    /* vectorizable */
                    for (short i_14 = 4; i_14 < 13; i_14 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_14] [i_10 + 1] [i_10] [i_14]))) | (arr_17 [i_14 - 4]))))));
                            arr_50 [i_10] [i_11] [i_12] [i_10] [i_14] [i_15] = ((/* implicit */long long int) (-(((int) arr_4 [i_14] [i_14]))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
                        {
                            arr_54 [i_10] [i_10] [i_12] [i_14 + 1] [i_16] = ((/* implicit */signed char) ((arr_2 [i_10 + 1]) % (arr_2 [i_10 + 1])));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_10] [i_14 - 1] [(_Bool)1] [i_14] [i_16] [i_14] [i_16])) ? (arr_49 [i_10] [i_14 - 2] [i_12] [i_11] [0] [i_14] [i_12]) : (arr_49 [i_10 - 1] [i_14 - 2] [i_12] [i_14] [i_16] [i_11] [i_12])));
                            arr_55 [i_10] [i_10] [i_10] [i_10 + 1] [2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_10] [i_11] [i_14 - 4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65534))));
                            arr_56 [i_10 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_10] [i_16])) >> (((arr_3 [i_10 - 3] [i_14 - 3] [i_14 - 2]) - (12920108866733858932ULL)))));
                        }
                        arr_57 [i_10] [i_11] [i_12] [i_12] [i_14 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((arr_27 [i_14 + 1]) - (1614312656)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_4))));
                                arr_62 [i_10] [i_10] [i_12] [i_17] [13LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10])) ? (((((/* implicit */_Bool) arr_7 [i_18] [i_11] [i_10 - 3] [i_11])) ? (max((((/* implicit */long long int) arr_47 [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 - 2])), (var_0))) : (arr_18 [i_10 - 3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_2)))) : (((/* implicit */int) min((arr_7 [i_17] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8]), (arr_48 [i_10] [i_11] [i_12] [i_12] [(short)12] [i_17] [i_10])))))))));
                                var_31 = (~(min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))));
                                var_32 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_8))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_42 [i_10 - 3] [i_10 - 3])) : (((/* implicit */int) var_14)))))))), (min((-1777632096844816384LL), (arr_58 [i_10] [(unsigned char)1] [i_10 - 1] [i_17])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
