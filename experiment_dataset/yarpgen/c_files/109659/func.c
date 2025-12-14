/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109659
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (_Bool)1);
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((2591084509U) < (2591084488U))))))));
                arr_7 [(signed char)5] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_0)))))));
    var_22 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_17))));
}
