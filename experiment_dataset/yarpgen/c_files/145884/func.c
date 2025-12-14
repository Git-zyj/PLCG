/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145884
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)1023))))));
        var_17 |= ((/* implicit */int) (~((-(3724059943968835791ULL)))));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_4 [i_0] = arr_2 [(_Bool)1];
    }
    var_19 = ((/* implicit */_Bool) var_11);
    var_20 = ((/* implicit */_Bool) var_11);
}
