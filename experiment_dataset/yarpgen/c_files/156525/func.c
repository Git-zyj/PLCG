/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156525
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
    var_20 |= ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) / (-419199148959675198LL))), (((/* implicit */long long int) min((((/* implicit */int) var_15)), (((((/* implicit */int) arr_3 [i_0])) / (816222329))))))));
                var_22 *= ((/* implicit */signed char) var_17);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 144114638320041984ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))))));
}
