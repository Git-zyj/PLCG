/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118722
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
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned char) var_4);
                var_21 = max((((/* implicit */unsigned int) (short)32238)), ((-(var_14))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_15);
}
