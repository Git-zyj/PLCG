/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15930
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_0]);
                                var_10 = min((max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2 + 4] [i_2] [i_2 + 2])), (arr_6 [i_2] [i_2] [i_2 + 1] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_5)), (arr_10 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1])))));
                                var_11 += ((/* implicit */unsigned short) ((arr_3 [i_1]) <= (((/* implicit */unsigned int) (~(min((244748446), (((/* implicit */int) (unsigned char)172)))))))));
                                var_12 = ((/* implicit */long long int) var_5);
                                var_13 = ((/* implicit */_Bool) (((_Bool)1) ? ((~(((arr_7 [i_0] [(signed char)19]) << (((((/* implicit */int) (unsigned short)1023)) - (1010))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_14 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL)));
                                var_15 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2] [(short)15] [i_2] [i_0])) ? (arr_12 [i_2 + 2] [i_2] [i_2 + 2] [i_2] [i_0]) : (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_0])))));
                                var_16 = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_7])))) > (((((/* implicit */_Bool) max(((unsigned short)7), (((/* implicit */unsigned short) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned short)11297))))), (arr_22 [i_0] [(short)6] [i_0] [i_7] [i_8]))));
                                arr_25 [i_0] [i_1] [i_2 + 3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))));
                                var_17 = ((/* implicit */unsigned short) arr_3 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 13; i_9 += 1) 
    {
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 13; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (-((+((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_13]))))))));
                                var_19 = max((max((((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_13] [i_9] [i_9] [i_9])), (arr_40 [i_11] [i_11] [i_11] [i_11] [i_11])))), ((((_Bool)1) ? (((/* implicit */int) arr_30 [i_13] [i_9])) : (((/* implicit */int) var_8)))))), (((/* implicit */int) max(((unsigned char)91), (((/* implicit */unsigned char) ((arr_14 [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                arr_48 [i_9] = max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_2))), ((+(arr_34 [i_9] [i_10] [i_9] [i_14 + 1])))))), (max((((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_9] [i_10] [i_9] [i_14] [i_10] [(_Bool)1]))), (18446744073709551609ULL))));
                                arr_49 [i_9] [i_9] [i_11] [i_11] [i_15] &= ((/* implicit */signed char) ((max((((long long int) var_5)), (((/* implicit */long long int) max((arr_2 [i_9]), (((/* implicit */unsigned short) arr_41 [i_11] [i_10]))))))) << (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65524)), (arr_39 [i_11] [i_11])))) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                                arr_50 [i_9] = (_Bool)1;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 15; i_17 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)245)));
                                var_21 = ((/* implicit */unsigned short) min(((+(arr_47 [i_9 + 2] [i_9 - 2]))), ((+(((/* implicit */int) arr_9 [i_9] [i_9 - 1] [i_9] [i_9 + 2] [i_9 + 2]))))));
                                var_22 = ((/* implicit */unsigned long long int) max((arr_4 [i_9]), (((/* implicit */unsigned int) ((max((arr_4 [i_9]), (837557055U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)239)) % (((/* implicit */int) var_8))))))))));
                                var_23 *= ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 4; i_18 < 12; i_18 += 4) 
                    {
                        for (signed char i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            {
                                var_24 *= max((max(((+(var_6))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_57 [i_9] [i_10] [i_11] [i_18] [i_19]))))))), (((/* implicit */unsigned long long int) arr_32 [i_19] [i_18])));
                                var_25 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_21 [i_9 - 2] [i_11] [i_18 - 3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 14; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 1; i_21 < 13; i_21 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(unsigned char)3] [i_9] [i_11] [i_10] [i_9])) ? (var_9) : (((max((((/* implicit */long long int) arr_3 [8])), (var_9))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9])))))));
                                arr_68 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */int) (+(((arr_32 [i_9] [i_9 + 2]) ^ (arr_32 [i_9] [i_9 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_22 = 1; i_22 < 12; i_22 += 3) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        for (unsigned long long int i_26 = 3; i_26 < 12; i_26 += 2) 
                        {
                            {
                                var_27 = max(((-(arr_19 [(unsigned short)0] [16U] [i_22] [i_25] [i_26] [i_26]))), (((/* implicit */unsigned long long int) arr_40 [i_22] [i_23] [i_24] [i_25] [i_26])));
                                var_28 = var_3;
                                arr_82 [i_22 + 1] [3ULL] [i_22] [i_22] [i_22] [i_22] = ((arr_1 [i_22]) ? (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 67108864U)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_12 [i_22] [14LL] [i_24] [i_25] [i_22]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (min((var_8), (var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 13; i_27 += 1) 
                    {
                        for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_63 [i_22] [i_23] [i_24] [i_27]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_22] [i_24] [i_24]))))) | (var_9)))) ? ((-(((((/* implicit */_Bool) 10743623482454707345ULL)) ? (((/* implicit */int) (short)6465)) : (((/* implicit */int) (signed char)-22)))))) : (((/* implicit */int) arr_30 [i_23] [i_28]))));
                                var_30 = ((/* implicit */unsigned long long int) ((((arr_19 [i_22] [i_23] [i_22] [i_27] [i_27] [i_28]) % (arr_19 [i_22] [i_22 - 1] [i_22] [i_22] [i_22 + 1] [i_22 - 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_22] [i_22] [i_22] [i_24] [i_27] [i_28]) != (arr_19 [i_22 + 1] [i_22] [i_22] [i_22] [i_22] [i_22 - 1])))))));
                                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((var_6) >> (((arr_59 [i_22] [(signed char)11] [i_24] [i_27] [i_22]) - (3401266646U))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27679)) & (((/* implicit */int) arr_21 [i_22] [i_27] [i_22]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 2) 
                    {
                        for (int i_30 = 1; i_30 < 10; i_30 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */short) max(((-(((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_65 [i_22])))))), (((((/* implicit */int) arr_40 [i_30] [i_30 - 1] [i_30 + 3] [i_30] [i_30])) / (((/* implicit */int) arr_40 [i_30] [i_30 - 1] [i_30 + 1] [i_30] [i_30]))))));
                                var_33 &= ((unsigned long long int) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (signed char i_32 = 0; i_32 < 13; i_32 += 1) 
                        {
                            {
                                var_34 ^= ((/* implicit */long long int) max((((arr_34 [i_22 + 1] [i_22] [(short)2] [(short)2]) - (max((arr_99 [i_22] [2LL] [i_22 - 1] [i_22] [i_22] [i_22] [(signed char)6]), (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (unsigned short)14))))));
                                var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_43 [i_22] [i_31])), (15477704385472166419ULL)));
                                var_36 = var_1;
                                var_37 = ((/* implicit */signed char) arr_21 [i_23] [i_23] [i_32]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
