/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139195
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
    var_15 *= ((/* implicit */short) max((((((var_0) / (((/* implicit */long long int) var_12)))) / (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) var_1))));
    var_16 |= ((/* implicit */_Bool) (signed char)-13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 &= ((/* implicit */long long int) (+(max((((((/* implicit */int) arr_0 [i_0] [(short)8])) ^ (((/* implicit */int) var_4)))), (((((/* implicit */int) arr_0 [2] [i_0])) - (((/* implicit */int) arr_0 [i_0] [7]))))))));
        var_18 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned short)24348)))), ((((~(var_3))) ^ (((((/* implicit */int) arr_2 [i_0])) & (arr_3 [(_Bool)1])))))));
    }
}
