/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106688
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
    var_18 = min((var_10), (((unsigned short) (!(((/* implicit */_Bool) (unsigned short)25112))))));
    var_19 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 -= max((var_9), ((unsigned short)63171));
                arr_5 [i_1] [i_1] [i_1] = ((unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) % ((-(((/* implicit */int) (unsigned short)45000))))));
            }
        } 
    } 
}
