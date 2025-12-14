/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178004
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                    var_21 -= ((/* implicit */_Bool) ((short) arr_1 [i_1]));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_5 [i_0] [i_1] [i_0])));
                }
                for (long long int i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */_Bool) arr_1 [i_0]);
                                arr_15 [(unsigned char)12] [i_3] [i_3] = ((/* implicit */unsigned int) ((((arr_13 [i_4] [i_4 + 2] [i_4] [i_4] [i_5] [i_4]) / (arr_13 [i_1] [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4]))) == ((~(arr_13 [i_0] [i_4 + 3] [i_4] [i_4] [i_4] [i_5])))));
                                arr_16 [9U] [9U] [7ULL] [11] [11] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */int) (((~(((/* implicit */int) arr_11 [i_0] [4U] [4U] [(short)11] [i_5])))) >= (((/* implicit */int) ((18298639286257812660ULL) > (((/* implicit */unsigned long long int) arr_8 [i_1] [i_4] [i_5])))))))) / (((/* implicit */int) arr_12 [7LL] [7LL] [i_3] [(unsigned char)3] [(short)8] [(unsigned char)3]))));
                                var_23 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)26412)) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_1])))));
                            }
                        } 
                    } 
                    arr_17 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3330421986U)) ? (((/* implicit */unsigned long long int) 1933880832U)) : (18298639286257812660ULL)));
                    var_24 *= ((/* implicit */unsigned int) 18298639286257812660ULL);
                }
                for (long long int i_6 = 1; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    arr_20 [i_6] [i_6] = ((/* implicit */int) arr_1 [i_6 - 1]);
                    var_25 = ((/* implicit */int) var_18);
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_1]);
                    arr_24 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2041886862)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)26391))));
                    var_26 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (arr_8 [i_7] [i_1] [i_0]) : (arr_0 [i_0] [i_0])))));
                    arr_25 [i_7] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (max((arr_0 [i_1] [i_7]), (arr_8 [i_0] [i_0] [i_0]))))))));
                }
            }
        } 
    } 
    var_27 *= ((/* implicit */unsigned char) (~(var_0)));
}
