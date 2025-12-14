/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108316
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
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2])) << (((((/* implicit */int) (short)-4951)) + (4966)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) var_16);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4190208)) - (549755813887ULL)));
    var_20 = ((/* implicit */short) min((max((((/* implicit */int) min((var_7), (var_5)))), (((((/* implicit */int) var_8)) - (var_10))))), (var_10)));
}
