/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127962
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
    var_15 |= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 |= ((/* implicit */int) max((((/* implicit */long long int) (signed char)127)), (arr_3 [i_0])));
                arr_5 [15LL] = ((signed char) -1947652617);
            }
        } 
    } 
}
