/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11448
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [i_3] [i_3] [i_3] [i_3] = (unsigned short)65508;
                        arr_14 [i_0] [(unsigned short)2] [(unsigned short)2] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-29840))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_15 -= ((/* implicit */unsigned short) (~(arr_12 [i_1])));
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_23 [i_4] [i_2] [i_4 - 1] [i_5] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)41)) ? (var_1) : (((/* implicit */long long int) var_4)))))));
                            var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_17 -= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_20 [i_2] [i_2] [i_4] [i_4] [i_4 + 1])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned char) var_8)))));
                            var_19 = ((/* implicit */long long int) ((((arr_4 [(unsigned short)6] [(short)2]) ? (((/* implicit */int) (unsigned short)15153)) : (((/* implicit */int) var_11)))) <= (((/* implicit */int) ((_Bool) arr_3 [(short)9])))));
                            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-21233))))));
                            arr_27 [i_0 - 1] [i_4] [i_6] = (unsigned short)40633;
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            var_21 = ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_6 [i_2])));
                            var_22 = ((/* implicit */signed char) var_8);
                            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-114)) ? (6870508616282568593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            arr_32 [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(unsigned char)16] [(short)16] [i_4 - 1] [9ULL])) - (((/* implicit */int) var_3))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_5);
                            arr_35 [i_0 - 1] [i_4] [i_0] [i_0] [(unsigned char)3] [2LL] [i_0] = ((/* implicit */int) var_1);
                            var_25 = arr_1 [i_2];
                        }
                        arr_36 [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0])) ? (arr_24 [i_0] [i_2] [i_2]) : (arr_24 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1])) & (((/* implicit */int) arr_22 [i_0] [i_2])))))));
                    }
                    var_26 = ((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) ((short) (signed char)113))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_12);
}
