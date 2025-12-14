/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155042
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
        var_13 = ((/* implicit */_Bool) min((var_13), (var_0)));
        var_14 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) max((var_8), (arr_1 [(unsigned char)15])))) & (((/* implicit */int) var_10))))));
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((signed char) var_1))))));
    }
    var_16 = ((_Bool) var_6);
}
