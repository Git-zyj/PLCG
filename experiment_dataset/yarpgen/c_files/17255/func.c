/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17255
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((unsigned int) ((var_10) / (((/* implicit */int) var_2))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_9)))))) - (((-904434925499668598LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */_Bool) min((var_15), ((!(((_Bool) var_9))))));
    }
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_14)) - (43785)))));
}
