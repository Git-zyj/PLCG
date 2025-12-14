/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141471
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
    var_19 = ((/* implicit */signed char) max((min((((/* implicit */int) (unsigned short)46315)), ((~(((/* implicit */int) (signed char)63)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_5)))) >= (var_18))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)46504)));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26477)) / (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26456))) : (arr_1 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_1 - 2] [i_1 + 2]), (arr_2 [i_1] [i_1 + 2]))))));
        arr_5 [i_1 + 2] = arr_2 [i_1 + 2] [i_1 - 2];
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((long long int) arr_4 [i_1 + 1]))));
    }
    for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((((/* implicit */_Bool) min((arr_3 [i_2] [i_2]), (((/* implicit */unsigned short) (short)-26478))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26456))) : (max((arr_1 [i_2 - 1] [i_2]), (arr_9 [(unsigned short)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26493)))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_25 = ((/* implicit */int) ((var_11) >> (((((/* implicit */int) (short)-26460)) + (26470)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 4; i_5 < 7; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2] [i_2])) ? (arr_18 [i_2]) : (var_10)))) ? ((-(arr_11 [i_5 - 3] [i_5 + 4] [i_5 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1])))));
                        var_27 *= ((/* implicit */unsigned short) arr_16 [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_2 + 1]);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_3] [(signed char)5] [i_5] [i_4] = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned long long int) arr_9 [i_6 - 1]))));
                            arr_24 [i_2 - 1] [i_4] [i_5 + 4] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)34230))));
                            var_28 = ((/* implicit */unsigned short) max((arr_9 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 - 2] [i_5 + 4] [i_6 - 1] [i_6])) && (((/* implicit */_Bool) ((short) (unsigned char)46))))))));
                        }
                        var_29 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [(signed char)5] [i_2 + 1])) ? (((/* implicit */long long int) 3840U)) : (9223372036854775807LL)))) ? (min((arr_20 [10U] [10U] [i_4] [i_5]), (((/* implicit */unsigned long long int) (short)-26493)))) : (max((((/* implicit */unsigned long long int) (short)26493)), (arr_18 [i_4]))))));
                    }
                }
            } 
        } 
    }
}
