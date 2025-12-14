/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107304
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */int) ((arr_1 [i_0]) | (((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) | (((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (min((((/* implicit */long long int) arr_0 [i_0])), (var_8))))))));
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((max((arr_1 [i_0]), (var_5))), (var_0)))), ((+((+(-6LL)))))));
    }
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_16) : (((/* implicit */int) arr_3 [i_1]))))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 3]))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-22915)) * (((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned short)12948)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((arr_4 [i_3]), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_4])))), (((/* implicit */long long int) arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 2])))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_16 [i_1] = arr_11 [i_1] [i_2] [i_5];
                            arr_17 [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_1 - 3]))))) % (max(((-(var_14))), (var_0)))));
                            var_24 *= ((/* implicit */unsigned int) max((((((arr_4 [i_1 + 1]) + (9223372036854775807LL))) << (((arr_1 [i_1 - 1]) - (64619812U))))), ((~(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */long long int) var_0))))))));
                            var_25 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3])) < (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 2] [i_1]))))) > ((~(((((/* implicit */int) var_15)) / (((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_3] [i_1]))))))));
                            arr_18 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2663035813U)))))) + (-8239893731463807647LL)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-22915)), (-6601441006956570963LL)));
                            arr_21 [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */short) var_8);
                        }
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((1426714440U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)11158)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
                            var_28 = ((/* implicit */long long int) (~(max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_11))))));
                        }
                        var_29 |= ((/* implicit */int) max(((~(arr_23 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_23 [i_1 - 2] [i_2] [i_8] [i_9]), (arr_23 [i_1] [i_1] [i_8 + 2] [i_9])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_8] [i_9])) ? (arr_23 [i_1] [i_1] [i_1 - 1] [i_1]) : (arr_23 [i_1] [i_1 - 1] [i_1 + 1] [i_1])))))))));
                    arr_29 [i_9] [i_8] [i_2] [i_1] = ((/* implicit */int) ((((arr_4 [i_8 + 1]) / (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 + 3])))))));
                }
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_8 + 3]) * (arr_1 [i_8 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_1 [i_8 + 2])))))))));
                    var_32 ^= ((/* implicit */long long int) max(((((~(((/* implicit */int) arr_14 [i_10] [i_8] [i_2] [i_1] [i_1] [i_1] [i_1])))) << (((((((arr_4 [i_8]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) + (22190500404710219LL))) - (18LL))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_8 + 3] [i_1] [i_1]))) != (((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                }
                arr_32 [i_1] [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((-18LL), (6LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
            }
            /* vectorizable */
            for (long long int i_11 = 3; i_11 < 16; i_11 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_35 [i_11 - 3] [i_1 + 1])))))));
                arr_36 [i_1] [i_1] [i_1] = (+(((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1] [i_2] [i_1])));
            }
            var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_1 - 1] [i_2] [i_1]))))) ? ((+(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_2])))) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [i_1 - 2] [i_1 - 2] [i_2]))));
            var_35 &= ((/* implicit */int) (!(((/* implicit */_Bool) 6601441006956570957LL))));
        }
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (((+(((arr_11 [i_1] [i_1] [i_1]) & (((/* implicit */unsigned int) var_16)))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) ((arr_20 [i_1] [i_1 - 3] [i_1] [i_1] [i_1]) | (arr_5 [i_1] [i_1 + 1])))))))))))));
    }
    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        var_37 = ((/* implicit */long long int) var_1);
        var_38 &= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)11827))));
    }
    var_39 &= ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned int) (((-(var_17))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))))));
}
