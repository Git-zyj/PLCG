/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15707
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
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)-59)) - (((/* implicit */int) (signed char)113)))), (((/* implicit */int) ((_Bool) max((((/* implicit */short) var_4)), (var_2)))))));
    var_21 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-59))));
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
            }
        } 
    } 
}
