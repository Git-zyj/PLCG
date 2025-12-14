/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108020
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
    var_16 = ((/* implicit */unsigned int) ((_Bool) max((max((((/* implicit */unsigned long long int) var_14)), (var_6))), (((/* implicit */unsigned long long int) (~(var_10)))))));
    var_17 = max((var_7), (((unsigned long long int) var_11)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -5711774351302759200LL)) ? (arr_1 [2LL] [i_0 + 2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
        arr_4 [i_0] = max((arr_1 [i_0] [(unsigned char)7]), ((~(max((((/* implicit */unsigned int) 4064)), (2715954564U))))));
    }
}
