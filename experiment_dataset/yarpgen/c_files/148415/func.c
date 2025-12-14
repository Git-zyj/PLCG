/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148415
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 1] |= ((/* implicit */unsigned short) (-(max((5927365001917078012LL), (((/* implicit */long long int) (short)1984))))));
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))));
            }
        } 
    } 
    var_16 -= var_1;
    var_17 |= ((/* implicit */unsigned char) var_9);
}
