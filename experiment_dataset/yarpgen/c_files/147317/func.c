/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147317
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((int) (+(arr_4 [i_0] [i_0 - 1] [i_0 + 1])));
                var_14 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]);
                var_15 = max(((unsigned short)63515), (((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_10);
}
