/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106408
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
    var_11 = ((/* implicit */unsigned short) var_6);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                var_14 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
