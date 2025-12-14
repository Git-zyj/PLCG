/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170042
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
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) 2283429403U);
                var_20 += ((/* implicit */_Bool) ((314155230) * ((((!(var_0))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (arr_1 [i_1]))) : (((/* implicit */int) ((((/* implicit */int) var_16)) == (var_9))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_0])) && (((/* implicit */_Bool) var_2)))))));
                var_22 = ((/* implicit */_Bool) var_13);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_17))));
}
