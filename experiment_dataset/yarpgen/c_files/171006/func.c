/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171006
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
    var_18 -= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6288)) << (((((/* implicit */int) var_9)) + (143)))))) && (((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = min((max((((/* implicit */long long int) arr_5 [i_0])), (var_4))), (((/* implicit */long long int) ((int) (signed char)-122))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_2] [i_4]))));
                                var_20 = ((/* implicit */_Bool) var_11);
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)59224))))) % ((+(var_1)))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((int) 288950857U))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_7))) >> (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_14))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-110)))) ? (((((/* implicit */long long int) var_7)) + (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) + (-1114171429)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 9; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */int) ((((1198170843) < (((/* implicit */int) var_14)))) || (((/* implicit */_Bool) arr_24 [i_5 + 2] [i_6]))));
                                arr_28 [i_0] [i_5 - 2] [i_7] |= arr_10 [i_5 - 3] [i_5 - 4] [i_5 - 4] [i_5 - 4] [i_5 - 4];
                                arr_29 [i_6] [i_6] [i_6] [i_6] = max((((((/* implicit */int) arr_8 [i_0] [i_5 + 1] [i_6] [i_7])) + (1198170843))), (((((/* implicit */int) arr_8 [i_0] [i_5 + 1] [i_7] [i_7])) + (((/* implicit */int) arr_8 [i_0] [i_5 - 1] [i_6] [i_7])))));
                                var_22 = ((/* implicit */unsigned short) ((int) ((unsigned short) min(((signed char)-122), (var_8)))));
                                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_8] [i_6] [i_7] [i_6] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1))))))) : (((long long int) 4294967281U))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_6] [i_5] [(short)7] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_15 [i_0])), (max((var_5), (arr_4 [i_5 - 2] [i_6] [i_5 - 2])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
        arr_34 [i_9] = ((/* implicit */int) (+(arr_33 [i_9])));
        arr_35 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32616)) / (((/* implicit */int) (unsigned short)27))));
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_14))));
    }
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_11 = 2; i_11 < 9; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    {
                        arr_50 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_11 + 4])) << (((arr_39 [i_10] [i_10]) - (4034219918U)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10] [(unsigned char)2]))) : (arr_42 [i_10] [i_10] [i_13])))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_16))))) + (((((/* implicit */_Bool) (signed char)86)) ? (-9223372036854775785LL) : ((-9223372036854775807LL - 1LL)))))))));
                        var_26 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_48 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_10] [i_11] [i_11 + 1])) : (((((/* implicit */int) (unsigned char)90)) ^ (((/* implicit */int) (unsigned short)65514)))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_44 [i_10] [i_10] [i_11 + 4] [i_11 + 4]))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((arr_42 [i_10] [i_10] [i_13]) + (6570574926496979932LL)))))))))));
                        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11] [i_11]))) >= (var_7))))) - (((long long int) var_15))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 2931490041091454609LL)) && (((/* implicit */_Bool) var_1))))), (arr_41 [i_11 + 4] [i_11 + 2])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)7)))) >= (((/* implicit */int) ((3627985355U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5612)))))))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_44 [i_10] [i_10] [i_10] [i_10])) << (((((/* implicit */int) arr_46 [i_10] [i_10] [i_10])) - (40064)))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        arr_53 [i_14] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_14] [i_14])) ? (arr_52 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        var_29 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)3993)))) || (((((/* implicit */_Bool) arr_52 [i_14] [i_14])) || (((/* implicit */_Bool) arr_52 [i_14] [i_14]))))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 543951657912961243LL)) || (((/* implicit */_Bool) 12U)))))) & (var_17)));
    var_31 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) ^ (((((/* implicit */int) var_15)) + (((/* implicit */int) (short)-3645))))))));
}
