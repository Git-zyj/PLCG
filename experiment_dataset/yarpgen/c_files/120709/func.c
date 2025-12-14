/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120709
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_3)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0 + 1] [(unsigned short)6] [i_1] [i_2 - 1] |= ((/* implicit */unsigned short) (signed char)116);
                    var_16 = (+(((/* implicit */int) (signed char)-117)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (signed char)112);
}
