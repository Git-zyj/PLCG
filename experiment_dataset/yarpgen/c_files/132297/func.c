/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132297
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
    var_11 |= ((/* implicit */signed char) ((_Bool) var_7));
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1))))))))));
                var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) || (((/* implicit */_Bool) arr_5 [i_0])))) ? (((/* implicit */int) ((_Bool) arr_5 [i_0]))) : (min((min((((/* implicit */int) var_2)), (var_6))), (((/* implicit */int) arr_5 [i_0]))))));
            }
        } 
    } 
}
