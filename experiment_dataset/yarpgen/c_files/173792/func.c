/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173792
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min(((~(7089621681890327394ULL))), (((/* implicit */unsigned long long int) var_9))));
        var_13 = ((/* implicit */unsigned char) (+((+(min((var_0), (((/* implicit */unsigned long long int) var_1))))))));
        var_14 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_3)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_0)))));
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    }
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((7089621681890327394ULL) >= (max((((/* implicit */unsigned long long int) var_11)), (max((11357122391819224222ULL), (7089621681890327394ULL))))))))));
    var_17 |= (signed char)-113;
}
