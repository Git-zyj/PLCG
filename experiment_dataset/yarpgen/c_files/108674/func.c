/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108674
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_5 [6U]), (var_0))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_0 [i_1]))))))))) & (((unsigned int) arr_2 [i_0]))));
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((((var_10) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_1])) - (14591))))) >> (((min((((/* implicit */unsigned int) arr_6 [i_4] [i_3] [i_2] [i_1])), (2130472896U))) - (50801080U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_0])) << (((((arr_7 [i_1] [i_2] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_5 [i_0]))) - (16616U))))))));
                                var_16 = ((/* implicit */int) ((_Bool) var_10));
                                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */int) arr_10 [i_4] [i_4] [i_3] [i_2 - 2] [i_1] [i_0] [i_0]);
                                arr_15 [i_0] [i_4] = ((/* implicit */unsigned short) ((((arr_3 [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_0] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (arr_8 [i_4] [i_3] [i_0] [i_1] [i_0])))))) > (((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2])), (arr_10 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))))));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 1])) ? (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]) : (((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_2] [i_2] [i_0]))))) ? (((/* implicit */int) ((arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 1]) != (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_19 = ((_Bool) arr_0 [i_2 - 2]);
                        arr_18 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_3 [i_5])) + (((/* implicit */int) arr_1 [i_2])))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) arr_7 [i_5] [i_2] [i_0]);
                    }
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) arr_0 [i_1]);
                                var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_24 [i_0] [i_8])) <= (((/* implicit */int) arr_12 [i_0] [i_1] [i_6] [i_7] [i_7 + 1] [i_8]))))));
                                arr_26 [i_0] [i_1] [i_6] [i_6] [i_8] [i_0] = ((((/* implicit */int) arr_4 [i_7 - 2] [i_7 - 1] [i_7 - 3])) >= (((/* implicit */int) arr_24 [i_7 - 3] [i_8])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_9] [i_6] [i_0] [i_1] [i_0])) + (((/* implicit */int) arr_0 [i_6]))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_3 [i_0])))) ^ (((/* implicit */int) arr_30 [i_0]))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((int) arr_2 [i_0])) * (((/* implicit */int) ((((/* implicit */_Bool) 1926567207U)) && (((/* implicit */_Bool) 1926567207U))))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_33 [i_0] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (524284U) : (2771201102U)))));
                        var_25 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (2368400089U))));
                        arr_34 [(short)6] [i_1] [i_1] &= ((/* implicit */int) ((var_10) ^ (((/* implicit */unsigned int) ((arr_29 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */int) arr_32 [i_0])))))));
                        arr_35 [i_0] [i_6] [i_10] = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_10] [i_10] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_6] [i_6] [i_10])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_6] [i_6] [i_10])));
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_11] [i_6] [i_1] [i_1] [i_0]))));
                        arr_38 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_11] [i_1])) + ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_11]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_1] [i_1] [i_1] [i_11] [i_12] = ((/* implicit */int) ((((((/* implicit */unsigned int) -1)) * (1926567217U))) * (((((/* implicit */_Bool) 8)) ? (1926567207U) : (1926567232U)))));
                            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) arr_0 [i_0]))));
                        }
                    }
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_28 [i_1]))) ? (((unsigned int) arr_22 [i_0] [i_0] [i_6] [i_6] [i_6])) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65530)) / (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (short i_14 = 4; i_14 < 10; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) arr_2 [i_6]);
                                arr_48 [i_0] [i_1] [i_6] [i_13] [i_0] [i_14] [i_14] = ((/* implicit */int) ((_Bool) arr_47 [i_0] [i_13] [i_14 - 2] [i_14 - 1] [i_14 + 1] [i_14 - 2] [i_14 + 1]));
                                arr_49 [i_0] [i_1] [i_6] [i_13] [i_14] = ((((/* implicit */_Bool) 2368400089U)) ? (((/* implicit */int) ((unsigned short) -1255197352))) : (((/* implicit */int) (_Bool)0)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_58 [i_0] [i_16] [i_15] [i_1] [i_0] = ((/* implicit */unsigned short) arr_20 [i_0] [i_16] [i_17]);
                                var_30 = ((((/* implicit */_Bool) arr_51 [i_1] [i_15] [i_17])) ? (arr_51 [i_1] [i_16] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_16] [i_0]))));
                            }
                        } 
                    } 
                    var_31 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0])) > (2)))));
                }
                arr_59 [i_0] = (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) min((((/* implicit */signed char) var_12)), (arr_43 [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_32 -= var_7;
}
