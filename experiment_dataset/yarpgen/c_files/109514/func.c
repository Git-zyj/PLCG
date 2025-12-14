/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109514
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) ((unsigned char) 20U)))))) - (20U)));
                var_18 ^= arr_2 [i_0] [i_1];
                var_19 = ((/* implicit */short) min((13U), (((/* implicit */unsigned int) (short)8301))));
            }
        } 
    } 
}
