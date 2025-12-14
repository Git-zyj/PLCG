/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143466
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_7))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_13 *= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) arr_0 [(short)2])), (arr_1 [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) & (arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_1 [i_0 + 4]) | (arr_1 [i_0 + 1])))));
        var_14 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0 + 3])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((arr_0 [(_Bool)1]), (arr_0 [(_Bool)1])))))) > (((/* implicit */int) var_8))));
        var_15 |= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min(((~(arr_1 [i_0]))), (((/* implicit */unsigned int) var_8))));
    }
    var_16 &= ((((/* implicit */int) var_1)) - (((/* implicit */int) var_10)));
    var_17 &= ((/* implicit */int) var_8);
}
