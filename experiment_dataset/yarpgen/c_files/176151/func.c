/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176151
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_2] [i_2] [15U] [i_2 - 1] [(signed char)3] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_0]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [1U] [i_0]))) & (16305681485554359477ULL))) : (((/* implicit */unsigned long long int) ((int) arr_5 [i_0])))))) && (((/* implicit */_Bool) (~(((int) 9360444548887305659ULL)))))));
                            var_11 = ((/* implicit */_Bool) ((var_8) | (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [(unsigned short)16])) ? (arr_3 [i_2]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2]))))) ^ (((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) / (1688347700909061042ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16758396372800490573ULL)) ? (((/* implicit */int) (unsigned short)41829)) : (-4)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [(short)2] [i_1])) & (((/* implicit */int) max((arr_1 [i_0]), (var_2)))))))));
                arr_16 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [(short)6] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) (unsigned short)23706)))) : (((/* implicit */int) (short)511)))) >= (((/* implicit */int) ((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) 8467993405606886908ULL);
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_10);
}
