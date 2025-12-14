/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127533
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) min(((short)2475), (((/* implicit */short) var_4))))) : (((/* implicit */int) (short)-2475))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (((2488316677166614339LL) >> (((264141736U) - (264141730U)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) 2408321583U);
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_14);
}
