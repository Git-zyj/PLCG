/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188737
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
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) arr_1 [i_0]))))));
                var_11 += (-((+(((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_1])))));
            }
        } 
    } 
    var_12 = ((((/* implicit */_Bool) -1698291850)) ? (-1698291850) : ((-2147483647 - 1)));
    var_13 = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) min((var_5), (((/* implicit */int) var_8))))));
}
