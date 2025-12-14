/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115365
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) ? (arr_0 [i_1]) : (arr_2 [i_0 - 1])))));
                arr_4 [i_1] = ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_19)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))) ? (((/* implicit */int) ((((_Bool) var_18)) && (((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)5]))))) : (((arr_0 [i_0 + 2]) / (arr_0 [i_0 + 2]))));
                arr_5 [i_0] [i_0 + 3] = min((((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0 + 1]) : (arr_0 [i_0 + 1]))), (((-230665853) | (arr_2 [i_0 + 1]))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1])) : (((/* implicit */int) (signed char)0))))))) : (((17712404810390406384ULL) + (min((17712404810390406384ULL), (734339263319145232ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_2 + 2])), (((unsigned short) arr_6 [i_0 + 2] [i_2 + 3]))));
                                arr_16 [i_4] [i_3] [i_2] [6ULL] [i_0 + 2] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_2 + 4] [i_2] [(signed char)4])) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) ((_Bool) 734339263319145232ULL))))));
                    var_23 *= ((/* implicit */unsigned long long int) ((734339263319145220ULL) < (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_3)))) + ((+(((/* implicit */int) (signed char)-45)))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_21 [i_0 + 2] = ((/* implicit */unsigned char) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1]))) > (734339263319145232ULL))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_26 [(signed char)11] [(signed char)3] [i_6] [i_5] [(signed char)11] [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_6 - 2]))))), ((-(arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_6 - 1] [8ULL] [i_6] [i_6])))));
                                var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0 + 1])) <= (8421542589125668930LL))))));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_0 [0])) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (-8421542589125668930LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_17 [i_8 + 1] [i_1] [i_0 - 1]))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-101)))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 13; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) arr_29 [i_10] [i_9] [i_8 + 2]);
                            var_27 = ((/* implicit */_Bool) min((17712404810390406384ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_10 - 1] [i_9] [i_1] [i_0 + 3])) >= (((/* implicit */int) arr_10 [i_0 + 3] [i_1] [i_8 - 2] [i_9])))))));
                        }
                        for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_32 [i_0] [11ULL] [i_0 + 3] [i_8 - 2] [(_Bool)1] [i_11])) & (((/* implicit */int) arr_32 [i_0] [i_0] [i_0 - 1] [i_8 - 2] [i_11] [(short)12])))), (((arr_32 [i_0 - 1] [i_0] [i_0 + 2] [i_8 + 1] [i_11] [i_11]) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0 + 3] [i_8 - 2] [i_9] [2])) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0 + 2] [i_8 + 2] [i_9] [6LL]))))));
                            arr_40 [i_0 + 3] [i_1] [i_8 + 2] [i_11] [i_11] = ((/* implicit */short) var_12);
                        }
                        arr_41 [i_0 + 3] [i_1] [i_8 + 1] [10ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_9]))))) > ((+(arr_37 [i_9])))));
                        var_29 = ((((/* implicit */_Bool) 12547913843383260377ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_0 + 2] [i_1] [i_1] [i_8 + 1] [i_9])) : (min((min((734339263319145232ULL), (17712404810390406396ULL))), (arr_12 [i_9] [i_9] [i_8] [i_8 - 1] [i_1] [i_1] [i_0]))));
                    }
                    var_30 = ((/* implicit */unsigned int) var_18);
                    var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) 17712404810390406383ULL)) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_1] [i_0 + 1]))) << (((((17712404810390406384ULL) >> (((arr_25 [i_1] [i_8 - 1] [i_1] [i_1] [i_0 + 1]) - (5201072063555383465LL))))) - (276756325162350099ULL)))));
                }
                arr_42 [i_0 + 2] [i_1] [i_0 + 3] = ((/* implicit */int) min((17712404810390406383ULL), (min((17712404810390406383ULL), (734339263319145244ULL)))));
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) ((unsigned char) ((var_8) ^ (-8421542589125668931LL))));
}
