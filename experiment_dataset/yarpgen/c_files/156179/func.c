/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156179
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [11LL] [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) var_9))))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_1))));
        var_18 ^= ((/* implicit */short) (-2147483647 - 1));
    }
    var_19 = ((/* implicit */unsigned short) 6768966548087951433LL);
}
