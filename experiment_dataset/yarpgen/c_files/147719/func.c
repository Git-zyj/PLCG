/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147719
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
    var_16 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 &= var_4;
                var_18 = ((/* implicit */long long int) (-(((int) var_10))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) 3181461970U)) : (9213725827804902304LL)))) ? ((+(4294967292U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) -1LL);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-43)) && (((/* implicit */_Bool) 6079885220837138853LL)))))));
}
