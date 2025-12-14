/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168772
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] &= ((/* implicit */int) arr_0 [i_0] [i_0]);
                arr_6 [i_0] [11LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)41))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((long long int) (~(max((3597655235U), (((/* implicit */unsigned int) var_17))))))))));
    var_19 = var_14;
}
