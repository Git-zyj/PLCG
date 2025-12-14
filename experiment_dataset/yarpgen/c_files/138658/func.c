/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138658
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((max(((unsigned char)235), ((unsigned char)21))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((17996806323437568LL), (((/* implicit */long long int) (unsigned char)180))))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29517)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_19 = (~(arr_1 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned char) (~((~(arr_0 [i_1]))))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_5)));
    }
    var_21 = ((/* implicit */long long int) var_11);
}
