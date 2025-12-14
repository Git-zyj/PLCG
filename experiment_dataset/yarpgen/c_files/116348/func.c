/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116348
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_8))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_7);
    var_23 *= ((/* implicit */long long int) var_0);
    var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)126)) : ((~(-1097728063)))));
}
