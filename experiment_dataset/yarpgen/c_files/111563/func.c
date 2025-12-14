/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111563
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_18 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) >> (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((arr_0 [i_0]) || (((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3]))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) + (((/* implicit */int) var_10))));
        arr_2 [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16819607151450611476ULL)) ? (((var_4) ? (((/* implicit */unsigned long long int) ((int) var_13))) : (10995056021011259312ULL))) : (7073307658007202421ULL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)3] [i_0 + 3]);
        var_19 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [2ULL] [i_0])))), (var_9))) < (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (var_16) : (((/* implicit */int) arr_1 [0ULL] [i_0 + 2]))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_4);
}
