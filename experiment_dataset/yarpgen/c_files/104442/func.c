/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104442
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                arr_8 [i_0] = ((/* implicit */_Bool) 1531799367U);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_6);
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 = ((/* implicit */unsigned int) var_7);
}
