/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14936
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
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_13 ^= ((/* implicit */long long int) (~((+(arr_2 [6LL] [6LL])))));
    }
}
