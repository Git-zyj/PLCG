/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107933
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
    var_17 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~(7283697980987289422ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) ? (11163046092722262193ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0]))))));
    }
}
