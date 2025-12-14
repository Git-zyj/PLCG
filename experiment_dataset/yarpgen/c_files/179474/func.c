/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179474
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
    var_11 = ((/* implicit */_Bool) min((min((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (var_0))), (((/* implicit */short) var_5))));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((((min((var_4), (((/* implicit */long long int) var_5)))) + (((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_2)))))), (((/* implicit */long long int) (+((~(var_1)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) var_5);
                var_14 = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
            }
        } 
    } 
}
