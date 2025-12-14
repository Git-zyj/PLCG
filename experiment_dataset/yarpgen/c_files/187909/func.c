/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187909
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
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((((/* implicit */int) var_3)), (-1355614120)));
                    var_22 = ((/* implicit */unsigned char) arr_2 [i_0 - 2]);
                }
            } 
        } 
    } 
}
