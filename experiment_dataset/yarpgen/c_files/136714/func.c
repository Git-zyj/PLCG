/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136714
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
    var_12 = ((/* implicit */short) ((5751317100362952664ULL) << (((((/* implicit */int) (signed char)-33)) + (92)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */long long int) var_6);
                var_13 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0])) > (var_3))) ? (((5751317100362952664ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0])))))));
            }
        } 
    } 
}
