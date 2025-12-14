/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101149
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_10)));
                    var_15 = ((/* implicit */_Bool) 4294967295U);
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) 263284566))))) ? (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) * (((/* implicit */unsigned long long int) 2881573955U)))) : (((unsigned long long int) 6610404985599255459LL)));
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) ((unsigned short) var_4)))));
}
