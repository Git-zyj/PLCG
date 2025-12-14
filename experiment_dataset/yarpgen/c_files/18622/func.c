/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18622
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
    var_19 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = (!(((/* implicit */_Bool) (~(3865859624U)))));
                var_21 += ((/* implicit */long long int) (-(((/* implicit */int) min((var_6), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_7);
    var_23 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_14)))) ? (2707017124U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */short) (signed char)(-127 - 1))))))))));
}
