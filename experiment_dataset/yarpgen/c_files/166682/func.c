/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166682
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
    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) var_5)), (var_3))) : (((1959923617549834301LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned short) var_16);
        var_19 |= ((/* implicit */_Bool) (+(max((arr_0 [i_0 - 2] [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
    }
}
