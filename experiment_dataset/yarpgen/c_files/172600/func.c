/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172600
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((arr_0 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])) : (arr_1 [i_0] [i_0 - 1])));
        var_18 = ((/* implicit */long long int) ((arr_2 [i_0 - 1] [i_0 - 1]) ? (((((/* implicit */_Bool) var_16)) ? (var_2) : (var_4))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))) : (var_6))))));
        var_19 = ((/* implicit */_Bool) ((unsigned long long int) -1868402047));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 - 1])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_4 [i_1] [i_0]))));
            var_23 ^= ((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [i_0 + 1]));
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((var_7) << (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2]))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_0 - 1]) ? (arr_8 [i_3] [i_2] [i_3] [i_4]) : (((/* implicit */int) arr_10 [i_0 - 1]))))) ? (((var_13) ? (((/* implicit */int) arr_12 [i_0] [(unsigned char)3] [i_0] [10ULL] [(unsigned char)3] [(unsigned char)3])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_9 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_4]))));
                        arr_13 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_11 [i_2] [i_2] [i_4] [i_4]) ? (((/* implicit */int) arr_10 [10ULL])) : (((/* implicit */int) var_5))))) & (arr_5 [i_0 + 1] [i_2] [i_3 + 1])));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_3 + 1] [i_3 - 1])) ? (arr_3 [i_0 - 1] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_3 - 3] [i_3 + 1])))));
                    }
                } 
            } 
            arr_14 [i_0 - 1] [i_2] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_6 [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_3))))) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_27 -= ((/* implicit */unsigned long long int) arr_15 [i_5]);
        var_28 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42442))) <= (0LL)))), (max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_7))))), (((arr_17 [i_5]) % (((/* implicit */int) var_9))))))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_20 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) min((var_8), (((/* implicit */short) arr_15 [i_5]))))), (((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_16 [i_5])) - (46507))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_5])), (var_7)))))))));
            var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_18 [i_5])))), (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_18 [i_6]))))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_30 = ((/* implicit */_Bool) ((arr_19 [i_5]) ? (((/* implicit */int) arr_21 [i_5] [i_7])) : (((/* implicit */int) arr_21 [i_7] [i_5]))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_8 + 1])) + (((/* implicit */int) arr_15 [i_8 + 2]))));
                var_32 *= ((/* implicit */unsigned long long int) arr_25 [i_8] [i_8 - 1] [i_8 + 2] [i_8 + 2]);
                arr_28 [i_5] = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_8 + 2] [i_8 + 2] [i_8]);
            }
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_9] [i_5] [i_5])) ? (((/* implicit */int) arr_31 [i_5] [i_9])) : (((/* implicit */int) arr_15 [i_5]))));
            arr_32 [i_5] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_0) : (var_7)));
            arr_33 [i_5] [i_5] = ((((/* implicit */int) arr_31 [i_5] [i_5])) < (((((/* implicit */_Bool) arr_21 [i_5] [i_9])) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) var_14)))));
            var_34 = ((/* implicit */short) ((unsigned char) var_1));
        }
    }
    var_35 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) var_8)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (var_13)))))))), (min((((/* implicit */unsigned long long int) var_3)), (min((var_7), (((/* implicit */unsigned long long int) var_9))))))));
    var_36 = max((var_1), (max((min((((/* implicit */unsigned long long int) var_13)), (var_0))), (var_2))));
}
