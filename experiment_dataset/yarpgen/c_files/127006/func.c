/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127006
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
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) arr_0 [i_0]);
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_19)))))) % (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
}
