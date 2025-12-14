/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146609
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))));
    var_21 = var_13;
    var_22 = ((/* implicit */unsigned int) (+((-(var_5)))));
    var_23 = ((/* implicit */short) (+((-(var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_24 *= ((/* implicit */short) arr_2 [i_0 - 2] [i_1]);
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_3 [i_1])))))))));
                var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                var_27 = ((/* implicit */signed char) arr_3 [i_0 - 4]);
            }
        } 
    } 
}
