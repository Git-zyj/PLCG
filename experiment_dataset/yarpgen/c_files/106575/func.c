/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106575
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
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1 - 3] [1LL] = ((long long int) (-(1009285260)));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    } 
}
