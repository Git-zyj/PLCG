/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163403
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
    var_15 = ((/* implicit */short) (~(var_10)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */int) ((_Bool) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)1)))));
                var_17 *= ((/* implicit */_Bool) (-((+(12061039561875730057ULL)))));
            }
        } 
    } 
}
