/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121755
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
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((long long int) var_3));
        var_21 -= ((/* implicit */int) (unsigned char)20);
    }
    var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)32)))))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) var_10)))))));
    var_23 = ((/* implicit */short) (_Bool)1);
}
