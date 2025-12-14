/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183084
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
    var_12 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) -1888597219)) : (2U)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (_Bool)1)));
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
}
