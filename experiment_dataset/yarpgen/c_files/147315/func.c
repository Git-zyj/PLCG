/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147315
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
    var_12 = ((/* implicit */unsigned char) (short)32750);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_1 - 1] = (-(max(((~(((/* implicit */int) (unsigned char)29)))), (((/* implicit */int) (short)-1)))));
                var_13 = min((var_7), (var_0));
            }
        } 
    } 
}
