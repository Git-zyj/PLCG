/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166819
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
    var_10 &= ((/* implicit */unsigned char) ((max((var_7), (((/* implicit */int) ((((/* implicit */int) (unsigned char)89)) >= (((/* implicit */int) (unsigned char)114))))))) >> ((((-(min((((/* implicit */int) (unsigned char)141)), (var_1))))) - (860067729)))));
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 += ((((/* implicit */_Bool) (short)56)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)150)))) : (((/* implicit */int) (unsigned char)211)));
                                arr_11 [(_Bool)1] [(unsigned short)8] [i_2 - 1] [i_3 - 1] [i_4] |= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)148));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((unsigned char)145), (((/* implicit */unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((int) 13654903779877493418ULL)))))));
                                var_14 = ((/* implicit */int) arr_13 [8U] [8U] [6U] [i_5]);
                                var_15 = ((/* implicit */_Bool) max((max(((unsigned char)196), (arr_13 [i_0 + 1] [(unsigned char)10] [i_2 + 1] [i_2 + 1]))), ((unsigned char)110)));
                                var_16 |= arr_13 [i_1] [(unsigned char)10] [i_5] [5ULL];
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) (-(arr_5 [i_1] [i_1] [8U] [(signed char)10])));
                        var_18 = ((/* implicit */int) ((unsigned int) arr_18 [i_0 - 1] [i_0 - 2] [i_2 + 1] [i_7 + 3]));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            arr_24 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_7 [i_0 + 2]));
                            var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 1])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_2 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) arr_9 [(unsigned char)0] [i_1] [i_2] [(unsigned char)6] [(unsigned char)6] [i_7 + 1] [i_8]);
                            var_21 |= ((/* implicit */int) arr_19 [i_1] [i_7 + 1] [i_1] [i_1]);
                        }
                        for (unsigned char i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            arr_28 [i_0] [i_1] [i_2 - 1] [i_1] [i_9 - 1] = (-(arr_2 [i_0 + 1] [i_9 + 3]));
                            var_22 = var_5;
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned char) var_3);
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                            arr_32 [i_0] [i_2 - 1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [10ULL] [i_1] [i_1] [i_1] [i_1])) ? (arr_29 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1]) : (arr_29 [i_0 + 1] [i_0 + 1] [i_10] [i_7 + 1] [i_2 + 1])));
                            var_24 += ((/* implicit */unsigned int) ((signed char) 2487468104U));
                        }
                    }
                }
            } 
        } 
    } 
}
