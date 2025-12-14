/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159141
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */long long int) var_4);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 1546485083)) ? (((/* implicit */unsigned long long int) -1)) : (3626871270693201517ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_1);
}
