/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164328
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
    var_15 |= ((/* implicit */short) ((unsigned short) ((unsigned char) ((unsigned long long int) (_Bool)0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((signed char) ((((/* implicit */int) (unsigned short)17)) >= (((/* implicit */int) (short)8155))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_2))));
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (var_6)));
}
