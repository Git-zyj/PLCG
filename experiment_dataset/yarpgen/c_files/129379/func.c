/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129379
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
    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (var_4) : (((/* implicit */int) ((signed char) -6641735048002420962LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(min((arr_3 [i_1]), (((/* implicit */long long int) (~(var_6)))))))))));
                var_20 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)13439)))), (((/* implicit */int) var_9))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (3002920992U))) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) 3002921002U)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 1073740800)))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)82)))));
            }
        } 
    } 
}
