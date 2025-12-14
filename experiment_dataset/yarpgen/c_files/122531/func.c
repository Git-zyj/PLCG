/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122531
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((1023) != (((/* implicit */int) (short)13162))))) - (((/* implicit */int) var_11))));
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_9)), (var_4)));
                var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) (signed char)-16)) ^ (((/* implicit */int) var_15)))), (((/* implicit */int) (short)-27490))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min(((signed char)89), (var_8)));
}
