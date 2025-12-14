/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143818
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 393216)) ? (258048ULL) : (18446744073709551615ULL)));
        var_16 = ((/* implicit */int) ((var_15) > ((+(min((var_15), (((/* implicit */unsigned long long int) var_1))))))));
        arr_3 [(signed char)5] = ((/* implicit */_Bool) var_0);
    }
    var_17 = ((/* implicit */unsigned long long int) var_10);
}
