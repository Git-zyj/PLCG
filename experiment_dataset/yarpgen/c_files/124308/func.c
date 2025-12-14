/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124308
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
    var_11 -= var_9;
    var_12 = ((long long int) var_5);
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) 511189236);
                var_15 = ((/* implicit */short) (~(-511189237)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min(((unsigned short)32218), (((/* implicit */unsigned short) (short)15330))));
}
