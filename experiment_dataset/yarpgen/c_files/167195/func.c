/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167195
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
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (~(var_0))));
                arr_7 [i_0] [i_0] [i_0] = arr_2 [i_0] [i_0] [i_0];
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_4);
}
