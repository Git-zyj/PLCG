/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10935
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((~(arr_1 [i_0])))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : ((+(arr_1 [i_0])))));
        var_13 = ((/* implicit */int) ((arr_0 [i_0 + 2]) % (arr_0 [i_0 + 2])));
    }
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)39760))));
}
