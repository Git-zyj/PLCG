/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149639
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11)))) : (max((967536493), (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
}
