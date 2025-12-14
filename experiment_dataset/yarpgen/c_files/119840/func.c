/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119840
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) ((unsigned short) (signed char)28));
                    arr_7 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_2 [i_4]) : (arr_2 [i_4])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_18 = arr_11 [i_3 - 1] [i_3 - 1];
                        var_19 = ((/* implicit */int) var_9);
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] [i_5 + 3] [i_7 - 2] [i_5 + 3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (min((((/* implicit */int) (signed char)-28)), (arr_13 [i_3] [i_4] [i_5 + 2] [i_5 + 2]))) : (((((/* implicit */int) (signed char)-28)) * (((/* implicit */int) var_2)))))) > (((/* implicit */int) var_0))));
                                var_20 ^= ((/* implicit */short) min((((/* implicit */long long int) (signed char)-74)), (((((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5 - 1] [i_4] [i_4])) ? (((/* implicit */long long int) 1U)) : (arr_12 [i_7 + 1]))) & (((/* implicit */long long int) max((arr_13 [i_8] [i_4] [i_8] [i_8]), (((/* implicit */int) (signed char)74)))))))));
                                var_21 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) & (((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_3 - 1] [i_3 - 1]))) : (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 2] [i_8])))))) ? (((2997633208U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 1] [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [i_4] [i_4] [i_4] [i_7 - 2] [i_7 + 1] [i_8])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-89)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) << (((((/* implicit */int) (short)5436)) - (5436)))))) ? (((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) var_12))))) : (((/* implicit */int) ((short) var_10)))))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_13))));
}
