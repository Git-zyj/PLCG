/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125063
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
    var_19 |= var_15;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [2] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)-30723)) : (((/* implicit */int) (short)-3)))))));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_0 [24U] [i_0]);
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_0] [i_1] [(unsigned char)3])))));
            var_22 -= ((/* implicit */unsigned long long int) arr_0 [11U] [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) arr_7 [i_2] [24U] [i_0]);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)3])) ? (arr_0 [i_0] [(unsigned char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */int) arr_3 [(short)0])) : (((/* implicit */int) arr_3 [5U]))));
            var_26 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_10 [i_0] [20U] [10U])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
            arr_13 [i_0] = ((((/* implicit */_Bool) arr_11 [(short)24] [(short)21] [20U])) ? (arr_0 [(unsigned short)11] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [24ULL] [(short)14]))));
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [(short)23])) ? (((/* implicit */int) arr_1 [i_5] [i_0])) : (((/* implicit */int) arr_17 [(short)6]))))) ? (((arr_7 [i_0] [i_4] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (arr_0 [i_0] [i_5]))) : (((((/* implicit */_Bool) arr_0 [i_5] [i_4])) ? (arr_0 [i_5] [i_0]) : (arr_18 [i_5] [i_5])))));
                var_28 = arr_19 [i_0] [i_0];
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_14 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [24U])))));
            }
            arr_20 [i_4] = ((/* implicit */short) arr_9 [6] [6] [6]);
        }
        var_30 ^= ((/* implicit */int) arr_2 [(short)6] [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned long long int) arr_18 [(unsigned char)10] [(unsigned char)10]);
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6] [(short)17] [(unsigned short)9])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_15 [i_6] [i_6]))));
    }
    var_31 = ((/* implicit */unsigned short) var_8);
}
