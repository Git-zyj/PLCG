/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111115
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
    var_20 = var_18;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((var_4) != (((((/* implicit */_Bool) (short)22784)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-3041)), (-1525470729)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL]))) : (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (17851055012490492392ULL))) >> (((((((/* implicit */int) (short)-21218)) & (var_10))) - (1384652781)))))));
        var_22 = ((/* implicit */short) max((var_22), (max((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (max((var_5), ((short)22784)))))));
    }
}
