/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184304
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_1])), (-9128783703763950929LL))) << (0LL))) / (arr_0 [i_1])));
                var_19 = ((/* implicit */unsigned int) max((max((-5570999865278610779LL), (((/* implicit */long long int) 1947482043)))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_6);
    var_21 += ((/* implicit */unsigned long long int) var_1);
}
