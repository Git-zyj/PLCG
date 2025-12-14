/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11479
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) var_0);
                                arr_13 [(short)0] [i_4] [i_3] [i_4] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((arr_8 [11] [i_3] [i_2 + 3] [3LL] [3LL]) >> (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) - (212)))))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_2] [i_0]))))), (arr_4 [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) (-(arr_8 [i_2 - 4] [i_2] [i_2 - 4] [i_2 + 1] [(short)11]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_21 [i_7] [6LL] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_5] [i_6] [i_7])), (-7846220359760118951LL))))));
                    arr_22 [i_5] [i_7] [i_5] = (signed char)127;
                    /* LoopSeq 3 */
                    for (signed char i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_8 + 1]))) : (2013265920U))))))) ? (((/* implicit */long long int) 2013265920U)) : (((((/* implicit */_Bool) (unsigned short)47909)) ? (-7846220359760118930LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_8 - 1] [i_7])))))));
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32767)))))))) * (((/* implicit */int) arr_24 [i_6] [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8]))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 16755766995642923652ULL)))))))));
                    }
                    for (short i_9 = 3; i_9 < 8; i_9 += 3) 
                    {
                        arr_27 [i_5] [i_7] [i_6] [i_6] [i_9] [i_9] = ((/* implicit */long long int) var_13);
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63439)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((var_13) - (((/* implicit */unsigned int) 32767)))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_30 [i_10] [i_7] [i_6] [i_7] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6]))) + (2281701376U)))))));
                        arr_31 [i_5] [i_6] [i_7] [i_7] = arr_17 [i_7] [i_6] [9LL];
                        var_25 += ((/* implicit */signed char) (short)(-32767 - 1));
                        arr_32 [i_5] [i_7] [i_5] [(unsigned short)6] [i_7] [i_10] = ((/* implicit */short) ((6904852707005152486ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2281701376U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_33 [i_6] [i_7] [i_10] = (signed char)71;
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 2; i_11 < 9; i_11 += 1) 
                    {
                        var_26 = var_5;
                        arr_36 [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) arr_3 [12LL] [12LL] [i_7]);
                        var_27 = ((/* implicit */unsigned int) (((+(arr_34 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11]))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2973388694U))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (((_Bool)1) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2161727821137838080LL)) ? (((/* implicit */int) (short)17)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((var_16) * (((/* implicit */unsigned long long int) var_11)))))))))));
}
