/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166384
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
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12176333036926809651ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31457)))))) ? (var_5) : (var_8))))));
    }
}
