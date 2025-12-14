/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181574
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
    var_13 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((short) var_1))) && (((/* implicit */_Bool) ((int) var_8))))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_11))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4988)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) >> (((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_10))), (((/* implicit */unsigned long long int) var_1)))) - (1695446035185626347ULL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) arr_3 [i_0] [i_1 - 1])) ? (((int) (_Bool)1)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967294U)))) ? (((/* implicit */int) ((_Bool) arr_1 [(short)6]))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((min((min((4294967294U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((_Bool) var_1))))) % (((/* implicit */unsigned int) var_4))));
}
