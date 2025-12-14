/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162456
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 + 1] [i_0 + 2]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0 - 1]))))));
                var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                arr_7 [i_0] [15LL] = ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_1);
}
