/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167013
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((var_7) ^ (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]) & (arr_9 [i_0] [i_1] [i_1] [i_3] [i_4 - 1])))));
                                var_17 = max((((/* implicit */int) arr_7 [i_1] [i_1])), (max((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_1] [i_4])) : (((/* implicit */int) var_13)))), (arr_6 [i_0] [i_0] [i_4] [i_3]))));
                                var_18 &= ((/* implicit */int) min((((/* implicit */long long int) max((((((/* implicit */int) arr_4 [i_3] [i_4] [i_2])) + (arr_2 [i_4] [i_2] [i_1]))), (((/* implicit */int) arr_10 [i_1] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]))))), (max((((/* implicit */long long int) arr_10 [i_4 - 2] [i_1] [i_2] [i_3] [i_4] [i_3] [i_4])), (arr_5 [i_4] [i_0] [i_4 - 2] [i_4 - 1])))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((min((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4]))) > (((((arr_8 [i_1] [i_4]) & (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_3] [i_4])))) ^ (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                var_20 = ((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_2]) / (max((max((-1933623989), (((/* implicit */int) (unsigned short)21)))), (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_5] [i_6] [i_7]);
                                var_23 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_5] [i_6] [i_7]);
                                arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7] [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            {
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_15 [i_8] [i_8 + 1]))));
                var_25 *= ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8] [i_8] [i_9] [i_8]))) <= (var_7)))) < (((/* implicit */int) arr_7 [i_8] [i_8])))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8]))) & (arr_23 [i_8] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9] [i_8]))) : (max((arr_8 [i_8] [i_8]), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_8 + 1] [i_9] [i_8] [i_9 + 2] [i_9] [i_8] [i_8])) ^ (((/* implicit */int) arr_17 [i_8 + 1] [i_8] [i_8] [i_9 + 1] [i_8] [i_9] [i_8])))))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) arr_26 [i_8] [i_8] [i_9]);
                                var_27 = ((/* implicit */int) ((((/* implicit */long long int) max((1048575U), (((/* implicit */unsigned int) (_Bool)1))))) - ((+(min((arr_1 [i_11]), (var_14)))))));
                                arr_31 [i_12] [i_11] [i_9] [i_9] [i_8] = arr_14 [i_12] [i_9] [i_8];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        for (int i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) arr_25 [i_8] [i_9] [i_10]);
                                var_29 = ((/* implicit */unsigned char) ((max((max((arr_3 [i_10] [i_10]), (((/* implicit */long long int) arr_25 [i_8] [i_9] [i_10])))), (((/* implicit */long long int) arr_17 [i_8] [i_8] [i_9] [i_10] [i_10] [i_13] [i_9])))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_9] [i_9 + 2] [i_13 - 2]) >= (arr_21 [i_9] [i_9 + 1])))))));
                                arr_37 [i_9] = ((/* implicit */unsigned char) min((((/* implicit */int) ((max((((/* implicit */unsigned int) arr_30 [i_9] [i_9] [i_10] [i_13] [i_8])), (var_4))) > (((1048575U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (max((arr_6 [i_13 - 1] [i_13 + 1] [i_13] [i_13]), (arr_6 [i_13 - 1] [i_13 + 1] [i_13] [i_13])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 9; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            {
                                arr_42 [i_8] [i_9] [i_10] [i_9] [i_16] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_8])) ? (arr_25 [i_9 + 2] [i_9] [i_10]) : (((/* implicit */unsigned int) arr_34 [i_8] [i_9] [i_9] [i_15])))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4)))) | (((/* implicit */int) arr_28 [i_16] [i_9] [i_15] [i_8])))))));
                                var_30 = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_21 [i_8] [i_10])))) ? (((/* implicit */long long int) var_5)) : (arr_9 [i_8] [i_8 - 2] [i_8 + 1] [i_9 + 1] [i_15 + 2])))));
                                var_31 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_25 [i_8 - 1] [i_10] [i_9 - 1])))) ? (((var_11) + (arr_27 [i_8 - 1] [i_8] [i_15 + 4]))) : (((/* implicit */long long int) ((4294967295U) / (1048575U))))));
                            }
                        } 
                    } 
                    var_32 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_36 [i_8] [i_9])), (max((((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_9]))))), (((/* implicit */long long int) arr_7 [i_8] [i_10]))))));
                }
            }
        } 
    } 
}
