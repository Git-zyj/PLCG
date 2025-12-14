/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131407
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_0))));
            arr_6 [i_1] = ((/* implicit */int) arr_1 [i_0]);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_4] [i_2]);
                            arr_16 [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = arr_13 [i_0] [i_0] [i_0] [i_3] [i_0];
                        }
                    } 
                } 
            } 
            var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_10))))) + (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) && (((/* implicit */_Bool) ((max((var_7), (((/* implicit */int) arr_10 [i_0] [i_0] [0ULL])))) & (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [(_Bool)0])))))))));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */long long int) var_15);
        arr_18 [i_0] = ((/* implicit */unsigned long long int) arr_14 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [i_0] [i_0] [(short)8]);
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_11)))))) && (arr_5 [i_0] [i_5])));
            var_21 += ((/* implicit */unsigned int) ((arr_0 [i_0]) - (((/* implicit */long long int) var_4))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned short) var_4);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_4))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_8] [i_8]);
                            var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_30 [i_8] [i_7] [i_5] [i_7] [i_7] [i_8])), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_31 [i_0] [i_0] [i_0] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_0] [i_8] [i_5] [i_7])))))))));
                            var_26 = ((/* implicit */unsigned char) var_0);
                        }
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            arr_34 [i_0] [i_5] [i_5] [i_9] [i_9] = ((/* implicit */int) arr_4 [i_0] [i_7] [i_9]);
                            arr_35 [i_0] [i_5] [i_5] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_9])) && (((((/* implicit */unsigned long long int) arr_30 [i_9] [i_5] [i_9] [1] [i_0] [7ULL])) > (arr_33 [i_0] [(unsigned char)0] [i_6] [i_7] [i_9] [i_7] [i_0])))));
                        }
                        var_27 = min((((/* implicit */int) arr_28 [i_7] [i_5] [i_5] [i_7])), (((((arr_13 [i_0] [i_5] [(short)5] [i_0] [(short)5]) + (2147483647))) << (((((arr_13 [i_0] [i_5] [i_0] [i_0] [i_7]) + (598295945))) - (18))))));
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        arr_38 [17ULL] [i_10] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_10])) != (var_13)))) == (var_4)));
        var_29 = ((/* implicit */short) ((((/* implicit */int) (signed char)15)) >= (((/* implicit */int) (short)1395))));
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            {
                var_30 *= ((/* implicit */unsigned char) max((((arr_43 [6]) * (arr_43 [2ULL]))), (max((arr_40 [10LL] [(unsigned char)12]), (var_16)))));
                var_31 -= ((/* implicit */short) var_14);
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            {
                                var_32 = (i_11 % 2 == zero) ? (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_11] [i_14] [(_Bool)1] [i_15]))) * (min((((/* implicit */long long int) arr_45 [i_11] [i_11] [9] [i_11])), (arr_44 [i_11]))))), (((/* implicit */long long int) var_3))))) : (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_11] [i_14] [(_Bool)1] [i_15]))) / (min((((/* implicit */long long int) arr_45 [i_11] [i_11] [9] [i_11])), (arr_44 [i_11]))))), (((/* implicit */long long int) var_3)))));
                                var_33 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (var_15)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) var_15))));
}
