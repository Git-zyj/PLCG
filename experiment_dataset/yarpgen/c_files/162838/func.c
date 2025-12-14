/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162838
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0 - 3] [i_0 + 1] [i_0]), (arr_6 [i_0 - 2] [i_0 - 2] [i_0]))))) - (min((min((((/* implicit */unsigned long long int) var_14)), (5483393403979419250ULL))), (((/* implicit */unsigned long long int) (+(1229889741))))))));
                var_18 = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_19 = max((((/* implicit */int) var_11)), (((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_11)) - (65146))))));
}
