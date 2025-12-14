/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136521
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) / (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) var_2);
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned long long int) var_3)))))));
            }
        } 
    } 
}
