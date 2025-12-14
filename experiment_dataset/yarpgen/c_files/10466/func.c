/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10466
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
    var_14 -= ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_15 += ((/* implicit */short) ((arr_6 [i_0] [i_1 - 1]) >= ((~(arr_6 [(unsigned short)9] [i_1 - 2])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */int) (~(arr_6 [i_0 - 2] [i_1 - 4])));
                        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((8173982297413690150ULL) >= (10272761776295861469ULL)))) >> (((10272761776295861477ULL) - (10272761776295861448ULL)))));
                        var_17 = ((/* implicit */signed char) (~(((8173982297413690150ULL) / (((/* implicit */unsigned long long int) -1919401949))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1 + 3] [i_1] [i_4] [i_4 - 3]))))))))));
                        arr_14 [i_0 - 2] [2LL] [i_2] [i_4] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_4 + 1])) >= (((/* implicit */int) arr_3 [i_0 - 2] [i_1] [i_4 - 2]))))) + ((+(((/* implicit */int) arr_0 [i_0 - 2]))))));
                    }
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 - 1] [(_Bool)1] [i_2] [i_5])) - (((/* implicit */int) arr_13 [i_2] [i_5]))))) || (((/* implicit */_Bool) (~(arr_15 [2] [(signed char)9])))))))));
                        var_20 ^= arr_5 [i_0];
                    }
                }
                for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_6] [i_7]);
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_6])) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0 - 1] [(short)12])))))) >= (((arr_5 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))))));
                        var_22 = ((/* implicit */short) (+(((arr_6 [i_0 - 2] [i_1 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_7] [i_1])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-11015))))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_1 - 2] [i_0] [i_0] [i_8] [i_8]))));
                            arr_28 [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) arr_26 [i_7] [i_1] [11] [11] [i_7]);
                        }
                        var_25 = ((arr_25 [i_0] [i_1] [i_0] [i_6] [(short)5] [i_7]) - (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_0])));
                    }
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) >> (((((/* implicit */int) arr_13 [(unsigned char)3] [i_6])) + (35))))))));
                }
                var_27 -= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 - 4]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            for (unsigned int i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_11 + 2])) && (((/* implicit */_Bool) arr_36 [i_10 - 1] [i_10 - 1] [i_10 + 3] [i_11 - 1]))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_12] [i_11 + 2] [i_11] [(_Bool)0])) && (((/* implicit */_Bool) arr_40 [i_12] [i_11 + 2] [i_11] [i_10]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            arr_44 [i_9] [(_Bool)1] [i_11] [i_12] [i_13] = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_29 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_32 [i_9] [i_9] [9U]))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_43 [i_9] [i_9] [i_9] [i_9] [i_13]))));
                            var_31 = (((+(arr_43 [i_9] [6ULL] [i_11] [i_12] [i_13]))) >= (((arr_37 [i_9] [i_9] [i_9]) / (((arr_43 [6LL] [i_10 + 1] [i_10 + 1] [i_10] [i_10]) - (arr_39 [i_9]))))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((arr_40 [i_10 + 2] [14LL] [i_10 + 2] [i_11 + 2]) < (((/* implicit */unsigned long long int) (~((~(arr_34 [i_12] [i_12])))))))))));
                        }
                        for (int i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                        {
                            arr_48 [i_9] [i_11] = ((arr_35 [i_9] [(unsigned char)9] [i_14]) / (((arr_39 [i_9]) / (arr_35 [i_9] [i_10 - 1] [i_9]))));
                            arr_49 [i_11] [i_10] [i_11] [i_12] [i_11] [i_14] [i_11] = ((/* implicit */signed char) ((arr_40 [(short)3] [i_10] [(short)3] [i_12]) != (((/* implicit */unsigned long long int) (~(arr_43 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11]))))));
                        }
                        for (int i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                        {
                            var_33 = (i_11 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_50 [i_11] [i_11] [i_11 + 1]) << (((arr_50 [i_11] [i_11] [i_11 + 1]) - (8520264691294909336LL)))))) ^ ((+(8173982297413690126ULL)))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((arr_50 [i_11] [i_11] [i_11 + 1]) + (9223372036854775807LL))) << (((((arr_50 [i_11] [i_11] [i_11 + 1]) + (8520264691294909336LL))) - (5306758920815516882LL)))))) ^ ((+(8173982297413690126ULL))))));
                            var_34 = ((/* implicit */int) ((((/* implicit */long long int) (-(arr_37 [i_11 + 2] [(unsigned short)8] [i_12])))) != (((arr_50 [i_10 - 1] [i_11] [i_10 + 1]) / (arr_50 [i_9] [i_11] [i_11])))));
                            arr_53 [i_9] [i_10] [i_11] = ((/* implicit */signed char) (+(arr_43 [i_11 + 1] [i_11 + 1] [i_11 + 2] [(signed char)12] [i_11 + 2])));
                        }
                    }
                } 
            } 
        } 
        arr_54 [i_9] = ((/* implicit */unsigned long long int) (-(arr_52 [i_9] [i_9] [i_9] [i_9] [(unsigned char)13] [i_9] [i_9])));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            for (long long int i_17 = 3; i_17 < 15; i_17 += 4) 
            {
                {
                    arr_59 [i_16] [i_16] [i_16] [i_17] = ((/* implicit */unsigned char) ((8173982297413690128ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12679)))));
                    var_35 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_17 - 3] [i_17 - 3] [i_17 + 3])))))));
                    var_36 ^= ((/* implicit */unsigned long long int) arr_36 [i_9] [i_16] [i_16] [i_16]);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned long long int) var_6);
    var_38 = ((/* implicit */unsigned long long int) var_5);
}
