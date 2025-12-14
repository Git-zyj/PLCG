/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181288
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
    var_11 ^= ((/* implicit */short) max((((/* implicit */long long int) min((var_10), (((short) 642744505U))))), (((long long int) 7U))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (arr_1 [i_1 - 1] [i_1 - 1]))))));
                arr_5 [i_0] &= ((/* implicit */unsigned int) min(((~(var_8))), (((/* implicit */long long int) var_5))));
            }
        } 
    } 
}
