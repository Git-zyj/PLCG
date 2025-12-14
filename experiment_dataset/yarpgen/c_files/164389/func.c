/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164389
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_13))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0] [i_1])), (583332846)))), (min((((/* implicit */unsigned long long int) var_10)), (11ULL)))));
                var_17 += ((/* implicit */unsigned char) (-(((int) ((((/* implicit */_Bool) 8ULL)) ? (583332846) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
}
