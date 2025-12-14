/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122229
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
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) 0U)) ? (8532699470269261146ULL) : (4239215154399727584ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8U]))))));
                var_17 |= var_6;
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 397122708U)) || (var_5)));
}
