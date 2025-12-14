/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119378
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
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_0 [i_0]))));
    }
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2147221504U)));
    var_12 = ((/* implicit */signed char) (-(((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) - (133)))))));
}
