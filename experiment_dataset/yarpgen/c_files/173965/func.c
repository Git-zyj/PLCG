/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173965
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
    var_12 = var_2;
    var_13 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_14 = ((/* implicit */long long int) arr_1 [i_0]);
        var_15 |= (-(2019267192U));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) 2019267192U);
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
                {
                    var_18 += ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) arr_4 [i_4 + 1]))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3 - 1] [i_4 - 2] [i_4])) * (((/* implicit */int) arr_6 [i_3 + 3] [i_4 - 1] [i_4])))))));
                    var_20 = ((/* implicit */unsigned int) (signed char)0);
                    var_21 = 2275700124U;
                }
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) 2275700104U);
                            arr_20 [i_2] [i_2] [i_3] [i_3] [i_2] = ((_Bool) ((((/* implicit */_Bool) (unsigned short)25466)) ? (((/* implicit */int) arr_8 [i_6] [i_5] [i_3] [i_2])) : (((/* implicit */int) var_5))));
                            arr_21 [i_2] [i_3] [i_3] = ((/* implicit */int) arr_12 [i_3] [i_3] [i_3 - 1] [i_3 + 3] [i_3 - 2]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) 2275700103U)))));
            }
            for (short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_5))));
                    arr_28 [i_1] [i_1] [i_1] [i_1] [i_7] [i_8] = ((/* implicit */signed char) 32U);
                }
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                    arr_31 [i_9] [i_9] [i_9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_9] [i_7] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15897686161271298297ULL)) ? (2U) : (2019267192U)))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_9] [i_1] [i_2] [i_7] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7415))) : (0ULL)))));
                    var_25 = ((/* implicit */signed char) 7ULL);
                    arr_32 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = arr_10 [i_1] [i_9] [i_7] [i_9];
                }
                arr_33 [i_7] [i_7] [i_2] [i_1] = ((/* implicit */long long int) ((arr_24 [i_7]) % (arr_27 [i_1] [i_1] [i_2] [i_7])));
                arr_34 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 15897686161271298297ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_27 [i_1] [i_1] [i_2] [i_7])));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 24U))));
            }
            arr_35 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18746))))) * (((int) (signed char)0))));
            arr_36 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_11) <= (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_1]))));
            arr_37 [i_1] [i_1] = ((/* implicit */short) var_4);
        }
    }
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        arr_42 [i_10] [i_10] = ((/* implicit */long long int) (unsigned short)2292);
        var_27 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (unsigned short)22500)) ? (6LL) : (((/* implicit */long long int) arr_30 [i_10] [i_10] [i_10] [i_10])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10] [i_10] [i_10]))))))) == (((/* implicit */long long int) max((arr_14 [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_14 [i_10] [i_10] [i_10] [i_10] [i_10]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 65536U)) ? (632939588U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9355)) && (((/* implicit */_Bool) var_2))))))));
                    arr_48 [i_11] [i_11] [i_11] [i_10] = ((((/* implicit */_Bool) arr_4 [i_10])) ? (arr_40 [i_11] [i_10]) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_39 [i_10] [i_10])))))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_4 [i_10])), ((+(arr_40 [i_10] [i_10]))))))));
    }
}
