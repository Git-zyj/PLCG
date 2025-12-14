/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128694
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((int) (_Bool)1));
                arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */long long int) ((short) 0));
            }
        } 
    } 
    var_12 = ((/* implicit */short) var_9);
}
