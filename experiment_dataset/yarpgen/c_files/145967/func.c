/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145967
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) <= (563576904774710665LL))))))), (min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-68)) && (((/* implicit */_Bool) var_5))))), (var_1)))));
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_1)), (-563576904774710666LL))), (max((((/* implicit */long long int) var_16)), (var_13))))))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((((/* implicit */int) var_11)) == (((/* implicit */int) var_6))))))), (min((563576904774710665LL), (((/* implicit */long long int) (_Bool)1))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_7)))) ? (((/* implicit */long long int) (((_Bool)1) ? (var_8) : (((/* implicit */int) var_3))))) : (var_13)))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(var_5)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((563576904774710665LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_22 = max((arr_9 [i_2] [i_3] [i_2] [i_2]), (((/* implicit */unsigned long long int) min((arr_4 [i_2 - 1]), (arr_4 [i_2 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_5 = 4; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_22 [i_5] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(1942610009)))) > (arr_10 [i_0] [i_5 - 1])));
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (arr_13 [9LL] [9LL] [i_5] [i_5] [i_7] [i_7] [2]) : (((/* implicit */unsigned long long int) var_12)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            }
                        } 
                    } 
                    arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1]))) : (arr_21 [i_1])))));
                    arr_24 [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_5 - 3] [i_5 - 2] [i_0])) == (((/* implicit */int) arr_18 [i_0] [i_1] [i_5 - 4] [i_1] [i_1]))));
                }
                /* vectorizable */
                for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_30 [i_0] [i_8] [i_8 + 2] [i_8] = ((/* implicit */short) ((arr_9 [i_8] [i_8] [i_8] [i_9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_8] [i_9]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            arr_34 [i_0] [i_1] [i_9] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (_Bool)1)) : (1772451443)));
                            arr_35 [i_10] [i_10] [i_9] [i_8] [i_1] [i_1] [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [13U] [i_1] [i_8 - 2] [13U] [i_0])) ? (arr_12 [i_0] [i_1] [i_1] [i_8 + 3] [i_1] [i_0]) : (arr_16 [i_0] [i_0] [i_8 + 1])));
                            arr_36 [i_9] [i_9] [(signed char)14] [i_1] [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 563576904774710650LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (3303507178U)));
                        }
                        for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            arr_40 [i_11] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2241541237U)) ? (2053426076U) : (2241541235U)));
                            arr_41 [i_8] [i_1] [i_8 - 2] [i_9] [10] [i_8] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 2053426059U)) ? (2241541237U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_33 [i_12] [i_12] [i_8] [i_8 + 2] [i_8 + 1])) & (var_7)));
                        arr_44 [i_0] [i_8] [i_8] [i_12] = ((/* implicit */unsigned int) var_13);
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_25 [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_0])) : (((/* implicit */int) arr_8 [i_8 - 1] [i_8] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 4; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_49 [i_1] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8 + 2] [i_14 - 2] [(unsigned short)7] [i_14 - 2])) || (((/* implicit */_Bool) arr_25 [i_8 + 4] [i_14 - 2] [i_8 + 4] [i_13]))));
                                arr_50 [i_0] [i_0] [i_8] [i_13] [i_8] = ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_38 [(short)15] [(short)15] [(short)15] [i_13] [(short)15])) - (60))));
                                var_27 = ((unsigned int) var_11);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        for (short i_17 = 3; i_17 < 17; i_17 += 3) 
                        {
                            {
                                arr_58 [20U] [i_1] [i_15] [i_15] [i_17] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_38 [i_0] [i_0] [i_1] [i_1] [i_17])), ((((-(563576904774710647LL))) % (((/* implicit */long long int) min((2053426059U), (((/* implicit */unsigned int) (unsigned char)255)))))))));
                                var_28 = ((/* implicit */int) arr_12 [i_17 + 2] [i_16] [i_15 + 1] [i_15 + 1] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [(short)1] [i_18] [(short)1] [i_18] [i_0]))) : (((unsigned int) 3303507189U)))) != (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_18] [i_18])) ? (var_15) : (((/* implicit */unsigned int) 156736912))))));
                            arr_64 [i_19] [i_18] [i_18] [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12856)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            }
        } 
    } 
}
