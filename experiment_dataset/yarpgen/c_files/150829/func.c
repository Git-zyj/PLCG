/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150829
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_6))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_1 [i_0 + 2]) / (1884738715U))));
    }
    var_13 = var_3;
    var_14 += ((/* implicit */unsigned int) var_6);
    var_15 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    var_16 = ((/* implicit */short) (-(0U)));
}
