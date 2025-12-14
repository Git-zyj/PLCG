/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176556
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_8))));
        var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_2))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((((/* implicit */_Bool) (unsigned short)3765)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)16067)))))))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_0)));
}
