/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101154
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) var_9)), ((+(var_8)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */int) ((unsigned int) ((short) arr_3 [i_1])));
                arr_4 [i_0] &= ((/* implicit */_Bool) (-(arr_1 [i_1] [i_0])));
            }
        } 
    } 
    var_13 = ((unsigned int) max((min((var_8), (10U))), (((/* implicit */unsigned int) var_6))));
}
