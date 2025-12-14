/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164630
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
    var_11 = var_10;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 21ULL)))));
                var_13 = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
}
