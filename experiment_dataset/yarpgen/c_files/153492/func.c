/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153492
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) (unsigned short)41861);
        var_11 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))), (max((var_1), (10660077427652458459ULL))))) ^ (((/* implicit */unsigned long long int) 3609917207231484661LL))));
    }
    var_12 = var_2;
}
