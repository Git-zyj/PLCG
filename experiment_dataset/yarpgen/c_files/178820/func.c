/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178820
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) ((var_9) | (arr_0 [i_0] [i_1])))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) 3880480650189283050LL));
                    var_17 = ((/* implicit */unsigned int) var_13);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1] [i_3]) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_8 [i_0] [(unsigned char)6] [i_2] [i_3 + 1] [i_3]))))) : (arr_6 [i_2] [i_2] [i_2] [i_3] [i_4 - 1])))) ? (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))))) : (((((/* implicit */_Bool) max((0), (var_6)))) ? (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_7))))) : (((arr_3 [i_2] [i_4]) / (var_11)))))));
                                var_19 = min((((/* implicit */long long int) ((unsigned char) min((arr_5 [(_Bool)1] [(short)10] [i_3 - 4] [i_4]), (((/* implicit */unsigned long long int) arr_9 [i_2])))))), (arr_0 [i_0] [i_4]));
                                var_20 = ((/* implicit */short) var_1);
                                var_21 = ((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1] [i_3 + 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_13 [i_0] = ((/* implicit */short) ((arr_0 [i_1] [i_2]) >> (((arr_5 [i_0] [i_1] [i_2] [i_5]) - (4469190944421722173ULL)))));
                        var_22 = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (arr_5 [i_0] [i_0] [(_Bool)1] [i_5]) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
                        arr_14 [i_0] [16LL] [16LL] [i_0] [16LL] [i_5] = ((/* implicit */int) arr_1 [i_1]);
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_5])) < (((/* implicit */int) var_2)))) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) arr_10 [i_5])))))));
                    }
                    for (int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            arr_21 [(unsigned char)5] [(unsigned char)5] [i_0] [(signed char)0] = ((/* implicit */unsigned long long int) (short)0);
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */long long int) arr_9 [i_0]);
                            var_24 = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1] [i_0]));
                            arr_23 [i_0] = ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))));
                        }
                        arr_24 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1])) ? (var_5) : (((/* implicit */int) (signed char)106))))) / (arr_8 [i_0] [i_1] [i_1] [i_6] [i_0])))) ? (((((/* implicit */_Bool) ((signed char) arr_9 [i_0]))) ? (((int) (short)0)) : (((((/* implicit */_Bool) 16767866738094336057ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11711)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)125)))))));
                        arr_25 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_15 [2LL] [i_1] [i_2] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_6])), (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_25 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)24)), (var_2)))))) ? (arr_19 [i_0] [i_1]) : (((unsigned long long int) ((unsigned int) 1238385140)))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_10 [i_0])) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (arr_6 [i_8 + 1] [i_1] [i_2] [i_0] [i_8 + 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [8U])))));
                        var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_8] [10])) : (min((((/* implicit */unsigned long long int) ((signed char) var_11))), (((arr_11 [i_0] [i_1] [i_2] [i_8]) ? (arr_6 [i_0] [i_1] [i_1] [6U] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (max((min((arr_17 [i_8 - 1] [i_8 - 1] [i_8] [i_8]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (arr_11 [i_0] [i_0] [1] [i_8 + 2]))))))));
                        var_29 += var_11;
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) ((signed char) var_8));
}
