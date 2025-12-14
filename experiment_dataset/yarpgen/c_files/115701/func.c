/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115701
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(_Bool)1] [2] &= ((/* implicit */signed char) ((short) 1716417384));
                var_20 ^= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                var_21 -= ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (+(var_3))))));
}
