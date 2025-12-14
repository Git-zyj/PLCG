/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153863
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
    var_13 = min((((unsigned int) ((unsigned int) var_3))), (((unsigned int) 2060839299U)));
    var_14 = 0U;
    var_15 &= 1U;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] &= arr_0 [i_0] [i_0];
        arr_5 [i_0] = 1591746479U;
    }
    var_16 |= ((unsigned int) max((var_2), (68277317U)));
}
