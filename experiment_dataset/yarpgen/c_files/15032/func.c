/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15032
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
    var_16 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1920)) ? (1322115113U) : (684898707U)));
                var_18 = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
}
