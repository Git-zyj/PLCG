/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105704
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) * (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_1])))))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))))) ? (77358517U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_12);
}
