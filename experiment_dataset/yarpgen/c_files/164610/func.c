/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164610
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = var_15;
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) (signed char)77)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-14))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17)))))))));
}
