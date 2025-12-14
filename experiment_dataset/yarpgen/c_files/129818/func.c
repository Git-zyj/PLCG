/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129818
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
    var_13 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = arr_0 [i_0];
                arr_4 [i_1] = (signed char)57;
            }
        } 
    } 
}
