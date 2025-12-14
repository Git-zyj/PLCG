/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188810
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
    var_16 = var_1;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */int) var_12);
                        arr_11 [i_0] [i_2] [i_1] [(signed char)5] [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) var_4)))) <= (((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)116))))), ((+(var_14)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_2] [(short)5] [(unsigned char)1] [8U] [i_5] [i_0] [i_2] = ((/* implicit */_Bool) var_0);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((2U), (((/* implicit */unsigned int) var_3)))))))) <= (((/* implicit */int) (signed char)-118))));
                            arr_17 [i_4] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) - (min((var_14), (((/* implicit */unsigned long long int) var_11)))))));
                            arr_18 [i_0] [i_0] [(signed char)21] [(signed char)21] [i_1] = ((/* implicit */int) min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) var_11))));
                        }
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_18 &= ((/* implicit */unsigned char) var_10);
                            arr_21 [i_0] [i_2] [i_2] [i_4] [i_6] = ((/* implicit */unsigned char) var_0);
                            var_19 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_1]) : (((/* implicit */int) var_8))))) ? (arr_2 [(unsigned short)9] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_4] [i_6] [i_4])) & (((/* implicit */int) (signed char)-122)))))))));
                            arr_22 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (var_7) : (var_6)))));
                        }
                        arr_23 [i_1] [5] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_4]))) ? (max((var_15), (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned char) var_1)))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((int) var_11))) / (var_6))));
                        var_20 -= ((/* implicit */long long int) arr_9 [i_0]);
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_29 [i_0] [i_1] [(short)13] [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_26 [i_2 - 1] [i_1] [i_2] [i_7] [i_1]) < (arr_26 [i_2 + 1] [i_2 + 1] [i_0] [i_7] [i_7]))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_5 [i_2 + 2] [i_0] [i_0] [i_2 - 1]))))) ? ((+((~(953142136))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_15) >= (((/* implicit */int) var_9)))))) > (((((/* implicit */_Bool) (signed char)119)) ? (-22LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))))))));
                        var_22 = ((/* implicit */short) ((((var_12) << (((((/* implicit */int) (unsigned short)8191)) - (8189))))) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_2 + 3] [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2])))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 4; i_8 < 19; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((var_12) / (((/* implicit */long long int) arr_12 [i_2 + 1])))) : (((/* implicit */long long int) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                            arr_33 [i_0] [i_1] [i_0] [i_1] [i_8 - 1] [i_8 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)253))))) ^ (((((/* implicit */_Bool) 31U)) ? (((/* implicit */long long int) var_6)) : (var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_8 - 3] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_0] [i_0] [1U] [i_2 + 3] [i_0] [(unsigned char)17] [i_0]))))) : (var_7))))));
                            var_24 = ((/* implicit */int) ((unsigned char) arr_19 [11] [i_8 - 4] [i_8 - 4] [i_8 - 4] [i_8 - 1] [i_8 - 1] [i_8 - 4]));
                        }
                        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1] [3ULL] [i_1]);
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_12))))));
                        }
                    }
                    var_27 ^= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [(unsigned char)4] [21LL] [21LL]))) > (((((/* implicit */_Bool) arr_35 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1])) ? (-1LL) : (2LL))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(short)10] [13] [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_2 - 1] [13]))) < (arr_26 [i_0] [i_0] [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~((-(((/* implicit */int) ((arr_3 [i_0]) && (((/* implicit */_Bool) var_12))))))))))));
                    arr_38 [i_0] [i_2 + 3] = ((/* implicit */unsigned char) ((var_6) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                    arr_39 [i_0] [i_0] [(short)8] [i_0] = ((/* implicit */int) (short)-29585);
                }
            } 
        } 
    } 
}
