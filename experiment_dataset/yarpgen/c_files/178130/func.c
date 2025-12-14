/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178130
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
    var_15 = ((/* implicit */signed char) max((var_14), (((/* implicit */short) var_11))));
    var_16 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) arr_2 [(unsigned short)10] [i_0 - 1]);
                var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1]))))) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-121))))));
            }
        } 
    } 
}
