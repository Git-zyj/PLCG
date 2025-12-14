/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168728
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((-((+(var_14))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 3] [i_1]))) | (min((((/* implicit */unsigned int) var_3)), (1073056597U)))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_16 = var_14;
}
