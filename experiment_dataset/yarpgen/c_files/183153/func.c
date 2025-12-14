/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183153
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = 2147483647;
                arr_5 [i_0] [i_1] [1] = ((/* implicit */long long int) var_8);
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((signed char) (+(((unsigned long long int) var_10)))));
}
