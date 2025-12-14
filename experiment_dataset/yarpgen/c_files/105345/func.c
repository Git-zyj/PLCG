/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105345
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
    var_15 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), ((unsigned short)40376)));
                var_17 = ((/* implicit */short) arr_2 [i_1] [i_1]);
            }
        } 
    } 
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_11))))))));
}
