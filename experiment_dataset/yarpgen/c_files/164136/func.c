/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164136
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
    var_16 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */int) ((var_1) ? (max((((unsigned long long int) (signed char)56)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (unsigned short)45952))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))));
                arr_4 [i_0] [4] = ((/* implicit */unsigned short) 2598754415U);
            }
        } 
    } 
}
