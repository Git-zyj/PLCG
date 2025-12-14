/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141570
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 698445722U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((2121307478U), (((/* implicit */unsigned int) (unsigned short)46234))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) arr_4 [8U] [i_1] [8U])), (14840877497869499541ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30799)))))) ? (((/* implicit */unsigned int) -1293212286)) : (((((/* implicit */_Bool) 2121307478U)) ? (2159773340U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46237))))))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (min((var_10), (((/* implicit */unsigned int) (unsigned short)16)))) : (((((/* implicit */_Bool) arr_5 [12U] [12U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_5 [i_1] [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_5 [i_1] [10]) & (1U)))))))))));
                }
            } 
        } 
    } 
}
