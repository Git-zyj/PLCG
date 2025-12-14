/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147379
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (+((-(var_5))))));
                arr_6 [(_Bool)1] [i_1] [i_1] = max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)13544));
                arr_7 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)2032))));
                arr_8 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) || ((_Bool)0)));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_8);
}
