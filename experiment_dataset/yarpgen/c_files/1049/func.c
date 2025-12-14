/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1049
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
    var_17 = var_11;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 += (signed char)-110;
        var_19 = (signed char)-55;
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        var_20 = (signed char)-90;
        var_21 = (signed char)0;
        var_22 = (signed char)-1;
    }
}
