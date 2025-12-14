/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188212
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((((/* implicit */unsigned long long int) 9223372036854775787LL)) + (var_10))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2484717724U)))))));
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_7))));
}
