/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116185
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min(((+(((/* implicit */int) max(((unsigned char)0), ((unsigned char)207)))))), (((/* implicit */int) var_3)))))));
                var_13 = (-(max((((/* implicit */long long int) (~(82261666U)))), ((~(var_7))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_9);
}
