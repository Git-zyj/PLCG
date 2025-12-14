/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170315
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
    var_14 -= ((/* implicit */_Bool) (+((~((~(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [(unsigned short)0] &= ((/* implicit */signed char) (+(min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_15 += ((/* implicit */long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_9))));
    }
}
