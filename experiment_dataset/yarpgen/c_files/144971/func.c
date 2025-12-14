/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144971
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_17 &= ((/* implicit */unsigned short) ((long long int) arr_5 [i_0] [i_0] [i_1] [i_1]));
                    var_18 ^= ((unsigned int) var_2);
                    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) arr_1 [(unsigned short)11] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))), ((-(((/* implicit */int) var_10))))));
                }
                for (int i_3 = 3; i_3 < 11; i_3 += 1) 
                {
                    var_20 = ((/* implicit */int) max((max((arr_5 [i_3] [i_3 + 3] [i_3] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_3] [i_3 + 1])))), (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_3] [i_3] [i_3 + 1]))))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [1U])), (max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)12] [i_1] [i_1])), (arr_5 [i_0] [i_0] [i_1] [i_3 - 2]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_22 = arr_13 [i_0] [i_1] [i_1] [i_3 - 1] [i_4] [(short)0];
                                var_23 |= arr_3 [i_5];
                            }
                        } 
                    } 
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_6] = ((/* implicit */unsigned short) var_13);
                    var_24 += max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_6] [(unsigned char)8] [i_1] [(unsigned char)8] [i_0])), (arr_5 [0] [0] [1] [i_6])))) ? ((+(((/* implicit */int) arr_10 [i_0] [(signed char)10] [i_0] [i_6] [i_6])))) : ((-(((/* implicit */int) arr_2 [i_0] [i_1] [0]))))))), (((((/* implicit */_Bool) arr_6 [2U])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_15 [8ULL] [i_6]))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */int) var_9);
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_3 [i_8 - 2]))) + (((unsigned long long int) arr_3 [i_8 - 2])))))));
                            arr_22 [i_1] = arr_10 [i_0] [i_1] [i_6] [i_7] [i_8];
                        }
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_6] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))), (((/* implicit */int) ((signed char) arr_2 [i_0] [i_1] [i_1])))));
                            var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((8979065662292998450LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83)))))), (((unsigned int) arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]))));
                            arr_25 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)127)) ? (13518742853344163126ULL) : ((~(12ULL))))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                        {
                            var_29 += ((/* implicit */unsigned long long int) max((arr_14 [i_0]), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_11 [i_0] [i_0] [6U] [i_0] [0LL] [i_0] [i_0])))))))));
                            arr_28 [i_1] [i_10] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_9 [i_1] [i_1])))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) == ((-(((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))))));
                            var_30 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_7]))))))));
                            var_31 += var_3;
                            var_32 *= min((arr_7 [i_7] [i_7] [i_1] [i_7]), (((/* implicit */unsigned int) min((((/* implicit */short) arr_18 [i_10] [i_7] [i_7] [i_0])), (arr_23 [i_1] [(signed char)11] [i_10])))));
                        }
                    }
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_6] [0])) ? (((/* implicit */int) arr_1 [(unsigned char)11] [i_6])) : (arr_27 [i_0] [i_1] [i_1] [i_1] [i_6]))) - ((+(((/* implicit */int) arr_21 [i_1] [i_0] [i_1] [i_1] [(signed char)11] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_13)), (var_8))) - (max((var_8), (((/* implicit */unsigned int) arr_8 [i_6] [i_0] [i_1] [i_0]))))))) : ((-(arr_15 [i_1] [i_1])))));
                    arr_29 [i_6] [6ULL] [6ULL] [(unsigned char)8] &= ((/* implicit */long long int) ((arr_15 [10] [i_1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_6] [i_1] [i_6])) ? (((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [(signed char)4])))) : ((~(((/* implicit */int) arr_23 [(signed char)6] [i_1] [5LL])))))))));
                }
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    arr_34 [i_1] [i_1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [(unsigned char)11] [1ULL] [0U] [i_11] [i_11] [i_11]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1] [i_1] [i_1])), (max((var_3), (((/* implicit */unsigned short) var_11))))))) : (((((/* implicit */int) (short)-128)) + (2147483647)))));
                    arr_35 [i_11] [10] [i_11] &= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_11] [i_11])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_9 [i_11] [i_11])))));
                }
                var_34 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1]);
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) max((var_8), ((~(var_8)))));
    var_36 = ((/* implicit */short) min(((+(max((var_14), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) var_12))));
}
