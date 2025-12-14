/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143613
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
    var_20 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((var_2) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((var_16), (((/* implicit */short) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_21 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(var_10))))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) (short)32048)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [7U]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32049))))))))));
                            arr_14 [i_3] [i_3] [i_2] [i_0] [i_4] [i_4] |= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)197)) * (((/* implicit */int) (short)32512))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (short)32048)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (short)32039)) : (((/* implicit */int) (short)21339)))))) / (((/* implicit */int) (short)(-32767 - 1)))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)13)) + (((/* implicit */int) arr_10 [i_5 + 2] [i_0 - 1] [i_1] [7U] [i_1]))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21339)) ? (241791045U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22108)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) + (arr_13 [i_5] [(unsigned char)20]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 - 4] [i_0 - 4] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 4] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_12 [i_0 - 2] [(short)21] [i_0 - 3] [(short)21] [i_0] [i_0 + 1])))))));
                            var_25 = ((/* implicit */short) var_12);
                            arr_18 [i_1] [19U] [i_1] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [9U] [i_2] [i_1] [6U]))))) ? (((arr_17 [i_1] [i_5]) ^ (1042984052U))) : (3251983243U))) <= (var_10)));
                            arr_19 [(unsigned char)15] [i_1] [(unsigned char)5] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (((((arr_3 [i_0] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_5])) - (((/* implicit */int) (unsigned char)197))))) : (((((/* implicit */_Bool) var_19)) ? (arr_8 [i_1] [(short)19]) : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1] [(unsigned char)17])))))));
                        }
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_1] [i_3] [i_6])))) - (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_6])) : (((/* implicit */int) var_3))))))));
                            var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_2] [i_6])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [(unsigned char)11]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3346726040U)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0 + 1] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0 + 1] [i_1])))))));
                            arr_23 [(short)15] [i_1] [i_1] [(short)15] = ((((/* implicit */_Bool) (unsigned char)68)) ? (16776192U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21336))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0] [i_6])) ? (((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_2] [i_3] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_6] [i_1]))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+((-(var_5))))))));
                            var_30 = ((/* implicit */short) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32048)) ? (((/* implicit */int) (short)21339)) : (((/* implicit */int) (unsigned char)7)))))));
                            var_31 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_6 [i_2] [i_0 - 3] [i_2])) : (((/* implicit */int) var_18)))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_7] [i_0] [i_1])) : (((/* implicit */int) (short)-32049))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7] [i_1])) ? (((/* implicit */int) (short)-32512)) : (((/* implicit */int) (short)-17096))))))))));
                        }
                        var_32 -= ((/* implicit */short) (-(((/* implicit */int) arr_4 [(short)8] [i_1]))));
                        arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 3346726040U);
                        var_33 -= arr_10 [i_0] [i_0] [i_3] [i_0] [i_0];
                    }
                } 
            } 
        } 
        arr_28 [i_0] [i_0 - 4] = ((/* implicit */short) (+(arr_3 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            {
                var_34 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21345))) : (1388876715U)))) ? (arr_3 [i_8] [i_9]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_9] [i_9] [i_8] [i_9] [i_9]))))))) / ((-(arr_22 [i_8] [i_8] [12U] [i_8] [i_8])))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 14; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_8] [i_10 - 2])) * (((/* implicit */int) arr_26 [i_9] [i_9] [11U] [i_8] [i_10 - 2]))))) ? (((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_8] [i_10 - 2])) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_26 [i_10] [i_10] [i_10 + 3] [i_8] [i_10 - 1])) : (((/* implicit */int) arr_26 [i_9] [i_10] [i_10] [i_8] [i_10 - 1]))))));
                            arr_41 [i_8] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_8] [i_9]))));
                            arr_42 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17095)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)6736))))) : (((((/* implicit */_Bool) (short)-32512)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21331))) : ((-(3994125300U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
