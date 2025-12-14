/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17988
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
    var_20 = ((/* implicit */_Bool) ((int) var_10));
    var_21 = ((/* implicit */long long int) var_1);
    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) max((var_14), (((/* implicit */signed char) ((_Bool) var_16))))));
    var_23 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) var_4)))));
                arr_5 [i_0] [i_1] = var_19;
            }
        } 
    } 
}
