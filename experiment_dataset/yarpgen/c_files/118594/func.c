/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118594
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_19 = (short)17682;
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (signed char)-111))));
    }
    var_21 = ((/* implicit */long long int) var_5);
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_11))));
}
