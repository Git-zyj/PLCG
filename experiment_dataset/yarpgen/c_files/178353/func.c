/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178353
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1] [i_0] [i_2 - 2]), (((/* implicit */unsigned long long int) max((arr_7 [i_0 + 1] [11] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0] [i_0 - 1])))))))) ? ((-(arr_6 [i_0 - 1] [i_0] [i_0] [15]))) : (max((((unsigned long long int) (short)29358)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [3U] [i_0] [i_2 - 1])) && (((/* implicit */_Bool) var_9)))))))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) var_6)))))));
                                var_19 = ((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) 2305843009211596800LL)) || ((_Bool)1))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (3890845357349630250ULL)))))))) - (2305843009211596800LL)));
                }
            } 
        } 
    } 
    var_20 -= ((_Bool) ((((((((/* implicit */int) (short)-7639)) & (((/* implicit */int) var_8)))) + (2147483647))) >> ((((~(((/* implicit */int) var_4)))) - (32047)))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-((~(min((((/* implicit */unsigned int) arr_18 [i_6])), (arr_0 [i_5] [i_5]))))))))));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), ((-(arr_4 [i_5] [i_6] [i_5])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_31 [i_5] [i_6] [i_7] [i_5] [i_9] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) min((arr_23 [i_5] [i_5] [i_5] [i_5]), (var_4))))))) && (((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) / (((/* implicit */int) var_16)))))))));
                                var_23 = ((/* implicit */unsigned short) (~(min((max((((/* implicit */long long int) var_2)), (arr_10 [i_5]))), (((/* implicit */long long int) (signed char)48))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 2; i_10 < 13; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (signed char i_12 = 4; i_12 < 10; i_12 += 4) 
                        {
                            {
                                arr_41 [i_5] [i_5] = ((/* implicit */signed char) min((arr_22 [i_5]), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 9223372036854775796LL)))))))));
                                var_24 |= min((min((arr_5 [i_6] [i_6] [i_10 - 2] [i_12 + 1]), (arr_30 [i_6 - 2] [i_6 - 1] [i_10 - 2] [i_12 + 1] [i_12]))), (((/* implicit */signed char) arr_28 [i_6] [i_6] [i_10 - 1] [i_12 - 4] [i_12 + 3] [i_12] [i_12])));
                            }
                        } 
                    } 
                    arr_42 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_3);
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    arr_46 [i_13 + 1] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)225))));
                    var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_43 [i_5] [i_13] [i_13 - 1] [i_6 - 1]))));
                    var_26 = (+(arr_22 [i_6 + 1]));
                    arr_47 [i_5] [i_5] = ((/* implicit */unsigned char) ((int) var_11));
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_13] [i_13] [i_5])) ? (((/* implicit */unsigned long long int) -2305843009211596796LL)) : (arr_6 [i_5] [i_6] [i_5] [i_6])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5]))) < (var_9)))) : (((arr_15 [i_5]) << (((var_2) - (1892807513U)))))));
                }
                var_28 = ((/* implicit */int) arr_30 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2]);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_6))))));
}
