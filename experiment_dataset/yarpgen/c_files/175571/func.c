/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175571
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)42);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (signed char)2);
                                arr_17 [i_0] [(signed char)1] [(signed char)1] [(signed char)1] [i_0] = arr_12 [i_0] [i_0] [i_4] [i_0 - 1] [i_0];
                                arr_18 [i_0] [i_0] [i_1] [(signed char)4] [i_3] [i_4] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_0)) : (var_4)));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    arr_19 [(short)2] [(short)2] [i_0] [i_2] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_0]);
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] [6U] = ((((/* implicit */int) var_15)) * (((/* implicit */int) var_14)));
                    var_18 = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_0]);
                    var_19 = var_8;
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    arr_27 [i_0] [i_0] [9LL] = ((((/* implicit */_Bool) (signed char)-23)) ? (((arr_4 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) var_8)));
                    arr_28 [i_0 + 1] [i_0 + 1] [i_0] = ((((/* implicit */int) (short)-8871)) % (((/* implicit */int) (short)8870)));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        var_20 ^= ((/* implicit */short) var_13);
                        arr_33 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_6] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_6] [(unsigned char)6] [i_0] [i_0])) : (var_8)));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 + 2] [i_7 + 1] [i_0] [7])) ? (((/* implicit */unsigned long long int) arr_23 [i_7 + 2] [i_7 + 3] [i_0] [i_7])) : (7840063129900126461ULL)));
                        var_21 += ((/* implicit */unsigned int) (unsigned char)192);
                    }
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [2LL] [i_0 - 1])) ? (((/* implicit */int) arr_24 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_14 [i_0] [6U] [i_0 - 1] [i_0] [i_0]))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                        var_23 = ((/* implicit */unsigned long long int) arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]);
                    }
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) var_7);
                                arr_45 [i_0] [i_1] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_38 [i_0])) >= (((/* implicit */int) (short)-26368)))))));
                                arr_46 [i_0] [i_1] [i_0] [i_0] [i_0] [i_9] [i_1] |= ((/* implicit */unsigned short) (~(var_5)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-8871)) ? (var_3) : (((/* implicit */int) var_10)))) - (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_21 [i_0] [i_13])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_9] [i_9]))))));
                                arr_54 [i_0] [i_0] = ((/* implicit */int) (unsigned char)10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0 - 1] [i_0 + 1] [i_15] [i_15])) || (((/* implicit */_Bool) arr_35 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-8864)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1264058303U)));
                                var_27 = ((/* implicit */signed char) 6052457296244257881ULL);
                                var_28 = ((/* implicit */unsigned short) var_9);
                                arr_60 [i_0] [i_0] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-8878)) & (arr_35 [i_0] [i_0] [i_0 - 1] [i_14 + 2] [i_0 - 1])));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) arr_55 [i_0] [i_1]);
                }
                arr_61 [8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-773806343), (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-8880))))) : (((((/* implicit */_Bool) min((arr_21 [i_0] [i_1]), (((/* implicit */short) (signed char)-2))))) ? (var_12) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)255))))))));
            }
        } 
    } 
    var_30 ^= ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (-2567308497091945759LL)));
}
