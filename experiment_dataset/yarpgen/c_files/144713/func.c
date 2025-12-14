/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144713
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
    var_20 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [9ULL] [3] [i_0 - 1] = ((/* implicit */_Bool) (signed char)126);
                arr_6 [1U] = ((/* implicit */unsigned char) var_0);
                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)124))));
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_14) + (2147483647))) << (((((min((-4247621326973554673LL), (((/* implicit */long long int) var_10)))) + (4247621326973554682LL))) - (9LL)))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_23 &= 4247621326973554672LL;
}
