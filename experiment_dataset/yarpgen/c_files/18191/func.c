/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18191
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = var_7;
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 482376244)) ? (((/* implicit */int) arr_0 [i_0])) : (1591376252))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (~(1591376252)));
}
