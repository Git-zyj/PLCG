/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12374
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 362249859U)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_7)) << (((var_11) - (6373820198233761446LL)))))));
                                var_14 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_2])) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [i_1])))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (arr_6 [i_0] [i_0] [i_3] [i_5]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)231))))))) & (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((unsigned short) (unsigned char)125))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */short) var_10)), (max((((/* implicit */short) arr_0 [i_1])), ((short)27218)))))), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) <= (var_11)))) | (((/* implicit */int) var_6))))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_16 ^= var_12;
                                arr_19 [i_0] [i_1] [(short)3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) -791864092)) & (arr_13 [i_0] [i_0] [i_2] [i_3] [i_6]))) << (((((max((((/* implicit */long long int) (signed char)-82)), (-4938116627499728378LL))) + (116LL))) - (32LL)))));
                            }
                            arr_20 [i_1] [i_1] [2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_1)))) ? (((/* implicit */int) (short)-27218)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_0))))))));
                            var_17 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (arr_13 [i_0] [i_1] [i_1] [5LL] [i_3]) : (((/* implicit */long long int) arr_14 [i_1]))))) < (min((10120558781330034088ULL), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0)))))));
                        }
                    } 
                } 
                arr_21 [(_Bool)1] = ((/* implicit */short) ((max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10)))), (((/* implicit */int) var_0)))) + (((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)3943)))) >> (((((/* implicit */int) arr_4 [17ULL] [i_0] [i_0])) - (166)))))));
                var_18 = ((/* implicit */short) ((min((arr_13 [i_0] [i_0] [i_0] [i_0] [14ULL]), (((/* implicit */long long int) (signed char)-94)))) <= (((/* implicit */long long int) 4266148052U))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) var_12);
}
