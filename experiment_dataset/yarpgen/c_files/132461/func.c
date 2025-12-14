/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132461
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59984)) ? (((/* implicit */int) var_5)) : (var_8)))) ? (max((var_11), (var_2))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_12)))))) ? (((((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) + (289572210U)))) + (((((/* implicit */long long int) var_13)) - (var_11))))) : ((-(var_7)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (2546952911693406688ULL) : (2546952911693406687ULL)))) ? (var_13) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_14))))))))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)5550)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 312697021U)) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    var_17 = ((/* implicit */unsigned int) ((long long int) var_6));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 15899791162016144925ULL);
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)59985));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (~((~(var_1)))));
                }
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((((/* implicit */long long int) var_8)) > (var_11)))))), (arr_15 [i_0] [i_1] [i_5] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [23LL] [i_5] [9U] [i_6] [i_7]))) | (arr_9 [i_0] [i_5] [i_0] [i_0])))) ? (((arr_1 [i_7]) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) var_13)))))))));
                                var_21 &= ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)220)) | (-496016610))))));
                                var_22 = ((/* implicit */signed char) 14795549101918944447ULL);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_1]) <= (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [16] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (signed char)40)) > (((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [9] [i_8] [i_8] [i_9]))))), (max((496016597), (((/* implicit */int) (unsigned char)103))))));
                                var_24 = ((/* implicit */long long int) max((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_5 [i_5] [i_8]))))))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */long long int) arr_4 [i_0] [(unsigned char)24]))))))) ? (min((max((var_12), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_5] [i_9])))), (((/* implicit */long long int) max((var_6), (var_10)))))) : (((/* implicit */long long int) var_8))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [24U] [i_1] [i_1] [i_1] [i_1] [15ULL]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 1) 
                {
                    arr_30 [i_10] [i_1] [i_0] [i_10] = ((/* implicit */signed char) (-(var_13)));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_33 [i_11] [i_11] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */long long int) arr_27 [i_0] [i_0] [i_1] [16LL] [i_11]);
                        arr_34 [i_10] [i_10] [i_10] [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_10] [i_0])) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) var_3)) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97)))))) : (((((/* implicit */_Bool) var_6)) ? (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_23 [i_0] [i_0]))) : (((/* implicit */unsigned int) var_13))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_27 = var_13;
                        arr_38 [i_10] [i_10] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_5))))));
                        arr_39 [i_0] [i_1] [i_10 + 2] [i_12] [i_10] = ((/* implicit */int) arr_23 [i_1] [i_10 - 2]);
                        arr_40 [i_0] [i_10] [i_10] [i_12] [i_1] [(signed char)7] = ((/* implicit */int) (unsigned short)34809);
                    }
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((289572198U), (arr_23 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((arr_1 [i_1]) - (2439817351582593220LL)))))) ? ((-(arr_3 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_13)) : (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 2191135521U))))))));
            }
        } 
    } 
}
