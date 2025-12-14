/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122963
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
    var_10 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)43740)))) : (((/* implicit */int) ((unsigned short) (unsigned short)21796)))))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43740)) ? (var_5) : (((/* implicit */int) (unsigned short)21799))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3244))) & (17540903107906179601ULL))) : (((/* implicit */unsigned long long int) 462997650)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)43737)) : (arr_5 [(unsigned short)4] [i_1] [i_1])))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (unsigned short)51313)) : (((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43741))) & (4294967287U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) ((2886296657U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))))))))) : (((((/* implicit */_Bool) (-(2174141838U)))) ? (((var_2) >> (((-462997651) + (462997679))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                }
            } 
        } 
    } 
}
