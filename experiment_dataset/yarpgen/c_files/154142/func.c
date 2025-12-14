/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154142
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
    var_17 = var_16;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_1), (((/* implicit */short) ((var_5) <= (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_1 + 1] [i_1 - 1])))))));
                    var_19 = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
}
