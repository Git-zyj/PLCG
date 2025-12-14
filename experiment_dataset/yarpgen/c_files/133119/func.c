/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133119
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
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */signed char) (unsigned short)38005);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)27531))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)27529)) == (((/* implicit */int) (unsigned short)38005)))) || (((/* implicit */_Bool) var_1))));
    }
}
