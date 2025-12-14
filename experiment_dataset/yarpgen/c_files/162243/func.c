/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162243
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22942)) ? (((((/* implicit */unsigned int) var_3)) & (((2763613162U) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (0U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_2 [24LL] [i_0] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54140))) : (var_18))) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)139))));
                arr_6 [i_1] [i_0] [(unsigned short)20] = ((/* implicit */int) min((((/* implicit */long long int) var_6)), (var_18)));
            }
        } 
    } 
    var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned short)8779), (((/* implicit */unsigned short) var_19))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((var_15) >= (var_15))))))) & (((var_7) / (min((var_12), (((/* implicit */long long int) 1169268218U))))))));
}
