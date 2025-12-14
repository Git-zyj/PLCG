/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111385
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
    var_11 = ((/* implicit */unsigned long long int) ((short) var_7));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((314235777U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_1] [i_3])) ? (arr_13 [i_0] [i_3] [i_0] [i_0] [i_4] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) var_8)))) <= (((/* implicit */long long int) arr_0 [i_1] [17ULL])))) ? (((((/* implicit */_Bool) arr_8 [i_0] [2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)18] [i_0] [14]))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_3 - 1]))) : (-9223372036854775802LL));
                                var_13 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [16ULL] [i_0 - 1])))), (((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_4] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_1] [i_1])))) ? (((unsigned long long int) arr_6 [i_0] [i_0 - 1] [i_0] [17ULL])) : (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] [4ULL] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) <= (((/* implicit */int) (unsigned char)134)))))));
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_5] [i_5] [(short)12] [i_5] [i_5] [(short)12]), (((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_2 [i_5] [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)30)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        arr_30 [i_9] [i_8] [i_6] [i_6] [(unsigned char)4] [i_6] = ((/* implicit */int) arr_18 [i_6] [i_8]);
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_25 [i_6] [i_7] [11] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_7 + 1] [i_7 + 1])))));
                        arr_31 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_8] [i_8] [i_6])) ? (((/* implicit */int) arr_5 [(short)20] [i_7] [i_8] [i_9])) : (((/* implicit */int) arr_5 [i_6] [i_7 - 2] [i_8] [i_9]))));
                    }
                } 
            } 
        } 
        arr_32 [i_6] = ((/* implicit */int) ((unsigned long long int) arr_19 [i_6]));
    }
}
