/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10604
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) max((3853025182U), (0U)));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) (short)20291)) : (((((/* implicit */_Bool) 11674855936829850793ULL)) ? (1939246691) : (1939246691)))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) 1939246691)) ? (((/* implicit */unsigned int) 1939246720)) : (0U));
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)35901)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_5]);
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_3] [i_3] [24U])))))));
                        arr_21 [i_5] [2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_4] [i_4]))))) ? (((/* implicit */int) ((short) (~(var_3))))) : (((/* implicit */int) var_1))));
                    }
                    var_24 += ((/* implicit */unsigned int) ((_Bool) arr_18 [i_5] [i_5] [(unsigned short)4] [i_5 + 1]));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_25 [i_3] [i_3] = ((/* implicit */int) (signed char)78);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                arr_32 [i_3] [i_3] [i_3] [(short)12] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) -1939246691)) ? (2618775407U) : (23U)));
                                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [(short)2] [i_4])) + (((/* implicit */int) var_12))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4294967281U)) ? (1939246691) : (((/* implicit */int) (unsigned char)0))))))) ? ((-(max((2692374735462995357ULL), (((/* implicit */unsigned long long int) (short)32767)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_15 [(short)3] [10LL] [9U]), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [(signed char)15] [i_4])))) : (((/* implicit */int) ((arr_29 [i_3] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
                                arr_33 [i_4] [13ULL] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_3] [13ULL] [i_3] [i_3] [i_3] [i_3])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 3] [i_3 + 1])))));
                            }
                        } 
                    } 
                    arr_34 [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9715)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1937))) : (2839025720799329176ULL)));
                }
                arr_35 [i_3] [i_4] [i_4] = ((/* implicit */long long int) arr_30 [i_3] [i_4]);
            }
        } 
    } 
}
